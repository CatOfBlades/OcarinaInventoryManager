
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
    //LOZMM::item ZeldaItemCode;
    unsigned char ZeldaItemCode;
    SDL_Texture* Texture;
    SDL_Texture* MMTexture;
    //SDL_Surface* Surface;
    unsigned char xslot; //0-5
    unsigned char yslot; //0-7
    SDL_Renderer* _renderer;
    displayItem(SDL_Renderer* renderer)
    {
        SpriteSheet = IMG_Load("./images/OOTItemSprites.png");
        Texture = SDL_CreateTextureFromSurface(renderer, SpriteSheet);
        SDL_FreeSurface(SpriteSheet);

        SpriteSheet = IMG_Load("./images/MMItems.png");
        MMTexture = SDL_CreateTextureFromSurface(renderer, SpriteSheet);
        SDL_FreeSurface(SpriteSheet);

        _renderer = renderer;
        ZeldaItemCode = LOZMM::Empty;
        xslot = 0;
        yslot = 0;
        //dragging = 0;
    }
    ~displayItem()
    {
        SDL_DestroyTexture(Texture);
        SDL_DestroyTexture(MMTexture);
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

        int MMOnly=0;

        if(yslot>3)
        {
            switch (ZeldaItemCode)
            {
            case LOZMM::Deku_Stick:
                break;
            case LOZMM::Deku_Nut:
                source.x += 32*1;
                break;
            case LOZMM::Bomb:
                source.x += 32*2;
                break;
            case LOZMM::Regular_Arrow:
                source.x += 32*3;
                break;
            case LOZMM::Fire_Arrow:
                source.x += 32*4;
                break;
            case LOZMM::Powder_Keg:
                source.y +=32*4;
                MMOnly=1;
                break;
            case LOZMM::Pictograph:
                source.x +=32*1;
                source.y +=32*4;
                MMOnly=1;
                break;
            case LOZMM::Great_Fairys_Sword:
                source.x +=32*4;
                source.y +=32*4;
                MMOnly=1;
                break;
            case LOZMM::Moons_Tear:
                source.x +=32*0;
                source.y +=32*6;
                MMOnly=1;
                break;

            case LOZMM::Land_Title_Deed:
                source.x +=32*1;
                source.y +=32*6;
                MMOnly=1;
                break;
            case LOZMM::Swamp_Title_Deed:
                source.x +=32*2;
                source.y +=32*6;
                MMOnly=1;
                break;
            case LOZMM::Mountian_Title_Deed:
                source.x +=32*3;
                source.y +=32*6;
                MMOnly=1;
                break;
            case LOZMM::Ocean_Title_Deed:
                source.x +=32*4;
                source.y +=32*6;
                MMOnly=1;
                break;
            case LOZMM::Inn_Keys:
                source.x +=32*5;
                source.y +=32*6;
                MMOnly=1;
                break;

            case LOZMM::Deku_Mask:
                source.x +=32*5;
                source.y +=32*14;
                MMOnly=1;
                break;
            case LOZMM::Fierce_Deity_Mask:
                source.x +=32*5;
                source.y +=32*17;
                MMOnly=1;
                break;
            case LOZMM::Kafei_Mask:
                source.x +=32*2;
                source.y +=32*16;
                MMOnly=1;
                break;
            case LOZMM::All_Nite_Mask:
                source.x +=32*1;
                source.y +=32*14;
                MMOnly=1;
                break;
            case LOZMM::Garos_Mask:
                source.x +=32*2;
                source.y +=32*17;
                MMOnly=1;
                break;
            case LOZMM::Romani_Mask:
                source.x +=32*0;
                source.y +=32*16;
                MMOnly=1;
                break;
            case LOZMM::Circus_Leaders_Mask:
                source.x +=32*1;
                source.y +=32*16;
                MMOnly=1;
                break;
            case LOZMM::Postmans_Mask:
                source.x +=32*0;
                source.y +=32*14;
                MMOnly=1;
                break;
            case LOZMM::Couples_Mask:
                source.x +=32*3;
                source.y +=32*16;
                MMOnly=1;
                break;
            case LOZMM::Great_Fairys_Mask:
                source.x +=32*4;
                source.y +=32*14;
                MMOnly=1;
                break;
            case LOZMM::Gibdo_Mask:
                source.x +=32*1;
                source.y +=32*17;
                MMOnly=1;
                break;
            case LOZMM::Don_Geros_Mask:
                source.x +=32*3;
                source.y +=32*15;
                MMOnly=1;
                break;
            case LOZMM::Kamaros_Mask:
                source.x +=32*0;
                source.y +=32*17;
                MMOnly=1;
                break;
            case LOZMM::Captains_Hat:
                source.x +=32*3;
                source.y +=32*17;
                MMOnly=1;
                break;
            case LOZMM::Stone_Mask:
                source.x +=32*3;
                source.y +=32*14;
                MMOnly=1;
                break;
            case LOZMM::Bremen_Mask:
                source.x +=32*1;
                source.y +=32*15;
                MMOnly=1;
                break;
            case LOZMM::Blast_Mask:
                source.x +=32*2;
                source.y +=32*14;
                MMOnly=1;
                break;
            case LOZMM::Mask_of_Scents:
                source.x +=32*4;
                source.y +=32*15;
                MMOnly=1;
                break;
            case LOZMM::Giants_Mask:
                source.x +=32*4;
                source.y +=32*17;
                MMOnly=1;
                break;

            case LOZMM::Slingshot:
                source.x += 32*0;
                source.y += 32*1;
                break;
            case LOZMM::Fairy_Ocarina:
                source.x += 32*1;
                source.y += 32*1;
                break;
            case LOZMM::Ocarina_of_Time:
                source.x += 32*2;
                source.y += 32*1;
                break;
            case LOZMM::Bombchu:
                source.x += 32*3;
                source.y += 32*1;
                break;
            case LOZMM::Hookshot:
                source.x += 32*4;
                source.y += 32*1;
                break;
            case LOZMM::Ice_Arrow:
                source.x += 32*0;
                source.y += 32*2;
                break;
            case LOZMM::Lens_of_Truth:
                source.x += 32*3;
                source.y += 32*2;
                break;
            case LOZMM::Magic_Beans:
                source.x += 32*4;
                source.y += 32*2;
                break;
            case LOZMM::Light_Arrow:
                source.x += 32*0;
                source.y += 32*3;
                break;
            case LOZMM::Empty_Bottle:
                source.x += 32*2;
                source.y += 32*3;
                break;
            case LOZMM::Red_Potion:
                source.x += 32*3;
                source.y += 32*3;
                break;
            case LOZMM::Green_Potion:
                source.x += 32*4;
                source.y += 32*3;
                break;
            case LOZMM::Blue_Potion:
                source.x += 32*5;
                source.y += 32*3;
                break;
            case LOZMM::Fairy:
                source.x += 32*0;
                source.y += 32*4;
                break;
            case LOZMM::Fish:
                source.x += 32*1;
                source.y += 32*4;
                break;
            case LOZMM::Milk:
                source.x += 32*2;
                source.y += 32*4;
                break;
            case LOZMM::Blue_Fire:
                source.x += 32*4;
                source.y += 32*4;
                break;
            case LOZMM::Bug:
                source.x += 32*5;
                source.y += 32*4;
                break;
            case LOZMM::Big_Poe:
                source.x += 32*0;
                source.y += 32*5;
                break;
            case LOZMM::Lon_Lon_Milk_Half:
                source.x += 32*1;
                source.y += 32*5;
                break;
            case LOZMM::Poe:
                source.x += 32*2;
                source.y += 32*5;
                break;
            case LOZMM::Zora_Egg:
                source.x += 32*3;
                source.y += 32*5;
                break;
            case LOZMM::Keaton_Mask:
                source.x += 32*0;
                source.y += 32*6;
                break;
            case LOZMM::Bunny_Hood:
                source.x += 32*3;
                source.y += 32*6;
                break;
            case LOZMM::Goron_Mask:
                source.x += 32*4;
                source.y += 32*6;
                break;
            case LOZMM::Zora_Mask:
                source.x += 32*5;
                source.y += 32*6;
                break;
            case LOZMM::Mask_of_Truth:
                source.x += 32*1;
                source.y += 32*7;
                break;
            case LOZMM::Kokiri_Sword:
                source.x += 32*5;
                source.y += 32*9;
                break;
            case LOZMM::Heros_Shield:
                source.x += 32*3;
                source.y += 32*10;
                break;
            case LOZMM::Mirror_Shield:
                source.x += 32*4;
                source.y += 32*10;
                break;
            default:
                source.y += 32*15;
                break;
            }
        }
        else
        {
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
        }

        if(MMOnly)
        {
            SDL_RenderCopy(_renderer, MMTexture, &source, &dest);
        }
        else
        {
            SDL_RenderCopy(_renderer, Texture, &source, &dest);
        }
    }
};

