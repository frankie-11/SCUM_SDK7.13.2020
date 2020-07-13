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

// Function OptionsWidget.OptionsWidget_C.AnyValueChanged
// (Net, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool*                          ChangeToCustom                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsWidget_C::AnyValueChanged(bool* ChangeToCustom)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.AnyValueChanged");

	UOptionsWidget_C_AnyValueChanged_Params params;
	params.ChangeToCustom = ChangeToCustom;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.IsApplyButtonEnabled
// (Net, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOptionsWidget_C::IsApplyButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.IsApplyButtonEnabled");

	UOptionsWidget_C_IsApplyButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsWidget.OptionsWidget_C.OnMouseButtonDoubleClick
// (NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptionsWidget_C::OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnMouseButtonDoubleClick");

	UOptionsWidget_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsWidget.OptionsWidget_C.OnMouseButtonDown
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptionsWidget_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnMouseButtonDown");

	UOptionsWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsWidget.OptionsWidget_C.OnMouseWheel
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptionsWidget_C::STATIC_OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnMouseWheel");

	UOptionsWidget_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsWidget.OptionsWidget_C.OnPreviewKeyDown
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptionsWidget_C::STATIC_OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnPreviewKeyDown");

	UOptionsWidget_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsWidget.OptionsWidget_C.OnPreviewMouseButtonDown
// (NetReliable, Exec, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptionsWidget_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnPreviewMouseButtonDown");

	UOptionsWidget_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsWidget.OptionsWidget_C.SetDynamicShadowsQuality
// (Net, NetReliable, Native, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsWidget_C::SetDynamicShadowsQuality(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.SetDynamicShadowsQuality");

	UOptionsWidget_C_SetDynamicShadowsQuality_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.UpdateSupportedResolutions
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// bool*                          Fullscreen                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsWidget_C::STATIC_UpdateSupportedResolutions(bool* Fullscreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.UpdateSupportedResolutions");

	UOptionsWidget_C_UpdateSupportedResolutions_Params params;
	params.Fullscreen = Fullscreen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.ToggleCategory
// (Net, NetReliable, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUI_MenuButton_C**       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsWidget_C::STATIC_ToggleCategory(class UWidget** Widget, class UUI_MenuButton_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.ToggleCategory");

	UOptionsWidget_C_ToggleCategory_Params params;
	params.Widget = Widget;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.SnapSlider
// (Net, NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// class USlider**                Slider                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           Steps                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsWidget_C::SnapSlider(class USlider** Slider, int* Steps, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.SnapSlider");

	UOptionsWidget_C_SnapSlider_Params params;
	params.Slider = Slider;
	params.Steps = Steps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function OptionsWidget.OptionsWidget_C.Construct
// (NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.Construct");

	UOptionsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_418_OnSelectionChangedEvent__DelegateSignature
// (Native, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsWidget_C::BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_418_OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_418_OnSelectionChangedEvent__DelegateSignature");

	UOptionsWidget_C_BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_418_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__UI_MenuButton_C_163_K2Node_ComponentBoundEvent_1476_OnClicked__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::BndEvt__UI_MenuButton_C_163_K2Node_ComponentBoundEvent_1476_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__UI_MenuButton_C_163_K2Node_ComponentBoundEvent_1476_OnClicked__DelegateSignature");

	UOptionsWidget_C_BndEvt__UI_MenuButton_C_163_K2Node_ComponentBoundEvent_1476_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__UI_MenuButton_C_164_K2Node_ComponentBoundEvent_1498_OnClicked__DelegateSignature
// (Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::BndEvt__UI_MenuButton_C_164_K2Node_ComponentBoundEvent_1498_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__UI_MenuButton_C_164_K2Node_ComponentBoundEvent_1498_OnClicked__DelegateSignature");

	UOptionsWidget_C_BndEvt__UI_MenuButton_C_164_K2Node_ComponentBoundEvent_1498_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__Shadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature
