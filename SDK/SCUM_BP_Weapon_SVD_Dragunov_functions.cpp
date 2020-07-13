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

// Function BP_Weapon_SVD_Dragunov.BP_Weapon_SVD_Dragunov_C.CanSwitchFiringMode
// (Net, NetRequest, Native, Event, Public, Protected, Delegate, NetServer, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weapon_SVD_Dragunov_C::CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_SVD_Dragunov.BP_Weapon_SVD_Dragunov_C.CanSwitchFiringMode");

	ABP_Weapon_SVD_Dragunov_C_CanSwitchFiringMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_SVD_Dragunov.BP_Weapon_SVD_Dragunov_C.ReceiveBeginPlay
// (NetRequest, Native, Event, Public, Protected, Delegate, NetServer, BlueprintPure)

void ABP_Weapon_SVD_Dragunov_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_SVD_Dragunov.BP_Weapon_SVD_Dragunov_C.ReceiveBeginPlay");

	ABP_Weapon_SVD_Dragunov_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_SVD_Dragunov.BP_Weapon_SVD_Dragunov_C.ExecuteUbergraph_BP_Weapon_SVD_Dragunov
// (NetReliable, Native, NetResponse, Static, NetMulticast, Public, Protected, Delegate, NetServer, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_SVD_Dragunov_C::STATIC_ExecuteUbergraph_BP_Weapon_SVD_Dragunov(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_SVD_Dragunov.BP_Weapon_SVD_Dragunov_C.ExecuteUbergraph_BP_Weapon_SVD_Dragunov");

	ABP_Weapon_SVD_Dragunov_C_ExecuteUbergraph_BP_Weapon_SVD_Dragunov_Params params;
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
