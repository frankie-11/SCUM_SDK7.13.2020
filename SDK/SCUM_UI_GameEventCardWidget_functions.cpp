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

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TeamSwitchFee_Text
// (Net, NetRequest, Event, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_TeamSwitchFee_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TeamSwitchFee_Text");

	UUI_GameEventCardWidget_C_Get_TeamSwitchFee_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Cooldown_Throbber_Visiblity
// (NetReliable, Exec, Native, Event, NetResponse, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_Cooldown_Throbber_Visiblity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Cooldown_Throbber_Visiblity");

	UUI_GameEventCardWidget_C_Get_Cooldown_Throbber_Visiblity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EntryFeeTag_Text
// (NetReliable, NetRequest, Exec, Native, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameEventCardWidget_C::STATIC_Get_EntryFeeTag_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EntryFeeTag_Text");

	UUI_GameEventCardWidget_C_Get_EntryFeeTag_Text_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Buttons_Visibility
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_Buttons_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Buttons_Visibility");

	UUI_GameEventCardWidget_C_Get_Buttons_Visibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Screenshot_Brush
// (NetRequest, Exec, NetMulticast, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_GameEventCardWidget_C::Get_Screenshot_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Screenshot_Brush");

	UUI_GameEventCardWidget_C_Get_Screenshot_Brush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanJoinTeam
// (NetRequest, Exec, Event, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanJoin                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventCardWidget_C::CanJoinTeam(int* Team, bool* CanJoin)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanJoinTeam");

	UUI_GameEventCardWidget_C_CanJoinTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanJoin != nullptr)
		*CanJoin = params.CanJoin;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_SwitchTeamButton_Visibility
// (Net, NetRequest, NetMulticast, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_SwitchTeamButton_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_SwitchTeamButton_Visibility");

	UUI_GameEventCardWidget_C_Get_SwitchTeamButton_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.GetJoinButtonText
// (NetReliable, NetRequest, Exec, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameEventCardWidget_C::STATIC_GetJoinButtonText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.GetJoinButtonText");

	UUI_GameEventCardWidget_C_GetJoinButtonText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CheckPrerequisites
// (Net, Native, Event, NetResponse, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           HasEnoughFamePoints            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventCardWidget_C::CheckPrerequisites(bool* HasEnoughFamePoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CheckPrerequisites");

	UUI_GameEventCardWidget_C_CheckPrerequisites_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasEnoughFamePoints != nullptr)
		*HasEnoughFamePoints = params.HasEnoughFamePoints;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerRegisteredForThisEvent
// (Exec, Native, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           IsPlayerParticipatingInThisEvent (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventCardWidget_C::STATIC_IsPlayerRegisteredForThisEvent(bool* IsPlayerParticipatingInThisEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerRegisteredForThisEvent");

	UUI_GameEventCardWidget_C_IsPlayerRegisteredForThisEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlayerParticipatingInThisEvent != nullptr)
		*IsPlayerParticipatingInThisEvent = params.IsPlayerParticipatingInThisEvent;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanPlayerJoin
// (Net, NetRequest, Exec, Native, Event, NetResponse, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           preferredTeam                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanJoin                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventCardWidget_C::CanPlayerJoin(int* preferredTeam, bool* CanJoin)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanPlayerJoin");

	UUI_GameEventCardWidget_C_CanPlayerJoin_Params params;
	params.preferredTeam = preferredTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanJoin != nullptr)
		*CanJoin = params.CanJoin;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinDisabledMsgVisibility
// (NetRequest, Exec, Native, Event, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::STATIC_Get_JoinDisabledMsgVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinDisabledMsgVisibility");

	UUI_GameEventCardWidget_C_Get_JoinDisabledMsgVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EventName
// (NetReliable, Native, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameEventCardWidget_C::STATIC_Get_EventName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EventName");

	UUI_GameEventCardWidget_C_Get_EventName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerParticipatingInThisEvent
