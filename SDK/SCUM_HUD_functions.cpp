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

// Function HUD.HUD_C.GetVisibility_VicinityBackgroundImage
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UHUD_C::STATIC_GetVisibility_VicinityBackgroundImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetVisibility_VicinityBackgroundImage");

	UHUD_C_GetVisibility_VicinityBackgroundImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetCompassWidget
// (Net, NetRequest, Exec, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCompassWidget*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCompassWidget* UHUD_C::STATIC_GetCompassWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetCompassWidget");

	UHUD_C_GetCompassWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetBreathingBarLungsWidget
// (NetRequest, Exec, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBreathingBarLungsWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBreathingBarLungsWidget* UHUD_C::STATIC_GetBreathingBarLungsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetBreathingBarLungsWidget");

	UHUD_C_GetBreathingBarLungsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetPrisonerLifeIndicatorsSprite
// (NetRequest, Exec, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrisonerLifeIndicatorsSprite* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrisonerLifeIndicatorsSprite* UHUD_C::STATIC_GetPrisonerLifeIndicatorsSprite()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetPrisonerLifeIndicatorsSprite");

	UHUD_C_GetPrisonerLifeIndicatorsSprite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetChatWidget
// (NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UChatWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UChatWidget* UHUD_C::GetChatWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetChatWidget");

	UHUD_C_GetChatWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetVisibility_1
// (Net, NetReliable, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UHUD_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetVisibility_1");

	UHUD_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.IsChatOpen
// (Net, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHUD_C::STATIC_IsChatOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.IsChatOpen");

	UHUD_C_IsChatOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetCraftingPanel
// (Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCraftingPanelWidget*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCraftingPanelWidget* UHUD_C::STATIC_GetCraftingPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetCraftingPanel");

	UHUD_C_GetCraftingPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetMainCanvasVisibility
// (Net, NetReliable, NetRequest, Exec, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHUD_C::STATIC_GetMainCanvasVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetMainCanvasVisibility");

	UHUD_C_GetMainCanvasVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetTempDropZoneTimeText
// (Net, NetReliable, NetRequest, Exec, Event, NetMulticast, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHUD_C::GetTempDropZoneTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetTempDropZoneTimeText");

	UHUD_C_GetTempDropZoneTimeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetWatermarkText
// (NetReliable, NetRequest, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHUD_C::GetWatermarkText()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetWatermarkText");

	UHUD_C_GetWatermarkText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetDebugInfoText
// (Net, NetReliable, NetRequest, NetResponse, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHUD_C::GetDebugInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetDebugInfoText");

	UHUD_C_GetDebugInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetTabModeSwitcherWidget
// (NetReliable, NetRequest, Exec, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTabModeSwitcherWidget*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTabModeSwitcherWidget* UHUD_C::STATIC_GetTabModeSwitcherWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetTabModeSwitcherWidget");

	UHUD_C_GetTabModeSwitcherWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetBCURightPanel
// (Net, NetReliable, NetRequest, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUserWidget* UHUD_C::STATIC_GetBCURightPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetBCURightPanel");

	UHUD_C_GetBCURightPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetBCULeftPanel
// (Net, NetReliable, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUserWidget* UHUD_C::STATIC_GetBCULeftPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetBCULeftPanel");

	UHUD_C_GetBCULeftPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetInventoryPanel
// (NetReliable, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryPanelThirdIteration* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UInventoryPanelThirdIteration* UHUD_C::STATIC_GetInventoryPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetInventoryPanel");

	UHUD_C_GetInventoryPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.CompleteInitialization
// (NetReliable, NetRequest, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UHUD_C::STATIC_CompleteInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.CompleteInitialization");

	UHUD_C_CompleteInitialization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.StartInitialization
// ()

void UHUD_C::StartInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.StartInitialization");

	UHUD_C_StartInitialization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.CompleteMonitorsInitialization
// (Net, NetRequest, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UHUD_C::STATIC_CompleteMonitorsInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.CompleteMonitorsInitialization");

	UHUD_C_CompleteMonitorsInitialization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ShouldCompleteInitialization
// (Net, Exec, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHUD_C::STATIC_ShouldCompleteInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShouldCompleteInitialization");

	UHUD_C_ShouldCompleteInitialization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.IsEverythingReadyForInitialization
// (NetReliable, NetRequest, Native, NetResponse, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           isEverythingReady              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_C::IsEverythingReadyForInitialization(bool* isEverythingReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.IsEverythingReadyForInitialization");

	UHUD_C_IsEverythingReadyForInitialization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isEverythingReady != nullptr)
		*isEverythingReady = params.isEverythingReady;
}


