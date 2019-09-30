
#include "LOZ_Tools.h"
#include <windows.h>
#include <stdio.h>

char* MM_windowname = "ZELDA MAJORA'S MASK - Project64 2.0";
HWND MMhw;
DWORD MMIMEM = 0x10135140;
DWORD MMMemBase;
DWORD MMprocessid;
HANDLE MMhprocess;
int MMis_game_open = 0;
#ifdef MINGW64
long long unsigned int MMbytesread=0;
#else
DWORD MMbytesread=0;
#endif

/*
int32_t __builtin_bswap32 (int32_t x) //nintendo 64 is big-endian while the system is little-endian, some things will need byte swapping.
int64_t __builtin_bswap64 (int64_t x)
*/


void LOZMM::test()
{
    LOZMM::Process_Attach();
    LOZMM::item I;
    //I = (LOZMM::item)__builtin_bswap32(0x00000001); //just to be sure we can swap bytes.
    I = LOZMM::Mask_of_Truth;
    LOZMM::inventory inv;
    LOZMM::readInventory(&inv);
    inv.Mask_of_Truth_Slot = I;
    LOZMM::writeInventory(&inv);
}

int LOZMM::Process_Attach()
{
    MMhw = FindWindow(NULL, MM_windowname);
    MMis_game_open = 1;
    if(MMhw  == NULL) {MMis_game_open = 0;}
    GetWindowThreadProcessId(MMhw, &MMprocessid);
    MMhprocess = OpenProcess(PROCESS_ALL_ACCESS,0,MMprocessid);
    ReadProcessMemory(MMhprocess,(void*)MMIMEM,&MMMemBase,4,0);
    return MMis_game_open;
}

int LOZMM::Process_Dettach()
{
    CloseHandle(MMhprocess);
    return 0;
}

float LOZMM::GetX()
{
    float out;
    ReadProcessMemory(MMhprocess,(void*)MMMemBase+0x1daa54,&out,4,&MMbytesread);
    if(MMbytesread != 4) {MMis_game_open = 0;}
    return out;
}
float LOZMM::GetY()
{
    float out;
    ReadProcessMemory(MMhprocess,(void*)MMMemBase+0x1daa58,&out,4,&MMbytesread);
    if(MMbytesread != 4) {MMis_game_open = 0;}
    return out;
}
float LOZMM::GetZ()
{
    float out;
    ReadProcessMemory(MMhprocess,(void*)MMMemBase+0x1daa5c,&out,4,&MMbytesread);
    if(MMbytesread != 4) {MMis_game_open = 0;}
    return out;
}

void LOZMM::SetTargetWindowByName(char* windowname)
{
    MM_windowname = windowname;
}

void LOZMM::readInventory(inventory* inv)
{
    ReadProcessMemory(MMhprocess,(void*)MMMemBase+0x1ef65e,inv,sizeof(LOZMM::inventory),&MMbytesread);
    //printf("bytes read:%i\n",bytesread);
}
void LOZMM::writeInventory(inventory* inv)
{
    WriteProcessMemory(MMhprocess,(void*)MMMemBase+0x1ef65e,inv,sizeof(LOZMM::inventory),&MMbytesread);
    //printf("bytes written:%i\n",bytesread);
}
