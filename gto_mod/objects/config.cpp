#include "basicDefines_A3.hpp"

class CfgPatches
{
    class GTOMod
    {
        // Meta information for editor
        name = "GTO Mod";
        author = "LucyferHW";
        url = "";

        // Required addons, used for setting load order.
        // When any of the addons is missing, pop-up warning will appear when launching the game.
        requiredAddons[] = {"A3_Functions_F", "ace_main", "ace_modules", "ace_interact_menu", "A3_Supplies_F_Orange_Ammoboxes", "cba_common", "cba_events"};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {"GTO_Supply_Box", "GTO_MarkerFlag", "GTO_Banner", "GTO_Medic_Carryall_oli", "GTO_Arsenal", "GTO_Medic_Carryall_cbr"};
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};
    };
};

#define MAG_XX(a, b)  \
    class _xx_##a     \
    {                 \
        magazine = a; \
        count = b;    \
    };
#define WEAP_XX(a, b) \
    class _xx_##a     \
    {                 \
        weapon = a;   \
        count = b;    \
    };
#define ITEM_XX(a, b) \
    class _xx_##a     \
    {                 \
        name = a;     \
        count = b;    \
    };

// todo: disable weight of ["earPlugs",, "Micro Dagre"]

class CfgWeapons
{
    class H_Beret_EAF_01_F;

    // todo: make icons for berets
    // todo: medic patch

    class GTO_Beret_Empty : H_Beret_EAF_01_F
    {
        scope = 0;
        author = "LucyferHW";
        weight = 0;
        size = 0;
    };

    class GTO_Beret_Red : GTO_Beret_Empty
    {
        scope = 2;
        displayName = "[GTO] Beret (Red)";
        hiddenSelectionsTextures[] = {"gto_mod\objects\textures\Beret\export\GTO_Beret_Red.paa"};
    };

    class GTO_Beret_Blue : GTO_Beret_Empty
    {
        scope = 2;
        displayName = "[GTO] Beret (Blue)";
        hiddenSelectionsTextures[] = {"gto_mod\objects\textures\Beret\export\GTO_Beret_Blue.paa"};
    };

    class GTO_Beret_Yellow : GTO_Beret_Empty
    {
        scope = 2;
        displayName = "[GTO] Beret (Yellow)";
        hiddenSelectionsTextures[] = {"gto_mod\objects\textures\Beret\export\GTO_Beret_Yellow.paa"};
    };

    class GTO_Beret_Green : GTO_Beret_Empty
    {
        scope = 2;
        displayName = "[GTO] Beret (Green)";
        hiddenSelectionsTextures[] = {"gto_mod\objects\textures\Beret\export\GTO_Beret_Green.paa"};
    };

    class GTO_Beret_Violett : GTO_Beret_Empty
    {
        scope = 2;
        displayName = "[GTO] Beret (Violett)";
        hiddenSelectionsTextures[] = {"gto_mod\objects\textures\Beret\export\GTO_Beret_Violett.paa"};
    };

    class GTO_Beret_Pink : GTO_Beret_Empty
    {
        scope = 2;
        displayName = "[GTO] Beret (Pink)";
        hiddenSelectionsTextures[] = {"gto_mod\objects\textures\Beret\export\GTO_Beret_Pink.paa"};
    };

    class GTO_Beret_Orange : GTO_Beret_Empty
    {
        scope = 2;
        displayName = "[GTO] Beret (Orange)";
        hiddenSelectionsTextures[] = {"gto_mod\objects\textures\Beret\export\GTO_Beret_Orange.paa"};
    };

    class GTO_Beret_White : GTO_Beret_Empty
    {
        scope = 2;
        displayName = "[GTO] Beret (White)";
        hiddenSelectionsTextures[] = {"gto_mod\objects\textures\Beret\export\GTO_Beret_White.paa"};
    };

    class GTO_Beret_Gray : GTO_Beret_Empty
    {
        scope = 2;
        displayName = "[GTO] Beret (Gray)";
        hiddenSelectionsTextures[] = {"gto_mod\objects\textures\Beret\export\GTO_Beret_Gray.paa"};
    };

    class GTO_Beret_Black : GTO_Beret_Empty
    {
        scope = 2;
        displayName = "[GTO] Beret (Black)";
        hiddenSelectionsTextures[] = {"gto_mod\objects\textures\Beret\export\GTO_Beret_Black.paa"};
    };
};

