
#ifndef LOZ_TOOLS_H_INCLUDED
#define LOZ_TOOLS_H_INCLUDED

#include "jni.h"


namespace OOT
{
    enum item
    {
        Deku_Stick = 0x00,
        Deku_Nut = 0x01,
        Bomb = 0x02,
        Regular_Arrow = 0x03,
        Fire_Arrow = 0x4 ,
        Dins_Fire = 0x05 ,
        Slingshot = 0x06 ,
        Fairy_Ocarina = 0x07 ,
        Ocarina_of_Time = 0x08 ,
        Bombchu = 0x09 ,
        Hookshot = 0x0A ,
        Longshot = 0x0B ,
        Ice_Arrow = 0x0C,
        Farores_Wind = 0x0D,
        Boomerang = 0x0E,
        Lens_of_Truth = 0x0F,
        Magic_Beans = 0x10,
        Megaton_Hammer = 0x11,
        Light_Arrow = 0x12,
        Nayrus_Love = 0x13,
        Empty_Bottle = 0x14,
        Red_Potion  = 0x15,
        Green_Potion  = 0x16,
        Blue_Potion  = 0x17,
        Fairy  = 0x18,
        Fish  = 0x19,
        Milk  = 0x1A,
        Letter_in_a_Bottle  = 0x1B,
        Blue_Fire  = 0x1C,
        Bug  = 0x1D,
        Big_Poe  = 0x1E,
        Lon_Lon_Milk_Half  = 0x1F,
        Poe  = 0x20,
        Weird_Egg  = 0x21,
        Chicken  = 0x22,
        Zeldas_Letter  = 0x23,
        Keaton_Mask  = 0x24,
        Skull_Mask  = 0x25,
        Spoky_Mask  = 0x26,
        Bunny_Hood  = 0x27,
        Goron_Mask  = 0x28,
        Zora_Mask  = 0x29,
        Gerudo_Mask  = 0x2A,
        Mask_of_Truth  = 0x2B,
        Sold_Out_Sign  = 0x2C,
        Pocket_Egg  = 0x2D,
        Pocket_Cucco  = 0x2E,
        Cojiro  = 0x2F,
        Old_Mushroom  = 0x30,
        Odd_Potion  = 0x31,
        Poachers_Saw  = 0x32,
        Gorons_Sword_Broken  = 0x33,
        Prescription  = 0x34,
        Eyeball_Frog  = 0x35,
        Eye_Drops  = 0x36,
        Claim_Check  = 0x37,
        Fire_Arrow_Powered  = 0x38,
        Ice_Arrow_Powered  = 0x39,
        Light_Arrow_Powered  = 0x3A,
        Kokiri_Sword  = 0x3B,
        Master_Sword  = 0x3C,
        Giants_Knife  = 0x3D,
        Kokiri_Shield  = 0x3E,
        Hylian_Shield  = 0x3F,
        Mirror_Shield  = 0x40,
        Kokiri_Tunic  = 0x41,
        Goron_Tunic  = 0x42,
        Zora_Tunic  = 0x43,
        Kokiri_Boots  = 0x44,
        Iron_Boots  = 0x45,
        Hover_Boots  = 0x46,
        Bullet_Bag30  = 0x47,
        Bullet_Bag40  = 0x48,
        Bullet_Bag50  = 0x49,
        Quiver30  = 0x4A,
        Quiver40  = 0x4B,
        Quiver50  = 0x4C,
        Bomb_Bag20  = 0x4D,
        Bomb_Bag30  = 0x4E,
        Bomb_Bag40  = 0x4F,
        Gorons_Bracelet  = 0x50,
        Silver_Gauntlets  = 0x51,
        Golden_Gauntlets  = 0x52,
        Silver_Scale  = 0x53,
        Golden_Scale  = 0x54,
        Giants_Knife_Broken  = 0x55,
        Bomb_Bag_JP  = 0x56,
        Bomb_Bag2_JP  = 0x57,
        Sling_Shot_BulletsJP  = 0x58,
        Fishing_RodJP  = 0x59,
        Minuet_of_Forest  = 0x5A,
        Bolero_of_Fire  = 0x5B,
        Serenade_of_Water  = 0x5C,
        Requiem_of_Spirit  = 0x5D,
        Nocturne_of_Shadow  = 0x5E,
        Prelude_of_Light  = 0x5F,
        Zeldas_Lullaby  = 0x60,
        Eponas_Song  = 0x61,
        Sarias_Song  = 0x62,
        Suns_Song  = 0x63,
        Song_of_Time  = 0x64,
        Song_of_Storms  = 0x65,
        Forest_Medallion  = 0x66,
        Fire_Medallion  = 0x67,
        Water_Medallion  = 0x68,
        Spirit_Medallion  = 0x69,
        Shadow_Medallion  = 0x6A,
        Light_Medallion  = 0x6B,
        Kokiris_Emerald  = 0x6C,
        Gorons_Ruby  = 0x6D,
        Zoras_Sapphire  = 0x6E,
        Stone_of_Agony  = 0x6F,
        Gerudos_Card  = 0x70,
        Gold_Skulltula  = 0x71,
        Piece_of_Heart  = 0x72,
        JP1  = 0x73,
        Big_Key  = 0x74,
        Compass  = 0x75,
        Dungeon_Map  = 0x76,
        JP2  = 0x77,
        JP3  = 0x78,
        JP4  = 0x79,
        Biggorons_Sword_GG  = 0x7A,
        Deku_Rod  = 0x7B,
        Deku_Nut_GG  = 0x7C,
        JP5  = 0x7D,
        JP6  = 0x7E,
        JP7  = 0x7F,
        JP8  = 0x80,
        JP9  = 0x81,
        JP10  = 0x82,
        Letter_in_a_Bottle_JP  = 0x83,
        Quiver20_JP  = 0x84,
        JP11  = 0x85,
        JP12  = 0x86,
        JP13  = 0x87,
        JP14  = 0x88,
        Haunted_Wasteland  = 0x89,
        Gerudos_Fortress  = 0x8A,
        Gerudo_Valley  = 0x8B,
        Lake_Hylia  = 0x8C,
        Lon_Lon_Ranch  = 0x8D,
        Market  = 0x8E,
        Hyrule_Field  = 0x8F,
        Death_Mountain  = 0x90,
        Kakariko_Village  = 0x91,
        Lost_Woods  = 0x92,
        Kokiri_Forest  = 0x93,
        Zoras_Domain  = 0x94,
        Milk_GG  = 0x95,
        Letter_GG  = 0x96,
        Blue_Fire_GG  = 0x97,
        Bug_GG  = 0x98,
        Night_Swarm_GG  = 0x99,
        Milk_Half_GG  = 0x9A,
        Light_GG  = 0x9B,
        Strange_Egg_GG  = 0x9C,
        Chicken_GG  = 0x9D,
        Zeldas_Letter_GG  = 0x9E,
        Fox_Mask_GG  = 0x9F,
        Skull_Mask_GG  = 0xA0,
        Rabbit_Honor  = 0xA1,
        Goron_Mask_GG  = 0xA2,
        Goron_Mask2_GG  = 0xA3,
        Zora_Mask_GG  = 0xA4,
        Gerudo_Mask_GG  = 0xA5,
        Mask_of_the_Knowledge_GG  = 0xA6,
        Sells_GG  = 0xA7,
        Egg_GG  = 0xA8,
        Kiki_GG  = 0xA9,
        Whinnied_GG  = 0xAA,
        Mold_GG  = 0xAB,
        Mold_Drank_GG  = 0xAC,
        Would_Saw_GG  = 0xAD,
        Gorons_Sword_Broken_GG  = 0xAE,
        Prescription_GG  = 0xAF,
        Glotz_Frog_GG  = 0xB0,
        Eye_drop_GG  = 0xB1,
        Certificate_GG  = 0xB2,
        JP15  = 0xB3,
        JP16  = 0xB4,
        Kokiri_sword_GG  = 0xB5,
        Kokiri_Sword2_GG  = 0xB6,
        Master_Sword_GG  = 0xB7,
        Long_Sword_GG  = 0xB8,
        Deku_sign_GG  = 0xB9,
        Hylia_sign_GG  = 0xBA,
        Kokiri_armament_GG  = 0xBC,
        Goron_armament_GG  = 0xBD,
        Zora_armament_GG  = 0xBE,
        Leather_boot_GG  = 0xBF,
        Iron_boot_GG  = 0xC0,
        Hover_boot_GG  = 0xC1,
        Ammunition_pocket30_GG  = 0xC2,
        Ammunition_pocket40_GG  = 0xC3,
        Ammunition_pocket50_GG  = 0xC4,
        Cooks30_GG  = 0xC5,
        Cooks40_GG  = 0xC6,
        Cooks50_GG  = 0xC7,
        Bombs_pocket20_GG  = 0xC8,
        Bombs_pocket30_GG  = 0xC9,
        Bombs_pocket40_GG  = 0xCA,
        Goron_bracelet_GG  = 0xCB,
        Power_glove_GG  = 0xCC,
        Titanium_glove_GG  = 0xCD,
        Silver_Scale_GG  = 0xCE,
        Gold_Scale_GG  = 0xCF,
        Empty  = 0xFF
    };

