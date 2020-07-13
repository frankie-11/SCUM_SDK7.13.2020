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

// Function BP_Weapon_M1887.BP_Weapon_M1887_C.CanSwitchFiringMode
// (Net, NetRequest, NetResponse, Public, Protected, Delegate, NetServer, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weapon_M1887_C::CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1887.BP_Weapon_M1887_C.CanSwitchFiringMode");

	ABP_Weapon_M1887_C_CanSwitchFiringMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_M1887.BP_Weapon_M1887_C.GetAmmoReloadCapacity
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// class AAmmunitionItem**        ammo                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_Weapon_M1887_C::STATIC_GetAmmoReloadCapacity(class AAmmunitionItem** ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1887.BP_Weapon_M1887_C.GetAmmoReloadCapacity");

	ABP_Weapon_M1887_C_GetAmmoReloadCapacity_Params params;
	params.ammo = ammo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_M1887.BP_Weapon_M1887_C.GetWidgetDisplayInfo
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FWidgetDisplayInfo      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWidgetDisplayInfo ABP_Weapon_M1887_C::GetWidgetDisplayInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1887.BP_Weapon_M1887_C.GetWidgetDisplayInfo");

	ABP_Weapon_M1887_C_GetWidgetDisplayInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_M1887.BP_Weapon_M1887_C.ReceiveBeginPlay
// (NetRequest, NetResponse, Public, Protected, Delegate, NetServer, BlueprintPure)

void ABP_Weapon_M1887_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1887.BP_Weapon_M1887_C.ReceiveBeginPlay");

	ABP_Weapon_M1887_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M1887.BP_Weapon_M1887_C.FillUpWithAmmo
// (Net, NetReliable, NetResponse, Public, Protected, Delegate, NetServer, BlueprintPure)

void ABP_Weapon_M1887_C::FillUpWithAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1887.BP_Weapon_M1887_C.FillUpWithAmmo");

	ABP_Weapon_M1887_C_FillUpWithAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M1887.BP_Weapon_M1887_C.ExecuteUbergraph_BP_Weapon_M1887
// (NetRequest, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M1887_C::STATIC_ExecuteUbergraph_BP_Weapon_M1887(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1887.BP_Weapon_M1887_C.ExecuteUbergraph_BP_Weapon_M1887");

	ABP_Weapon_M1887_C_ExecuteUbergraph_BP_Weapon_M1887_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
