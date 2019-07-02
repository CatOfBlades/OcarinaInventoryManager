
#include <stdio.h>
#include <windows.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "LOZ_Tools.h"
#include <vector>

int mouseXPos;
int mouseYPos;

int mouseXslot()
{
    return mouseXPos/32;
}
int mouseYslot()
{
    return mouseYPos/32;
}

class displayItem
{

    SDL_Surface* SpriteSheet;

public:
    //int dragging;
    OOT::item ZeldaItemCode;
    SDL_Texture* Texture;
    //SDL_Surface* Surface;
    unsigned char xslot; //0-5
    unsigned char yslot; //0-3
    SDL_Renderer* _renderer;
    displayItem(SDL_Renderer* renderer)
    {
        SpriteSheet = IMG_Load("./images/OOTItemSprites.png");
        Texture = SDL_CreateTextureFromSurface(renderer, SpriteSheet);
        SDL_FreeSurface(SpriteSheet);
        _renderer = renderer;
        ZeldaItemCode = OOT::Empty;
        xslot = 0;
        yslot = 0;
        //dragging = 0;
    }
    ~displayItem()
    {
        SDL_DestroyTexture(Texture);
    }
    void render()
    {
        SDL_Rect source;
        source.x = 0;
        source.y = 0;
        source.w = 32;
        source.h = 32;
        SDL_Rect dest;
        dest.x = xslot*32;
        dest.y = yslot*32;
        dest.w = 32;
        dest.h = 32;

        switch (ZeldaItemCode)
        {
        case OOT::Deku_Stick:
            break;
        case OOT::Deku_Nut:
            source.x += 32*1;
            break;
        case OOT::Bomb:
            source.x += 32*2;
            break;
        case OOT::Regular_Arrow:
            source.x += 32*3;
            break;
        case OOT::Fire_Arrow:
            source.x += 32*4;
            break;
        case OOT::Dins_Fire:
            source.x += 32*5;
            break;
        case OOT::Slingshot:
            source.x += 32*0;
            source.y += 32*1;
            break;
        case OOT::Fairy_Ocarina:
            source.x += 32*1;
            source.y += 32*1;
            break;
        case OOT::Ocarina_of_Time:
            source.x += 32*2;
            source.y += 32*1;
            break;
        case OOT::Bombchu:
            source.x += 32*3;
            source.y += 32*1;
            break;
        case OOT::Hookshot:
            source.x += 32*4;
            source.y += 32*1;
            break;
        case OOT::Longshot:
            source.x += 32*5;
            source.y += 32*1;
            break;
        case OOT::Ice_Arrow:
            source.x += 32*0;
            source.y += 32*2;
            break;
        case OOT::Farores_Wind:
            source.x += 32*1;
            source.y += 32*2;
            break;
        case OOT::Boomerang:
            source.x += 32*2;
            source.y += 32*2;
            break;
        case OOT::Lens_of_Truth:
            source.x += 32*3;
            source.y += 32*2;
            break;
        case OOT::Magic_Beans:
            source.x += 32*4;
            source.y += 32*2;
            break;
        case OOT::Megaton_Hammer:
            source.x += 32*5;
            source.y += 32*2;
            break;
        case OOT::Light_Arrow:
            source.x += 32*0;
            source.y += 32*3;
            break;
        case OOT::Nayrus_Love:
            source.x += 32*1;
            source.y += 32*3;
            break;
        case OOT::Empty_Bottle:
            source.x += 32*2;
            source.y += 32*3;
            break;
        case OOT::Red_Potion:
            source.x += 32*3;
            source.y += 32*3;
            break;
        case OOT::Green_Potion:
            source.x += 32*4;
            source.y += 32*3;
            break;
        case OOT::Blue_Potion:
            source.x += 32*5;
            source.y += 32*3;
            break;
        case OOT::Fairy:
            source.x += 32*0;
            source.y += 32*4;
            break;
        case OOT::Fish:
            source.x += 32*1;
            source.y += 32*4;
            break;
        case OOT::Milk:
            source.x += 32*2;
            source.y += 32*4;
            break;
        case OOT::Letter_in_a_Bottle:
            source.x += 32*3;
            source.y += 32*4;
            break;
        case OOT::Blue_Fire:
            source.x += 32*4;
            source.y += 32*4;
            break;
        case OOT::Bug:
            source.x += 32*5;
            source.y += 32*4;
            break;
        case OOT::Big_Poe:
            source.x += 32*0;
            source.y += 32*5;
            break;
        case OOT::Lon_Lon_Milk_Half:
            source.x += 32*1;
            source.y += 32*5;
            break;
        case OOT::Poe:
            source.x += 32*2;
            source.y += 32*5;
            break;
        case OOT::Weird_Egg:
            source.x += 32*3;
            source.y += 32*5;
            break;
        case OOT::Chicken:
            source.x += 32*4;
            source.y += 32*5;
            break;
        case OOT::Zeldas_Letter:
            source.x += 32*5;
            source.y += 32*5;
            break;
        case OOT::Keaton_Mask:
            source.x += 32*0;
            source.y += 32*6;
            break;
        case OOT::Skull_Mask:
            source.x += 32*1;
            source.y += 32*6;
            break;
        case OOT::Spoky_Mask:
            source.x += 32*2;
            source.y += 32*6;
            break;
        case OOT::Bunny_Hood:
            source.x += 32*3;
            source.y += 32*6;
            break;
        case OOT::Goron_Mask:
            source.x += 32*4;
            source.y += 32*6;
            break;
        case OOT::Zora_Mask:
            source.x += 32*5;
            source.y += 32*6;
            break;
        case OOT::Gerudo_Mask:
            source.x += 32*0;
            source.y += 32*7;
            break;
        case OOT::Mask_of_Truth:
            source.x += 32*1;
            source.y += 32*7;
            break;
        case OOT::Sold_Out_Sign:
            source.x += 32*2;
            source.y += 32*7;
            break;
        case OOT::Pocket_Egg:
            source.x += 32*3;
            source.y += 32*7;
            break;
        case OOT::Pocket_Cucco:
            source.x += 32*4;
            source.y += 32*7;
            break;
        case OOT::Cojiro:
            source.x += 32*5;
            source.y += 32*7;
            break;
        case OOT::Old_Mushroom:
            source.x += 32*0;
            source.y += 32*8;
            break;
        case OOT::Odd_Potion:
            source.x += 32*1;
            source.y += 32*8;
            break;
        case OOT::Poachers_Saw:
            source.x += 32*2;
            source.y += 32*8;
            break;
        case OOT::Gorons_Sword_Broken:
            source.x += 32*3;
            source.y += 32*8;
            break;
        case OOT::Prescription:
            source.x += 32*4;
            source.y += 32*8;
            break;
        case OOT::Eyeball_Frog:
            source.x += 32*5;
            source.y += 32*8;
            break;
        case OOT::Eye_Drops:
            source.x += 32*0;
            source.y += 32*9;
            break;
        case OOT::Claim_Check:
            source.x += 32*1;
            source.y += 32*9;
            break;
        case OOT::Fire_Arrow_Powered:
            source.x += 32*2;
            source.y += 32*9;
            break;
        case OOT::Ice_Arrow_Powered:
            source.x += 32*3;
            source.y += 32*9;
            break;
        case OOT::Light_Arrow_Powered:
            source.x += 32*4;
            source.y += 32*9;
            break;
        case OOT::Kokiri_Sword:
            source.x += 32*5;
            source.y += 32*9;
            break;
        case OOT::Master_Sword:
            source.x += 32*0;
            source.y += 32*10;
            break;
        case OOT::Giants_Knife:
            source.x += 32*1;
            source.y += 32*10;
            break;
        case OOT::Kokiri_Shield:
            source.x += 32*2;
            source.y += 32*10;
            break;
        case OOT::Hylian_Shield:
            source.x += 32*3;
            source.y += 32*10;
            break;
        case OOT::Mirror_Shield:
            source.x += 32*4;
            source.y += 32*10;
            break;
        case OOT::Kokiri_Tunic:
            source.x += 32*5;
            source.y += 32*10;
            break;
        default:
            source.y += 32*15;
            break;
        }

        SDL_RenderCopy(_renderer, Texture, &source, &dest);
    }
};