// (NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__Shadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__Shadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__Shadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__PostProcessing_K2Node_ComponentBoundEvent_1496_OnValueChanged__DelegateSignature
// (Net, NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__PostProcessing_K2Node_ComponentBoundEvent_1496_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__PostProcessing_K2Node_ComponentBoundEvent_1496_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__PostProcessing_K2Node_ComponentBoundEvent_1496_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_1529_OnValueChanged__DelegateSignature
// (Net, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::STATIC_BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_1529_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_1529_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_1529_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__Effects_K2Node_ComponentBoundEvent_1613_OnValueChanged__DelegateSignature
// (Net, NetReliable, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__Effects_K2Node_ComponentBoundEvent_1613_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__Effects_K2Node_ComponentBoundEvent_1613_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__Effects_K2Node_ComponentBoundEvent_1613_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__Textures_K2Node_ComponentBoundEvent_1648_OnValueChanged__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__Textures_K2Node_ComponentBoundEvent_1648_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__Textures_K2Node_ComponentBoundEvent_1648_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__Textures_K2Node_ComponentBoundEvent_1648_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_1738_OnValueChanged__DelegateSignature
// (NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_1738_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_1738_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_1738_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ViewDistance_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__ViewDistance_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ViewDistance_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__ViewDistance_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__LightFunctions_K2Node_ComponentBoundEvent_1294_OnValueChanged__DelegateSignature
// (NetReliable, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__LightFunctions_K2Node_ComponentBoundEvent_1294_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__LightFunctions_K2Node_ComponentBoundEvent_1294_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__LightFunctions_K2Node_ComponentBoundEvent_1294_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ShadowPrecision_K2Node_ComponentBoundEvent_1319_OnValueChanged__DelegateSignature
// (Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__ShadowPrecision_K2Node_ComponentBoundEvent_1319_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ShadowPrecision_K2Node_ComponentBoundEvent_1319_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__ShadowPrecision_K2Node_ComponentBoundEvent_1319_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ShadowResolution_K2Node_ComponentBoundEvent_1345_OnValueChanged__DelegateSignature
// (Net, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__ShadowResolution_K2Node_ComponentBoundEvent_1345_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ShadowResolution_K2Node_ComponentBoundEvent_1345_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__ShadowResolution_K2Node_ComponentBoundEvent_1345_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__DistanceFieldShadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature
// (NetReliable, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::STATIC_BndEvt__DistanceFieldShadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__DistanceFieldShadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__DistanceFieldShadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__DFAO_K2Node_ComponentBoundEvent_1401_OnValueChanged__DelegateSignature
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__DFAO_K2Node_ComponentBoundEvent_1401_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__DFAO_K2Node_ComponentBoundEvent_1401_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__DFAO_K2Node_ComponentBoundEvent_1401_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__RefractionQuality_K2Node_ComponentBoundEvent_1430_OnValueChanged__DelegateSignature
// (NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__RefractionQuality_K2Node_ComponentBoundEvent_1430_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__RefractionQuality_K2Node_ComponentBoundEvent_1430_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__RefractionQuality_K2Node_ComponentBoundEvent_1430_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ReflectionEnvironmentMapping_K2Node_ComponentBoundEvent_1460_OnValueChanged__DelegateSignature
// (Net, NetReliable, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__ReflectionEnvironmentMapping_K2Node_ComponentBoundEvent_1460_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ReflectionEnvironmentMapping_K2Node_ComponentBoundEvent_1460_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__ReflectionEnvironmentMapping_K2Node_ComponentBoundEvent_1460_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__TranslucencyVolumeBlur_K2Node_ComponentBoundEvent_1491_OnValueChanged__DelegateSignature
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::STATIC_BndEvt__TranslucencyVolumeBlur_K2Node_ComponentBoundEvent_1491_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__TranslucencyVolumeBlur_K2Node_ComponentBoundEvent_1491_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__TranslucencyVolumeBlur_K2Node_ComponentBoundEvent_1491_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__HighDetailMaterials_K2Node_ComponentBoundEvent_1523_OnValueChanged__DelegateSignature
// (Net, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__HighDetailMaterials_K2Node_ComponentBoundEvent_1523_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__HighDetailMaterials_K2Node_ComponentBoundEvent_1523_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__HighDetailMaterials_K2Node_ComponentBoundEvent_1523_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__DepthOfFieldQuality_K2Node_ComponentBoundEvent_1556_OnValueChanged__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__DepthOfFieldQuality_K2Node_ComponentBoundEvent_1556_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__DepthOfFieldQuality_K2Node_ComponentBoundEvent_1556_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__DepthOfFieldQuality_K2Node_ComponentBoundEvent_1556_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__LensFlareQuality_K2Node_ComponentBoundEvent_1590_OnValueChanged__DelegateSignature
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__LensFlareQuality_K2Node_ComponentBoundEvent_1590_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__LensFlareQuality_K2Node_ComponentBoundEvent_1590_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__LensFlareQuality_K2Node_ComponentBoundEvent_1590_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ColorFringeQuality_K2Node_ComponentBoundEvent_1625_OnValueChanged__DelegateSignature
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__ColorFringeQuality_K2Node_ComponentBoundEvent_1625_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ColorFringeQuality_K2Node_ComponentBoundEvent_1625_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__ColorFringeQuality_K2Node_ComponentBoundEvent_1625_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__BloomQuality_K2Node_ComponentBoundEvent_1661_OnValueChanged__DelegateSignature
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__BloomQuality_K2Node_ComponentBoundEvent_1661_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__BloomQuality_K2Node_ComponentBoundEvent_1661_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__BloomQuality_K2Node_ComponentBoundEvent_1661_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__FastBlurTreshold_K2Node_ComponentBoundEvent_1698_OnValueChanged__DelegateSignature
// (NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__FastBlurTreshold_K2Node_ComponentBoundEvent_1698_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__FastBlurTreshold_K2Node_ComponentBoundEvent_1698_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__FastBlurTreshold_K2Node_ComponentBoundEvent_1698_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__TonemapperQuality_K2Node_ComponentBoundEvent_1736_OnValueChanged__DelegateSignature
// (NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__TonemapperQuality_K2Node_ComponentBoundEvent_1736_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__TonemapperQuality_K2Node_ComponentBoundEvent_1736_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__TonemapperQuality_K2Node_ComponentBoundEvent_1736_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__LightShaftQuality_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature
// (NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__LightShaftQuality_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__LightShaftQuality_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__LightShaftQuality_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__SeparateTranslucencyPass_K2Node_ComponentBoundEvent_1816_OnValueChanged__DelegateSignature
// (NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__SeparateTranslucencyPass_K2Node_ComponentBoundEvent_1816_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__SeparateTranslucencyPass_K2Node_ComponentBoundEvent_1816_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__SeparateTranslucencyPass_K2Node_ComponentBoundEvent_1816_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__TonemapperFilm_K2Node_ComponentBoundEvent_1857_OnValueChanged__DelegateSignature
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__TonemapperFilm_K2Node_ComponentBoundEvent_1857_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__TonemapperFilm_K2Node_ComponentBoundEvent_1857_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__TonemapperFilm_K2Node_ComponentBoundEvent_1857_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__Fullscreen_K2Node_ComponentBoundEvent_608_OnValueChanged__DelegateSignature
// (NetReliable, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::STATIC_BndEvt__Fullscreen_K2Node_ComponentBoundEvent_608_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__Fullscreen_K2Node_ComponentBoundEvent_608_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__Fullscreen_K2Node_ComponentBoundEvent_608_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__FoliageQuality_K2Node_ComponentBoundEvent_1609_OnValueChanged__DelegateSignature
// (NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::STATIC_BndEvt__FoliageQuality_K2Node_ComponentBoundEvent_1609_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__FoliageQuality_K2Node_ComponentBoundEvent_1609_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__FoliageQuality_K2Node_ComponentBoundEvent_1609_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__AmbientSoundSlider_K2Node_ComponentBoundEvent_1291_OnValueChanged__DelegateSignature
// (NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::STATIC_BndEvt__AmbientSoundSlider_K2Node_ComponentBoundEvent_1291_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__AmbientSoundSlider_K2Node_ComponentBoundEvent_1291_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__AmbientSoundSlider_K2Node_ComponentBoundEvent_1291_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__SoundButton_K2Node_ComponentBoundEvent_2008_OnClicked__DelegateSignature
// (Net, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::BndEvt__SoundButton_K2Node_ComponentBoundEvent_2008_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__SoundButton_K2Node_ComponentBoundEvent_2008_OnClicked__DelegateSignature");

	UOptionsWidget_C_BndEvt__SoundButton_K2Node_ComponentBoundEvent_2008_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__VideoButton_K2Node_ComponentBoundEvent_2041_OnClicked__DelegateSignature
