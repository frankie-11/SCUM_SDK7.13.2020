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

// Function ParameterLine.ParameterLine_C.ActivateCustomAlarmColor
// (NetRequest, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           LinearColor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterLine_C::ActivateCustomAlarmColor(struct FLinearColor* LinearColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.ActivateCustomAlarmColor");

	UParameterLine_C_ActivateCustomAlarmColor_Params params;
	params.LinearColor = LinearColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.AlarmControl
// (Net, NetReliable, Exec, Native, Event, NetResponse, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           alarmColorCode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterLine_C::AlarmControl(int* alarmColorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.AlarmControl");

	UParameterLine_C_AlarmControl_Params params;
	params.alarmColorCode = alarmColorCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.ActivateNormalColor
// (Net, NetReliable, Event, NetResponse, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UParameterLine_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.ActivateNormalColor");

	UParameterLine_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.ActivateAlarmColor
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UParameterLine_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.ActivateAlarmColor");

	UParameterLine_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.SetAlarmColor
// (Exec, Native, Event, NetResponse, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterLine_C::SetAlarmColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetAlarmColor");

	UParameterLine_C_SetAlarmColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.Update
// (NetReliable, Exec, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  parameterNameToSet             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  parameterValueToSet            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  maxParameterValueToSet         (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterLine_C::Update(struct FText* parameterNameToSet, struct FText* parameterValueToSet, struct FText* maxParameterValueToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.Update");

	UParameterLine_C_Update_Params params;
	params.parameterNameToSet = parameterNameToSet;
	params.parameterValueToSet = parameterValueToSet;
	params.maxParameterValueToSet = maxParameterValueToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.SetValuesColor
// (NetReliable, Exec, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterLine_C::SetValuesColor(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetValuesColor");

	UParameterLine_C_SetValuesColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.SetParameterValueText
// (Net, Exec, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  parameterValueText             (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterLine_C::SetParameterValueText(struct FText* parameterValueText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetParameterValueText");

	UParameterLine_C_SetParameterValueText_Params params;
	params.parameterValueText = parameterValueText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.SetMaxValueText
// (Exec, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  maxValueText                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterLine_C::SetMaxValueText(struct FText* maxValueText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetMaxValueText");

	UParameterLine_C_SetMaxValueText_Params params;
	params.maxValueText = maxValueText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.SetParameterValueSlashText
// (Net, NetReliable, NetRequest, Static, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           decimalPlaces                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterLine_C::STATIC_SetParameterValueSlashText(float* Value, int* decimalPlaces)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetParameterValueSlashText");

	UParameterLine_C_SetParameterValueSlashText_Params params;
	params.Value = Value;
	params.decimalPlaces = decimalPlaces;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.SetParameterValueTextDecimal
// (NetRequest, Static, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           decimalPlaces                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterLine_C::STATIC_SetParameterValueTextDecimal(float* Value, int* decimalPlaces)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetParameterValueTextDecimal");

	UParameterLine_C_SetParameterValueTextDecimal_Params params;
	params.Value = Value;
	params.decimalPlaces = decimalPlaces;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.GetValueTextBlock
// (Net, NetReliable, NetRequest, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UParameterLine_C::GetValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.GetValueTextBlock");

	UParameterLine_C_GetValueTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function ParameterLine.ParameterLine_C.SetColorOfMaxValue
// (NetReliable, NetRequest, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterLine_C::SetColorOfMaxValue(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetColorOfMaxValue");

	UParameterLine_C_SetColorOfMaxValue_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.SetColorOfValue
// (NetRequest, Native, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterLine_C::SetColorOfValue(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetColorOfValue");

	UParameterLine_C_SetColorOfValue_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.SetColorOfParameterName
// (Net, NetReliable, Native, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterLine_C::SetColorOfParameterName(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetColorOfParameterName");

	UParameterLine_C_SetColorOfParameterName_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.SetColor
// (Net, NetReliable, Native, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterLine_C::SetColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetColor");

	UParameterLine_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.GetMaxValueTextBlock
// (NetReliable, Native, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UParameterLine_C::GetMaxValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.GetMaxValueTextBlock");

	UParameterLine_C_GetMaxValueTextBlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function ParameterLine.ParameterLine_C.GetParameterNameTextBlock
// (Net, Native, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UParameterLine_C::GetParameterNameTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.GetParameterNameTextBlock");

	UParameterLine_C_GetParameterNameTextBlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function ParameterLine.ParameterLine_C.GetParameterNameText
// (Native, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ParameterName                  (Parm, OutParm)

void UParameterLine_C::GetParameterNameText(struct FText* ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.GetParameterNameText");

	UParameterLine_C_GetParameterNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParameterName != nullptr)
		*ParameterName = params.ParameterName;
}


// Function ParameterLine.ParameterLine_C.SetParameterName
// (Net, NetReliable, NetRequest, Exec, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ParameterName                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterLine_C::SetParameterName(struct FText* ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetParameterName");

	UParameterLine_C_SetParameterName_Params params;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.GetTitleText
// (Event, NetResponse, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UParameterLine_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.GetTitleText");

	UParameterLine_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ParameterLine.ParameterLine_C.GetDefaultTitle
// (NetReliable, NetRequest, Exec, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void UParameterLine_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.GetDefaultTitle");

	UParameterLine_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function ParameterLine.ParameterLine_C.OnMinimize
// (Net, NetRequest, Exec, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterLine_C::OnMinimize(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.OnMinimize");

	UParameterLine_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.Construct
// (NetRequest, Exec, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UParameterLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.Construct");

	UParameterLine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.ExecuteUbergraph_ParameterLine
// (Net, NetReliable, Exec, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterLine_C::ExecuteUbergraph_ParameterLine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.ExecuteUbergraph_ParameterLine");

	UParameterLine_C_ExecuteUbergraph_ParameterLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
