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

// Function UI_CraftingPanel.UI_CraftingPanel_C.GetColorAndOpacity_1
// (Net, NetRequest, Exec, Native, Static, Public, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_CraftingPanel_C::STATIC_GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.GetColorAndOpacity_1");

	UUI_CraftingPanel_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.GetbIsEnabled_1
// (Net, Event, NetResponse, NetMulticast, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_CraftingPanel_C::GetbIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.GetbIsEnabled_1");

	UUI_CraftingPanel_C_GetbIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.GetIsCraftButtonEnabled
// (NetReliable, Static, Public, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_CraftingPanel_C::STATIC_GetIsCraftButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.GetIsCraftButtonEnabled");

	UUI_CraftingPanel_C_GetIsCraftButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.UpdateParameter
// (NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URetainerBox**           RetainerBox                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget**                Box                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CraftingPanel_C::UpdateParameter(class URetainerBox** RetainerBox, class UWidget** Box)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.UpdateParameter");

	UUI_CraftingPanel_C_UpdateParameter_Params params;
	params.RetainerBox = RetainerBox;
	params.Box = Box;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__VicinityContainer_K2Node_ComponentBoundEvent_19_OnExpandChanged__DelegateSignature
// (Event, Static, Public, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class UUI_ExpandableContainer_C** container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsMinimized                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingPanel_C::STATIC_BndEvt__VicinityContainer_K2Node_ComponentBoundEvent_19_OnExpandChanged__DelegateSignature(class UUI_ExpandableContainer_C** container, bool* IsMinimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__VicinityContainer_K2Node_ComponentBoundEvent_19_OnExpandChanged__DelegateSignature");

	UUI_CraftingPanel_C_BndEvt__VicinityContainer_K2Node_ComponentBoundEvent_19_OnExpandChanged__DelegateSignature_Params params;
	params.container = container;
	params.IsMinimized = IsMinimized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__InventoryContainer_K2Node_ComponentBoundEvent_18_OnExpandChanged__DelegateSignature
// (NetReliable, NetRequest, Exec, Static, Public, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class UUI_ExpandableContainer_C** container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsMinimized                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingPanel_C::STATIC_BndEvt__InventoryContainer_K2Node_ComponentBoundEvent_18_OnExpandChanged__DelegateSignature(class UUI_ExpandableContainer_C** container, bool* IsMinimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__InventoryContainer_K2Node_ComponentBoundEvent_18_OnExpandChanged__DelegateSignature");

	UUI_CraftingPanel_C_BndEvt__InventoryContainer_K2Node_ComponentBoundEvent_18_OnExpandChanged__DelegateSignature_Params params;
	params.container = container;
	params.IsMinimized = IsMinimized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature
// (NetRequest, Exec, Native, NetResponse, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CraftingPanel_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature");

	UUI_CraftingPanel_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.ShowPlaceableCraftingConfirmationForCraftingIndex
// (Net, NetReliable, Exec, Native, NetResponse, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingPanel_C::ShowPlaceableCraftingConfirmationForCraftingIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.ShowPlaceableCraftingConfirmationForCraftingIndex");

	UUI_CraftingPanel_C_ShowPlaceableCraftingConfirmationForCraftingIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.OnCraftingConfirmationDismissed
// (Net, NetReliable, Exec, Native, NetResponse, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CraftingPanel_C::OnCraftingConfirmationDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.OnCraftingConfirmationDismissed");

	UUI_CraftingPanel_C_OnCraftingConfirmationDismissed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__CraftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (NetReliable, Exec, Native, NetResponse, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CraftingPanel_C::BndEvt__CraftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__CraftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UUI_CraftingPanel_C_BndEvt__CraftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
// (Net, Exec, Native, NetResponse, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CraftingPanel_C::BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");

	UUI_CraftingPanel_C_BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__CraftButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (Net, NetRequest, Native, NetResponse, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CraftingPanel_C::BndEvt__CraftButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__CraftButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UUI_CraftingPanel_C_BndEvt__CraftButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.Tick
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingPanel_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.Tick");

	UUI_CraftingPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.ExecuteUbergraph_UI_CraftingPanel
// (Net, NetRequest, Exec, Native, Event, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingPanel_C::STATIC_ExecuteUbergraph_UI_CraftingPanel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.ExecuteUbergraph_UI_CraftingPanel");

	UUI_CraftingPanel_C_ExecuteUbergraph_UI_CraftingPanel_Params params;
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