// (Net, NetRequest, Event, NetResponse, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           IsPlayerParticipatingInThisEvent (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventCardWidget_C::IsPlayerParticipatingInThisEvent(bool* IsPlayerParticipatingInThisEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerParticipatingInThisEvent");

	UUI_GameEventCardWidget_C_IsPlayerParticipatingInThisEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlayerParticipatingInThisEvent != nullptr)
		*IsPlayerParticipatingInThisEvent = params.IsPlayerParticipatingInThisEvent;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinRedButtonVisibility
// (NetRequest, Exec, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::STATIC_Get_JoinRedButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinRedButtonVisibility");

	UUI_GameEventCardWidget_C_Get_JoinRedButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinBlueButton_Visibility
// (Net, NetReliable, NetRequest, Event, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::STATIC_Get_JoinBlueButton_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinBlueButton_Visibility");

	UUI_GameEventCardWidget_C_Get_JoinBlueButton_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeTextVisibility
// (Net, NetRequest, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::STATIC_Get_TimeTextVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeTextVisibility");

	UUI_GameEventCardWidget_C_Get_TimeTextVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LeaveButtonVisibility
// (NetRequest, Exec, Native, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_LeaveButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LeaveButtonVisibility");

	UUI_GameEventCardWidget_C_Get_LeaveButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinButtonVisibility
// (Net, NetReliable, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::STATIC_Get_JoinButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinButtonVisibility");

	UUI_GameEventCardWidget_C_Get_JoinButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_NumPlayersText
// (NetReliable, Exec, Native, NetMulticast, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_NumPlayersText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_NumPlayersText");

	UUI_GameEventCardWidget_C_Get_NumPlayersText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_RoundsText
// (Net, NetReliable, Exec, Event, NetResponse, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_RoundsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_RoundsText");

	UUI_GameEventCardWidget_C_Get_RoundsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeText
// (Net, NetReliable, Native, NetMulticast, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_TimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeText");

	UUI_GameEventCardWidget_C_Get_TimeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_StatusText
// (Net, NetRequest, Exec, Event, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameEventCardWidget_C::STATIC_Get_StatusText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_StatusText");

	UUI_GameEventCardWidget_C_Get_StatusText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LocationText
// (Exec, Event, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_LocationText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LocationText");

	UUI_GameEventCardWidget_C_Get_LocationText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (NetRequest, Exec, Native, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UUI_GameEventCardWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_GameEventCardWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Construct
// (Net, NetReliable, Exec, Native, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UUI_GameEventCardWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Construct");

	UUI_GameEventCardWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature
// (NetReliable, Exec, Native, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UUI_GameEventCardWidget_C::BndEvt__LeaveButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature");

	UUI_GameEventCardWidget_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinRedButton_K2Node_ComponentBoundEvent_1256_OnButtonClickedEvent__DelegateSignature
// (Net, Exec, Native, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UUI_GameEventCardWidget_C::BndEvt__JoinRedButton_K2Node_ComponentBoundEvent_1256_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinRedButton_K2Node_ComponentBoundEvent_1256_OnButtonClickedEvent__DelegateSignature");

	UUI_GameEventCardWidget_C_BndEvt__JoinRedButton_K2Node_ComponentBoundEvent_1256_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinBlueButton_K2Node_ComponentBoundEvent_1275_OnButtonClickedEvent__DelegateSignature
// (Exec, Native, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UUI_GameEventCardWidget_C::BndEvt__JoinBlueButton_K2Node_ComponentBoundEvent_1275_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinBlueButton_K2Node_ComponentBoundEvent_1275_OnButtonClickedEvent__DelegateSignature");

	UUI_GameEventCardWidget_C_BndEvt__JoinBlueButton_K2Node_ComponentBoundEvent_1275_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__SwitchTeamButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UUI_GameEventCardWidget_C::BndEvt__SwitchTeamButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__SwitchTeamButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature");

	UUI_GameEventCardWidget_C_BndEvt__SwitchTeamButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.ExecuteUbergraph_UI_GameEventCardWidget
// (NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventCardWidget_C::ExecuteUbergraph_UI_GameEventCardWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.ExecuteUbergraph_UI_GameEventCardWidget");

	UUI_GameEventCardWidget_C_ExecuteUbergraph_UI_GameEventCardWidget_Params params;
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
