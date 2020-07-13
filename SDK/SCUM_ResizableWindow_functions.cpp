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

// Function ResizableWindow.ResizableWindow_C.InitializeHUDMonitor
// (Net, Exec, Event, NetResponse, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FString*                displayLabelName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          footerV2Activity               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          enableResizability             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  titleToSet                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UHUD_C**                 parentHUDRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResizableWindow_C::STATIC_InitializeHUDMonitor(struct FString* displayLabelName, bool* footerV2Activity, bool* enableResizability, struct FText* titleToSet, class UHUD_C** parentHUDRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.InitializeHUDMonitor");

	UResizableWindow_C_InitializeHUDMonitor_Params params;
	params.displayLabelName = displayLabelName;
	params.footerV2Activity = footerV2Activity;
	params.enableResizability = enableResizability;
	params.titleToSet = titleToSet;
	params.parentHUDRef = parentHUDRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.SaveHUDLayout
// (NetReliable, NetRequest, Exec, NetResponse, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UResizableWindow_C::STATIC_SaveHUDLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SaveHUDLayout");

	UResizableWindow_C_SaveHUDLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.GetParentHUD
// (Net, NetRequest, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHUD_C*                  parentHUD                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResizableWindow_C::GetParentHUD(class UHUD_C** parentHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetParentHUD");

	UResizableWindow_C_GetParentHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (parentHUD != nullptr)
		*parentHUD = params.parentHUD;
}


// Function ResizableWindow.ResizableWindow_C.SetParentHUD
// (NetRequest, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHUD_C**                 parentHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResizableWindow_C::SetParentHUD(class UHUD_C** parentHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetParentHUD");

	UResizableWindow_C_SetParentHUD_Params params;
	params.parentHUD = parentHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.GetSize
// (Net, NetReliable, Native, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UResizableWindow_C::STATIC_GetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetSize");

	UResizableWindow_C_GetSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.GetPosition
// (Event, NetResponse, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UResizableWindow_C::STATIC_GetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetPosition");

	UResizableWindow_C_GetPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.AdjustPosition
// (NetReliable, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FVector2D*              positionToAdjust               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGeometry*              localGeometry                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::AdjustPosition(struct FVector2D* positionToAdjust, struct FGeometry* localGeometry, struct FVector2D* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AdjustPosition");

	UResizableWindow_C_AdjustPosition_Params params;
	params.positionToAdjust = positionToAdjust;
	params.localGeometry = localGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function ResizableWindow.ResizableWindow_C.MaximizeMinimizableWidgets
// (Net, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::STATIC_MaximizeMinimizableWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.MaximizeMinimizableWidgets");

	UResizableWindow_C_MaximizeMinimizableWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.HasAnyChildren
// (NetReliable, Exec, Native, NetResponse, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UPanelWidget**           PanelWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UResizableWindow_C::STATIC_HasAnyChildren(class UPanelWidget** PanelWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.HasAnyChildren");

	UResizableWindow_C_HasAnyChildren_Params params;
	params.PanelWidget = PanelWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClick
// (Net, NetReliable, Event, NetResponse, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UResizableWindow_C::STATIC_OnHeaderDoubleClick(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClick");

	UResizableWindow_C_OnHeaderDoubleClick_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.SetUpResizableWindowWithChildRef
// (Net, NetReliable, Native, Event, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UWindowsContent_C**      contentWidgetRef               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText*                  titleToSet                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UResizableWindow_C::STATIC_SetUpResizableWindowWithChildRef(class UWindowsContent_C** contentWidgetRef, struct FText* titleToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetUpResizableWindowWithChildRef");

	UResizableWindow_C_SetUpResizableWindowWithChildRef_Params params;
	params.contentWidgetRef = contentWidgetRef;
	params.titleToSet = titleToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.AdjustSizeToContent
// (NetReliable, Exec, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::AdjustSizeToContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AdjustSizeToContent");

	UResizableWindow_C_AdjustSizeToContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.SetSize
