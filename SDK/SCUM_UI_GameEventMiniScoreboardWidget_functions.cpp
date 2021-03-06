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

// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateWinCounters
// (Net, Exec, Event, NetResponse, Static, Delegate, HasDefaults, NetClient, DLLImport)

void UUI_GameEventMiniScoreboardWidget_C::STATIC_UpdateWinCounters()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateWinCounters");

	UUI_GameEventMiniScoreboardWidget_C_UpdateWinCounters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateTeamScores
// (NetRequest, Native, Static, NetMulticast, Private, HasOutParms)

void UUI_GameEventMiniScoreboardWidget_C::STATIC_UpdateTeamScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateTeamScores");

	UUI_GameEventMiniScoreboardWidget_C_UpdateTeamScores_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitInfo
// (NetReliable, Event, NetResponse, Static, Delegate, HasDefaults, NetClient, DLLImport)

void UUI_GameEventMiniScoreboardWidget_C::STATIC_InitInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitInfo");

	UUI_GameEventMiniScoreboardWidget_C_InitInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.EmptyMessage
// (Net, NetReliable, Exec, Event, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventMiniScoreboardWidget_C::EmptyMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.EmptyMessage");

	UUI_GameEventMiniScoreboardWidget_C_EmptyMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.OnUpdate
// (Net, NetReliable, Exec, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UUI_GameEventMiniScoreboardWidget_C::OnUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.OnUpdate");

	UUI_GameEventMiniScoreboardWidget_C_OnUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitializeScoreboard
// (Net, NetRequest, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UUI_GameEventMiniScoreboardWidget_C::InitializeScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitializeScoreboard");

	UUI_GameEventMiniScoreboardWidget_C_InitializeScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.ExecuteUbergraph_UI_GameEventMiniScoreboardWidget
// (Native, Event, NetResponse, Static, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventMiniScoreboardWidget_C::STATIC_ExecuteUbergraph_UI_GameEventMiniScoreboardWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.ExecuteUbergraph_UI_GameEventMiniScoreboardWidget");

	UUI_GameEventMiniScoreboardWidget_C_ExecuteUbergraph_UI_GameEventMiniScoreboardWidget_Params params;
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
