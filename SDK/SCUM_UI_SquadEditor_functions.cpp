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

// Function UI_SquadEditor.UI_SquadEditor_C.GetBlackVisibility
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_SquadEditor_C::STATIC_GetBlackVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.GetBlackVisibility");

	UUI_SquadEditor_C_GetBlackVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_InformationTextBox
// (Net, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_SquadEditor_C::STATIC_OnMouseButtonDown_InformationTextBox(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_InformationTextBox");

	UUI_SquadEditor_C_OnMouseButtonDown_InformationTextBox_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SquadEditor.UI_SquadEditor_C.UpdateOptions
// (NetReliable, Native, Event, NetResponse, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void UUI_SquadEditor_C::UpdateOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.UpdateOptions");

	UUI_SquadEditor_C_UpdateOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_MessageTextBox
// (NetReliable, NetRequest, Native, NetResponse, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_SquadEditor_C::STATIC_OnMouseButtonDown_MessageTextBox(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_MessageTextBox");

	UUI_SquadEditor_C_OnMouseButtonDown_MessageTextBox_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SquadEditor.UI_SquadEditor_C.LoadData
// (Net, NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void UUI_SquadEditor_C::LoadData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.LoadData");

	UUI_SquadEditor_C_LoadData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.LoadEmblem
// (Net, NetReliable, Native, NetResponse, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FConZSquadEmblem*       emblem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadEditor_C::STATIC_LoadEmblem(struct FConZSquadEmblem* emblem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.LoadEmblem");

	UUI_SquadEditor_C_LoadEmblem_Params params;
	params.emblem = emblem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.SaveData
// (NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void UUI_SquadEditor_C::SaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.SaveData");

	UUI_SquadEditor_C_SaveData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.EmblemUpdate
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UDropdownMenuSelectionWidget** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SquadEditor_C::EmblemUpdate(class UDropdownMenuSelectionWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.EmblemUpdate");

	UUI_SquadEditor_C_EmblemUpdate_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.ColorClicked
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UDropdownMenuSelectionWidget** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SquadEditor_C::STATIC_ColorClicked(class UDropdownMenuSelectionWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.ColorClicked");

	UUI_SquadEditor_C_ColorClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.SymbolClicked
// (Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// class UDropdownMenuSelectionWidget** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SquadEditor_C::STATIC_SymbolClicked(class UDropdownMenuSelectionWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.SymbolClicked");

	UUI_SquadEditor_C_SymbolClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.BackgroundClicked
// (NetReliable, Event, NetResponse, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UDropdownMenuSelectionWidget** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SquadEditor_C::STATIC_BackgroundClicked(class UDropdownMenuSelectionWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BackgroundClicked");

	UUI_SquadEditor_C_BackgroundClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.Construct
// (Net, NetReliable, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SquadEditor_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.Construct");

	UUI_SquadEditor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (NetReliable, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SquadEditor_C::STATIC_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadEditor_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (Net, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SquadEditor_C::STATIC_BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadEditor_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
// (NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_SquadEditor_C::STATIC_BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");

	UUI_SquadEditor_C_BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature
// (NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_SquadEditor_C::STATIC_BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature");

	UUI_SquadEditor_C_BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature
// (Net, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetClient, BlueprintCallable)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_SquadEditor_C::BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature");

	UUI_SquadEditor_C_BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.ExecuteUbergraph_UI_SquadEditor
// (Exec, Native, NetResponse, NetMulticast, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadEditor_C::ExecuteUbergraph_UI_SquadEditor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.ExecuteUbergraph_UI_SquadEditor");

	UUI_SquadEditor_C_ExecuteUbergraph_UI_SquadEditor_Params params;
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
