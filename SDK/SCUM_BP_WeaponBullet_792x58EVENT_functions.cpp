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

// Function BP_WeaponBullet_792x58EVENT.BP_WeaponBullet_792x58EVENT_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Private, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_WeaponBullet_792x58EVENT_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_792x58EVENT.BP_WeaponBullet_792x58EVENT_C.ReceiveBeginPlay");

	ABP_WeaponBullet_792x58EVENT_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_792x58EVENT.BP_WeaponBullet_792x58EVENT_C.ExecuteUbergraph_BP_WeaponBullet_792x58EVENT
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Private, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_792x58EVENT_C::STATIC_ExecuteUbergraph_BP_WeaponBullet_792x58EVENT(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_792x58EVENT.BP_WeaponBullet_792x58EVENT_C.ExecuteUbergraph_BP_WeaponBullet_792x58EVENT");

	ABP_WeaponBullet_792x58EVENT_C_ExecuteUbergraph_BP_WeaponBullet_792x58EVENT_Params params;
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
