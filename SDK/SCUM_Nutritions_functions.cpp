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

// Function Nutritions.Nutritions_C.SetParentsForChildren
// (Net, Exec, Event, Static, NetMulticast, Public, NetServer, HasDefaults, NetClient, BlueprintCallable)

void UNutritions_C::STATIC_SetParentsForChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.SetParentsForChildren");

	UNutritions_C_SetParentsForChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.shouldAlarmBeOn
// (Net, NetRequest, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNutritions_C::STATIC_shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.shouldAlarmBeOn");

	UNutritions_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function Nutritions.Nutritions_C.UpdateCaloryWaterConsumRates
// (NetReliable, Exec, Native, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UNutritions_C::STATIC_UpdateCaloryWaterConsumRates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.UpdateCaloryWaterConsumRates");

	UNutritions_C_UpdateCaloryWaterConsumRates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.Init
// (NetReliable, Exec, Native, Event, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UNutritions_C::STATIC_Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.Init");

	UNutritions_C_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.Update
// ()

void UNutritions_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.Update");

	UNutritions_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.UpdateNutritionPercentages
// (Net, NetReliable, Native, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UNutritions_C::STATIC_UpdateNutritionPercentages()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.UpdateNutritionPercentages");

	UNutritions_C_UpdateNutritionPercentages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.UpdateRDAValues
// (NetRequest, Exec, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UNutritions_C::STATIC_UpdateRDAValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.UpdateRDAValues");

	UNutritions_C_UpdateRDAValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.UpdateNutritionValues
// (Net, NetReliable, NetRequest, Exec, Native, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UNutritions_C::UpdateNutritionValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.UpdateNutritionValues");

	UNutritions_C_UpdateNutritionValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.SetDefaultTitle
// (Net, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  defaultTitle                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UNutritions_C::STATIC_SetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.SetDefaultTitle");

	UNutritions_C_SetDefaultTitle_Params params;
	params.defaultTitle = defaultTitle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.SetContentVisibility
// ()
// Parameters:
// ESlateVisibility*              Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNutritions_C::SetContentVisibility(ESlateVisibility* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.SetContentVisibility");

	UNutritions_C_SetContentVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.SetTextColor
// (NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNutritions_C::STATIC_SetTextColor(struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.SetTextColor");

	UNutritions_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.SetTextColorOfVerticalBox
// (NetReliable, NetRequest, Exec, Native, NetResponse, Public, NetServer, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// class UPanelWidget**           verticalBoxRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNutritions_C::SetTextColorOfVerticalBox(class UPanelWidget** verticalBoxRef, struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.SetTextColorOfVerticalBox");

	UNutritions_C_SetTextColorOfVerticalBox_Params params;
	params.verticalBoxRef = verticalBoxRef;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.GetTitleText
// (Net, NetReliable, NetRequest, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UNutritions_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.GetTitleText");

	UNutritions_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Nutritions.Nutritions_C.GetDefaultTitle
// (Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void UNutritions_C::STATIC_GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.GetDefaultTitle");

	UNutritions_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function Nutritions.Nutritions_C.SelectCustomColor
// (Net, NetRequest, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNutritions_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.SelectCustomColor");

	UNutritions_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function Nutritions.Nutritions_C.OnMinimize
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNutritions_C::STATIC_OnMinimize(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.OnMinimize");

	UNutritions_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.Construct
// (Net, NetReliable, Exec, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UNutritions_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.Construct");

	UNutritions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.Tick
// (NetReliable, Exec, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNutritions_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.Tick");

	UNutritions_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.UpdateNutritionsEvent
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UNutritions_C::STATIC_UpdateNutritionsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.UpdateNutritionsEvent");

	UNutritions_C_UpdateNutritionsEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.OnPrisonerSet
// (NetReliable, Exec, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UNutritions_C::STATIC_OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.OnPrisonerSet");

	UNutritions_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.AlarmOnWindowContent
// (Net, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UNutritions_C::STATIC_AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.AlarmOnWindowContent");

	UNutritions_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.AlarmOffWindowContent
// (NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UNutritions_C::STATIC_AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.AlarmOffWindowContent");

	UNutritions_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.ExecuteUbergraph_Nutritions
// (Net, Exec, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNutritions_C::STATIC_ExecuteUbergraph_Nutritions(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.ExecuteUbergraph_Nutritions");

	UNutritions_C_ExecuteUbergraph_Nutritions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
