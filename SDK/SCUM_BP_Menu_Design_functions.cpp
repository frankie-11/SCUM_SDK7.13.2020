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

// Function BP_Menu_Design.BP_Menu_Design_C.PrisonerMoveInsideTimeline__FinishedFunc
// (NetReliable, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const)

void ABP_Menu_Design_C::STATIC_PrisonerMoveInsideTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.PrisonerMoveInsideTimeline__FinishedFunc");

	ABP_Menu_Design_C_PrisonerMoveInsideTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.PrisonerMoveInsideTimeline__UpdateFunc
// (Net, NetReliable, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const)

void ABP_Menu_Design_C::STATIC_PrisonerMoveInsideTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.PrisonerMoveInsideTimeline__UpdateFunc");

	ABP_Menu_Design_C_PrisonerMoveInsideTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.ReceiveBeginPlay
// (NetRequest, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const)

void ABP_Menu_Design_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.ReceiveBeginPlay");

	ABP_Menu_Design_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.ReceiveTick
// (Net, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.ReceiveTick");

	ABP_Menu_Design_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.StartPrisonerEnterSequence
// (Exec, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool*                          backwards                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::StartPrisonerEnterSequence(bool* backwards)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.StartPrisonerEnterSequence");

	ABP_Menu_Design_C_StartPrisonerEnterSequence_Params params;
	params.backwards = backwards;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks1_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature
// (Net, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ParticleCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::BndEvt__Sparks1_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature(struct FName* EventName, float* EmitterTime, int* ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks1_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature");

	ABP_Menu_Design_C_BndEvt__Sparks1_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks2_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature
// (Net, NetReliable, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ParticleCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::STATIC_BndEvt__Sparks2_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature(struct FName* EventName, float* EmitterTime, int* ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks2_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature");

	ABP_Menu_Design_C_BndEvt__Sparks2_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks3_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature
// (Net, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ParticleCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::STATIC_BndEvt__Sparks3_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(struct FName* EventName, float* EmitterTime, int* ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks3_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature");

	ABP_Menu_Design_C_BndEvt__Sparks3_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke1_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature
// (NetReliable, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ParticleCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::STATIC_BndEvt__Smoke1_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature(struct FName* EventName, float* EmitterTime, int* ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke1_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature");

	ABP_Menu_Design_C_BndEvt__Smoke1_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke2_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ParticleCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::STATIC_BndEvt__Smoke2_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature(struct FName* EventName, float* EmitterTime, int* ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke2_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature");

	ABP_Menu_Design_C_BndEvt__Smoke2_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke3_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ParticleCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::BndEvt__Smoke3_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature(struct FName* EventName, float* EmitterTime, int* ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke3_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature");

	ABP_Menu_Design_C_BndEvt__Smoke3_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke4_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ParticleCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::BndEvt__Smoke4_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(struct FName* EventName, float* EmitterTime, int* ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke4_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature");

	ABP_Menu_Design_C_BndEvt__Smoke4_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.ExecuteUbergraph_BP_Menu_Design
// (Exec, Native, Static, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::STATIC_ExecuteUbergraph_BP_Menu_Design(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.ExecuteUbergraph_BP_Menu_Design");

	ABP_Menu_Design_C_ExecuteUbergraph_BP_Menu_Design_Params params;
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
