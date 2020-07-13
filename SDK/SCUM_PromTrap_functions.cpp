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

// Function PromTrap.PromTrap_C.TriggeredMovement__FinishedFunc
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const)

void APromTrap_C::STATIC_TriggeredMovement__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.TriggeredMovement__FinishedFunc");

	APromTrap_C_TriggeredMovement__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PromTrap.PromTrap_C.TriggeredMovement__UpdateFunc
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const)

void APromTrap_C::STATIC_TriggeredMovement__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.TriggeredMovement__UpdateFunc");

	APromTrap_C_TriggeredMovement__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PromTrap.PromTrap_C.BP_OnDisarmed
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const)

void APromTrap_C::STATIC_BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.BP_OnDisarmed");

	APromTrap_C_BP_OnDisarmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PromTrap.PromTrap_C.BP_OnArmed
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const)

void APromTrap_C::STATIC_BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.BP_OnArmed");

	APromTrap_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PromTrap.PromTrap_C.BP_OnTriggered
// (Net, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const)

void APromTrap_C::STATIC_BP_OnTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.BP_OnTriggered");

	APromTrap_C_BP_OnTriggered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PromTrap.PromTrap_C.ReceiveBeginPlay
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const)

void APromTrap_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.ReceiveBeginPlay");

	APromTrap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PromTrap.PromTrap_C.ExecuteUbergraph_PromTrap
// (NetRequest, MulticastDelegate, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APromTrap_C::ExecuteUbergraph_PromTrap(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.ExecuteUbergraph_PromTrap");

	APromTrap_C_ExecuteUbergraph_PromTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
