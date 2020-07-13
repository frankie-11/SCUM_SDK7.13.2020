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

// Function BP_WeaponBullet_12Gauge_FlareTrap.BP_WeaponBullet_12Gauge_FlareTrap_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_WeaponBullet_12Gauge_FlareTrap_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_12Gauge_FlareTrap.BP_WeaponBullet_12Gauge_FlareTrap_C.ReceiveBeginPlay");

	ABP_WeaponBullet_12Gauge_FlareTrap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_12Gauge_FlareTrap.BP_WeaponBullet_12Gauge_FlareTrap_C.ExecuteUbergraph_BP_WeaponBullet_12Gauge_FlareTrap
// (Net, NetReliable, Exec, Public, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_12Gauge_FlareTrap_C::ExecuteUbergraph_BP_WeaponBullet_12Gauge_FlareTrap(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_12Gauge_FlareTrap.BP_WeaponBullet_12Gauge_FlareTrap_C.ExecuteUbergraph_BP_WeaponBullet_12Gauge_FlareTrap");

	ABP_WeaponBullet_12Gauge_FlareTrap_C_ExecuteUbergraph_BP_WeaponBullet_12Gauge_FlareTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
