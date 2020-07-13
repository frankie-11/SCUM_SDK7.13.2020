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

// Function PipeBomb.PipeBomb_C.BP_OnArmed
// (Net, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const)

void APipeBomb_C::STATIC_BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PipeBomb.PipeBomb_C.BP_OnArmed");

	APipeBomb_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PipeBomb.PipeBomb_C.ReceiveBeginPlay
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const)

void APipeBomb_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PipeBomb.PipeBomb_C.ReceiveBeginPlay");

	APipeBomb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PipeBomb.PipeBomb_C.BP_OnDisarmed
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const)

void APipeBomb_C::STATIC_BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PipeBomb.PipeBomb_C.BP_OnDisarmed");

	APipeBomb_C_BP_OnDisarmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PipeBomb.PipeBomb_C.ExecuteUbergraph_PipeBomb
// (Net, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APipeBomb_C::STATIC_ExecuteUbergraph_PipeBomb(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PipeBomb.PipeBomb_C.ExecuteUbergraph_PipeBomb");

	APipeBomb_C_ExecuteUbergraph_PipeBomb_Params params;
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
