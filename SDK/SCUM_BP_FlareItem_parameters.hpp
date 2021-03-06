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

// Function ConZ.FlareItem.SwitchPointLight
struct ABP_FlareItem_C_SwitchPointLight_Params
{
	bool*                                              turnOn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.FlareItem.SetState
struct ABP_FlareItem_C_SetState_Params
{
	EFlareIgniteState*                                 State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.FlareItem.RequestPrisonerIgniteFlare
struct ABP_FlareItem_C_RequestPrisonerIgniteFlare_Params
{
	class APrisoner**                                  Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.FlareItem.OnRep_State
struct ABP_FlareItem_C_OnRep_State_Params
{
};

// Function ConZ.FlareItem.IsBurning
struct ABP_FlareItem_C_IsBurning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.FlareItem.Ignite
struct ABP_FlareItem_C_Ignite_Params
{
	class APrisoner**                                  Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.FlareItem.GetState
struct ABP_FlareItem_C_GetState_Params
{
	EFlareIgniteState                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
