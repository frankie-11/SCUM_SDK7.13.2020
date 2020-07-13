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

// Function BP_WeaponBullet_WoodenArrowFeathers_Event.BP_WeaponBullet_WoodenArrowFeathers_Event_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Event, Static, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void ABP_WeaponBullet_WoodenArrowFeathers_Event_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_WoodenArrowFeathers_Event.BP_WeaponBullet_WoodenArrowFeathers_Event_C.ReceiveBeginPlay");

	ABP_WeaponBullet_WoodenArrowFeathers_Event_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_WoodenArrowFeathers_Event.BP_WeaponBullet_WoodenArrowFeathers_Event_C.ExecuteUbergraph_BP_WeaponBullet_WoodenArrowFeathers_Event
// (Net, NetReliable, NetRequest, Exec, Event, Static, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_WoodenArrowFeathers_Event_C::STATIC_ExecuteUbergraph_BP_WeaponBullet_WoodenArrowFeathers_Event(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_WoodenArrowFeathers_Event.BP_WeaponBullet_WoodenArrowFeathers_Event_C.ExecuteUbergraph_BP_WeaponBullet_WoodenArrowFeathers_Event");

	ABP_WeaponBullet_WoodenArrowFeathers_Event_C_ExecuteUbergraph_BP_WeaponBullet_WoodenArrowFeathers_Event_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
