
#ifndef LOZ_TOOLS_H_INCLUDED
#define LOZ_TOOLS_H_INCLUDED


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
    void SetTargetWindowByName(char* windowname);
    void readInventory(inventory* inv);
    void writeInventory(inventory* inv);

}


#endif // LOZ_TOOLS_H_INCLUDED
