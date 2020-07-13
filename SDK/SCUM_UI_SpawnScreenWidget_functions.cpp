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

// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.AdjustBlackout
// (Net, NetReliable, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TargetValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnScreenWidget_C::STATIC_AdjustBlackout(float* DeltaTime, float* TargetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.AdjustBlackout");

	UUI_SpawnScreenWidget_C_AdjustBlackout_Params params;
	params.DeltaTime = DeltaTime;
	params.TargetValue = TargetValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Get_RespawnButton_Visibility
// (Net, NetReliable, Exec, Native, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_SpawnScreenWidget_C::STATIC_Get_RespawnButton_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Get_RespawnButton_Visibility");

	UUI_SpawnScreenWidget_C_Get_RespawnButton_Visibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Get_PenaltyCountdown_Visibility
// (Net, Event, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_SpawnScreenWidget_C::STATIC_Get_PenaltyCountdown_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Get_PenaltyCountdown_Visibility");

	UUI_SpawnScreenWidget_C_Get_PenaltyCountdown_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Get_WaitTimeText
// (Net, Exec, Native, Event, NetResponse, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_SpawnScreenWidget_C::Get_WaitTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Get_WaitTimeText");

	UUI_SpawnScreenWidget_C_Get_WaitTimeText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.GetWaitTimeInSeconds
// (NetRequest, Event, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            WaitSeconds                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnScreenWidget_C::STATIC_GetWaitTimeInSeconds(int* WaitSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.GetWaitTimeInSeconds");

	UUI_SpawnScreenWidget_C_GetWaitTimeInSeconds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaitSeconds != nullptr)
		*WaitSeconds = params.WaitSeconds;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.CanSpawn
// (NetReliable, Native, Event, NetResponse, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           CanSpawn                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnScreenWidget_C::CanSpawn(bool* CanSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.CanSpawn");

	UUI_SpawnScreenWidget_C_CanSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSpawn != nullptr)
		*CanSpawn = params.CanSpawn;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.OnKeyDown
// (NetReliable, Native, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_SpawnScreenWidget_C::STATIC_OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.OnKeyDown");

	UUI_SpawnScreenWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.OnSpawnAccept
// (NetReliable, NetRequest, Static, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SpawnScreenWidget_C::STATIC_OnSpawnAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.OnSpawnAccept");

	UUI_SpawnScreenWidget_C_OnSpawnAccept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.UpdateInfo
// (NetReliable, Exec, Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          loadoutMenu                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnScreenWidget_C::STATIC_UpdateInfo(bool* loadoutMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.UpdateInfo");

	UUI_SpawnScreenWidget_C_UpdateInfo_Params params;
	params.loadoutMenu = loadoutMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (Net, Exec, Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnScreenWidget_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnScreenWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Tick
// (Net, NetRequest, Exec, Event, Static, Private, HasOutParms)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnScreenWidget_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Tick");

	UUI_SpawnScreenWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.EnableRespawnOption
// (Exec, Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERespawnOption*                option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnScreenWidget_C::STATIC_EnableRespawnOption(ERespawnOption* option)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.EnableRespawnOption");

	UUI_SpawnScreenWidget_C_EnableRespawnOption_Params params;
	params.option = option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.ResetWakeUpTimer
// (Net, NetReliable, NetRequest, Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnScreenWidget_C::STATIC_ResetWakeUpTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.ResetWakeUpTimer");

	UUI_SpawnScreenWidget_C_ResetWakeUpTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.AllowWakeUp
// (Net, Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnScreenWidget_C::STATIC_AllowWakeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.AllowWakeUp");

	UUI_SpawnScreenWidget_C_AllowWakeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.ExecuteUbergraph_UI_SpawnScreenWidget
// (Net, NetReliable, Exec, Event, NetResponse, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnScreenWidget_C::ExecuteUbergraph_UI_SpawnScreenWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.ExecuteUbergraph_UI_SpawnScreenWidget");

	UUI_SpawnScreenWidget_C_ExecuteUbergraph_UI_SpawnScreenWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
