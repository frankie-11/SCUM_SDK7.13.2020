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

// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventCancelBox_Visibility
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_NotificationPanelWidget_C::STATIC_Get_EventCancelBox_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventCancelBox_Visibility");

	UUI_NotificationPanelWidget_C_Get_EventCancelBox_Visibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventCancelTime
// (Net, NetReliable, NetResponse, Public, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_NotificationPanelWidget_C::Get_EventCancelTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventCancelTime");

	UUI_NotificationPanelWidget_C_Get_EventCancelTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventTime_BrushColor
// (NetRequest, Event, NetResponse, Public, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_NotificationPanelWidget_C::Get_EventTime_BrushColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventTime_BrushColor");

	UUI_NotificationPanelWidget_C_Get_EventTime_BrushColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventBox_BrushColor
// (Net, NetReliable, Exec, Event, NetMulticast, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_NotificationPanelWidget_C::Get_NextEventBox_BrushColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventBox_BrushColor");

	UUI_NotificationPanelWidget_C_Get_NextEventBox_BrushColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventTimeText
// (NetResponse, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_NotificationPanelWidget_C::Get_EventTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventTimeText");

	UUI_NotificationPanelWidget_C_Get_EventTimeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventTime_Visibility
// (NetReliable, NetRequest, NetResponse, Public, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_NotificationPanelWidget_C::Get_EventTime_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventTime_Visibility");

	UUI_NotificationPanelWidget_C_Get_EventTime_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_RankLabel_Text
// (Net, NetReliable, Exec, Native, NetResponse, Public, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_NotificationPanelWidget_C::Get_RankLabel_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_RankLabel_Text");

	UUI_NotificationPanelWidget_C_Get_RankLabel_Text_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventLocation_Text
// (NetRequest, Event, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_NotificationPanelWidget_C::Get_NextEventLocation_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventLocation_Text");

	UUI_NotificationPanelWidget_C_Get_NextEventLocation_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_FamePointsCounter_Text
// (NetReliable, Exec, Event, NetResponse, Public, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_NotificationPanelWidget_C::Get_FamePointsCounter_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_FamePointsCounter_Text");

	UUI_NotificationPanelWidget_C_Get_FamePointsCounter_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventCountdown_Text
// (Exec, Native, NetResponse, Public, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_NotificationPanelWidget_C::Get_NextEventCountdown_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventCountdown_Text");

	UUI_NotificationPanelWidget_C_Get_NextEventCountdown_Text_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventBox_Visibility
// (NetReliable, NetRequest, Exec, Native, NetResponse, Public, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_NotificationPanelWidget_C::Get_NextEventBox_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventBox_Visibility");

	UUI_NotificationPanelWidget_C_Get_NextEventBox_Visibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.ShowNotification
// (NetReliable, NetRequest, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UNotificationWidget**    notification                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_NotificationPanelWidget_C::ShowNotification(class UNotificationWidget** notification)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.ShowNotification");

	UUI_NotificationPanelWidget_C_ShowNotification_Params params;
	params.notification = notification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.ClearAllNotifications
// (NetReliable, NetRequest, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_NotificationPanelWidget_C::ClearAllNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.ClearAllNotifications");

	UUI_NotificationPanelWidget_C_ClearAllNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.ExecuteUbergraph_UI_NotificationPanelWidget
// (Exec, Event, NetMulticast, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationPanelWidget_C::ExecuteUbergraph_UI_NotificationPanelWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.ExecuteUbergraph_UI_NotificationPanelWidget");

	UUI_NotificationPanelWidget_C_ExecuteUbergraph_UI_NotificationPanelWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
