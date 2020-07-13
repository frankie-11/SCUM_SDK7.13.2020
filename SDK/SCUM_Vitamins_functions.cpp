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

// Function Vitamins.Vitamins_C.shouldAlarmBeOn
// (Net, NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitamins_C::STATIC_shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.shouldAlarmBeOn");

	UVitamins_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function Vitamins.Vitamins_C.SetParentsForChildren
// (NetReliable, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UVitamins_C::SetParentsForChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SetParentsForChildren");

	UVitamins_C_SetParentsForChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.Update
// (Native, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UVitamins_C::STATIC_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.Update");

	UVitamins_C_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.SetPrisonerToMonitor
// (NetReliable, NetRequest, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitamins_C::STATIC_SetPrisonerToMonitor(class APrisoner** Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SetPrisonerToMonitor");

	UVitamins_C_SetPrisonerToMonitor_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Vitamins.Vitamins_C.AddVitaminToParameterLines
// (NetReliable, NetRequest, NetResponse, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UParameterPercentageLine_C** NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void UVitamins_C::AddVitaminToParameterLines(class UParameterPercentageLine_C** NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.AddVitaminToParameterLines");

	UVitamins_C_AddVitaminToParameterLines_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.PopulateVitaminsParameterLinesArray
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UVitamins_C::STATIC_PopulateVitaminsParameterLinesArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.PopulateVitaminsParameterLinesArray");

	UVitamins_C_PopulateVitaminsParameterLinesArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.Init
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UVitamins_C::STATIC_Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.Init");

	UVitamins_C_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.SetDefaultTitle
// (Net, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  defaultTitle                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UVitamins_C::STATIC_SetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SetDefaultTitle");

	UVitamins_C_SetDefaultTitle_Params params;
	params.defaultTitle = defaultTitle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.SetContentVisibility
// ()
// Parameters:
// ESlateVisibility*              Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitamins_C::SetContentVisibility(ESlateVisibility* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SetContentVisibility");

	UVitamins_C_SetContentVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.SetTextColor
// (NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitamins_C::STATIC_SetTextColor(struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SetTextColor");

	UVitamins_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.SetTextColorOfVerticalBox
// (Net, NetReliable, Native, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UPanelWidget**           verticalBoxRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitamins_C::SetTextColorOfVerticalBox(class UPanelWidget** verticalBoxRef, struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SetTextColorOfVerticalBox");

	UVitamins_C_SetTextColorOfVerticalBox_Params params;
	params.verticalBoxRef = verticalBoxRef;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.GetTitleText
// (Net, Native, Event, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitamins_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.GetTitleText");

	UVitamins_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Vitamins.Vitamins_C.GetDefaultTitle
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void UVitamins_C::STATIC_GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.GetDefaultTitle");

	UVitamins_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function Vitamins.Vitamins_C.SelectCustomColor
// (NetRequest, Native, Event, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitamins_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SelectCustomColor");

	UVitamins_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function Vitamins.Vitamins_C.Construct
// (Net, Exec, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UVitamins_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.Construct");

	UVitamins_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.Tick
// (Net, NetRequest, Native, NetResponse, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitamins_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.Tick");

	UVitamins_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.OnPrisonerSet
// (Net, NetReliable, NetRequest, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UVitamins_C::STATIC_OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.OnPrisonerSet");

	UVitamins_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.UpdateVitaminsEvent
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UVitamins_C::STATIC_UpdateVitaminsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.UpdateVitaminsEvent");

	UVitamins_C_UpdateVitaminsEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.AlarmOnWindowContent
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UVitamins_C::STATIC_AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.AlarmOnWindowContent");

	UVitamins_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.AlarmOffWindowContent
// (Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UVitamins_C::STATIC_AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.AlarmOffWindowContent");

	UVitamins_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.OnMinimize
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitamins_C::STATIC_OnMinimize(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.OnMinimize");

	UVitamins_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.ExecuteUbergraph_Vitamins
// (Net, NetRequest, Exec, Native, Event, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitamins_C::ExecuteUbergraph_Vitamins(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.ExecuteUbergraph_Vitamins");

	UVitamins_C_ExecuteUbergraph_Vitamins_Params params;
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