// Function HUD.HUD_C.IsOwningPrisonerWithComponentsValid
// (Exec, Event, NetResponse, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHUD_C::IsOwningPrisonerWithComponentsValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.IsOwningPrisonerWithComponentsValid");

	UHUD_C_IsOwningPrisonerWithComponentsValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetOwningPrisoner
// (NetRequest, Exec, Event, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class APrisoner*               Prisoner                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_C::GetOwningPrisoner(bool* Success, class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetOwningPrisoner");

	UHUD_C_GetOwningPrisoner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Prisoner != nullptr)
		*Prisoner = params.Prisoner;
}


// Function HUD.HUD_C.IsOwningPlayerPawnValid
// (NetRequest, Exec, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           isPlayerPawnValid              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_C::IsOwningPlayerPawnValid(bool* isPlayerPawnValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.IsOwningPlayerPawnValid");

	UHUD_C_IsOwningPlayerPawnValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isPlayerPawnValid != nullptr)
		*isPlayerPawnValid = params.isPlayerPawnValid;
}


// Function HUD.HUD_C.IsOwningPlayerControllerValid
// (NetRequest, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isPlayerControllerValid        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_C::STATIC_IsOwningPlayerControllerValid(bool* isPlayerControllerValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.IsOwningPlayerControllerValid");

	UHUD_C_IsOwningPlayerControllerValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isPlayerControllerValid != nullptr)
		*isPlayerControllerValid = params.isPlayerControllerValid;
}


// Function HUD.HUD_C.CheckIfReadyForInitialization
// (Net, NetReliable, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UHUD_C::STATIC_CheckIfReadyForInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.CheckIfReadyForInitialization");

	UHUD_C_CheckIfReadyForInitialization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.AttachHUDMonitors
// ()

void UHUD_C::AttachHUDMonitors()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AttachHUDMonitors");

	UHUD_C_AttachHUDMonitors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.StartMonitorsInitialization
// ()

void UHUD_C::StartMonitorsInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.StartMonitorsInitialization");

	UHUD_C_StartMonitorsInitialization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.PrisonerValidation
// (Net, NetRequest, Native, Event, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UHUD_C::PrisonerValidation()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.PrisonerValidation");

	UHUD_C_PrisonerValidation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ShouldSerializeWidgetLayout
// (NetReliable, Exec, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHUD_C::STATIC_ShouldSerializeWidgetLayout(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShouldSerializeWidgetLayout");

	UHUD_C_ShouldSerializeWidgetLayout_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetTopLevelPanelWidget
// (Net, Exec, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPanelWidget* UHUD_C::STATIC_GetTopLevelPanelWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetTopLevelPanelWidget");

	UHUD_C_GetTopLevelPanelWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.ShowWarning
// (Net, NetRequest, Exec, Native, Event, NetMulticast, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// EWarningType*                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          playSounds                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::ShowWarning(EWarningType* Type, bool* playSounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowWarning");

	UHUD_C_ShowWarning_Params params;
	params.Type = Type;
	params.playSounds = playSounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.RefreshMonitorSizes
// ()

void UHUD_C::RefreshMonitorSizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.RefreshMonitorSizes");

	UHUD_C_RefreshMonitorSizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SetPrisonerToMonitorOnChildren
// ()

void UHUD_C::SetPrisonerToMonitorOnChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetPrisonerToMonitorOnChildren");

	UHUD_C_SetPrisonerToMonitorOnChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ToggleAllMonitorsVisibility
// (NetReliable, Native, Event, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UHUD_C::ToggleAllMonitorsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ToggleAllMonitorsVisibility");

	UHUD_C_ToggleAllMonitorsVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HideLifeIndicators
// (Exec, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UHUD_C::STATIC_HideLifeIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HideLifeIndicators");

	UHUD_C_HideLifeIndicators_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ShowLifeIndicators
// (Exec, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UHUD_C::STATIC_ShowLifeIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowLifeIndicators");

	UHUD_C_ShowLifeIndicators_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HideMonitors
// ()

void UHUD_C::HideMonitors()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HideMonitors");

	UHUD_C_HideMonitors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ShowMonitors
// ()

void UHUD_C::ShowMonitors()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowMonitors");

	UHUD_C_ShowMonitors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SetupHUDMonitors
// ()

void UHUD_C::SetupHUDMonitors()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetupHUDMonitors");

	UHUD_C_SetupHUDMonitors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SetPrisonerToMonitor
