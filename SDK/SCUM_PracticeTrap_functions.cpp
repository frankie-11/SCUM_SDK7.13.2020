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

// Function ConZ.TrapItem.OnTriggerEvent
// ()
// Parameters:
// struct FTriggeredEventData*    eventData                      (ConstParm, Parm, OutParm, ReferenceParm)

void APracticeTrap_C::OnTriggerEvent(struct FTriggeredEventData* eventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.TrapItem.OnTriggerEvent");

	APracticeTrap_C_OnTriggerEvent_Params params;
	params.eventData = eventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.TrapItem.OnTrapDestroyTimer
// ()

void APracticeTrap_C::OnTrapDestroyTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.TrapItem.OnTrapDestroyTimer");

	APracticeTrap_C_OnTrapDestroyTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.TrapItem.OnRep_WasTriggered
// ()

void APracticeTrap_C::OnRep_WasTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.TrapItem.OnRep_WasTriggered");

	APracticeTrap_C_OnRep_WasTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.TrapItem.OnRep_LastTriggerOwner
// ()

void APracticeTrap_C::OnRep_LastTriggerOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.TrapItem.OnRep_LastTriggerOwner");

	APracticeTrap_C_OnRep_LastTriggerOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.TrapItem.OnRep_IsDestroyed
// ()

void APracticeTrap_C::OnRep_IsDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.TrapItem.OnRep_IsDestroyed");

	APracticeTrap_C_OnRep_IsDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.TrapItem.OnRep_IsBurried
// ()

void APracticeTrap_C::OnRep_IsBurried()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.TrapItem.OnRep_IsBurried");

	APracticeTrap_C_OnRep_IsBurried_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.TrapItem.OnRep_IsArmed
// ()

void APracticeTrap_C::OnRep_IsArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.TrapItem.OnRep_IsArmed");

	APracticeTrap_C_OnRep_IsArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.TrapItem.OnRep_CurrentTrigger
// ()

void APracticeTrap_C::OnRep_CurrentTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.TrapItem.OnRep_CurrentTrigger");

	APracticeTrap_C_OnRep_CurrentTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.TrapItem.OnLocalPrisonerSpawned
// ()
// Parameters:
// class APrisoner**              Prisoner                       (Parm, ZeroConstructor, IsPlainOldData)

void APracticeTrap_C::OnLocalPrisonerSpawned(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.TrapItem.OnLocalPrisonerSpawned");

	APracticeTrap_C_OnLocalPrisonerSpawned_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.TrapItem.OnActorDestroyTimer
// ()

void APracticeTrap_C::OnActorDestroyTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.TrapItem.OnActorDestroyTimer");

	APracticeTrap_C_OnActorDestroyTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.TrapItem.NetMulticast_TriggerTrap
// ()
// Parameters:
// struct FTrapTriggerParams*     Params                         (ConstParm, Parm, ReferenceParm)

void APracticeTrap_C::NetMulticast_TriggerTrap(struct FTrapTriggerParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.TrapItem.NetMulticast_TriggerTrap");

	APracticeTrap_C_NetMulticast_TriggerTrap_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.TrapItem.IsBuried
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APracticeTrap_C::IsBuried()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.TrapItem.IsBuried");

	APracticeTrap_C_IsBuried_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.TrapItem.IsArmed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APracticeTrap_C::IsArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.TrapItem.IsArmed");

	APracticeTrap_C_IsArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.TrapItem.BP_OnTriggered
// ()

void APracticeTrap_C::BP_OnTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.TrapItem.BP_OnTriggered");

	APracticeTrap_C_BP_OnTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.TrapItem.BP_OnRefueled
// ()

void APracticeTrap_C::BP_OnRefueled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.TrapItem.BP_OnRefueled");

	APracticeTrap_C_BP_OnRefueled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.TrapItem.BP_OnDisarmed
// ()

void APracticeTrap_C::BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.TrapItem.BP_OnDisarmed");

	APracticeTrap_C_BP_OnDisarmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.TrapItem.BP_OnArmed
// ()

void APracticeTrap_C::BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.TrapItem.BP_OnArmed");

	APracticeTrap_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
