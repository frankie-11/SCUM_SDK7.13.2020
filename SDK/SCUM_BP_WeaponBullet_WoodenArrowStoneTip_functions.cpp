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

// Function BP_WeaponBullet_WoodenArrowStoneTip.BP_WeaponBullet_WoodenArrowStoneTip_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, NetValidate)

void ABP_WeaponBullet_WoodenArrowStoneTip_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_WoodenArrowStoneTip.BP_WeaponBullet_WoodenArrowStoneTip_C.ReceiveBeginPlay");

	ABP_WeaponBullet_WoodenArrowStoneTip_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_WoodenArrowStoneTip.BP_WeaponBullet_WoodenArrowStoneTip_C.ExecuteUbergraph_BP_WeaponBullet_WoodenArrowStoneTip
// (Net, Static, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_WoodenArrowStoneTip_C::STATIC_ExecuteUbergraph_BP_WeaponBullet_WoodenArrowStoneTip(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_WoodenArrowStoneTip.BP_WeaponBullet_WoodenArrowStoneTip_C.ExecuteUbergraph_BP_WeaponBullet_WoodenArrowStoneTip");

	ABP_WeaponBullet_WoodenArrowStoneTip_C_ExecuteUbergraph_BP_WeaponBullet_WoodenArrowStoneTip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
