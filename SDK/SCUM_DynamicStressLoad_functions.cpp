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

// Function DynamicStressLoad.DynamicStressLoad_C.SetParentsForChildren
// (Event, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UDynamicStressLoad_C::SetParentsForChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SetParentsForChildren");

	UDynamicStressLoad_C_SetParentsForChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.shouldAlarmBeOn
// (Net, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::STATIC_shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.shouldAlarmBeOn");

	UDynamicStressLoad_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function DynamicStressLoad.DynamicStressLoad_C.SetColorOfSelectedTextFields
// (Net, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FLinearColor*           color_SpecifiedColor           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::STATIC_SetColorOfSelectedTextFields(struct FLinearColor* color_SpecifiedColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SetColorOfSelectedTextFields");

	UDynamicStressLoad_C_SetColorOfSelectedTextFields_Params params;
	params.color_SpecifiedColor = color_SpecifiedColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.AdjustUnitsValues
// (NetRequest, Exec, Native, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UDynamicStressLoad_C::STATIC_AdjustUnitsValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.AdjustUnitsValues");

	UDynamicStressLoad_C_AdjustUnitsValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.AdjustTextColors
// (NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)

void UDynamicStressLoad_C::STATIC_AdjustTextColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.AdjustTextColors");

	UDynamicStressLoad_C_AdjustTextColors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.Init
// ()

void UDynamicStressLoad_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.Init");

	UDynamicStressLoad_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.UpdateParameterLines
// (NetRequest, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UDynamicStressLoad_C::STATIC_UpdateParameterLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.UpdateParameterLines");

	UDynamicStressLoad_C_UpdateParameterLines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.SetPrisonerToMonitor
// (NetRequest, Exec, Native, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::STATIC_SetPrisonerToMonitor(class APrisoner** Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SetPrisonerToMonitor");

	UDynamicStressLoad_C_SetPrisonerToMonitor_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function DynamicStressLoad.DynamicStressLoad_C.SetDefaultTitle
// (Net, NetReliable, Exec, Native, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  defaultTitle                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UDynamicStressLoad_C::STATIC_SetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SetDefaultTitle");

	UDynamicStressLoad_C_SetDefaultTitle_Params params;
	params.defaultTitle = defaultTitle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.SetContentVisibility
// (Net, NetReliable, Exec, Native, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility*              Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::STATIC_SetContentVisibility(ESlateVisibility* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SetContentVisibility");

	UDynamicStressLoad_C_SetContentVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.SetTextColor
// (Net, NetReliable, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::STATIC_SetTextColor(struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SetTextColor");

	UDynamicStressLoad_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.SetTextColorOfVerticalBox
// (Net, NetReliable, NetRequest, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// class UPanelWidget**           verticalBoxRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::STATIC_SetTextColorOfVerticalBox(class UPanelWidget** verticalBoxRef, struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SetTextColorOfVerticalBox");

	UDynamicStressLoad_C_SetTextColorOfVerticalBox_Params params;
	params.verticalBoxRef = verticalBoxRef;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.GetTitleText
// (NetReliable, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UDynamicStressLoad_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.GetTitleText");

	UDynamicStressLoad_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DynamicStressLoad.DynamicStressLoad_C.SetVerticalBoxContentVisibility
// (Net, Exec, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVerticalBox**           verticalBoxRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ESlateVisibility*              Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::SetVerticalBoxContentVisibility(class UVerticalBox** verticalBoxRef, ESlateVisibility* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SetVerticalBoxContentVisibility");

	UDynamicStressLoad_C_SetVerticalBoxContentVisibility_Params params;
	params.verticalBoxRef = verticalBoxRef;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.SetContentMinimized
// ()
// Parameters:
// bool*                          minimized                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::SetContentMinimized(bool* minimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SetContentMinimized");

	UDynamicStressLoad_C_SetContentMinimized_Params params;
	params.minimized = minimized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.MinimizeContent
// (Exec, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::MinimizeContent(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.MinimizeContent");

	UDynamicStressLoad_C_MinimizeContent_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.GetDefaultTitle
// (Net, Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void UDynamicStressLoad_C::STATIC_GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.GetDefaultTitle");

	UDynamicStressLoad_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function DynamicStressLoad.DynamicStressLoad_C.SelectCustomColor
// (Net, NetRequest, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::STATIC_SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SelectCustomColor");

	UDynamicStressLoad_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function DynamicStressLoad.DynamicStressLoad_C.OnMinimize
// (Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::STATIC_OnMinimize(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.OnMinimize");

	UDynamicStressLoad_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.Construct
// (Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UDynamicStressLoad_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.Construct");

	UDynamicStressLoad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.Tick
// (NetRequest, Exec, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.Tick");

	UDynamicStressLoad_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.OnPrisonerSet
// (NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UDynamicStressLoad_C::STATIC_OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.OnPrisonerSet");

	UDynamicStressLoad_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.UpdateDynamicLoadEvent
// (Net, NetRequest, Exec, Native, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UDynamicStressLoad_C::STATIC_UpdateDynamicLoadEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.UpdateDynamicLoadEvent");

	UDynamicStressLoad_C_UpdateDynamicLoadEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.AlarmOnWindowContent
// (Exec, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)

void UDynamicStressLoad_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.AlarmOnWindowContent");

	UDynamicStressLoad_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.AlarmOffWindowContent
// (Net, NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)

void UDynamicStressLoad_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.AlarmOffWindowContent");

	UDynamicStressLoad_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.ExecuteUbergraph_DynamicStressLoad
// (Net, NetReliable, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::STATIC_ExecuteUbergraph_DynamicStressLoad(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.ExecuteUbergraph_DynamicStressLoad");

	UDynamicStressLoad_C_ExecuteUbergraph_DynamicStressLoad_Params params;
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