    struct inventory
    {
        unsigned short cell_ID;
        unsigned char a;
        unsigned char a1;
        unsigned char is_young_link;
        unsigned char a2;
        unsigned char a3;
        unsigned char a4;
        unsigned short cutscene_info;
        unsigned char a5;
        unsigned char a6;
        unsigned char a7;
        unsigned char a8;
        unsigned short Time;
        unsigned int a9;
        unsigned int aa;
        unsigned int ab;
        char c[4];
        unsigned char ac;
        unsigned short ae;
        unsigned int af;
        unsigned int b0;
        unsigned short MaxHealth;
        unsigned short b1;
        unsigned short Mana;
        unsigned short Health;
        unsigned short b2;
        unsigned short Rupies;
        unsigned short b3;
        unsigned short time_since_cell_change;
        unsigned int b4;
        unsigned int b5;
        unsigned int b6;
        unsigned int b7;
        unsigned int b8;
        unsigned int b9;
        unsigned int ba;
        unsigned int bb;
        unsigned int bc;
        unsigned int bd;
        unsigned char be;
        unsigned char bf;
        unsigned char c0;
        unsigned char c1;
        unsigned char c_right;
        unsigned char c_down;
        unsigned char c_left;
        unsigned char b_button;
        unsigned char c2;
        unsigned char c_right_inventory_offset;
        unsigned char c_down_inventory_offset;
        unsigned char c_left_inventory_offset;
        unsigned char c3;
        unsigned char c4;
        unsigned short equippedArmor;
        unsigned char BowSlot;
        unsigned char BombsSlot;
        unsigned char DekuNutsSlot;
        unsigned char DekuSticksSlot;
        unsigned char OcarinaSlot;
        unsigned char SlingshotSlot;
        unsigned char DinsFireSlot;
        unsigned char FireArrowSlot;
        unsigned char FaroresWindSlot;
        unsigned char IceArrowSlot;
        unsigned char HookshotSlot;
        unsigned char BombchuSlot;
        unsigned char MegatonHammerSlot;
        unsigned char MagicBeansSlot;
        unsigned char LensOfTruthSlot;
        unsigned char BoomerangSlot;
        unsigned char Bottle2Slot;
        unsigned char Bottle1Slot;
        unsigned char NayrusLoveSlot;
        unsigned char LightArrowSlot;
        unsigned char MaskSlot;
        unsigned char PocketCuccoSlot;
        unsigned char Bottle4Slot;
        unsigned char Bottle3Slot;
        unsigned char ArrowCount;
        unsigned char BombCount;
        unsigned char DekuNutCount;
        unsigned char DekuStickCount;
        unsigned char c7;
        unsigned char DekuSeedsCount;
        unsigned char c8;
        unsigned char c9;
        unsigned char ca;
        unsigned char cb;
        unsigned char cc;
        unsigned char BombchuCount;
        unsigned char BeanPrice;
        unsigned char cd;
    };
    float GetX();
    float GetY();
    float GetZ();
    void test();
    int Process_Attach();
    int Process_Dettach();
    void SetTargetWindowByName(char* windowname);
    void readInventory(inventory* inv);
    void writeInventory(inventory* inv);

}