// (Net, NetReliable, Exec, Native, Event, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::SetPrisonerToMonitor(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetPrisonerToMonitor");

	UHUD_C_SetPrisonerToMonitor_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SetDefaultPrisonerToMonitor
// (Net, NetReliable, NetRequest, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_C::STATIC_SetDefaultPrisonerToMonitor(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetDefaultPrisonerToMonitor");

	UHUD_C_SetDefaultPrisonerToMonitor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function HUD.HUD_C.GetDefaultPrisoner
// (NetReliable, Native, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class APrisoner*               Prisoner                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_C::GetDefaultPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetDefaultPrisoner");

	UHUD_C_GetDefaultPrisoner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Prisoner != nullptr)
		*Prisoner = params.Prisoner;
}


// Function HUD.HUD_C.OnKeyUp
// (Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UHUD_C::STATIC_OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnKeyUp");

	UHUD_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.UpdateCircularProgressBarsPercentages
// (Net, NetReliable, Native, NetResponse, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UHUD_C::UpdateCircularProgressBarsPercentages()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.UpdateCircularProgressBarsPercentages");

	UHUD_C_UpdateCircularProgressBarsPercentages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.GetPrisonerLifeComponent
// (NetRequest, NetResponse, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UPrisonerLifeComponent*  LifeComponent                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_C::GetPrisonerLifeComponent(class UPrisonerLifeComponent** LifeComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetPrisonerLifeComponent");

	UHUD_C_GetPrisonerLifeComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LifeComponent != nullptr)
		*LifeComponent = params.LifeComponent;
}


// Function HUD.HUD_C.AddWarning
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// EWarningType*                  warningType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          playSounds                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::AddWarning(EWarningType* warningType, bool* playSounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddWarning");

	UHUD_C_AddWarning_Params params;
	params.warningType = warningType;
	params.playSounds = playSounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ObjectiveChanged
// (Net, NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MissionObjective_C** sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::STATIC_ObjectiveChanged(class ABP_MissionObjective_C** sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ObjectiveChanged");

	UHUD_C_ObjectiveChanged_Params params;
	params.sender = sender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ToggleMonitorsVisibility
// (Net, NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UHUD_C::STATIC_ToggleMonitorsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ToggleMonitorsVisibility");

	UHUD_C_ToggleMonitorsVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ClearTeammateNames
// (NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UHUD_C::STATIC_ClearTeammateNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ClearTeammateNames");

	UHUD_C_ClearTeammateNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.AddChatLine
// (NetRequest, Native, Event, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FString*                string                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EChatType*                     chatType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::AddChatLine(struct FString* string, EChatType* chatType)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddChatLine");

	UHUD_C_AddChatLine_Params params;
	params.string = string;
	params.chatType = chatType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnPrisonerSet
// (Net, NetRequest, Exec, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UHUD_C::STATIC_OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnPrisonerSet");

	UHUD_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.UpdateAttributesHistory
// (NetRequest, Exec, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UHUD_C::STATIC_UpdateAttributesHistory()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.UpdateAttributesHistory");

	UHUD_C_UpdateAttributesHistory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.RemoveTeammateName
// (Net, NetReliable, Exec, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UHUD_C::STATIC_RemoveTeammateName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.RemoveTeammateName");

	UHUD_C_RemoveTeammateName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.AddTeammateName
// (NetReliable, Exec, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UHUD_C::STATIC_AddTeammateName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddTeammateName");

	UHUD_C_AddTeammateName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.AddMessageToScreen
// (NetReliable, NetRequest, Event, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          beep                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UHUD_C::AddMessageToScreen(struct FText* Text, bool* beep, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddMessageToScreen");

	UHUD_C_AddMessageToScreen_Params params;
	params.Text = Text;
	params.beep = beep;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.AddMessage
// (Net, NetReliable, NetRequest, Native, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// TEnumAsByte<EMessageType>*     Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::AddMessage(TEnumAsByte<EMessageType>* Type, struct FText* Text, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddMessage");

	UHUD_C_AddMessage_Params params;
	params.Type = Type;
	params.Text = Text;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnBCUBodyMonitorMaximized
// (Exec, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UHUD_C::STATIC_OnBCUBodyMonitorMaximized()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnBCUBodyMonitorMaximized");

	UHUD_C_OnBCUBodyMonitorMaximized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnRDAMonitorMaximized
// (Net, NetReliable, NetRequest, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UHUD_C::STATIC_OnRDAMonitorMaximized()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnRDAMonitorMaximized");

	UHUD_C_OnRDAMonitorMaximized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnPerformanceMonitorMaximized
// (NetReliable, NetRequest, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UHUD_C::STATIC_OnPerformanceMonitorMaximized()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnPerformanceMonitorMaximized");

	UHUD_C_OnPerformanceMonitorMaximized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.Construct
// (Net, NetRequest, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UHUD_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.Construct");

	UHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SetMainCanvasVisibility
// (NetRequest, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::STATIC_SetMainCanvasVisibility(bool* visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetMainCanvasVisibility");

	UHUD_C_SetMainCanvasVisibility_Params params;
	params.visible = visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SwitchTabMode
// (Net, NetReliable, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::STATIC_SwitchTabMode(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SwitchTabMode");

	UHUD_C_SwitchTabMode_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ShowNotification
// (Exec, Native, Event, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FString*                Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ping                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::ShowNotification(struct FString* Message, float* Duration, bool* ping)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowNotification");

	UHUD_C_ShowNotification_Params params;
	params.Message = Message;
	params.Duration = Duration;
	params.ping = ping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ClearNotifications
// (Net, NetReliable, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UHUD_C::STATIC_ClearNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ClearNotifications");

	UHUD_C_ClearNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SetTabEnabled
// (Net, NetResponse, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ETabMode*                      Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::SetTabEnabled(ETabMode* Tab, bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetTabEnabled");

	UHUD_C_SetTabEnabled_Params params;
	params.Tab = Tab;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ShowKillFeedNotification
// (Net, Exec, Event, Static, NetMulticast, Private, HasOutParms)
// Parameters:
// struct FText*                  prefix                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  characterName                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  suffix                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          ping                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::STATIC_ShowKillFeedNotification(struct FText* prefix, struct FText* characterName, struct FText* suffix, bool* ping)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowKillFeedNotification");

	UHUD_C_ShowKillFeedNotification_Params params;
	params.prefix = prefix;
	params.characterName = characterName;
	params.suffix = suffix;
	params.ping = ping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OpenChat
// (NetReliable, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UHUD_C::STATIC_OpenChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OpenChat");

	UHUD_C_OpenChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.CloseChat
// (Net, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UHUD_C::STATIC_CloseChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.CloseChat");

	UHUD_C_CloseChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ShowWarningMessage
// (Exec, Event, NetMulticast, Private, HasOutParms)
// Parameters:
// struct FString*                Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::ShowWarningMessage(struct FString* Message, float* Duration, struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowWarningMessage");

	UHUD_C_ShowWarningMessage_Params params;
	params.Message = Message;
	params.Duration = Duration;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnPrisonerChanged
// (Net, NetReliable, Exec, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UHUD_C::STATIC_OnPrisonerChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnPrisonerChanged");

	UHUD_C_OnPrisonerChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.AddObjective
// (NetReliable, Exec, Native, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class ABP_MissionObjective_C** Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          PlaySound                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowNotification               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::AddObjective(class ABP_MissionObjective_C** Objective, bool* PlaySound, bool* ShowNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddObjective");

	UHUD_C_AddObjective_Params params;
	params.Objective = Objective;
	params.PlaySound = PlaySound;
	params.ShowNotification = ShowNotification;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.AddMessageWithColor
// (Net, Exec, Event, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// TEnumAsByte<EMessageType>*     Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::AddMessageWithColor(TEnumAsByte<EMessageType>* Type, struct FText* Text, float* Duration, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddMessageWithColor");

	UHUD_C_AddMessageWithColor_Params params;
	params.Type = Type;
	params.Text = Text;
	params.Duration = Duration;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.Shake
// (NetReliable, Exec, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UHUD_C::STATIC_Shake()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.Shake");

	UHUD_C_Shake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.Tick
// (Net, NetReliable, Event, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.Tick");

	UHUD_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ShowLevelUpNotification
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, Private, HasOutParms)
// Parameters:
// class USkill**                 Skill                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESkillLevel*                   skillLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::STATIC_ShowLevelUpNotification(class USkill** Skill, ESkillLevel* skillLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowLevelUpNotification");

	UHUD_C_ShowLevelUpNotification_Params params;
	params.Skill = Skill;
	params.skillLevel = skillLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ShowTrapsDetectedNotification
// (Net, Exec, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UHUD_C::STATIC_ShowTrapsDetectedNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowTrapsDetectedNotification");

	UHUD_C_ShowTrapsDetectedNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ExecuteUbergraph_HUD
// (Exec, Native, NetResponse, Static, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::STATIC_ExecuteUbergraph_HUD(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ExecuteUbergraph_HUD");

	UHUD_C_ExecuteUbergraph_HUD_Params params;
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
