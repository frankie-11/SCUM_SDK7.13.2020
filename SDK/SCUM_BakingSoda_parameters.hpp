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
struct ABakingSoda_C_OnRep_Temperature_Params
{
};

// Function ConZ.FoodItem.OnRep_ItemOpened
struct ABakingSoda_C_OnRep_ItemOpened_Params
{
};

// Function ConZ.FoodItem.OnRep_IsCooking
struct ABakingSoda_C_OnRep_IsCooking_Params
{
};

// Function ConZ.FoodItem.OnAudioComponentExpired
struct ABakingSoda_C_OnAudioComponentExpired_Params
{
};

// Function ConZ.FoodItem.IsCooking
struct ABakingSoda_C_IsCooking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.FoodItem.GetVolume
struct ABakingSoda_C_GetVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.FoodItem.GetThermalConductivityFactor
struct ABakingSoda_C_GetThermalConductivityFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.FoodItem.GetTemperature
struct ABakingSoda_C_GetTemperature_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.FoodItem.GetEnvironmentTemperature
struct ABakingSoda_C_GetEnvironmentTemperature_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.FoodItem.GetCookingAmount
struct ABakingSoda_C_GetCookingAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
