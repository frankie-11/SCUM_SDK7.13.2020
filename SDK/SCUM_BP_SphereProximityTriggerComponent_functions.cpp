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

// Function BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C.ReceiveTick
// (NetRequest, Exec, Native, Static, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SphereProximityTriggerComponent_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C.ReceiveTick");

	UBP_SphereProximityTriggerComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C.ReceiveBeginPlay
// (Net, NetReliable, Exec, Native, Static, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UBP_SphereProximityTriggerComponent_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C.ReceiveBeginPlay");

	UBP_SphereProximityTriggerComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C.ExecuteUbergraph_BP_SphereProximityTriggerComponent
// (NetReliable, Exec, Native, Static, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SphereProximityTriggerComponent_C::STATIC_ExecuteUbergraph_BP_SphereProximityTriggerComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C.ExecuteUbergraph_BP_SphereProximityTriggerComponent");

	UBP_SphereProximityTriggerComponent_C_ExecuteUbergraph_BP_SphereProximityTriggerComponent_Params params;
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