class CfgVehicles
{
    // TODO: make other boxes
    class Box_IDAP_Uniforms_F;
    class GTO_Supply_Box : Box_IDAP_Uniforms_F
    {
        displayName = "[GTO] Supply Box";
        author = "LucyferHW";
        hiddenSelectionsTextures[] = {"gto_mod\objects\textures\PlasticCase\uniforms_box_idap_co.paa", "gto_mod\objects\textures\PlasticCase\uniforms_box_idap_CA_GTO.paa"};
        class TransportMagazines
        {
            // MAG_XX(100Rnd_65x39_caseless_mag_Tracer,2);
            // MAX_XX(130Rnd_338_Mag,2);
        };
        class TransportItems
        {
            ITEM_XX(kat_Painkiller, 3);
            ITEM_XX(kat_Carbonate, 1);
            ITEM_XX(kat_IV_16, 10);
            ITEM_XX(kat_aatKit, 5);
            ITEM_XX(kat_accuvac, 1);
            ITEM_XX(ACE_adenosine, 10);
            ITEM_XX(kat_X_AED, 1);
            ITEM_XX(kat_amiodarone, 5);
            ITEM_XX(ACE_ATNAA, 10);
            ITEM_XX(kat_atropine, 10);
            ITEM_XX(kat_AED, 1);
            ITEM_XX(Attachable_Helistretcher, 1);
            ITEM_XX(ACE_elasticBandage, 30);
            ITEM_XX(ACE_packingBandage, 30);
            ITEM_XX(ACE_quikclot, 30);
            ITEM_XX(kat_crossPanel, 1);
            ITEM_XX(ACE_bodyBag, 10);
            ITEM_XX(kat_chestSeal, 5);
            ITEM_XX(ACE_epinephrine, 10);
            ITEM_XX(kat_IO_FAST, 10);
            ITEM_XX(KAT_Empty_bloodIV_250, 5);
            ITEM_XX(KAT_Empty_bloodIV_500, 5);
            ITEM_XX(kat_guedel, 10);
            ITEM_XX(kat_larynx, 10);
            ITEM_XX(kat_lidocaine, 10);
            ITEM_XX(ACE_morphine, 10);
            ITEM_XX(kat_naloxone, 5);
            ITEM_XX(kat_nitroglycerin, 10);
            ITEM_XX(kat_norepinephrine, 10);
            // ITEM_XX(ACE_personalAidKit,1);
            ITEM_XX(kat_phenylephrine, 10);
            ITEM_XX(ACE_plasmaIV, 10);
            ITEM_XX(ACE_plasmaIV_250, 10);
            ITEM_XX(ACE_plasmaIV_500, 10);
            ITEM_XX(kat_Pulseoximeter, 10);
            ITEM_XX(ACE_salineIV, 10);
            ITEM_XX(ACE_salineIV_250, 10);
            ITEM_XX(ACE_salineIV_500, 10);
            ITEM_XX(ACE_splint, 10);
            ITEM_XX(kat_stethoscope, 3);
            ITEM_XX(ACE_surgicalKit, 1);
            ITEM_XX(kat_TXA, 10);
            ITEM_XX(ACE_tourniquet, 20);
            ITEM_XX(ACE_IR_Strobe_Item, 3);
            ITEM_XX(ACE_CableTie, 5);
            ITEM_XX(ACE_EntrenchingTool, 1);
            ITEM_XX(SmokeShell, 10);
            ITEM_XX(SmokeShellRed, 5);
            ITEM_XX(SmokeShellGreen, 5);
            ITEM_XX(SmokeShellBlue, 5);
            ITEM_XX(HandGrenade, 10);
            ITEM_XX(MiniGrenade, 5);
            ITEM_XX(USP_PVS31, 1);
            ITEM_XX(WBK_HeadLampItem, 5);
            ITEM_XX(ItemcTabHCam, 5);
            ITEM_XX(ACE_Humanitarian_Ration, 10);
            ITEM_XX(ACE_WaterBottle, 10);
            ITEM_XX(ToolKit, 1);
            ITEM_XX(ACE_SpareBarrel_Item, 2);
        };
    };

    // --- Ammo Box ---

    class C_IDAP_supplyCrate_F;
    class GTO_Arsenal : C_IDAP_supplyCrate_F
    {
        scopeCurator = 2;
        displayName = "[GTO] Supply Box";
        author = "LucyferHW";
    };

    class B_Carryall_oli;
    class GTO_Medic_Carryall_oli : B_Carryall_oli
    {
        scopeCurator = 2;
        displayName = "Carryall B. Medic (Olive)";
        author = "LucyferHW";
        hiddenSelectionsTextures[] = {"gto_mod\objects\textures\MedicBackpack\backpack_tortila_oli_co.paa"};
        maximumLoad = 400;
    };

    class B_Carryall_cbr;
    class GTO_Medic_Carryall_cbr : B_Carryall_cbr
    {
        scopeCurator = 2;
        displayName = "Carryall B. Medic (Coyote)";
        author = "LucyferHW";
        hiddenSelectionsTextures[] = {"gto_mod\objects\textures\MedicBackpack\backpack_tortila_cbr_co.paa"};
        maximumLoad = 400;
    };

    class FlagMarker_01_F;
    class GTO_MarkerFlag : FlagMarker_01_F
    {
        scopeCurator = 2;
        displayName = "[GTO] Marker Flag";
        author = "LucyferHW";
        hiddenSelectionsTextures[] = {"gto_mod\logo\gto_unit_logo_2x1.paa"};
    }

    class Banner_01_F;
    class GTO_Banner : Banner_01_F
    {
        scopeCurator = 2;
        //["A3_Structures_F_Mil_Flags"]e
        displayName = "[GTO] Banner";
        author = "LucyferHW";
        hiddenSelectionsTextures[] = {"gto_mod\logo\gto_unit_logo_2x1.paa"};
    }

    class Man;
    class CAManBase : Man
    {
        class ACE_SelfActions
        {
            class ACE_Equipment
            {
                class placeRalypoint
                {
                    displayName = "Place Rallypoint";
                    condition = "'ace_marker_flags_blue' in (items _player)";
                    exceptions[] = {};
                    statement = "[_player] call GTO_fnc_placeRalypoint";
                    icon = "";
                };
            };
        };
    };
};