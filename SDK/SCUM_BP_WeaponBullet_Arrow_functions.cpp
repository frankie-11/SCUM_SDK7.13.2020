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

// Function BP_WeaponBullet_Arrow.BP_WeaponBullet_Arrow_C.ReceiveBeginPlay
// (Net, NetReliable, Event, NetResponse, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)

void ABP_WeaponBullet_Arrow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_Arrow.BP_WeaponBullet_Arrow_C.ReceiveBeginPlay");

	ABP_WeaponBullet_Arrow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_Arrow.BP_WeaponBullet_Arrow_C.ExecuteUbergraph_BP_WeaponBullet_Arrow
// (Net, NetReliable, Event, NetResponse, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_Arrow_C::ExecuteUbergraph_BP_WeaponBullet_Arrow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_Arrow.BP_WeaponBullet_Arrow_C.ExecuteUbergraph_BP_WeaponBullet_Arrow");

	ABP_WeaponBullet_Arrow_C_ExecuteUbergraph_BP_WeaponBullet_Arrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
