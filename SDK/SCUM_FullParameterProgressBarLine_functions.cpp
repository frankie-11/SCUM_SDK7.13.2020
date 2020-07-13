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

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetDecimalPlacesForValue
// (Net, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           decimalPlacesToSet             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_SetDecimalPlacesForValue(int* decimalPlacesToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetDecimalPlacesForValue");

	UFullParameterProgressBarLine_C_SetDecimalPlacesForValue_Params params;
	params.decimalPlacesToSet = decimalPlacesToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetDecimalPlaces
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           decimalPlacesToSet             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_SetDecimalPlaces(int* decimalPlacesToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetDecimalPlaces");

	UFullParameterProgressBarLine_C_SetDecimalPlaces_Params params;
	params.decimalPlacesToSet = decimalPlacesToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AdjustHorizontalFillRules
// (Net, NetRequest, Exec, Native, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         fillColumn0                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         fillColumn1                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         fillColumn2                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::AdjustHorizontalFillRules(float* fillColumn0, float* fillColumn1, float* fillColumn2)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AdjustHorizontalFillRules");

	UFullParameterProgressBarLine_C_AdjustHorizontalFillRules_Params params;
	params.fillColumn0 = fillColumn0;
	params.fillColumn1 = fillColumn1;
	params.fillColumn2 = fillColumn2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetPercentageText
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  percentText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::STATIC_SetPercentageText(struct FText* percentText)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetPercentageText");

	UFullParameterProgressBarLine_C_SetPercentageText_Params params;
	params.percentText = percentText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdatePercentageText
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::UpdatePercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdatePercentageText");

	UFullParameterProgressBarLine_C_UpdatePercentageText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetCurrentValueText
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  valueStr                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::STATIC_SetCurrentValueText(struct FText* valueStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetCurrentValueText");

	UFullParameterProgressBarLine_C_SetCurrentValueText_Params params;
	params.valueStr = valueStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateCurrentValueText
// (NetRequest, Native, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UFullParameterProgressBarLine_C::UpdateCurrentValueText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateCurrentValueText");

	UFullParameterProgressBarLine_C_UpdateCurrentValueText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateDefaultCurrentValue
// ()

void UFullParameterProgressBarLine_C::UpdateDefaultCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateDefaultCurrentValue");

	UFullParameterProgressBarLine_C_UpdateDefaultCurrentValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetMeasurementUnit
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  measurementUnit                (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::STATIC_SetMeasurementUnit(struct FText* measurementUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetMeasurementUnit");

	UFullParameterProgressBarLine_C_SetMeasurementUnit_Params params;
	params.measurementUnit = measurementUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetMeasurementUnit
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   measurementUnit                (Parm, OutParm)

void UFullParameterProgressBarLine_C::STATIC_GetMeasurementUnit(struct FText* measurementUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetMeasurementUnit");

	UFullParameterProgressBarLine_C_GetMeasurementUnit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (measurementUnit != nullptr)
		*measurementUnit = params.measurementUnit;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.IsMeasurementUnitDefault
// (Net, NetReliable, NetRequest, Native, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString*                MUString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFullParameterProgressBarLine_C::IsMeasurementUnitDefault(struct FString* MUString)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.IsMeasurementUnitDefault");

	UFullParameterProgressBarLine_C_IsMeasurementUnitDefault_Params params;
	params.MUString = MUString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateRDAValue
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_UpdateRDAValue(float* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateRDAValue");

	UFullParameterProgressBarLine_C_UpdateRDAValue_Params params;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetRDAText
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  valueStr                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::STATIC_SetRDAText(struct FText* valueStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetRDAText");

	UFullParameterProgressBarLine_C_SetRDAText_Params params;
	params.valueStr = valueStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateRDAText
// (NetReliable, NetRequest, Event, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UFullParameterProgressBarLine_C::UpdateRDAText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateRDAText");

	UFullParameterProgressBarLine_C_UpdateRDAText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetRDAValue
// (Net, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::SetRDAValue(float* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetRDAValue");

	UFullParameterProgressBarLine_C_SetRDAValue_Params params;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateCurrentValue
// (NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::UpdateCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateCurrentValue");

	UFullParameterProgressBarLine_C_UpdateCurrentValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetCurrentValue
// (Net, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_SetCurrentValue(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetCurrentValue");

	UFullParameterProgressBarLine_C_SetCurrentValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ActivateNormalColor
// (Exec, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UFullParameterProgressBarLine_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ActivateNormalColor");

	UFullParameterProgressBarLine_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ActivateAlarmColor
// (Net, NetReliable, Event, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UFullParameterProgressBarLine_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ActivateAlarmColor");

	UFullParameterProgressBarLine_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetPercentageToShowText
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UFullParameterProgressBarLine_C::GetPercentageToShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetPercentageToShowText");

	UFullParameterProgressBarLine_C_GetPercentageToShowText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateNutrientTextValues
// ()

void UFullParameterProgressBarLine_C::UpdateNutrientTextValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateNutrientTextValues");

	UFullParameterProgressBarLine_C_UpdateNutrientTextValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetAlarmColor
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_SetAlarmColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetAlarmColor");

	UFullParameterProgressBarLine_C_SetAlarmColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetCurrentValueTextBlock
// (Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_GetCurrentValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetCurrentValueTextBlock");

	UFullParameterProgressBarLine_C_GetCurrentValueTextBlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfMaxValue
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::STATIC_SetColorOfMaxValue(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfMaxValue");

	UFullParameterProgressBarLine_C_SetColorOfMaxValue_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfValue
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::STATIC_SetColorOfValue(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfValue");

	UFullParameterProgressBarLine_C_SetColorOfValue_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfParameterName
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::STATIC_SetColorOfParameterName(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfParameterName");

	UFullParameterProgressBarLine_C_SetColorOfParameterName_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColor
// (NetReliable, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::SetColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColor");

	UFullParameterProgressBarLine_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetRDAValueTextBlock
// (Net, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFullParameterProgressBarLine_C::GetRDAValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetRDAValueTextBlock");

	UFullParameterProgressBarLine_C_GetRDAValueTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetParameterNameTextBlock
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_GetParameterNameTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetParameterNameTextBlock");

	UFullParameterProgressBarLine_C_GetParameterNameTextBlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetParameterName
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ParameterName                  (Parm, OutParm)

void UFullParameterProgressBarLine_C::STATIC_GetParameterName(struct FText* ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetParameterName");

	UFullParameterProgressBarLine_C_GetParameterName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParameterName != nullptr)
		*ParameterName = params.ParameterName;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetParameterName
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ParameterName                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::STATIC_SetParameterName(struct FText* ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetParameterName");

	UFullParameterProgressBarLine_C_SetParameterName_Params params;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnMouseButtonDownOnMinimizeParameterLine
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFullParameterProgressBarLine_C::OnMouseButtonDownOnMinimizeParameterLine(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnMouseButtonDownOnMinimizeParameterLine");

	UFullParameterProgressBarLine_C_OnMouseButtonDownOnMinimizeParameterLine_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnMinimize
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_OnMinimize(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnMinimize");

	UFullParameterProgressBarLine_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.Construct
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.Construct");

	UFullParameterProgressBarLine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.Tick
// (NetReliable, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.Tick");

	UFullParameterProgressBarLine_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnSynchronizeProperties
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::STATIC_OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnSynchronizeProperties");

	UFullParameterProgressBarLine_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AlarmSwitchOn
// (NetReliable, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AlarmSwitchOn");

	UFullParameterProgressBarLine_C_AlarmSwitchOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AlarmSwitchOff
// (Net, NetReliable, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AlarmSwitchOff");

	UFullParameterProgressBarLine_C_AlarmSwitchOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnPercentageChanged
// (Exec, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnPercentageChanged");

	UFullParameterProgressBarLine_C_OnPercentageChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ExecuteUbergraph_FullParameterProgressBarLine
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_ExecuteUbergraph_FullParameterProgressBarLine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ExecuteUbergraph_FullParameterProgressBarLine");

	UFullParameterProgressBarLine_C_ExecuteUbergraph_FullParameterProgressBarLine_Params params;
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