namespace LOZMM
{
    /*
    Dins_Fire
    Longshot
    Boomerang
    Farores_Wind
    Nayrus_Love
    Megaton_Hammer
    Letter_in_a_Bottle
    Weird_Egg
    Chicken
    Zeldas_Letter
    Bomb_Bag_JP
    Skull_Mask
    Spoky_Mask
    Giants_Knife_Broken
    Bomb_Bag2_JP
    Bomb_Bag40
    Gorons_Bracelet
    Gerudo_Mask
    Golden_Gauntlets
    Sold_Out_Sign
    Pocket_Egg
    Pocket_Cucco
    Cojiro
    Old_Mushroom
    Odd_Potion
    Fire_Arrow_Powered
    Claim_Check
    Ice_Arrow_Powered
    Light_Arrow_Powered
    Kokiris_Emerald
    Master_Sword
    Giants_Knife
    Kokiri_Shield
    Hylian_Shield
    Gold_Skulltula
    Kokiri_Tunic
    Goron_Tunic
    Zora_Tunic
    Kokiri_Boots
    Iron_Boots
    Hover_Boots
    Bullet_Bag30
    Bullet_Bag40
    Bullet_Bag50
    Silver_Gauntlets
    Silver_Scale
    Golden_Scale
    Sling_Shot_BulletsJP
    Fishing_RodJP
    Minuet_of_Forest
    Bolero_of_Fire
    Serenade_of_Water
    Requiem_of_Spirit
    Nocturne_of_Shadow
    Prelude_of_Light
    Zeldas_Lullaby
    Eponas_Song
    Sarias_Song
    Suns_Song
    Song_of_Time
    Song_of_Storms
    Forest_Medallion
    Fire_Medallion
    Water_Medallion
    Spirit_Medallion
    Shadow_Medallion
    Gorons_Ruby
    Zoras_Sapphire
    Stone_of_Agony
    Gerudos_Card
    Piece_of_Heart
    JP1
    Big_Key
    Compass
    Dungeon_Map
    JP2
    JP3
    JP4
    Biggorons_Sword_GG
    Deku_Rod
    Deku_Nut_GG
    JP5
    JP6
    JP7
    JP8
    JP9
    JP10  = 0x82,
    Letter_in_a_Bottle_JP  = 0x83,
    Quiver20_JP  = 0x84,
    JP11  = 0x85,
    JP12  = 0x86,
    JP13  = 0x87,
    JP14  = 0x88,
    Haunted_Wasteland  = 0x89,
    Gerudos_Fortress  = 0x8A,
    Gerudo_Valley  = 0x8B,
    Lake_Hylia  = 0x8C,
    Lon_Lon_Ranch  = 0x8D,
    Market  = 0x8E,
    Hyrule_Field  = 0x8F,
    Death_Mountain  = 0x90,
    Kakariko_Village  = 0x91,
    Lost_Woods  = 0x92,
    Kokiri_Forest  = 0x93,
    Zoras_Domain  = 0x94,
    Milk_GG  = 0x95,
    Letter_GG  = 0x96,
    Blue_Fire_GG  = 0x97,
    Bug_GG  = 0x98,
    Night_Swarm_GG  = 0x99,
    Milk_Half_GG  = 0x9A,
    Light_GG  = 0x9B,
    Strange_Egg_GG  = 0x9C,
    Chicken_GG  = 0x9D,
    Zeldas_Letter_GG  = 0x9E,
    Fox_Mask_GG  = 0x9F,
    Skull_Mask_GG  = 0xA0,
    Rabbit_Honor  = 0xA1,
    Goron_Mask_GG  = 0xA2,
    Goron_Mask2_GG  = 0xA3,
    Zora_Mask_GG  = 0xA4,
    Gerudo_Mask_GG  = 0xA5,
    Mask_of_the_Knowledge_GG  = 0xA6,
    Sells_GG  = 0xA7,
    Egg_GG  = 0xA8,
    Kiki_GG  = 0xA9,
    Whinnied_GG  = 0xAA,
    Mold_GG  = 0xAB,
    Mold_Drank_GG  = 0xAC,
    Would_Saw_GG  = 0xAD,
    Gorons_Sword_Broken_GG  = 0xAE,
    Prescription_GG  = 0xAF,
    Glotz_Frog_GG  = 0xB0,
    Eye_drop_GG  = 0xB1,
    Certificate_GG  = 0xB2,
    JP15  = 0xB3,
    JP16  = 0xB4,
    Kokiri_sword_GG  = 0xB5,
    Kokiri_Sword2_GG  = 0xB6,
    Master_Sword_GG  = 0xB7,
    Long_Sword_GG  = 0xB8,
    Deku_sign_GG  = 0xB9,
    Hylia_sign_GG  = 0xBA,
    Kokiri_armament_GG  = 0xBC,
    Goron_armament_GG  = 0xBD,
    Zora_armament_GG  = 0xBE,
    Leather_boot_GG  = 0xBF,
    Iron_boot_GG  = 0xC0,
    Hover_boot_GG  = 0xC1,
    Ammunition_pocket30_GG  = 0xC2,
    Ammunition_pocket40_GG  = 0xC3,
    Ammunition_pocket50_GG  = 0xC4,
    Cooks30_GG  = 0xC5,
    Cooks40_GG  = 0xC6,
    Cooks50_GG  = 0xC7,
    Bombs_pocket20_GG  = 0xC8,
    Bombs_pocket30_GG  = 0xC9,
    Bombs_pocket40_GG  = 0xCA,
    Goron_bracelet_GG  = 0xCB,
    Power_glove_GG  = 0xCC,
    Titanium_glove_GG  = 0xCD,
    Silver_Scale_GG  = 0xCE,
    Gold_Scale_GG  = 0xCF,
    */

