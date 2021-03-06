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

// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateTeamColor
// (NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           TeamIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventParticipantStatsWidget_C::UpdateTeamColor(int* TeamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateTeamColor");

	UUI_GameEventParticipantStatsWidget_C_UpdateTeamColor_Params params;
	params.TeamIndex = TeamIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateNumber
// (NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameEventParticipantStatsWidget_C::UpdateNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateNumber");

	UUI_GameEventParticipantStatsWidget_C_UpdateNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.IsOwning
// (NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_GameEventParticipantStatsWidget_C::STATIC_IsOwning()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.IsOwning");

	UUI_GameEventParticipantStatsWidget_C_IsOwning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetSelectedOverlayVisiblity
// (Native, NetResponse, Static, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventParticipantStatsWidget_C::STATIC_GetSelectedOverlayVisiblity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetSelectedOverlayVisiblity");

	UUI_GameEventParticipantStatsWidget_C_GetSelectedOverlayVisiblity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetInactiveOverlayVisibility
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventParticipantStatsWidget_C::GetInactiveOverlayVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetInactiveOverlayVisibility");

	UUI_GameEventParticipantStatsWidget_C_GetInactiveOverlayVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseEnter
// (Net, Exec, NetResponse, NetMulticast, MulticastDelegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_GameEventParticipantStatsWidget_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseEnter");

	UUI_GameEventParticipantStatsWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseLeave
// (Native, NetResponse, Static, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_GameEventParticipantStatsWidget_C::STATIC_OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseLeave");

	UUI_GameEventParticipantStatsWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateColours
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_GameEventParticipantStatsWidget_C::STATIC_UpdateColours()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateColours");

	UUI_GameEventParticipantStatsWidget_C_UpdateColours_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.SetColours
// (NetReliable, NetRequest, Exec, NetResponse, Static, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGameEventTeamColours*  colours                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_GameEventParticipantStatsWidget_C::STATIC_SetColours(struct FGameEventTeamColours* colours)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.SetColours");

	UUI_GameEventParticipantStatsWidget_C_SetColours_Params params;
	params.colours = colours;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateStats
// (NetReliable, NetRequest, Exec, NetResponse, Static, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_GameEventParticipantStatsWidget_C::STATIC_UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateStats");

	UUI_GameEventParticipantStatsWidget_C_UpdateStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.ExecuteUbergraph_UI_GameEventParticipantStatsWidget
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, Protected, Delegate, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventParticipantStatsWidget_C::STATIC_ExecuteUbergraph_UI_GameEventParticipantStatsWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.ExecuteUbergraph_UI_GameEventParticipantStatsWidget");

	UUI_GameEventParticipantStatsWidget_C_ExecuteUbergraph_UI_GameEventParticipantStatsWidget_Params params;
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
