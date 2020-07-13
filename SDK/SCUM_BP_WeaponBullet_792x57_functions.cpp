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

// Function BP_WeaponBullet_792x57.BP_WeaponBullet_792x57_C.ReceiveBeginPlay
// (Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_WeaponBullet_792x57_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_792x57.BP_WeaponBullet_792x57_C.ReceiveBeginPlay");

	ABP_WeaponBullet_792x57_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_792x57.BP_WeaponBullet_792x57_C.ExecuteUbergraph_BP_WeaponBullet_792x57
// (Net, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_792x57_C::STATIC_ExecuteUbergraph_BP_WeaponBullet_792x57(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_792x57.BP_WeaponBullet_792x57_C.ExecuteUbergraph_BP_WeaponBullet_792x57");

	ABP_WeaponBullet_792x57_C_ExecuteUbergraph_BP_WeaponBullet_792x57_Params params;
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