#define ITEM_MENU_HEIGHT 4
#define ITEM_MENU_WIDTH 12

class itemMenu
{
    displayItem* displayItemList[ITEM_MENU_WIDTH][ITEM_MENU_HEIGHT];
    SDL_Renderer* _renderer;
public:
    displayItem* getItemByIndex(int x, int y)
    {
        return displayItemList[x][y];
    }
    itemMenu(SDL_Renderer* renderer)
    {
        OOT::Process_Attach();
        for(int i=0;i<ITEM_MENU_WIDTH;i = i+1)
        {
            for(int j=0;j<ITEM_MENU_HEIGHT;j = j+1)
            {
                displayItemList[i][j] = new displayItem(renderer);
                displayItemList[i][j]->xslot = i;
                displayItemList[i][j]->yslot = j;
            }
        }
        _renderer = renderer;
    }
    OOT::inventory inventory;
    void updateGame()
    {
        inventory.DekuSticksSlot = displayItemList[0][0]->ZeldaItemCode;
        inventory.DekuNutsSlot = displayItemList[1][0]->ZeldaItemCode;
        inventory.BombsSlot = displayItemList[2][0]->ZeldaItemCode;
        inventory.BowSlot = displayItemList[3][0]->ZeldaItemCode;
        inventory.FireArrowSlot = displayItemList[4][0]->ZeldaItemCode;
        inventory.DinsFireSlot = displayItemList[5][0]->ZeldaItemCode;
        inventory.SlingshotSlot = displayItemList[0][1]->ZeldaItemCode;
        inventory.OcarinaSlot = displayItemList[1][1]->ZeldaItemCode;
        inventory.BombchuSlot = displayItemList[2][1]->ZeldaItemCode;
        inventory.HookshotSlot = displayItemList[3][1]->ZeldaItemCode;
        inventory.IceArrowSlot = displayItemList[4][1]->ZeldaItemCode;
        inventory.FaroresWindSlot = displayItemList[5][1]->ZeldaItemCode;
        inventory.BoomerangSlot = displayItemList[0][2]->ZeldaItemCode;
        inventory.LensOfTruthSlot = displayItemList[1][2]->ZeldaItemCode;
        inventory.MagicBeansSlot = displayItemList[2][2]->ZeldaItemCode;
        inventory.MegatonHammerSlot = displayItemList[3][2]->ZeldaItemCode;
        inventory.LightArrowSlot = displayItemList[4][2]->ZeldaItemCode;
        inventory.NayrusLoveSlot = displayItemList[5][2]->ZeldaItemCode;
        inventory.Bottle1Slot = displayItemList[0][3]->ZeldaItemCode;
        inventory.Bottle2Slot = displayItemList[1][3]->ZeldaItemCode;
        inventory.Bottle3Slot = displayItemList[2][3]->ZeldaItemCode;
        inventory.Bottle4Slot = displayItemList[3][3]->ZeldaItemCode;
        inventory.PocketCuccoSlot = displayItemList[4][3]->ZeldaItemCode;
        inventory.MaskSlot = displayItemList[5][3]->ZeldaItemCode;

        writeInventory(&inventory);
    }
    void updateMenu()
    {
        readInventory(&inventory);

        displayItemList[0][0]->ZeldaItemCode = (OOT::item)inventory.DekuSticksSlot;
        displayItemList[1][0]->ZeldaItemCode = (OOT::item)inventory.DekuNutsSlot;
        displayItemList[2][0]->ZeldaItemCode = (OOT::item)inventory.BombsSlot;
        displayItemList[3][0]->ZeldaItemCode = (OOT::item)inventory.BowSlot;
        displayItemList[4][0]->ZeldaItemCode = (OOT::item)inventory.FireArrowSlot;
        displayItemList[5][0]->ZeldaItemCode = (OOT::item)inventory.DinsFireSlot;
        displayItemList[0][1]->ZeldaItemCode = (OOT::item)inventory.SlingshotSlot;
        displayItemList[1][1]->ZeldaItemCode = (OOT::item)inventory.OcarinaSlot;
        displayItemList[2][1]->ZeldaItemCode = (OOT::item)inventory.BombchuSlot;
        displayItemList[3][1]->ZeldaItemCode = (OOT::item)inventory.HookshotSlot;
        displayItemList[4][1]->ZeldaItemCode = (OOT::item)inventory.IceArrowSlot;
        displayItemList[5][1]->ZeldaItemCode = (OOT::item)inventory.FaroresWindSlot;
        displayItemList[0][2]->ZeldaItemCode = (OOT::item)inventory.BoomerangSlot;
        displayItemList[1][2]->ZeldaItemCode = (OOT::item)inventory.LensOfTruthSlot;
        displayItemList[2][2]->ZeldaItemCode = (OOT::item)inventory.MagicBeansSlot;
        displayItemList[3][2]->ZeldaItemCode = (OOT::item)inventory.MegatonHammerSlot;
        displayItemList[4][2]->ZeldaItemCode = (OOT::item)inventory.LightArrowSlot;
        displayItemList[5][2]->ZeldaItemCode = (OOT::item)inventory.NayrusLoveSlot;
        displayItemList[0][3]->ZeldaItemCode = (OOT::item)inventory.Bottle1Slot;
        displayItemList[1][3]->ZeldaItemCode = (OOT::item)inventory.Bottle2Slot;
        displayItemList[2][3]->ZeldaItemCode = (OOT::item)inventory.Bottle3Slot;
        displayItemList[3][3]->ZeldaItemCode = (OOT::item)inventory.Bottle4Slot;
        displayItemList[4][3]->ZeldaItemCode = (OOT::item)inventory.PocketCuccoSlot;
        displayItemList[5][3]->ZeldaItemCode = (OOT::item)inventory.MaskSlot;
    }
    void swapItems(int x1,int y1,int x2,int y2)
    {
        updateMenu();
        displayItem* Item1 = getItemByIndex(x1, y1);
        displayItem* Item2 = getItemByIndex(x2, y2);
        OOT::item temp = Item1->ZeldaItemCode;
        Item1->ZeldaItemCode = Item2->ZeldaItemCode;
        Item2->ZeldaItemCode = temp;
        updateGame();
    }
    void render()
    {
        for(int i=0;i<ITEM_MENU_WIDTH;i = i+1)
        {
            for(int j=0;j<ITEM_MENU_HEIGHT;j = j+1)
            {
                displayItemList[i][j]->render();
            }
        }
    }
};

