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

// Function ConZ.FoodItem.OnRep_Temperature
struct ACantonese_Sweet_And_sour_01_C_OnRep_Temperature_Params
{
};

// Function ConZ.FoodItem.OnRep_ItemOpened
struct ACantonese_Sweet_And_sour_01_C_OnRep_ItemOpened_Params
{
};

// Function ConZ.FoodItem.OnRep_IsCooking
struct ACantonese_Sweet_And_sour_01_C_OnRep_IsCooking_Params
{
};

// Function ConZ.FoodItem.OnAudioComponentExpired
struct ACantonese_Sweet_And_sour_01_C_OnAudioComponentExpired_Params
{
};

// Function ConZ.FoodItem.IsCooking
struct ACantonese_Sweet_And_sour_01_C_IsCooking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.FoodItem.GetVolume
struct ACantonese_Sweet_And_sour_01_C_GetVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.FoodItem.GetThermalConductivityFactor
struct ACantonese_Sweet_And_sour_01_C_GetThermalConductivityFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.FoodItem.GetTemperature
struct ACantonese_Sweet_And_sour_01_C_GetTemperature_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.FoodItem.GetEnvironmentTemperature
struct ACantonese_Sweet_And_sour_01_C_GetEnvironmentTemperature_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.FoodItem.GetCookingAmount
struct ACantonese_Sweet_And_sour_01_C_GetCookingAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
