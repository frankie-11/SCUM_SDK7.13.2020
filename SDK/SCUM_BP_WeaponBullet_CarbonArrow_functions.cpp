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

// Function BP_WeaponBullet_CarbonArrow.BP_WeaponBullet_CarbonArrow_C.ReceiveBeginPlay
// (Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)

void ABP_WeaponBullet_CarbonArrow_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_CarbonArrow.BP_WeaponBullet_CarbonArrow_C.ReceiveBeginPlay");

	ABP_WeaponBullet_CarbonArrow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_CarbonArrow.BP_WeaponBullet_CarbonArrow_C.ExecuteUbergraph_BP_WeaponBullet_CarbonArrow
// (Net, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_CarbonArrow_C::STATIC_ExecuteUbergraph_BP_WeaponBullet_CarbonArrow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_CarbonArrow.BP_WeaponBullet_CarbonArrow_C.ExecuteUbergraph_BP_WeaponBullet_CarbonArrow");

	ABP_WeaponBullet_CarbonArrow_C_ExecuteUbergraph_BP_WeaponBullet_CarbonArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
