
#include "LOZ_Tools.h"
#include <windows.h>
#include <stdio.h>

char* OOT_windowname = "THE LEGEND OF ZELDA - Project64 2.0";
HWND OOThw;
DWORD OOTIMEM = 0x10135140;
DWORD OOTMemBase;
DWORD OOTprocessid;
HANDLE OOThprocess;
int OOTis_game_open = 0;
#ifdef MINGW64
long long unsigned int OOTbytesread=0;
#else
DWORD OOTbytesread=0;
#endif

/*
int32_t __builtin_bswap32 (int32_t x) //nintendo 64 is big-endian while the system is little-endian, some things will need byte swapping.
int64_t __builtin_bswap64 (int64_t x)
*/


void OOT::test()
{
    OOT::Process_Attach();
    OOT::item I;
    I = (OOT::item)__builtin_bswap32(0x00000001); //just to be sure we can swap bytes.
    I = OOT::Mask_of_Truth;
    OOT::inventory inv;
    OOT::readInventory(&inv);
    inv.MaskSlot = I;
    OOT::writeInventory(&inv);
}

int OOT::Process_Attach()
{
    OOThw = FindWindow(NULL, OOT_windowname);
    OOTis_game_open = 1;
    if(OOThw  == NULL) {OOTis_game_open = 0;}
    GetWindowThreadProcessId(OOThw, &OOTprocessid);
    OOThprocess = OpenProcess(PROCESS_ALL_ACCESS,0,OOTprocessid);
    ReadProcessMemory(OOThprocess,(void*)OOTIMEM,&OOTMemBase,4,0);
    return OOTis_game_open;
}
int OOT::Process_Dettach()
{
    CloseHandle(OOThprocess);
    return 0;
}

float OOT::GetX()
{
    float out;
    ReadProcessMemory(OOThprocess,(void*)OOTMemBase+0x1daa54,&out,4,&OOTbytesread);
    if(OOTbytesread != 4) {OOTis_game_open = 0;}
    return out;
}
float OOT::GetY()
{
    float out;
    ReadProcessMemory(OOThprocess,(void*)OOTMemBase+0x1daa58,&out,4,&OOTbytesread);
    if(OOTbytesread != 4) {OOTis_game_open = 0;}
    return out;
}
float OOT::GetZ()
{
    float out;
    ReadProcessMemory(OOThprocess,(void*)OOTMemBase+0x1daa5c,&out,4,&OOTbytesread);
    if(OOTbytesread != 4) {OOTis_game_open = 0;}
    return out;
}

void OOT::SetTargetWindowByName(char* windowname)
{
    OOT_windowname = windowname;
}

void OOT::readInventory(inventory* inv)
{
    ReadProcessMemory(OOThprocess,(void*)OOTMemBase+0x11a5d0,inv,sizeof(OOT::inventory),&OOTbytesread);
    //printf("bytes read:%i\n",bytesread);
}
void OOT::writeInventory(inventory* inv)
{
    WriteProcessMemory(OOThprocess,(void*)OOTMemBase+0x11a5d0,inv,sizeof(OOT::inventory),&OOTbytesread);
    //printf("bytes written:%i\n",bytesread);
}
