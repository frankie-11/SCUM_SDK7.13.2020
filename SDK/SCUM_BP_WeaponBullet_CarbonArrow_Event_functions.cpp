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

// Function BP_WeaponBullet_CarbonArrow_Event.BP_WeaponBullet_CarbonArrow_Event_C.ReceiveBeginPlay
// (Net, Native, Event, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void ABP_WeaponBullet_CarbonArrow_Event_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_CarbonArrow_Event.BP_WeaponBullet_CarbonArrow_Event_C.ReceiveBeginPlay");

	ABP_WeaponBullet_CarbonArrow_Event_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_CarbonArrow_Event.BP_WeaponBullet_CarbonArrow_Event_C.ExecuteUbergraph_BP_WeaponBullet_CarbonArrow_Event
// (Net, Native, Event, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_CarbonArrow_Event_C::ExecuteUbergraph_BP_WeaponBullet_CarbonArrow_Event(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_CarbonArrow_Event.BP_WeaponBullet_CarbonArrow_Event_C.ExecuteUbergraph_BP_WeaponBullet_CarbonArrow_Event");

	ABP_WeaponBullet_CarbonArrow_Event_C_ExecuteUbergraph_BP_WeaponBullet_CarbonArrow_Event_Params params;
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
