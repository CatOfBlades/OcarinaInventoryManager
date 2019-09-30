
#include "LOZ_Tools.h"

unsigned char convertItemMM2OOT(LOZMM::item i)
{
    switch (i)
    {
        case LOZMM::Deku_Stick:
            return OOT::Deku_Stick;
            break;
        case LOZMM::Deku_Nut:
            return OOT::Deku_Nut;
            break;
        case LOZMM::Bomb:
            return OOT::Bomb;
            break;
        case LOZMM::Regular_Arrow:
            return OOT::Regular_Arrow;
            break;
        case LOZMM::Fire_Arrow:
            return OOT::Fire_Arrow;
            break;
        case LOZMM::Slingshot:
            return i;
            break;
        case LOZMM::Fairy_Ocarina:
            return OOT::Fairy_Ocarina;
            break;
        case LOZMM::Ocarina_of_Time:
            return OOT::Ocarina_of_Time;
            break;
        case LOZMM::Bombchu:
            return OOT::Bombchu;
            break;
        case LOZMM::Hookshot:
            return OOT::Hookshot;
            break;
        case LOZMM::Ice_Arrow:
            return OOT::Ice_Arrow;
            break;
        case LOZMM::Lens_of_Truth:
            return OOT::Lens_of_Truth;
            break;
        case LOZMM::Magic_Beans:
            return OOT::Magic_Beans;
            break;
        case LOZMM::Light_Arrow:
            return OOT::Light_Arrow;
            break;
        case LOZMM::Empty_Bottle:
            return OOT::Empty_Bottle;
            break;
        case LOZMM::Red_Potion:
            return OOT::Red_Potion;
            break;
        case LOZMM::Green_Potion:
            return OOT::Green_Potion;
            break;
        case LOZMM::Blue_Potion:
            return OOT::Blue_Potion;
            break;
        case LOZMM::Fairy:
            return OOT::Fairy;
            break;
        case LOZMM::Fish:
            return OOT::Fish;
            break;
        case LOZMM::Milk:
            return OOT::Milk;
            break;
        case LOZMM::Blue_Fire:
            return OOT::Blue_Fire;
            break;
        case LOZMM::Bug:
            return OOT::Bug;
            break;
        case LOZMM::Big_Poe:
            return OOT::Big_Poe;
            break;
        case LOZMM::Lon_Lon_Milk_Half:
            return OOT::Lon_Lon_Milk_Half;
            break;
        case LOZMM::Poe:
            return OOT::Poe;
            break;
        case LOZMM::Zora_Egg:
            return i;
            break;
        case LOZMM::Keaton_Mask:
            return OOT::Keaton_Mask;
            break;
        case LOZMM::Bunny_Hood:
            return OOT::Bunny_Hood;
            break;
        case LOZMM::Goron_Mask:
            return OOT::Goron_Mask;
            break;
        case LOZMM::Zora_Mask:
            return OOT::Zora_Mask;
            break;
        case LOZMM::Mask_of_Truth:
            return OOT::Mask_of_Truth;
            break;
        case LOZMM::Kokiri_Sword:
            return OOT::Kokiri_Sword;
            break;
        case LOZMM::Heros_Shield:
            return OOT::Hylian_Shield;
            break;
        case LOZMM::Mirror_Shield:
            return OOT::Mirror_Shield;
            break;
        default:
            return i;
    }
}

unsigned char convertItemOOT2MM(OOT::item i)
{
    switch (i)
    {
        case OOT::Deku_Stick:
            return LOZMM::Deku_Stick;
            break;
        case OOT::Deku_Nut:
            return LOZMM::Deku_Nut;
            break;
        case OOT::Bomb:
            return LOZMM::Bomb;
            break;
        case OOT::Regular_Arrow:
            return LOZMM::Regular_Arrow;
            break;
        case OOT::Fire_Arrow:
            return LOZMM::Fire_Arrow;
            break;
        case OOT::Slingshot:
            return i;
            break;
        case OOT::Fairy_Ocarina:
            return LOZMM::Fairy_Ocarina;
            break;
        case OOT::Ocarina_of_Time:
            return LOZMM::Ocarina_of_Time;
            break;
        case OOT::Bombchu:
            return LOZMM::Bombchu;
            break;
        case OOT::Hookshot:
            return LOZMM::Hookshot;
            break;
        case OOT::Ice_Arrow:
            return LOZMM::Ice_Arrow;
            break;
        case OOT::Lens_of_Truth:
            return LOZMM::Lens_of_Truth;
            break;
        case OOT::Magic_Beans:
            return LOZMM::Magic_Beans;
            break;
        case OOT::Light_Arrow:
            return LOZMM::Light_Arrow;
            break;
        case OOT::Empty_Bottle:
            return LOZMM::Empty_Bottle;
            break;
        case OOT::Red_Potion:
            return LOZMM::Red_Potion;
            break;
        case OOT::Green_Potion:
            return LOZMM::Green_Potion;
            break;
        case OOT::Blue_Potion:
            return LOZMM::Blue_Potion;
            break;
        case OOT::Fairy:
            return LOZMM::Fairy;
            break;
        case OOT::Fish:
            return LOZMM::Fish;
            break;
        case OOT::Milk:
            return LOZMM::Milk;
            break;
        case OOT::Blue_Fire:
            return LOZMM::Blue_Fire;
            break;
        case OOT::Bug:
            return LOZMM::Bug;
            break;
        case OOT::Big_Poe:
            return LOZMM::Big_Poe;
            break;
        case OOT::Lon_Lon_Milk_Half:
            return LOZMM::Lon_Lon_Milk_Half;
            break;
        case OOT::Poe:
            return LOZMM::Poe;
            break;
        case OOT::Weird_Egg:
            return i;
            break;
        case OOT::Keaton_Mask:
            return LOZMM::Keaton_Mask;
            break;
        case OOT::Bunny_Hood:
            return LOZMM::Bunny_Hood;
            break;
        case OOT::Goron_Mask:
            return LOZMM::Goron_Mask;
            break;
        case OOT::Zora_Mask:
            return LOZMM::Zora_Mask;
            break;
        case OOT::Mask_of_Truth:
            return LOZMM::Mask_of_Truth;
            break;
        case OOT::Kokiri_Sword:
            return LOZMM::Kokiri_Sword;
            break;
        case OOT::Hylian_Shield:
            return LOZMM::Heros_Shield;
            break;
        case OOT::Mirror_Shield:
            return LOZMM::Mirror_Shield;
            break;
        default:
            return i;
    }
}
