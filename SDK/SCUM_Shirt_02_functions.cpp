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

void AShirt_02_C::UpdateMaterialParamsOnClients()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.ClothesItem.UpdateMaterialParamsOnClients");

	AShirt_02_C_UpdateMaterialParamsOnClients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.ClothesItem.SetDirtiness
// ()
// Parameters:
// float*                         dirtiness                      (Parm, ZeroConstructor, IsPlainOldData)

void AShirt_02_C::SetDirtiness(float* dirtiness)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.ClothesItem.SetDirtiness");

	AShirt_02_C_SetDirtiness_Params params;
	params.dirtiness = dirtiness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.ClothesItem.OnRep_MaterialParameters
// ()

void AShirt_02_C::OnRep_MaterialParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.ClothesItem.OnRep_MaterialParameters");

	AShirt_02_C_OnRep_MaterialParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.ClothesItem.GetWarmth
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShirt_02_C::GetWarmth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.ClothesItem.GetWarmth");

	AShirt_02_C_GetWarmth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.ClothesItem.GetCapacityY
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShirt_02_C::GetCapacityY()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.ClothesItem.GetCapacityY");

	AShirt_02_C_GetCapacityY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.ClothesItem.GetCapacityX
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShirt_02_C::GetCapacityX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.ClothesItem.GetCapacityX");

	AShirt_02_C_GetCapacityX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
