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

// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.UnbindItemClicked
// (Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FScriptDelegate*        Delegate                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::UnbindItemClicked(struct FScriptDelegate* Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.UnbindItemClicked");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_UnbindItemClicked_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.UnbindTabModeOpened
// (Net, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FScriptDelegate*        Delegate                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::UnbindTabModeOpened(struct FScriptDelegate* Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.UnbindTabModeOpened");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_UnbindTabModeOpened_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.GetPrisoner
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class APrisoner*               AsPrisoner                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::GetPrisoner(class APrisoner** AsPrisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.GetPrisoner");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_GetPrisoner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsPrisoner != nullptr)
		*AsPrisoner = params.AsPrisoner;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.AddToDialogueQueue
// (NetRequest, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// EDialogEvent*                  dialogEvent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::STATIC_AddToDialogueQueue(EDialogEvent* dialogEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.AddToDialogueQueue");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_AddToDialogueQueue_Params params;
	params.dialogEvent = dialogEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveStarted
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, HasDefaults)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::STATIC_OnObjectiveStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveStarted");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnObjectiveStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnTabModeOpened
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, HasDefaults)
// Parameters:
// ETabMode*                      tabMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::STATIC_OnTabModeOpened(ETabMode* tabMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnTabModeOpened");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnTabModeOpened_Params params;
	params.tabMode = tabMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.CraftingTabOpened
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, HasDefaults)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::STATIC_CraftingTabOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.CraftingTabOpened");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_CraftingTabOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.CraftingItemClicked
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, HasDefaults)
// Parameters:
// class UCraftableItem**         CraftableItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::STATIC_CraftingItemClicked(class UCraftableItem** CraftableItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.CraftingItemClicked");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_CraftingItemClicked_Params params;
	params.CraftableItem = CraftableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveCompleted
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, HasDefaults)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::STATIC_OnObjectiveCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveCompleted");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnObjectiveCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveFailed
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, HasDefaults)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::STATIC_OnObjectiveFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveFailed");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnObjectiveFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveBelated
// (Net, NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, HasDefaults)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::STATIC_OnObjectiveBelated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveBelated");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnObjectiveBelated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.ExecuteUbergraph_BP_Survival_Tutorial_CraftStoneKnifeObjective
// (Net, NetRequest, Exec, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::STATIC_ExecuteUbergraph_BP_Survival_Tutorial_CraftStoneKnifeObjective(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.ExecuteUbergraph_BP_Survival_Tutorial_CraftStoneKnifeObjective");

	ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_ExecuteUbergraph_BP_Survival_Tutorial_CraftStoneKnifeObjective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