// (Net, Exec, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              newSize                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::SetSize(struct FVector2D* newSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetSize");

	UResizableWindow_C_SetSize_Params params;
	params.newSize = newSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.GetContentSize
// (NetRequest, Native, NetResponse, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector2D               contentSize                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::STATIC_GetContentSize(struct FVector2D* contentSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetContentSize");

	UResizableWindow_C_GetContentSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (contentSize != nullptr)
		*contentSize = params.contentSize;
}


// Function ResizableWindow.ResizableWindow_C.SetResizeEnableLocked
// (Net, Exec, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          enableResizability             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::SetResizeEnableLocked(bool* enableResizability)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetResizeEnableLocked");

	UResizableWindow_C_SetResizeEnableLocked_Params params;
	params.enableResizability = enableResizability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ActivateAlarmColor
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool*                          shouldActivateAlarmColor       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::STATIC_ActivateAlarmColor(bool* shouldActivateAlarmColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ActivateAlarmColor");

	UResizableWindow_C_ActivateAlarmColor_Params params;
	params.shouldActivateAlarmColor = shouldActivateAlarmColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ShowBorder
// (Exec, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::ShowBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ShowBorder");

	UResizableWindow_C_ShowBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.isResizableWindowSkills
// (Net, NetMulticast, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UResizableWindow_C::isResizableWindowSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.isResizableWindowSkills");

	UResizableWindow_C_isResizableWindowSkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.GetWindowsContentWidget
// (Net, NetReliable, NetRequest, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWindowsContent_C*       windowsContentWidget           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResizableWindow_C::GetWindowsContentWidget(class UWindowsContent_C** windowsContentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetWindowsContentWidget");

	UResizableWindow_C_GetWindowsContentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (windowsContentWidget != nullptr)
		*windowsContentWidget = params.windowsContentWidget;
}


