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

// Function ImprovisedClaymore.ImprovisedClaymore_C.BP_OnArmed
// (NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void AImprovisedClaymore_C::STATIC_BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedClaymore.ImprovisedClaymore_C.BP_OnArmed");

	AImprovisedClaymore_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImprovisedClaymore.ImprovisedClaymore_C.BP_OnDisarmed
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void AImprovisedClaymore_C::STATIC_BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedClaymore.ImprovisedClaymore_C.BP_OnDisarmed");

	AImprovisedClaymore_C_BP_OnDisarmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImprovisedClaymore.ImprovisedClaymore_C.ReceiveBeginPlay
// (Exec, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void AImprovisedClaymore_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedClaymore.ImprovisedClaymore_C.ReceiveBeginPlay");

	AImprovisedClaymore_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImprovisedClaymore.ImprovisedClaymore_C.ExecuteUbergraph_ImprovisedClaymore
// (Net, NetRequest, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AImprovisedClaymore_C::STATIC_ExecuteUbergraph_ImprovisedClaymore(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedClaymore.ImprovisedClaymore_C.ExecuteUbergraph_ImprovisedClaymore");

	AImprovisedClaymore_C_ExecuteUbergraph_ImprovisedClaymore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
