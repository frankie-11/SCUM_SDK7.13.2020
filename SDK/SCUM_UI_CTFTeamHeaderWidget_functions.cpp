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

// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.GetPlayerText
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_CTFTeamHeaderWidget_C::STATIC_GetPlayerText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.GetPlayerText");

	UUI_CTFTeamHeaderWidget_C_GetPlayerText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamName
// (Net, NetReliable, Event, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CTFTeamHeaderWidget_C::SetTeamName(struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamName");

	UUI_CTFTeamHeaderWidget_C_SetTeamName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetLeftSide
// (NetReliable, Event, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CTFTeamHeaderWidget_C::SetLeftSide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetLeftSide");

	UUI_CTFTeamHeaderWidget_C_SetLeftSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetRightSide
// (Net, Event, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CTFTeamHeaderWidget_C::SetRightSide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetRightSide");

	UUI_CTFTeamHeaderWidget_C_SetRightSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetGameEvent
// (Net, NetRequest, Exec, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AGameEventBase**         gameEvent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CTFTeamHeaderWidget_C::SetGameEvent(class AGameEventBase** gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetGameEvent");

	UUI_CTFTeamHeaderWidget_C_SetGameEvent_Params params;
	params.gameEvent = gameEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.ClearWinCounters
// (Net, NetRequest, Exec, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CTFTeamHeaderWidget_C::ClearWinCounters()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.ClearWinCounters");

	UUI_CTFTeamHeaderWidget_C_ClearWinCounters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.AddWinCounter
// (NetRequest, Exec, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CTFTeamHeaderWidget_C::AddWinCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.AddWinCounter");

	UUI_CTFTeamHeaderWidget_C_AddWinCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamScore
// (Event, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CTFTeamHeaderWidget_C::SetTeamScore(float* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamScore");

	UUI_CTFTeamHeaderWidget_C_SetTeamScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamColours
// (Event, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGameEventTeamColours*  colours                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CTFTeamHeaderWidget_C::SetTeamColours(struct FGameEventTeamColours* colours)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamColours");

	UUI_CTFTeamHeaderWidget_C_SetTeamColours_Params params;
	params.colours = colours;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.ExecuteUbergraph_UI_CTFTeamHeaderWidget
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CTFTeamHeaderWidget_C::STATIC_ExecuteUbergraph_UI_CTFTeamHeaderWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.ExecuteUbergraph_UI_CTFTeamHeaderWidget");

	UUI_CTFTeamHeaderWidget_C_ExecuteUbergraph_UI_CTFTeamHeaderWidget_Params params;
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