// Function ResizableWindow.ResizableWindow_C.SetWindowsContentWidget
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWindowsContent_C**      windowsContentWidget           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResizableWindow_C::SetWindowsContentWidget(class UWindowsContent_C** windowsContentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetWindowsContentWidget");

	UResizableWindow_C_SetWindowsContentWidget_Params params;
	params.windowsContentWidget = windowsContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.SetFooterV2Activity
// (NetRequest, Exec, Event, NetResponse, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool*                          shouldBeActive                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::STATIC_SetFooterV2Activity(bool* shouldBeActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetFooterV2Activity");

	UResizableWindow_C_SetFooterV2Activity_Params params;
	params.shouldBeActive = shouldBeActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ResetFlags
// (NetReliable, Native, Event, NetResponse, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UResizableWindow_C::STATIC_ResetFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ResetFlags");

	UResizableWindow_C_ResetFlags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.Maximize
// (Net, NetRequest, Exec, NetResponse, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UResizableWindow_C::Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Maximize");

	UResizableWindow_C_Maximize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.Minimize
// (NetReliable, Exec, Event, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UResizableWindow_C::STATIC_Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Minimize");

	UResizableWindow_C_Minimize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.GetContentAreaSlotDesiredSize
// (NetRequest, Exec, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UResizableWindow_C::GetContentAreaSlotDesiredSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetContentAreaSlotDesiredSize");

	UResizableWindow_C_GetContentAreaSlotDesiredSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.SaveCurrentContentAreaSlotSize
// (NetReliable, NetRequest, Native, Event, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UResizableWindow_C::STATIC_SaveCurrentContentAreaSlotSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SaveCurrentContentAreaSlotSize");

	UResizableWindow_C_SaveCurrentContentAreaSlotSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.SetUpResizableWindow
// (NetRequest, Exec, Native, Event, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UClass**                 contentWidgetClass             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  titleToSet                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UResizableWindow_C::STATIC_SetUpResizableWindow(class UClass** contentWidgetClass, struct FText* titleToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetUpResizableWindow");

	UResizableWindow_C_SetUpResizableWindow_Params params;
	params.contentWidgetClass = contentWidgetClass;
	params.titleToSet = titleToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.Init
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UResizableWindow_C::STATIC_Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Init");

	UResizableWindow_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.SetContentWidgetClass
// (NetRequest, Exec, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 WindowsContentClass            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::SetContentWidgetClass(class UClass** WindowsContentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetContentWidgetClass");

	UResizableWindow_C_SetContentWidgetClass_Params params;
	params.WindowsContentClass = WindowsContentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.AttachContentWidgetRef
// (Net, Exec, Native, Event, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UWindowsContent_C**      contentWidgetRef               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResizableWindow_C::STATIC_AttachContentWidgetRef(class UWindowsContent_C** contentWidgetRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AttachContentWidgetRef");

	UResizableWindow_C_AttachContentWidgetRef_Params params;
	params.contentWidgetRef = contentWidgetRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.AttachContentWidget
// (NetReliable, NetResponse, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UClass**                 contentWidgetClass             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::STATIC_AttachContentWidget(class UClass** contentWidgetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AttachContentWidget");

	UResizableWindow_C_AttachContentWidget_Params params;
	params.contentWidgetClass = contentWidgetClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.CalculateMouseDelta
// (Net, NetRequest, NetResponse, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FPointerEvent*          localMouseEvent                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector2D*              lastMousePosition              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UResizableWindow_C::STATIC_CalculateMouseDelta(struct FPointerEvent* localMouseEvent, struct FVector2D* lastMousePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.CalculateMouseDelta");

	UResizableWindow_C_CalculateMouseDelta_Params params;
	params.localMouseEvent = localMouseEvent;
	params.lastMousePosition = lastMousePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.IsOffscreen
// (Net, Exec, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FPointerEvent*          Input                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UResizableWindow_C::IsOffscreen(struct FPointerEvent* Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.IsOffscreen");

	UResizableWindow_C_IsOffscreen_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.OnMouseButtonDownOnIRMinimize
// (Exec, NetResponse, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UResizableWindow_C::STATIC_OnMouseButtonDownOnIRMinimize(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMouseButtonDownOnIRMinimize");

	UResizableWindow_C_OnMouseButtonDownOnIRMinimize_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.SetResizeColorHover
// (Net, NetReliable, Exec, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::SetResizeColorHover(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetResizeColorHover");

	UResizableWindow_C_SetResizeColorHover_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ToggleDragEnabled
// (Net, Exec, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          DragEnabled                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::ToggleDragEnabled(bool* DragEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ToggleDragEnabled");

	UResizableWindow_C_ToggleDragEnabled_Params params;
	params.DragEnabled = DragEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ToggleResizeEnabled
// (Net, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ResizeEnabled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::ToggleResizeEnabled(bool* ResizeEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ToggleResizeEnabled");

	UResizableWindow_C_ToggleResizeEnabled_Params params;
	params.ResizeEnabled = ResizeEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.DetermineNewSize
// (NetRequest, Exec, Event, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FVector2D*              Original                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               New                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::DetermineNewSize(struct FVector2D* Original, struct FVector2D* Delta, struct FVector2D* New)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.DetermineNewSize");

	UResizableWindow_C_DetermineNewSize_Params params;
	params.Original = Original;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (New != nullptr)
		*New = params.New;
}


// Function ResizableWindow.ResizableWindow_C.MouseButtonUpEvent
// (Net, NetRequest, Event, Delegate, HasDefaults, NetClient, DLLImport)

void UResizableWindow_C::MouseButtonUpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.MouseButtonUpEvent");

	UResizableWindow_C_MouseButtonUpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ResetVariablesToDefault
// (NetReliable, NetRequest, Exec, Native, Delegate, HasDefaults, NetClient, DLLImport)

void UResizableWindow_C::ResetVariablesToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ResetVariablesToDefault");

	UResizableWindow_C_ResetVariablesToDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.OnResizeAreaMouseButtonDown
// (Net, NetReliable, NetRequest, Native, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UResizableWindow_C::OnResizeAreaMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnResizeAreaMouseButtonDown");

	UResizableWindow_C_OnResizeAreaMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.OnHeaderMouseButtonDown