    enum item
    {
        Ocarina_of_Time = 0x00,
        Regular_Arrow = 0x01,
        Fire_Arrow = 0x02,
        Ice_Arrow = 0x03,
        Light_Arrow = 0x4 ,
        Fairy_Ocarina = 0x05 ,
        Bomb = 0x06 ,
        Bombchu = 0x07 ,
        Deku_Stick = 0x08 ,
        Deku_Nut = 0x09 ,
        Magic_Beans = 0x0A ,
        Slingshot = 0x0B ,
        Powder_Keg = 0x0C,
        Pictograph = 0x0D,
        Lens_of_Truth = 0x0E,
        Hookshot = 0x0F,
        Great_Fairys_Sword = 0x10,
        OoT_Hookshot = 0x11,
        Empty_Bottle = 0x12,
        Red_Potion  = 0x13,
        Green_Potion  = 0x14,
        Blue_Potion  = 0x15,
        Fairy  = 0x16,
        Deku_Princess = 0x17,
        Milk  = 0x18,
        Lon_Lon_Milk_Half = 0x19,
        Fish = 0x1a,
        Bug = 0x1B,
        Blue_Fire  = 0x1C,
        Poe = 0x1D,
        Big_Poe  = 0x1E, //also big poe in oot
        Water = 0x1F,
        Spring_Water = 0x20,
        Zora_Egg  = 0x21, //Weird_egg in oot
        Gold_Dust = 0x22,
        Mushroom = 0x23, //Old_Mushroom is 0x30 in oot
        Sea_Horse = 0x24,
        Chateau_Romani = 0x25,
        Eel = 0x26,
        Empty_Bottle_JP = 0x27,
        Moons_Tear = 0x28,
        Land_Title_Deed = 0x29,
        Swamp_Title_Deed = 0x2A,
        Mountian_Title_Deed = 0x2B,
        Ocean_Title_Deed = 0x2C,
        Inn_Keys = 0x2D,
        Letter_to_Mama = 0x2E,
        Letter_to_Kafei = 0x2F,
        Pendant_of_Memories = 0x30,
        JP0 = 0x31,
        Deku_Mask = 0x32,
        Goron_Mask = 0x33,
        Zora_Mask = 0x34,
        Fierce_Deity_Mask = 0x35,
        Mask_of_Truth = 0x36,
        Kafei_Mask = 0x37,
        All_Nite_Mask = 0x38,
        Bunny_Hood = 0x39,
        Keaton_Mask = 0x3A,
        Garos_Mask = 0x3B,
        Romani_Mask = 0x3C,
        Circus_Leaders_Mask = 0x3D,
        Postmans_Mask = 0x3E,
        Couples_Mask = 0x3F,
        Great_Fairys_Mask = 0x40,
        Gibdo_Mask = 0x41,
        Don_Geros_Mask = 0x42,
        Kamaros_Mask = 0x43,
        Captains_Hat = 0x44,
        Stone_Mask = 0x45,
        Bremen_Mask = 0x46,
        Blast_Mask = 0x47,
        Mask_of_Scents = 0x48,
        Giants_Mask = 0x49,
        Wind_Medallion = 0x4A, //wind medallion and fire arrow
        Ice_Medallion = 0x4B,  //ice medallion and ice arrow
        Light_Medallion = 0x4C, //light medallion and light arrow
        Kokiri_Sword = 0x4D,
        Razor_Sword = 0x4E,
        Gilded_Sword = 0x4F,
        Double_Helix_Sword = 0x50,
        Heros_Shield = 0x51,
        Mirror_Shield = 0x52,
        Quiver30 = 0x53,
        Quiver40 = 0x54,
        Quiver50 = 0x55,
        Bomb_Bag20 = 0x56,
        Bomb_Bag30 = 0x57,
        Bomb_Bag40 = 0x58,
        Strange_Wallet = 0x59,
        Adults_Wallet = 0x5A,
        Giants_Wallet = 0x5B,
        Fishing_Pole = 0x5C,
        Odolwas_Remains = 0x5D,
        Gohts_Remains = 0x5E,
        Gyorgs_Remains = 0x5F,
        Twinmolds_Remains = 0x60,
        Sonata_of_Awakening = 0x61,
        Goron_Lullaby = 0x62,
        New_Wave_Bossa_Nova = 0x63,
        Elegy_of_Emptiness = 0x64,
        Oath_to_Order = 0x65,
        JP1 = 0x66,
        Song_of_Time = 0x67,
        Song_of_Healing = 0x68,
        Eponas_Song = 0x69,
        Song_of_Soaring = 0x6A,
        Song_of_Storms = 0x6B,
        JP2 = 0x6C,
        Bombers_Notebook = 0x6D,
        JP3 = 0x6E,
        Piece_of_Heart = 0x6F,
        JP4 = 0x70,
        JP5 = 0x71,
        JP6 = 0x72,
        Lullaby_Intro = 0x73,
        Big_Key = 0x74,
        Compass = 0x75,
        Dungeon_Map = 0x76,
        Stray_Faries = 0x77,
        Crashes = 0x78,
        Big_Key2 = 0x79,
        GG = 0x7A,
        Moons_Tear1 = 0x7B,
        GG1 = 0x7C,
        GG2 = 0x7D,
        GG3 = 0x7E,
        GG4 = 0x7F,
        GG5 = 0x80,
        GG6 = 0x81,
        GG7 = 0x82,
        GG8 = 0x83,
        GG9 = 0x84,
        GG10 = 0x85,
        GG11 = 0x86,
        GG12 = 0x87,
        GG13 = 0x88,
        GG14 = 0x89,
        GG15 = 0x8a,
        GG16 = 0x8b,
        GG17 = 0x8c,
        GG18 = 0x8d,
        GG19 = 0x8e,
        GG20 = 0x8f,
        Moons_Tear_GG = 0x90,
        Moons_Tear_GG1 = 0x91,
        Moons_Tear_GG2 = 0x92,
        Moons_Tear_GG3 = 0x93,
        Moons_Tear_GG4 = 0x94,
        Moons_Tear_GG5 = 0x95,
        GG21 = 0x96,
        GG22 = 0x97,
        GG23 = 0x98,
        GG24 = 0x99,
        GG25 = 0x9a,
        GG26 = 0x9b,
        GG27 = 0x9c,
        GG28 = 0x9d,
        GG29 = 0x9e,
        GG30 = 0x9f,
        GG31 = 0xa0,
        GG32 = 0xa1,
        Empty  = 0xFF
    };

