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

// Function ConZ.ClothesItem.UpdateMaterialParamsOnClients
// ()

void ABP_Bulletproof_Vest_05_Event_C::UpdateMaterialParamsOnClients()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.ClothesItem.UpdateMaterialParamsOnClients");

	ABP_Bulletproof_Vest_05_Event_C_UpdateMaterialParamsOnClients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.ClothesItem.SetDirtiness
// ()
// Parameters:
// float*                         dirtiness                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Bulletproof_Vest_05_Event_C::SetDirtiness(float* dirtiness)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.ClothesItem.SetDirtiness");

	ABP_Bulletproof_Vest_05_Event_C_SetDirtiness_Params params;
	params.dirtiness = dirtiness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.ClothesItem.OnRep_MaterialParameters
// ()

void ABP_Bulletproof_Vest_05_Event_C::OnRep_MaterialParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.ClothesItem.OnRep_MaterialParameters");

	ABP_Bulletproof_Vest_05_Event_C_OnRep_MaterialParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.ClothesItem.GetWarmth
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_Bulletproof_Vest_05_Event_C::GetWarmth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.ClothesItem.GetWarmth");

	ABP_Bulletproof_Vest_05_Event_C_GetWarmth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.ClothesItem.GetCapacityY
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_Bulletproof_Vest_05_Event_C::GetCapacityY()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.ClothesItem.GetCapacityY");

	ABP_Bulletproof_Vest_05_Event_C_GetCapacityY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.ClothesItem.GetCapacityX
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_Bulletproof_Vest_05_Event_C::GetCapacityX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.ClothesItem.GetCapacityX");

	ABP_Bulletproof_Vest_05_Event_C_GetCapacityX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
