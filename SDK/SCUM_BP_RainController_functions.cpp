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

// Function BP_RainController.BP_RainController_C.DisableRain
// (NetRequest, NetMulticast, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable)

void ABP_RainController_C::DisableRain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.DisableRain");

	ABP_RainController_C_DisableRain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.EnableRain
// (Native, Event, NetResponse, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable)

void ABP_RainController_C::EnableRain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.EnableRain");

	ABP_RainController_C_EnableRain_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.BndEvt__LightningEmitter_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature
// (Net, NetReliable, Event, NetResponse, Static, Private, HasOutParms)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RainController_C::STATIC_BndEvt__LightningEmitter_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature(struct FName* EventName, float* EmitterTime, struct FVector* Location, struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.BndEvt__LightningEmitter_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature");

	ABP_RainController_C_BndEvt__LightningEmitter_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.ReceiveEndPlay
// (NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RainController_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ReceiveEndPlay");

	ABP_RainController_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.ReceiveDestroyed
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_RainController_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ReceiveDestroyed");

	ABP_RainController_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.ShiftCam
// (NetRequest, Exec, Native, Event, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_RainController_C::ShiftCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ShiftCam");

	ABP_RainController_C_ShiftCam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.ReceiveTick
// (Net, NetReliable, Exec, Native, Event, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RainController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ReceiveTick");

	ABP_RainController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.ReceiveBeginPlay
// (NetReliable, Exec, Native, Event, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_RainController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ReceiveBeginPlay");

	ABP_RainController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RainController.BP_RainController_C.ExecuteUbergraph_BP_RainController
// (NetRequest, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RainController_C::ExecuteUbergraph_BP_RainController(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ExecuteUbergraph_BP_RainController");

	ABP_RainController_C_ExecuteUbergraph_BP_RainController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
