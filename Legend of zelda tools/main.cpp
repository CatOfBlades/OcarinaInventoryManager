
#include "LOZ_Tools.h"
#include <windows.h>
#include <stdio.h>

char* _windowname = "THE LEGEND OF ZELDA - Project64 2.0";
HWND hw;
DWORD IMEM = 0x10135140;
DWORD MemBase;
DWORD processid;
HANDLE hprocess;
int is_game_open = 0;
DWORD bytesread=0;

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
    hw = FindWindow(NULL, _windowname);
    is_game_open = 1;
    if(hw  == NULL) {is_game_open = 0;}
    GetWindowThreadProcessId(hw, &processid);
    hprocess = OpenProcess(PROCESS_ALL_ACCESS,0,processid);
    ReadProcessMemory(hprocess,(void*)IMEM,&MemBase,4,0);
    return is_game_open;
}

float OOT::GetX()
{
    float out;
    ReadProcessMemory(hprocess,(void*)MemBase+0x1daa54,&out,4,&bytesread);
    if(bytesread != 4) {is_game_open = 0;}
    return out;
}
float OOT::GetY()
{
    float out;
    ReadProcessMemory(hprocess,(void*)MemBase+0x1daa58,&out,4,&bytesread);
    if(bytesread != 4) {is_game_open = 0;}
    return out;
}
float OOT::GetZ()
{
    float out;
    ReadProcessMemory(hprocess,(void*)MemBase+0x1daa5c,&out,4,&bytesread);
    if(bytesread != 4) {is_game_open = 0;}
    return out;
}

void OOT::SetTargetWindowByName(char* windowname)
{
    _windowname = windowname;
}

void OOT::readInventory(inventory* inv)
{
    ReadProcessMemory(hprocess,(void*)MemBase+0x11a5d0,inv,sizeof(OOT::inventory),&bytesread);
    //printf("bytes read:%i\n",bytesread);
}
void OOT::writeInventory(inventory* inv)
{
    WriteProcessMemory(hprocess,(void*)MemBase+0x11a5d0,inv,sizeof(OOT::inventory),&bytesread);
    //printf("bytes written:%i\n",bytesread);
}
