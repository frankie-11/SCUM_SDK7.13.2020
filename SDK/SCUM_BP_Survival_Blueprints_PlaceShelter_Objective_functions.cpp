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

// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.GetPrisoner
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrisoner*               Prisoner                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Blueprints_PlaceShelter_Objective_C::STATIC_GetPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.GetPrisoner");

	ABP_Survival_Blueprints_PlaceShelter_Objective_C_GetPrisoner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Prisoner != nullptr)
		*Prisoner = params.Prisoner;
}


// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.AddToDialogueQueue
// (Net, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EDialogEvent*                  DialogueEvent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Blueprints_PlaceShelter_Objective_C::STATIC_AddToDialogueQueue(EDialogEvent* DialogueEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.AddToDialogueQueue");

	ABP_Survival_Blueprints_PlaceShelter_Objective_C_AddToDialogueQueue_Params params;
	params.DialogueEvent = DialogueEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnObjectiveStarted
// (Net, NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_Survival_Blueprints_PlaceShelter_Objective_C::OnObjectiveStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnObjectiveStarted");

	ABP_Survival_Blueprints_PlaceShelter_Objective_C_OnObjectiveStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnTabModeOpened
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETabMode*                      tabMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Blueprints_PlaceShelter_Objective_C::OnTabModeOpened(ETabMode* tabMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnTabModeOpened");

	ABP_Survival_Blueprints_PlaceShelter_Objective_C_OnTabModeOpened_Params params;
	params.tabMode = tabMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Blueprints_PlaceShelter_Objective_C::STATIC_ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective");

	ABP_Survival_Blueprints_PlaceShelter_Objective_C_ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective_Params params;
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
