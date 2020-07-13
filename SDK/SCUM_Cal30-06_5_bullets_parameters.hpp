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

// Function ConZ.AmmunitionItem.SetAmmoCount
struct ACal30_06_5_bullets_C_SetAmmoCount_Params
{
	int*                                               count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              replicateToOwner;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.AmmunitionItem.OnRep_AmmoCountOwnerHelper
struct ACal30_06_5_bullets_C_OnRep_AmmoCountOwnerHelper_Params
{
};

// Function ConZ.AmmunitionItem.OnRep_AmmoCount
struct ACal30_06_5_bullets_C_OnRep_AmmoCount_Params
{
};

// Function ConZ.AmmunitionItem.GetAmmoCount
struct ACal30_06_5_bullets_C_GetAmmoCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.AmmunitionItem.Client_SetAmmoCount
struct ACal30_06_5_bullets_C_Client_SetAmmoCount_Params
{
	int*                                               count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
