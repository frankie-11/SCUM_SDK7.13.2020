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

// Function ConZ.ClothesItem.UpdateMaterialParamsOnClients
struct ATracksuit_Top_02_04_C_UpdateMaterialParamsOnClients_Params
{
};

// Function ConZ.ClothesItem.SetDirtiness
struct ATracksuit_Top_02_04_C_SetDirtiness_Params
{
	float*                                             dirtiness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ClothesItem.OnRep_MaterialParameters
struct ATracksuit_Top_02_04_C_OnRep_MaterialParameters_Params
{
};

// Function ConZ.ClothesItem.GetWarmth
struct ATracksuit_Top_02_04_C_GetWarmth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ClothesItem.GetCapacityY
struct ATracksuit_Top_02_04_C_GetCapacityY_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ClothesItem.GetCapacityX
struct ATracksuit_Top_02_04_C_GetCapacityX_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
