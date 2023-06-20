scriptName "fn_cbaArsenal";
/*
	Author: LucyferHW
	
	Description:
	Describe your function
*/
private _gto_Arsenal = "GTOM Arsenal";
private _gto_Equipment = "GTOM Equipment";
private _gto_Item = "GTOM Items";


[
	"GTO_AllRolesAvailable", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
	"CHECKBOX", // setting type
	["All roles available"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	[_gto_Arsenal], // Pretty name of the category where the setting can be found. Can be stringtable entry.
	[false, true, false], // data for this setting: [min, max, default, number of shown trailing decimals]
	true, // "_isGlobal" flag. set this to true to always have this setting synchronized between all clients in multiplayer
	{
		params["_value"];
	} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

// ---------- player ----------//

GTO_RoleList_Template = {
	params["_className", "_visibleName", "_category"];
	[
		"GTO_RoleEquipment_" + _className, // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
		"EDITBOX", // setting type
		["Equipment " + _visibleName, "Array of equipment for a role (no Items)"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
		[_gto_Equipment, _category], // Pretty name of the category where the setting can be found. Can be stringtable entry.
		["[]"], // data for this setting: [min, max, default, number of shown trailing decimals]
		true, // "_isGlobal" flag. set this to true to always have this setting synchronized between all clients in multiplayer
		{
			params["_value"];
			systemChat format ["Initialised GTO_RoleEquipment_%1", _className];
		} // function that will be executed once on mission start and every time the setting is changed.
	] call CBA_fnc_addSetting;

	[
		"GTO_RoleItems_" + _className, // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
		"EDITBOX", // setting type
		["Items " + _visibleName, "Array of items"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
		[_gto_Item, _category], // Pretty name of the category where the setting can be found. Can be stringtable entry.
		["[]"], // data for this setting: [min, max, default, number of shown trailing decimals]
		true, // "_isGlobal" flag. set this to true to always have this setting synchronized between all clients in multiplayer
		{
			params["_value"];
			systemChat format ["Initialised GTO_RoleItems_%1", _className];
		} // function that will be executed once on mission start and every time the setting is changed.
	] call CBA_fnc_addSetting;
};





["basic", "Basic", "0. Basic"] call GTO_RoleList_Template;

["sl", "SL", "1. Lead"] call GTO_RoleList_Template;

[
	"GTO_Items_FTL", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
	"EDITBOX", // setting type
	["Items FTL", "Array of FTL items"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	[_gto_Item, "1. Lead"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
	["[]"], // data for this setting: [min, max, default, number of shown trailing decimals]
	true, // "_isGlobal" flag. set this to true to always have this setting synchronized between all clients in multiplayer
	{
		params["_value"];
	} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

["medic", "Medic", "2. Support"] call GTO_RoleList_Template;
["ammoCarrier", "Ammo Carrier", "2. Support"] call GTO_RoleList_Template;

["weaponSpecialist", "Weapon Specialist", "3. Weapon"] call GTO_RoleList_Template;
["mg", "MG", "3. Weapon"] call GTO_RoleList_Template;
["grenadier", "Grenadier", "3. Weapon"] call GTO_RoleList_Template;
["at", "AT", "3. Weapon"] call GTO_RoleList_Template;

["sniper", "Sniper", "4. Special"] call GTO_RoleList_Template;
["spotter", "Spotter", "4. Special"] call GTO_RoleList_Template;
["sapper", "Sapper", "4. Special"] call GTO_RoleList_Template;
["engineer", "Engineer", "4. Special"] call GTO_RoleList_Template;

["pilot", "Pilot", "5. Vehicle"] call GTO_RoleList_Template;
["crewman", "Crewman", "5. Vehicle"] call GTO_RoleList_Template;

[
	"GTO_Equipment_Goggles", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
	"EDITBOX", // setting type
	["Equipment Goggles", "Array of goggles"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
	[_gto_Equipment, "10. Other"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
	["[]"], // data for this setting: [min, max, default, number of shown trailing decimals]
	true, // "_isGlobal" flag. set this to true to always have this setting synchronized between all clients in multiplayer
	{
		params["_value"];
	} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

// todo: make default loadout slots

//ToDo: default loadouts
// Soft Force for default loadout
// ["kat_circulation_bloodgroup", _bloodType] call CBA_settings_fnc_set;