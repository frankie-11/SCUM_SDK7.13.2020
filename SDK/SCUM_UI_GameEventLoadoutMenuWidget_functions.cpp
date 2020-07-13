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

// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.UpdateSlotSelection
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// class UUI_ItemSelectionSlotWidget_C** Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UItemSelection*>  Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_GameEventLoadoutMenuWidget_C::UpdateSlotSelection(class UUI_ItemSelectionSlotWidget_C** Slot, TArray<class UItemSelection*>* Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.UpdateSlotSelection");

	UUI_GameEventLoadoutMenuWidget_C_UpdateSlotSelection_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selection != nullptr)
		*Selection = params.Selection;
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.HasAnythingToSelect
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// bool                           HasAnythingToSelect            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventLoadoutMenuWidget_C::HasAnythingToSelect(bool* HasAnythingToSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.HasAnythingToSelect");

	UUI_GameEventLoadoutMenuWidget_C_HasAnythingToSelect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasAnythingToSelect != nullptr)
		*HasAnythingToSelect = params.HasAnythingToSelect;
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.SomethingSelected
// (NetReliable, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable)
// Parameters:
// bool                           everythingSelected             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventLoadoutMenuWidget_C::SomethingSelected(bool* everythingSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.SomethingSelected");

	UUI_GameEventLoadoutMenuWidget_C_SomethingSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (everythingSelected != nullptr)
		*everythingSelected = params.everythingSelected;
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.UpdatePossibleItems
// (NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)

void UUI_GameEventLoadoutMenuWidget_C::UpdatePossibleItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.UpdatePossibleItems");

	UUI_GameEventLoadoutMenuWidget_C_UpdatePossibleItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.ApplyLoadout
// (Net, NetRequest, Native, Event, NetResponse, NetMulticast, Private, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const, NetValidate)

void UUI_GameEventLoadoutMenuWidget_C::ApplyLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.ApplyLoadout");

	UUI_GameEventLoadoutMenuWidget_C_ApplyLoadout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)

void UUI_GameEventLoadoutMenuWidget_C::BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UUI_GameEventLoadoutMenuWidget_C_BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.Construct
// (Net, NetRequest, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)

void UUI_GameEventLoadoutMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.Construct");

	UUI_GameEventLoadoutMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.PreConstruct
// (Net, NetReliable, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventLoadoutMenuWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.PreConstruct");

	UUI_GameEventLoadoutMenuWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.ExecuteUbergraph_UI_GameEventLoadoutMenuWidget
// (NetReliable, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventLoadoutMenuWidget_C::ExecuteUbergraph_UI_GameEventLoadoutMenuWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.ExecuteUbergraph_UI_GameEventLoadoutMenuWidget");

	UUI_GameEventLoadoutMenuWidget_C_ExecuteUbergraph_UI_GameEventLoadoutMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
