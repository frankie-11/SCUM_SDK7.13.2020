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

// Function ConZ.AmmunitionItem.SetAmmoCount
// ()
// Parameters:
// int*                           count                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          replicateToOwner               (Parm, ZeroConstructor, IsPlainOldData)

void ACal_50BMG_Empty_C::SetAmmoCount(int* count, bool* replicateToOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.AmmunitionItem.SetAmmoCount");

	ACal_50BMG_Empty_C_SetAmmoCount_Params params;
	params.count = count;
	params.replicateToOwner = replicateToOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.AmmunitionItem.OnRep_AmmoCountOwnerHelper
// ()

void ACal_50BMG_Empty_C::OnRep_AmmoCountOwnerHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.AmmunitionItem.OnRep_AmmoCountOwnerHelper");

	ACal_50BMG_Empty_C_OnRep_AmmoCountOwnerHelper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.AmmunitionItem.OnRep_AmmoCount
// ()

void ACal_50BMG_Empty_C::OnRep_AmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.AmmunitionItem.OnRep_AmmoCount");

	ACal_50BMG_Empty_C_OnRep_AmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.AmmunitionItem.GetAmmoCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ACal_50BMG_Empty_C::GetAmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.AmmunitionItem.GetAmmoCount");

	ACal_50BMG_Empty_C_GetAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.AmmunitionItem.Client_SetAmmoCount
// ()
// Parameters:
// int*                           count                          (Parm, ZeroConstructor, IsPlainOldData)

void ACal_50BMG_Empty_C::Client_SetAmmoCount(int* count)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.AmmunitionItem.Client_SetAmmoCount");

	ACal_50BMG_Empty_C_Client_SetAmmoCount_Params params;
	params.count = count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
