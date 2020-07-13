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

// Function SkillModifiers.SkillModifiers_C.SetParentsForChildren
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)

void USkillModifiers_C::STATIC_SetParentsForChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetParentsForChildren");

	USkillModifiers_C_SetParentsForChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.shouldAlarmBeOn
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::STATIC_shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.shouldAlarmBeOn");

	USkillModifiers_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function SkillModifiers.SkillModifiers_C.UpdateParameterLines
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)

void USkillModifiers_C::STATIC_UpdateParameterLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.UpdateParameterLines");

	USkillModifiers_C_UpdateParameterLines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.SetPrisonerToMonitor
// (NetReliable, Native, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::STATIC_SetPrisonerToMonitor(class APrisoner** Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetPrisonerToMonitor");

	USkillModifiers_C_SetPrisonerToMonitor_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function SkillModifiers.SkillModifiers_C.SetDefaultTitle
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  defaultTitle                   (BlueprintVisible, BlueprintReadOnly, Parm)

void USkillModifiers_C::SetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetDefaultTitle");

	USkillModifiers_C_SetDefaultTitle_Params params;
	params.defaultTitle = defaultTitle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.SetContentVisibility
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility*              Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::SetContentVisibility(ESlateVisibility* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetContentVisibility");

	USkillModifiers_C_SetContentVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.SetTextColor
// (NetReliable, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::STATIC_SetTextColor(struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetTextColor");

	USkillModifiers_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.SetTextColorOfVerticalBox
// (Net, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// class UPanelWidget**           verticalBoxRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::STATIC_SetTextColorOfVerticalBox(class UPanelWidget** verticalBoxRef, struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetTextColorOfVerticalBox");

	USkillModifiers_C_SetTextColorOfVerticalBox_Params params;
	params.verticalBoxRef = verticalBoxRef;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.GetTitleText
// (Net, NetReliable, Exec, Event, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USkillModifiers_C::STATIC_GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.GetTitleText");

	USkillModifiers_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillModifiers.SkillModifiers_C.SetVerticalBoxContentVisibility
// (NetReliable, Event, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox**           verticalBoxRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ESlateVisibility*              Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::SetVerticalBoxContentVisibility(class UVerticalBox** verticalBoxRef, ESlateVisibility* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetVerticalBoxContentVisibility");

	USkillModifiers_C_SetVerticalBoxContentVisibility_Params params;
	params.verticalBoxRef = verticalBoxRef;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.SetContentMinimized
// ()
// Parameters:
// bool*                          minimized                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::SetContentMinimized(bool* minimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetContentMinimized");

	USkillModifiers_C_SetContentMinimized_Params params;
	params.minimized = minimized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.MinimizeContent
// (Net, Event, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::MinimizeContent(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.MinimizeContent");

	USkillModifiers_C_MinimizeContent_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.GetDefaultTitle
// (Net, Event, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void USkillModifiers_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.GetDefaultTitle");

	USkillModifiers_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function SkillModifiers.SkillModifiers_C.SelectCustomColor
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::STATIC_SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SelectCustomColor");

	USkillModifiers_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function SkillModifiers.SkillModifiers_C.OnMinimize
// (Event, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::OnMinimize(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.OnMinimize");

	USkillModifiers_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.Construct
// (Net, NetRequest, Native, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void USkillModifiers_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.Construct");

	USkillModifiers_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.Tick
// (NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.Tick");

	USkillModifiers_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.OnPrisonerSet
// (Net, NetReliable, Native, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void USkillModifiers_C::STATIC_OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.OnPrisonerSet");

	USkillModifiers_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.AlarmOnWindowContent
// (Net, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void USkillModifiers_C::STATIC_AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.AlarmOnWindowContent");

	USkillModifiers_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.AlarmOffWindowContent
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void USkillModifiers_C::STATIC_AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.AlarmOffWindowContent");

	USkillModifiers_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.ExecuteUbergraph_SkillModifiers
// (Exec, Event, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::STATIC_ExecuteUbergraph_SkillModifiers(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.ExecuteUbergraph_SkillModifiers");

	USkillModifiers_C_ExecuteUbergraph_SkillModifiers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