#define ITEM_MENU_HEIGHT 8
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
        LOZMM::Process_Attach();
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
    LOZMM::inventory MMinventory;
    OOT::inventory OOTinventory;
    void updateGame()
    {
        OOTinventory.DekuSticksSlot = displayItemList[0][0]->ZeldaItemCode;
        OOTinventory.DekuNutsSlot = displayItemList[1][0]->ZeldaItemCode;
        OOTinventory.BombsSlot = displayItemList[2][0]->ZeldaItemCode;
        OOTinventory.BowSlot = displayItemList[3][0]->ZeldaItemCode;
        OOTinventory.FireArrowSlot = displayItemList[4][0]->ZeldaItemCode;
        OOTinventory.DinsFireSlot = displayItemList[5][0]->ZeldaItemCode;
        OOTinventory.SlingshotSlot = displayItemList[0][1]->ZeldaItemCode;
        OOTinventory.OcarinaSlot = displayItemList[1][1]->ZeldaItemCode;
        OOTinventory.BombchuSlot = displayItemList[2][1]->ZeldaItemCode;
        OOTinventory.HookshotSlot = displayItemList[3][1]->ZeldaItemCode;
        OOTinventory.IceArrowSlot = displayItemList[4][1]->ZeldaItemCode;
        OOTinventory.FaroresWindSlot = displayItemList[5][1]->ZeldaItemCode;
        OOTinventory.BoomerangSlot = displayItemList[0][2]->ZeldaItemCode;
        OOTinventory.LensOfTruthSlot = displayItemList[1][2]->ZeldaItemCode;
        OOTinventory.MagicBeansSlot = displayItemList[2][2]->ZeldaItemCode;
        OOTinventory.MegatonHammerSlot = displayItemList[3][2]->ZeldaItemCode;
        OOTinventory.LightArrowSlot = displayItemList[4][2]->ZeldaItemCode;
        OOTinventory.NayrusLoveSlot = displayItemList[5][2]->ZeldaItemCode;
        OOTinventory.Bottle1Slot = displayItemList[0][3]->ZeldaItemCode;
        OOTinventory.Bottle2Slot = displayItemList[1][3]->ZeldaItemCode;
        OOTinventory.Bottle3Slot = displayItemList[2][3]->ZeldaItemCode;
        OOTinventory.Bottle4Slot = displayItemList[3][3]->ZeldaItemCode;
        OOTinventory.PocketCuccoSlot = displayItemList[4][3]->ZeldaItemCode;
        OOTinventory.MaskSlot = displayItemList[5][3]->ZeldaItemCode;

        OOT::writeInventory(&OOTinventory);

        MMinventory.OcarinaSlot = displayItemList[0][4]->ZeldaItemCode;
        MMinventory.BowSlot = displayItemList[1][4]->ZeldaItemCode;
        MMinventory.FireArrowSlot = displayItemList[2][4]->ZeldaItemCode;
        MMinventory.IceArrowSlot = displayItemList[3][4]->ZeldaItemCode;
        MMinventory.LightArrowSlot = displayItemList[4][4]->ZeldaItemCode;
        MMinventory.Deed_Slot = displayItemList[5][4]->ZeldaItemCode;
        MMinventory.BombsSlot = displayItemList[0][5]->ZeldaItemCode;
        MMinventory.BombchuSlot = displayItemList[1][5]->ZeldaItemCode;
        MMinventory.DekuSticksSlot = displayItemList[2][5]->ZeldaItemCode;
        MMinventory.DekuNutsSlot = displayItemList[3][5]->ZeldaItemCode;
        MMinventory.MagicBeansSlot = displayItemList[4][5]->ZeldaItemCode;
        MMinventory.Deed_Slot2 = displayItemList[5][5]->ZeldaItemCode;
        MMinventory.Powder_Keg_Slot = displayItemList[0][6]->ZeldaItemCode;
        MMinventory.Pictograph_Slot = displayItemList[1][6]->ZeldaItemCode;
        MMinventory.LensOfTruthSlot = displayItemList[2][6]->ZeldaItemCode;
        MMinventory.HookshotSlot = displayItemList[3][6]->ZeldaItemCode;
        MMinventory.Gilded_Sword_Slot = displayItemList[4][6]->ZeldaItemCode;
        MMinventory.Pendant_of_Memories_Slot = displayItemList[5][6]->ZeldaItemCode;
        MMinventory.Bottle1Slot = displayItemList[0][7]->ZeldaItemCode;
        MMinventory.Bottle2Slot = displayItemList[1][7]->ZeldaItemCode;
        MMinventory.Bottle3Slot = displayItemList[2][7]->ZeldaItemCode;
        MMinventory.Bottle4Slot = displayItemList[3][7]->ZeldaItemCode;
        MMinventory.Bottle5Slot = displayItemList[4][7]->ZeldaItemCode;
        MMinventory.Bottle6Slot = displayItemList[5][7]->ZeldaItemCode;

        MMinventory.Postmans_Mask_Slot = displayItemList[6][4]->ZeldaItemCode;
        MMinventory.All_Nite_Mask_Slot = displayItemList[7][4]->ZeldaItemCode;
        MMinventory.Bomb_Mask_Slot = displayItemList[8][4]->ZeldaItemCode;
        MMinventory.Stone_Mask_Slot = displayItemList[9][4]->ZeldaItemCode;
        MMinventory.Great_Fairys_Mask_Slot = displayItemList[10][4]->ZeldaItemCode;
        MMinventory.Deku_Mask_Slot = displayItemList[11][4]->ZeldaItemCode;


        MMinventory.Keaton_Mask_Slot = displayItemList[6][5]->ZeldaItemCode;
        MMinventory.Bremen_Mask_Slot = displayItemList[7][5]->ZeldaItemCode;
        MMinventory.Bunny_Hood_Slot = displayItemList[8][5]->ZeldaItemCode;
        MMinventory.Don_Geros_Mask_Slot = displayItemList[9][5]->ZeldaItemCode;
        MMinventory.Mask_of_Scents_Slot = displayItemList[10][5]->ZeldaItemCode;
        MMinventory.Goron_Mask_Slot = displayItemList[11][5]->ZeldaItemCode;
        MMinventory.Romani_Mask_Slot = displayItemList[6][6]->ZeldaItemCode;
        MMinventory.Circus_Leaders_Mask_Slot = displayItemList[7][6]->ZeldaItemCode;
        MMinventory.Kafei_Mask_Slot = displayItemList[8][6]->ZeldaItemCode;
        MMinventory.Couples_Mask_Slot = displayItemList[9][6]->ZeldaItemCode;
        MMinventory.Mask_of_Truth_Slot = displayItemList[10][6]->ZeldaItemCode;
        MMinventory.Zora_Mask_Slot = displayItemList[11][6]->ZeldaItemCode;
        MMinventory.Kamaros_Mask_Slot = displayItemList[6][7]->ZeldaItemCode;
        MMinventory.Gibdo_Mask_Slot = displayItemList[7][7]->ZeldaItemCode;
        MMinventory.Garos_Mask_Slot = displayItemList[8][7]->ZeldaItemCode;
        MMinventory.Captains_Hat_Slot = displayItemList[9][7]->ZeldaItemCode;
        MMinventory.Giants_Mask_Slot = displayItemList[10][7]->ZeldaItemCode;
        MMinventory.Fierce_Deity_Mask_Slot = displayItemList[11][7]->ZeldaItemCode;

        LOZMM::writeInventory(&MMinventory);
    }
    void updateMenu()
    {
        OOT::readInventory(&OOTinventory);

        displayItemList[0][0]->ZeldaItemCode = (LOZMM::item)OOTinventory.DekuSticksSlot;
        displayItemList[1][0]->ZeldaItemCode = (LOZMM::item)OOTinventory.DekuNutsSlot;
        displayItemList[2][0]->ZeldaItemCode = (LOZMM::item)OOTinventory.BombsSlot;
        displayItemList[3][0]->ZeldaItemCode = (LOZMM::item)OOTinventory.BowSlot;
        displayItemList[4][0]->ZeldaItemCode = (LOZMM::item)OOTinventory.FireArrowSlot;
        displayItemList[5][0]->ZeldaItemCode = (LOZMM::item)OOTinventory.DinsFireSlot;
        displayItemList[0][1]->ZeldaItemCode = (LOZMM::item)OOTinventory.SlingshotSlot;
        displayItemList[1][1]->ZeldaItemCode = (LOZMM::item)OOTinventory.OcarinaSlot;
        displayItemList[2][1]->ZeldaItemCode = (LOZMM::item)OOTinventory.BombchuSlot;
        displayItemList[3][1]->ZeldaItemCode = (LOZMM::item)OOTinventory.HookshotSlot;
        displayItemList[4][1]->ZeldaItemCode = (LOZMM::item)OOTinventory.IceArrowSlot;
        displayItemList[5][1]->ZeldaItemCode = (LOZMM::item)OOTinventory.FaroresWindSlot;
        displayItemList[0][2]->ZeldaItemCode = (LOZMM::item)OOTinventory.BoomerangSlot;
        displayItemList[1][2]->ZeldaItemCode = (LOZMM::item)OOTinventory.LensOfTruthSlot;
        displayItemList[2][2]->ZeldaItemCode = (LOZMM::item)OOTinventory.MagicBeansSlot;
        displayItemList[3][2]->ZeldaItemCode = (LOZMM::item)OOTinventory.MegatonHammerSlot;
        displayItemList[4][2]->ZeldaItemCode = (LOZMM::item)OOTinventory.LightArrowSlot;
        displayItemList[5][2]->ZeldaItemCode = (LOZMM::item)OOTinventory.NayrusLoveSlot;
        displayItemList[0][3]->ZeldaItemCode = (LOZMM::item)OOTinventory.Bottle1Slot;
        displayItemList[1][3]->ZeldaItemCode = (LOZMM::item)OOTinventory.Bottle2Slot;
        displayItemList[2][3]->ZeldaItemCode = (LOZMM::item)OOTinventory.Bottle3Slot;
        displayItemList[3][3]->ZeldaItemCode = (LOZMM::item)OOTinventory.Bottle4Slot;
        displayItemList[4][3]->ZeldaItemCode = (LOZMM::item)OOTinventory.PocketCuccoSlot;
        displayItemList[5][3]->ZeldaItemCode = (LOZMM::item)OOTinventory.MaskSlot;

        LOZMM::readInventory(&MMinventory);
        //printf("%s\n",MMinventory.c);
        //printf("%i\n",MMinventory.Rupies);

        displayItemList[0][4]->ZeldaItemCode = (LOZMM::item)MMinventory.OcarinaSlot;
        displayItemList[1][4]->ZeldaItemCode = (LOZMM::item)MMinventory.BowSlot;
        displayItemList[2][4]->ZeldaItemCode = (LOZMM::item)MMinventory.FireArrowSlot;
        displayItemList[3][4]->ZeldaItemCode = (LOZMM::item)MMinventory.IceArrowSlot;
        displayItemList[4][4]->ZeldaItemCode = (LOZMM::item)MMinventory.LightArrowSlot;
        displayItemList[5][4]->ZeldaItemCode = (LOZMM::item)MMinventory.Deed_Slot;
        displayItemList[0][5]->ZeldaItemCode = (LOZMM::item)MMinventory.BombsSlot;
        displayItemList[1][5]->ZeldaItemCode = (LOZMM::item)MMinventory.BombchuSlot;
        displayItemList[2][5]->ZeldaItemCode = (LOZMM::item)MMinventory.DekuSticksSlot;
        displayItemList[3][5]->ZeldaItemCode = (LOZMM::item)MMinventory.DekuNutsSlot;
        displayItemList[4][5]->ZeldaItemCode = (LOZMM::item)MMinventory.MagicBeansSlot;
        displayItemList[5][5]->ZeldaItemCode = (LOZMM::item)MMinventory.Deed_Slot2;
        displayItemList[0][6]->ZeldaItemCode = (LOZMM::item)MMinventory.Powder_Keg_Slot;
        displayItemList[1][6]->ZeldaItemCode = (LOZMM::item)MMinventory.Pictograph_Slot;
        displayItemList[2][6]->ZeldaItemCode = (LOZMM::item)MMinventory.LensOfTruthSlot;
        displayItemList[3][6]->ZeldaItemCode = (LOZMM::item)MMinventory.HookshotSlot;
        displayItemList[4][6]->ZeldaItemCode = (LOZMM::item)MMinventory.Gilded_Sword_Slot;
        displayItemList[5][6]->ZeldaItemCode = (LOZMM::item)MMinventory.Pendant_of_Memories_Slot;
        displayItemList[0][7]->ZeldaItemCode = (LOZMM::item)MMinventory.Bottle1Slot;
        displayItemList[1][7]->ZeldaItemCode = (LOZMM::item)MMinventory.Bottle2Slot;
        displayItemList[2][7]->ZeldaItemCode = (LOZMM::item)MMinventory.Bottle3Slot;
        displayItemList[3][7]->ZeldaItemCode = (LOZMM::item)MMinventory.Bottle4Slot;
        displayItemList[4][7]->ZeldaItemCode = (LOZMM::item)MMinventory.Bottle5Slot;
        displayItemList[5][7]->ZeldaItemCode = (LOZMM::item)MMinventory.Bottle6Slot;

        displayItemList[6][4]->ZeldaItemCode = (LOZMM::item)MMinventory.Postmans_Mask_Slot;
        displayItemList[7][4]->ZeldaItemCode = (LOZMM::item)MMinventory.All_Nite_Mask_Slot;
        displayItemList[8][4]->ZeldaItemCode = (LOZMM::item)MMinventory.Bomb_Mask_Slot;
        displayItemList[9][4]->ZeldaItemCode = (LOZMM::item)MMinventory.Stone_Mask_Slot;
        displayItemList[10][4]->ZeldaItemCode = (LOZMM::item)MMinventory.Great_Fairys_Mask_Slot;
        displayItemList[11][4]->ZeldaItemCode = (LOZMM::item)MMinventory.Deku_Mask_Slot;

        displayItemList[6][5]->ZeldaItemCode = (LOZMM::item)MMinventory.Keaton_Mask_Slot;
        displayItemList[7][5]->ZeldaItemCode = (LOZMM::item)MMinventory.Bremen_Mask_Slot;
        displayItemList[8][5]->ZeldaItemCode = (LOZMM::item)MMinventory.Bunny_Hood_Slot;
        displayItemList[9][5]->ZeldaItemCode = (LOZMM::item)MMinventory.Don_Geros_Mask_Slot;
        displayItemList[10][5]->ZeldaItemCode = (LOZMM::item)MMinventory.Mask_of_Scents_Slot;
        displayItemList[11][5]->ZeldaItemCode = (LOZMM::item)MMinventory.Goron_Mask_Slot;
        displayItemList[6][6]->ZeldaItemCode = (LOZMM::item)MMinventory.Romani_Mask_Slot;
        displayItemList[7][6]->ZeldaItemCode = (LOZMM::item)MMinventory.Circus_Leaders_Mask_Slot;
        displayItemList[8][6]->ZeldaItemCode = (LOZMM::item)MMinventory.Kafei_Mask_Slot;
        displayItemList[9][6]->ZeldaItemCode = (LOZMM::item)MMinventory.Couples_Mask_Slot;
        displayItemList[10][6]->ZeldaItemCode = (LOZMM::item)MMinventory.Mask_of_Truth_Slot;
        displayItemList[11][6]->ZeldaItemCode = (LOZMM::item)MMinventory.Zora_Mask_Slot;
        displayItemList[6][7]->ZeldaItemCode = (LOZMM::item)MMinventory.Kamaros_Mask_Slot;
        displayItemList[7][7]->ZeldaItemCode = (LOZMM::item)MMinventory.Gibdo_Mask_Slot;
        displayItemList[8][7]->ZeldaItemCode = (LOZMM::item)MMinventory.Garos_Mask_Slot;
        displayItemList[9][7]->ZeldaItemCode = (LOZMM::item)MMinventory.Captains_Hat_Slot;
        displayItemList[10][7]->ZeldaItemCode = (LOZMM::item)MMinventory.Giants_Mask_Slot;
        displayItemList[11][7]->ZeldaItemCode = (LOZMM::item)MMinventory.Fierce_Deity_Mask_Slot;

    }
    void swapItems(int x1,int y1,int x2,int y2)
    {
        updateMenu();
        displayItem* Item1 = getItemByIndex(x1, y1);
        displayItem* Item2 = getItemByIndex(x2, y2);
        if(y1>3 && y2<=3)
        {
            unsigned char temp = convertItemMM2OOT((LOZMM::item)Item1->ZeldaItemCode);
            Item1->ZeldaItemCode = convertItemOOT2MM((OOT::item)Item2->ZeldaItemCode);
            Item2->ZeldaItemCode = temp;
        }
        else if(y2>3 && y1<=3)
        {
            unsigned char temp = convertItemOOT2MM((OOT::item)Item1->ZeldaItemCode);
            Item1->ZeldaItemCode = convertItemMM2OOT((LOZMM::item)Item2->ZeldaItemCode);
            Item2->ZeldaItemCode = temp;
        }
        else
        {
            unsigned char temp = Item1->ZeldaItemCode;
            Item1->ZeldaItemCode = Item2->ZeldaItemCode;
            Item2->ZeldaItemCode = temp;
        }

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
    //TestItem1.ZeldaItemCode = LOZMM::Blue_Potion;
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
