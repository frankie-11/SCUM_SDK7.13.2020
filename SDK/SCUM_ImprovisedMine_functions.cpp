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

// Function ImprovisedMine.ImprovisedMine_C.BP_OnArmed
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void AImprovisedMine_C::STATIC_BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedMine.ImprovisedMine_C.BP_OnArmed");

	AImprovisedMine_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImprovisedMine.ImprovisedMine_C.BP_OnDisarmed
// (Net, NetReliable, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void AImprovisedMine_C::STATIC_BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedMine.ImprovisedMine_C.BP_OnDisarmed");

	AImprovisedMine_C_BP_OnDisarmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImprovisedMine.ImprovisedMine_C.ReceiveBeginPlay
// (NetRequest, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void AImprovisedMine_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedMine.ImprovisedMine_C.ReceiveBeginPlay");

	AImprovisedMine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImprovisedMine.ImprovisedMine_C.ExecuteUbergraph_ImprovisedMine
// (Net, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AImprovisedMine_C::STATIC_ExecuteUbergraph_ImprovisedMine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedMine.ImprovisedMine_C.ExecuteUbergraph_ImprovisedMine");

	AImprovisedMine_C_ExecuteUbergraph_ImprovisedMine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
