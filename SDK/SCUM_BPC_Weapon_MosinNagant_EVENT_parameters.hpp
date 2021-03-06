#pragma once

// SCUM (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.CanSwitchFiringMode
struct ABPC_Weapon_MosinNagant_EVENT_C_CanSwitchFiringMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.GetAmmoReloadCapacity
struct ABPC_Weapon_MosinNagant_EVENT_C_GetAmmoReloadCapacity_Params
{
	class AAmmunitionItem**                            ammo;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.ReceiveBeginPlay
struct ABPC_Weapon_MosinNagant_EVENT_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.ExecuteUbergraph_BP_Weapon_MosinNagant
struct ABPC_Weapon_MosinNagant_EVENT_C_ExecuteUbergraph_BP_Weapon_MosinNagant_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