// (Native, Event, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UResizableWindow_C::STATIC_OnHeaderMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnHeaderMouseButtonDown");

	UResizableWindow_C_OnHeaderMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.OnMouseMove
// (Native, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UResizableWindow_C::STATIC_OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMouseMove");

	UResizableWindow_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.OnMouseButtonUp
// (Net, Native, NetResponse, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UResizableWindow_C::STATIC_OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMouseButtonUp");

	UResizableWindow_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.Tick
// (NetReliable, Exec, NetResponse, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Tick");

	UResizableWindow_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_495_MouseLeft__DelegateSignature
// (Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_495_MouseLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_495_MouseLeft__DelegateSignature");

	UResizableWindow_C_BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_495_MouseLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_488_MouseEntered__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_488_MouseEntered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_488_MouseEntered__DelegateSignature");

	UResizableWindow_C_BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_488_MouseEntered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.Event RDA Monitor Size Changed
// (NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::Event_RDA_Monitor_Size_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Event RDA Monitor Size Changed");

	UResizableWindow_C_Event_RDA_Monitor_Size_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.AlarmOnWindowContent
// (Net, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AlarmOnWindowContent");

	UResizableWindow_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.AlarmOffWindowContent
// (Net, Exec, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AlarmOffWindowContent");

	UResizableWindow_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickEvent
// (Net, NetReliable, Native, Event, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              Geometry                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UResizableWindow_C::OnHeaderDoubleClickEvent(struct FGeometry* Geometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickEvent");

	UResizableWindow_C_OnHeaderDoubleClickEvent_Params params;
	params.Geometry = Geometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.OnMaximized
// (Exec, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::OnMaximized()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMaximized");

	UResizableWindow_C_OnMaximized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.SaveLayout
// (Net, NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface>* Attributes                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UResizableWindow_C::SaveLayout(TScriptInterface<class UAttributeMapInterface>* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SaveLayout");

	UResizableWindow_C_SaveLayout_Params params;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.LoadLayout
// (NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface>* Attributes                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UResizableWindow_C::LoadLayout(TScriptInterface<class UAttributeMapInterface>* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.LoadLayout");

	UResizableWindow_C_LoadLayout_Params params;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ResetLayout
// (NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::ResetLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ResetLayout");

	UResizableWindow_C_ResetLayout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature
// (Net, NetRequest, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature");

	UResizableWindow_C_BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature
// (NetRequest, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature");

	UResizableWindow_C_BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.OnMouseLeave
// (Net, NetReliable, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResizableWindow_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMouseLeave");

	UResizableWindow_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.Construct
// (NetReliable, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Construct");

	UResizableWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.SetTitle
// (Net, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  titleToSet                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UResizableWindow_C::SetTitle(struct FText* titleToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetTitle");

	UResizableWindow_C_SetTitle_Params params;
	params.titleToSet = titleToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ExecuteUbergraph_ResizableWindow
// (Net, NetReliable, Native, Event, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::ExecuteUbergraph_ResizableWindow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ExecuteUbergraph_ResizableWindow");

	UResizableWindow_C_ExecuteUbergraph_ResizableWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickDispatcher__DelegateSignature
// ()
// Parameters:
// struct FGeometry*              Geometry                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UResizableWindow_C::OnHeaderDoubleClickDispatcher__DelegateSignature(struct FGeometry* Geometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickDispatcher__DelegateSignature");

	UResizableWindow_C_OnHeaderDoubleClickDispatcher__DelegateSignature_Params params;
	params.Geometry = Geometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ContentMaximizedEventDispatcher__DelegateSignature
// ()

void UResizableWindow_C::ContentMaximizedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ContentMaximizedEventDispatcher__DelegateSignature");

	UResizableWindow_C_ContentMaximizedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ContentSizeChangedEventDispatcher__DelegateSignature
// ()

void UResizableWindow_C::ContentSizeChangedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ContentSizeChangedEventDispatcher__DelegateSignature");

	UResizableWindow_C_ContentSizeChangedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