    struct inventory // inventory offset 0x1ef660
    {
        unsigned char a1;
        unsigned char a2;
        unsigned char a3;
        unsigned char a4;
        unsigned char a5;
        unsigned char a6;
        unsigned char a7;
        unsigned char a8;
        unsigned char a9;
        unsigned char ab;
        unsigned char ac;
        unsigned char ad;
        unsigned char ae;
        unsigned char af;
        unsigned short Time;
        unsigned short cell_ID;
        unsigned short b0;
        unsigned short b1;
        int b2;
        int b3;
        int b4;
        int b5;
        int b6;
        int b7;
        int b8;
        unsigned short b9;
        char c[4];
        unsigned short ba;
        int bb;
        int bc;
        int bd;
        unsigned short be;
        unsigned short Rupies;
        unsigned short bf;
        unsigned char c0;
        unsigned char c1;
        unsigned char c2;
        unsigned char c3;
        unsigned char c4;
        unsigned char c5;
        int c6;
        int c7;
        //int c9;
        unsigned char c8;
        unsigned char c9;
        unsigned char c_right;
        unsigned char c_down;
        unsigned char c_left;
        //int ca;
        unsigned char ca;
        unsigned char cb;
        unsigned char cc;
        int cd;
        int ce;
        int cf;
        int d0;
        int d1;
        int d2;
        int d3;
        unsigned char swordAndShield;
        unsigned char d4;
        unsigned char IceArrowSlot;
        unsigned char FireArrowSlot;
        unsigned char BowSlot;
        unsigned char OcarinaSlot;
        unsigned char BombchuSlot;
        unsigned char BombsSlot;
        unsigned char Deed_Slot;
        unsigned char LightArrowSlot;
        unsigned char Deed_Slot2;
        unsigned char MagicBeansSlot;
        unsigned char DekuNutsSlot;
        unsigned char DekuSticksSlot;
        unsigned char HookshotSlot;
        unsigned char LensOfTruthSlot;
        unsigned char Pictograph_Slot;
        unsigned char Powder_Keg_Slot;
        unsigned char Bottle2Slot;
        unsigned char Bottle1Slot;
        unsigned char Pendant_of_Memories_Slot;
        unsigned char Gilded_Sword_Slot;
        unsigned char Bottle6Slot;
        unsigned char Bottle5Slot;
        unsigned char Bottle4Slot;
        unsigned char Bottle3Slot;
        unsigned char Stone_Mask_Slot;
        unsigned char Bomb_Mask_Slot;
        unsigned char All_Nite_Mask_Slot;
        unsigned char Postmans_Mask_Slot;
        unsigned char Bremen_Mask_Slot;
        unsigned char Keaton_Mask_Slot;
        unsigned char Deku_Mask_Slot;
        unsigned char Great_Fairys_Mask_Slot;
        unsigned char Goron_Mask_Slot;
        unsigned char Mask_of_Scents_Slot;
        unsigned char Don_Geros_Mask_Slot;
        unsigned char Bunny_Hood_Slot;
        unsigned char Couples_Mask_Slot;
        unsigned char Kafei_Mask_Slot;
        unsigned char Circus_Leaders_Mask_Slot;
        unsigned char Romani_Mask_Slot;
        unsigned char Gibdo_Mask_Slot;
        unsigned char Kamaros_Mask_Slot;
        unsigned char Zora_Mask_Slot;
        unsigned char Mask_of_Truth_Slot;
        unsigned char Fierce_Deity_Mask_Slot;
        unsigned char Giants_Mask_Slot;
        unsigned char Captains_Hat_Slot;
        unsigned char Garos_Mask_Slot;
    };
    float GetX();
    float GetY();
    float GetZ();
    void test();
    int Process_Attach();
    int Process_Dettach();
    void SetTargetWindowByName(char* windowname);
    void readInventory(inventory* inv);
    void writeInventory(inventory* inv);

    #ifdef __cplusplus
    extern "C" {
    #endif
    /*
     * Class:     HelloJNI
     * Method:    sayHello
     * Signature: ()V
     */
    JNIEXPORT float JNICALL GetX(JNIEnv *, jobject);
    JNIEXPORT float JNICALL GetY(JNIEnv *, jobject);
    JNIEXPORT float JNICALL GetZ(JNIEnv *, jobject);
    JNIEXPORT int JNICALL Process_Attach(JNIEnv *, jobject);
    JNIEXPORT void JNICALL SetTargetWindowByName(JNIEnv *, jobject);
    JNIEXPORT void JNICALL readInventory(JNIEnv *, jobject);
    JNIEXPORT void JNICALL writeInventory(JNIEnv *, jobject);

    #ifdef __cplusplus
    }
    #endif

}

unsigned char convertItemMM2OOT(LOZMM::item i);
unsigned char convertItemOOT2MM(OOT::item i);


#endif // LOZ_TOOLS_H_INCLUDED
