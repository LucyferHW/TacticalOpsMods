#include "\gtom\basicDefines_A3.hpp"


class CfgPatches
{
    class GTOM_Boxes
    {
        name = "GTO Boxes";
        author = "LucyferHW";
        url = "";

        units[] = {"GTO_Box_Base",
                   "GTO_Box_Ammo",
                   "GTO_Box_BasicItems",
                   "GTO_Box_Explosives",
                   "GTO_Box_Grenades",
                   "GTO_Box_MapCompasRadio",
                   "GTO_Box_Medic",
                   "GTO_Box_NVG"};

        requiredAddons[] = {"A3_Supplies_F_Orange_Ammoboxes","kat_breathing","kat_airway","kat_surgery","kat_pharma","kat_circulation","kat_chemical","GTOM_Main"};
    };
};

#include "configs\CfgVehicles.hpp"