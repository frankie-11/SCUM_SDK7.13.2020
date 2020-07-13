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

// Function PressureCookerBomb.PressureCookerBomb_C.BP_OnArmed
// (Net, NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void APressureCookerBomb_C::STATIC_BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PressureCookerBomb.PressureCookerBomb_C.BP_OnArmed");

	APressureCookerBomb_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PressureCookerBomb.PressureCookerBomb_C.BP_OnDisarmed
// (Exec, Native, Event, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void APressureCookerBomb_C::STATIC_BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PressureCookerBomb.PressureCookerBomb_C.BP_OnDisarmed");

	APressureCookerBomb_C_BP_OnDisarmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PressureCookerBomb.PressureCookerBomb_C.ReceiveBeginPlay
// (Net, Exec, Native, Event, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void APressureCookerBomb_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PressureCookerBomb.PressureCookerBomb_C.ReceiveBeginPlay");

	APressureCookerBomb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PressureCookerBomb.PressureCookerBomb_C.ExecuteUbergraph_PressureCookerBomb
// (Net, NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APressureCookerBomb_C::ExecuteUbergraph_PressureCookerBomb(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PressureCookerBomb.PressureCookerBomb_C.ExecuteUbergraph_PressureCookerBomb");

	APressureCookerBomb_C_ExecuteUbergraph_PressureCookerBomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