int main(int argc, char* argv[])
{
    //Beep(300,100);
    if(SDL_Init( SDL_INIT_EVERYTHING ) < 0 )
    {
        printf("SDL could'nt initialize!\n SDL_ERROR: %s\n",SDL_GetError());
    }
    SDL_Window* window = SDL_CreateWindow("SDL2 Displaying Image",SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    itemMenu Menu1(renderer);

    //displayItem TestItem1(renderer);
    //TestItem1.ZeldaItemCode = OOT::Blue_Potion;
    int exit = 0;
    //Uint32 ButtonState;
    int dragfromx;
    int dragfromy;
    int isDragging=0;
    while(!exit)
    {
        SDL_Event event;
        SDL_PollEvent(&event);
        switch( event.type )
        {
            case SDL_KEYDOWN:
                break;
            case SDL_QUIT:
                SDL_DestroyRenderer(renderer);
                SDL_DestroyWindow(window);
                exit=1;
                break;
            case SDL_KEYUP:
                break;
            case SDL_MOUSEMOTION:
                //Uint32 ButtonState;
                //ButtonState = SDL_GetMouseState(&mouseXPos,&mouseYPos);
                break;
            case SDL_MOUSEBUTTONDOWN:
                if(isDragging){break;}
                SDL_GetMouseState(&mouseXPos,&mouseYPos);
                if(event.button.button == SDL_BUTTON_LEFT)
                {
                    //Beep(300,100);
                    dragfromx = mouseXslot();
                    dragfromy = mouseYslot();
                    isDragging=1;
                }
                break;
            case SDL_MOUSEBUTTONUP:
                if(isDragging)
                {
                    SDL_GetMouseState(&mouseXPos,&mouseYPos);
                    if(event.button.button == SDL_BUTTON_LEFT)
                    {
                        //Beep(400,100);
                        if( dragfromy > ITEM_MENU_HEIGHT || dragfromx > ITEM_MENU_WIDTH){break;}
                        if( dragfromy < 0 || dragfromx < 0){break;}
                        Menu1.swapItems(dragfromx,dragfromy,mouseXslot(),mouseYslot());
                        isDragging=0;
                    }
                }
                break;

            default:
                break;
        }

        Menu1.updateMenu();

        SDL_RenderClear(renderer);
        //TestItem1.render();
        Menu1.render();
        SDL_RenderPresent(renderer);
        Sleep(10);

    }

    return 0;
}
