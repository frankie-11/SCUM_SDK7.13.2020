// SCUM (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConZ.FoodItem.OnRep_Temperature
// ()

void ACannedSardine_C::OnRep_Temperature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.OnRep_Temperature");

	ACannedSardine_C_OnRep_Temperature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.FoodItem.OnRep_ItemOpened
// ()

void ACannedSardine_C::OnRep_ItemOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.OnRep_ItemOpened");

	ACannedSardine_C_OnRep_ItemOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.FoodItem.OnRep_IsCooking
// ()

void ACannedSardine_C::OnRep_IsCooking()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.OnRep_IsCooking");

	ACannedSardine_C_OnRep_IsCooking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.FoodItem.OnAudioComponentExpired
// ()

void ACannedSardine_C::OnAudioComponentExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.OnAudioComponentExpired");

	ACannedSardine_C_OnAudioComponentExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.FoodItem.IsCooking
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACannedSardine_C::IsCooking()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.IsCooking");

	ACannedSardine_C_IsCooking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.FoodItem.GetVolume
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACannedSardine_C::GetVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.GetVolume");

	ACannedSardine_C_GetVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.FoodItem.GetThermalConductivityFactor
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACannedSardine_C::GetThermalConductivityFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.GetThermalConductivityFactor");

	ACannedSardine_C_GetThermalConductivityFactor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.FoodItem.GetTemperature
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACannedSardine_C::GetTemperature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.GetTemperature");

	ACannedSardine_C_GetTemperature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.FoodItem.GetEnvironmentTemperature
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACannedSardine_C::GetEnvironmentTemperature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.GetEnvironmentTemperature");

	ACannedSardine_C_GetEnvironmentTemperature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.FoodItem.GetCookingAmount
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACannedSardine_C::GetCookingAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.GetCookingAmount");

	ACannedSardine_C_GetCookingAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