// (NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::BndEvt__VideoButton_K2Node_ComponentBoundEvent_2041_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__VideoButton_K2Node_ComponentBoundEvent_2041_OnClicked__DelegateSignature");

	UOptionsWidget_C_BndEvt__VideoButton_K2Node_ComponentBoundEvent_2041_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__DynamicShadowQualitySlider_K2Node_ComponentBoundEvent_236_OnValueChanged__DelegateSignature
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__DynamicShadowQualitySlider_K2Node_ComponentBoundEvent_236_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__DynamicShadowQualitySlider_K2Node_ComponentBoundEvent_236_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__DynamicShadowQualitySlider_K2Node_ComponentBoundEvent_236_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_825_OnClicked__DelegateSignature
// (NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::BndEvt__ControlsButton_K2Node_ComponentBoundEvent_825_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_825_OnClicked__DelegateSignature");

	UOptionsWidget_C_BndEvt__ControlsButton_K2Node_ComponentBoundEvent_825_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnKeyRebound
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FName*                  ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey*                   actionKey                      (BlueprintVisible, BlueprintReadOnly, Parm)
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsWidget_C::OnKeyRebound(struct FName* ActionName, struct FKey* actionKey, float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnKeyRebound");

	UOptionsWidget_C_OnKeyRebound_Params params;
	params.ActionName = ActionName;
	params.actionKey = actionKey;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__UI_OptionsSlider_K2Node_ComponentBoundEvent_667_OnValueChanged__DelegateSignature
// (Net, NetRequest, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::STATIC_BndEvt__UI_OptionsSlider_K2Node_ComponentBoundEvent_667_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__UI_OptionsSlider_K2Node_ComponentBoundEvent_667_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__UI_OptionsSlider_K2Node_ComponentBoundEvent_667_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnKeyRebindInitiated
// (Net, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UUI_KeyBinding_C**       keyBindingWidget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsWidget_C::OnKeyRebindInitiated(class UUI_KeyBinding_C** keyBindingWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnKeyRebindInitiated");

	UOptionsWidget_C_OnKeyRebindInitiated_Params params;
	params.keyBindingWidget = keyBindingWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnAxisRebound
// (Net, NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// struct FName*                  ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey*                   actionKey                      (BlueprintVisible, BlueprintReadOnly, Parm)
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsWidget_C::STATIC_OnAxisRebound(struct FName* ActionName, struct FKey* actionKey, float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnAxisRebound");

	UOptionsWidget_C_OnAxisRebound_Params params;
	params.ActionName = ActionName;
	params.actionKey = actionKey;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnApplyYes
// (Net, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::OnApplyYes()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnApplyYes");

	UOptionsWidget_C_OnApplyYes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnApplyNo
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::OnApplyNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnApplyNo");

	UOptionsWidget_C_OnApplyNo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnCancelYes
// (Net, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::OnCancelYes()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnCancelYes");

	UOptionsWidget_C_OnCancelYes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnCancelNo
// (NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::OnCancelNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnCancelNo");

	UOptionsWidget_C_OnCancelNo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnESC
// (Net, NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::OnESC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnESC");

	UOptionsWidget_C_OnESC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MasterSoundSlider_K2Node_ComponentBoundEvent_110_OnValueChanged__DelegateSignature
// (Net, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::STATIC_BndEvt__MasterSoundSlider_K2Node_ComponentBoundEvent_110_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MasterSoundSlider_K2Node_ComponentBoundEvent_110_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__MasterSoundSlider_K2Node_ComponentBoundEvent_110_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MusicSoundIntensitySlider_K2Node_ComponentBoundEvent_111_OnValueChanged__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::STATIC_BndEvt__MusicSoundIntensitySlider_K2Node_ComponentBoundEvent_111_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MusicSoundIntensitySlider_K2Node_ComponentBoundEvent_111_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__MusicSoundIntensitySlider_K2Node_ComponentBoundEvent_111_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__EffectsSoundIntensitySlider_K2Node_ComponentBoundEvent_149_OnValueChanged__DelegateSignature
// (Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__EffectsSoundIntensitySlider_K2Node_ComponentBoundEvent_149_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__EffectsSoundIntensitySlider_K2Node_ComponentBoundEvent_149_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__EffectsSoundIntensitySlider_K2Node_ComponentBoundEvent_149_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__GraphicsPreset_K2Node_ComponentBoundEvent_450_OnValueChanged__DelegateSignature
// (Net, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::STATIC_BndEvt__GraphicsPreset_K2Node_ComponentBoundEvent_450_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__GraphicsPreset_K2Node_ComponentBoundEvent_450_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__GraphicsPreset_K2Node_ComponentBoundEvent_450_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MotionBlur_K2Node_ComponentBoundEvent_172_OnValueChanged__DelegateSignature
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::STATIC_BndEvt__MotionBlur_K2Node_ComponentBoundEvent_172_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MotionBlur_K2Node_ComponentBoundEvent_172_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__MotionBlur_K2Node_ComponentBoundEvent_172_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ResetToDefaultControlsButton_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature
// (NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::BndEvt__ResetToDefaultControlsButton_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ResetToDefaultControlsButton_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature");

	UOptionsWidget_C_BndEvt__ResetToDefaultControlsButton_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnResetControlsNo
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::OnResetControlsNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnResetControlsNo");

	UOptionsWidget_C_OnResetControlsNo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.OnResetControlsYes
// (Net, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::OnResetControlsYes()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnResetControlsYes");

	UOptionsWidget_C_OnResetControlsYes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.InitKeyBindings
// (Net, NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::InitKeyBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.InitKeyBindings");

	UOptionsWidget_C_InitKeyBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__UI_OptionsSlider_0_K2Node_ComponentBoundEvent_45_OnValueChanged__DelegateSignature
// (Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::STATIC_BndEvt__UI_OptionsSlider_0_K2Node_ComponentBoundEvent_45_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__UI_OptionsSlider_0_K2Node_ComponentBoundEvent_45_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__UI_OptionsSlider_0_K2Node_ComponentBoundEvent_45_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityTP_K2Node_ComponentBoundEvent_61_MouseUp__DelegateSignature
// (NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::BndEvt__MouseSensitivityTP_K2Node_ComponentBoundEvent_61_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityTP_K2Node_ComponentBoundEvent_61_MouseUp__DelegateSignature");

	UOptionsWidget_C_BndEvt__MouseSensitivityTP_K2Node_ComponentBoundEvent_61_MouseUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityFP_K2Node_ComponentBoundEvent_70_MouseUp__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::BndEvt__MouseSensitivityFP_K2Node_ComponentBoundEvent_70_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityFP_K2Node_ComponentBoundEvent_70_MouseUp__DelegateSignature");

	UOptionsWidget_C_BndEvt__MouseSensitivityFP_K2Node_ComponentBoundEvent_70_MouseUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityDTS_K2Node_ComponentBoundEvent_126_MouseUp__DelegateSignature
// (Net, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::BndEvt__MouseSensitivityDTS_K2Node_ComponentBoundEvent_126_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityDTS_K2Node_ComponentBoundEvent_126_MouseUp__DelegateSignature");

	UOptionsWidget_C_BndEvt__MouseSensitivityDTS_K2Node_ComponentBoundEvent_126_MouseUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityScope_K2Node_ComponentBoundEvent_182_MouseUp__DelegateSignature
// (NetReliable, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::BndEvt__MouseSensitivityScope_K2Node_ComponentBoundEvent_182_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityScope_K2Node_ComponentBoundEvent_182_MouseUp__DelegateSignature");

	UOptionsWidget_C_BndEvt__MouseSensitivityScope_K2Node_ComponentBoundEvent_182_MouseUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.RefreshAllOptionSliders
// (Net, NetReliable, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::RefreshAllOptionSliders()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.RefreshAllOptionSliders");

	UOptionsWidget_C_RefreshAllOptionSliders_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__EnablePushToTalkSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
// (Net, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::STATIC_BndEvt__EnablePushToTalkSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__EnablePushToTalkSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__EnablePushToTalkSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ConcealedMode_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::STATIC_BndEvt__ConcealedMode_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ConcealedMode_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__ConcealedMode_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__RealTimeRadiosity_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
// (Exec, Static, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::STATIC_BndEvt__RealTimeRadiosity_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__RealTimeRadiosity_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__RealTimeRadiosity_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__FOVSlider_K2Node_ComponentBoundEvent_4_MouseUp__DelegateSignature
// (Net, NetReliable, Event, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UOptionsWidget_C::BndEvt__FOVSlider_K2Node_ComponentBoundEvent_4_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__FOVSlider_K2Node_ComponentBoundEvent_4_MouseUp__DelegateSignature");

	UOptionsWidget_C_BndEvt__FOVSlider_K2Node_ComponentBoundEvent_4_MouseUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__GameOptions_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::BndEvt__GameOptions_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__GameOptions_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UOptionsWidget_C_BndEvt__GameOptions_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ShowKillNotifications_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::STATIC_BndEvt__ShowKillNotifications_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ShowKillNotifications_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__ShowKillNotifications_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ShowAnnouncementMessages_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__ShowAnnouncementMessages_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ShowAnnouncementMessages_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__ShowAnnouncementMessages_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__VoiceChatSlider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature
// (Net, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__VoiceChatSlider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__VoiceChatSlider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__VoiceChatSlider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityDrone_K2Node_ComponentBoundEvent_10_MouseUp__DelegateSignature
// (Net, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::BndEvt__MouseSensitivityDrone_K2Node_ComponentBoundEvent_10_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityDrone_K2Node_ComponentBoundEvent_10_MouseUp__DelegateSignature");

	UOptionsWidget_C_BndEvt__MouseSensitivityDrone_K2Node_ComponentBoundEvent_10_MouseUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__VSync_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature
// (NetReliable, NetRequest, Native, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::BndEvt__VSync_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__VSync_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__VSync_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__AudioPanning_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature
// (NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::STATIC_BndEvt__AudioPanning_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__AudioPanning_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__AudioPanning_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ShowSimpleTooltipOnHover_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature
// (NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::STATIC_BndEvt__ShowSimpleTooltipOnHover_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ShowSimpleTooltipOnHover_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__ShowSimpleTooltipOnHover_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ShowAdditionalInfoOnWidget_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature
// (Net, NetReliable, Exec, Static, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsWidget_C::STATIC_BndEvt__ShowAdditionalInfoOnWidget_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ShowAdditionalInfoOnWidget_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature");

	UOptionsWidget_C_BndEvt__ShowAdditionalInfoOnWidget_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ThirdPersonFOVSlider_K2Node_ComponentBoundEvent_16_MouseUp__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::BndEvt__ThirdPersonFOVSlider_K2Node_ComponentBoundEvent_16_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ThirdPersonFOVSlider_K2Node_ComponentBoundEvent_16_MouseUp__DelegateSignature");

	UOptionsWidget_C_BndEvt__ThirdPersonFOVSlider_K2Node_ComponentBoundEvent_16_MouseUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__FirstPersonDrivingFOVSlider_K2Node_ComponentBoundEvent_17_MouseUp__DelegateSignature
// (Native, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::BndEvt__FirstPersonDrivingFOVSlider_K2Node_ComponentBoundEvent_17_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__FirstPersonDrivingFOVSlider_K2Node_ComponentBoundEvent_17_MouseUp__DelegateSignature");

	UOptionsWidget_C_BndEvt__FirstPersonDrivingFOVSlider_K2Node_ComponentBoundEvent_17_MouseUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ThirdPersonDrivingFOVSlider_K2Node_ComponentBoundEvent_18_MouseUp__DelegateSignature
// (NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::BndEvt__ThirdPersonDrivingFOVSlider_K2Node_ComponentBoundEvent_18_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ThirdPersonDrivingFOVSlider_K2Node_ComponentBoundEvent_18_MouseUp__DelegateSignature");

	UOptionsWidget_C_BndEvt__ThirdPersonDrivingFOVSlider_K2Node_ComponentBoundEvent_18_MouseUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityLockpicking_K2Node_ComponentBoundEvent_19_MouseUp__DelegateSignature
// (Net, NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOptionsWidget_C::BndEvt__MouseSensitivityLockpicking_K2Node_ComponentBoundEvent_19_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityLockpicking_K2Node_ComponentBoundEvent_19_MouseUp__DelegateSignature");

	UOptionsWidget_C_BndEvt__MouseSensitivityLockpicking_K2Node_ComponentBoundEvent_19_MouseUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsWidget.OptionsWidget_C.ExecuteUbergraph_OptionsWidget
// (NetReliable, Exec, NetResponse, Public, Private, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsWidget_C::ExecuteUbergraph_OptionsWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.ExecuteUbergraph_OptionsWidget");

	UOptionsWidget_C_ExecuteUbergraph_OptionsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
