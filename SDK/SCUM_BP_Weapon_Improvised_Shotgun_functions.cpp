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

// Function BP_Weapon_Improvised_Shotgun.BP_Weapon_Improvised_Shotgun_C.CanSwitchFiringMode
// (Exec, NetResponse, Public, Protected, Delegate, NetServer, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weapon_Improvised_Shotgun_C::CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Improvised_Shotgun.BP_Weapon_Improvised_Shotgun_C.CanSwitchFiringMode");

	ABP_Weapon_Improvised_Shotgun_C_CanSwitchFiringMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_Improvised_Shotgun.BP_Weapon_Improvised_Shotgun_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, NetResponse, Public, Protected, Delegate, NetServer, BlueprintPure)

void ABP_Weapon_Improvised_Shotgun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Improvised_Shotgun.BP_Weapon_Improvised_Shotgun_C.ReceiveBeginPlay");

	ABP_Weapon_Improvised_Shotgun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_Improvised_Shotgun.BP_Weapon_Improvised_Shotgun_C.ExecuteUbergraph_BP_Weapon_Improvised_Shotgun
// (NetReliable, NetRequest, NetResponse, Public, Protected, Delegate, NetServer, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_Improvised_Shotgun_C::ExecuteUbergraph_BP_Weapon_Improvised_Shotgun(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Improvised_Shotgun.BP_Weapon_Improvised_Shotgun_C.ExecuteUbergraph_BP_Weapon_Improvised_Shotgun");

	ABP_Weapon_Improvised_Shotgun_C_ExecuteUbergraph_BP_Weapon_Improvised_Shotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
