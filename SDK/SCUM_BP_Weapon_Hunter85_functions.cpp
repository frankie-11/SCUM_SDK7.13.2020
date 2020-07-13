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

// Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.CanSwitchFiringMode
// (Net, NetRequest, Exec, NetResponse, Public, Protected, Delegate, NetServer, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weapon_Hunter85_C::CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.CanSwitchFiringMode");

	ABP_Weapon_Hunter85_C_CanSwitchFiringMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.GetAmmoReloadCapacity
// (Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// class AAmmunitionItem**        ammo                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_Weapon_Hunter85_C::GetAmmoReloadCapacity(class AAmmunitionItem** ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.GetAmmoReloadCapacity");

	ABP_Weapon_Hunter85_C_GetAmmoReloadCapacity_Params params;
	params.ammo = ammo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.ReceiveBeginPlay
// (NetRequest, Exec, NetResponse, Public, Protected, Delegate, NetServer, BlueprintPure)

void ABP_Weapon_Hunter85_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.ReceiveBeginPlay");

	ABP_Weapon_Hunter85_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.ExecuteUbergraph_BP_Weapon_Hunter85
// (Net, NetReliable, Exec, NetResponse, Public, Protected, Delegate, NetServer, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_Hunter85_C::ExecuteUbergraph_BP_Weapon_Hunter85(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.ExecuteUbergraph_BP_Weapon_Hunter85");

	ABP_Weapon_Hunter85_C_ExecuteUbergraph_BP_Weapon_Hunter85_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
