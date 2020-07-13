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

// Function ParameterProgressLine.ParameterProgressLine_C.AdjustRelativeColumnSizes
// (Net, NetRequest, Native, Event, NetResponse, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         column0_Percent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         column1_Percent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterProgressLine_C::AdjustRelativeColumnSizes(float* column0_Percent, float* column1_Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.AdjustRelativeColumnSizes");

	UParameterProgressLine_C_AdjustRelativeColumnSizes_Params params;
	params.column0_Percent = column0_Percent;
	params.column1_Percent = column1_Percent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterProgressLine.ParameterProgressLine_C.SetPercentageText
// (Net, NetRequest, Native, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  percentText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterProgressLine_C::SetPercentageText(struct FText* percentText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.SetPercentageText");

	UParameterProgressLine_C_SetPercentageText_Params params;
	params.percentText = percentText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterProgressLine.ParameterProgressLine_C.UpdatePercentageText
// (Net, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UParameterProgressLine_C::UpdatePercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.UpdatePercentageText");

	UParameterProgressLine_C_UpdatePercentageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterProgressLine.ParameterProgressLine_C.ActivateNormalColor
// (Net, NetRequest, Exec, Static, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UParameterProgressLine_C::STATIC_ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.ActivateNormalColor");

	UParameterProgressLine_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterProgressLine.ParameterProgressLine_C.ActivateAlarmColor
// (NetReliable, Exec, Native, NetResponse, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UParameterProgressLine_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.ActivateAlarmColor");

	UParameterProgressLine_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterProgressLine.ParameterProgressLine_C.GetPercentageToShowText
// (NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UParameterProgressLine_C::GetPercentageToShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.GetPercentageToShowText");

	UParameterProgressLine_C_GetPercentageToShowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ParameterProgressLine.ParameterProgressLine_C.UpdateNutrientTextValues
// ()

void UParameterProgressLine_C::UpdateNutrientTextValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.UpdateNutrientTextValues");

	UParameterProgressLine_C_UpdateNutrientTextValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterProgressLine.ParameterProgressLine_C.SetAlarmColor
// (NetRequest, Native, NetResponse, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterProgressLine_C::SetAlarmColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.SetAlarmColor");

	UParameterProgressLine_C_SetAlarmColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterProgressLine.ParameterProgressLine_C.SetColorOfParameterName
// (Net, NetRequest, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterProgressLine_C::STATIC_SetColorOfParameterName(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.SetColorOfParameterName");

	UParameterProgressLine_C_SetColorOfParameterName_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterProgressLine.ParameterProgressLine_C.SetColor
// (NetRequest, Exec, Native, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterProgressLine_C::SetColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.SetColor");

	UParameterProgressLine_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterProgressLine.ParameterProgressLine_C.GetParameterNameTextBlock
// (Net, NetReliable, Exec, Native, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UParameterProgressLine_C::GetParameterNameTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.GetParameterNameTextBlock");

	UParameterProgressLine_C_GetParameterNameTextBlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function ParameterProgressLine.ParameterProgressLine_C.GetParameterName
// (NetReliable, Exec, Native, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ParameterName                  (Parm, OutParm)

void UParameterProgressLine_C::GetParameterName(struct FText* ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.GetParameterName");

	UParameterProgressLine_C_GetParameterName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParameterName != nullptr)
		*ParameterName = params.ParameterName;
}


// Function ParameterProgressLine.ParameterProgressLine_C.SetParameterName
// (Net, Exec, Native, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ParameterName                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterProgressLine_C::SetParameterName(struct FText* ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.SetParameterName");

	UParameterProgressLine_C_SetParameterName_Params params;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterProgressLine.ParameterProgressLine_C.OnMouseButtonDownOnMinimizeParameterLine
// (Net, Native, NetResponse, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UParameterProgressLine_C::OnMouseButtonDownOnMinimizeParameterLine(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.OnMouseButtonDownOnMinimizeParameterLine");

	UParameterProgressLine_C_OnMouseButtonDownOnMinimizeParameterLine_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ParameterProgressLine.ParameterProgressLine_C.OnMinimize
// (Exec, Native, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterProgressLine_C::OnMinimize(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.OnMinimize");

	UParameterProgressLine_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterProgressLine.ParameterProgressLine_C.Construct
// (Exec, Native, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UParameterProgressLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.Construct");

	UParameterProgressLine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterProgressLine.ParameterProgressLine_C.Tick
// (Net, NetRequest, Event, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterProgressLine_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.Tick");

	UParameterProgressLine_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterProgressLine.ParameterProgressLine_C.OnSynchronizeProperties
// (Net, NetReliable, NetRequest, Native, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UParameterProgressLine_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.OnSynchronizeProperties");

	UParameterProgressLine_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterProgressLine.ParameterProgressLine_C.AlarmSwitchOn
// (Exec, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UParameterProgressLine_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.AlarmSwitchOn");

	UParameterProgressLine_C_AlarmSwitchOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterProgressLine.ParameterProgressLine_C.AlarmSwitchOff
// (Net, Exec, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UParameterProgressLine_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.AlarmSwitchOff");

	UParameterProgressLine_C_AlarmSwitchOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterProgressLine.ParameterProgressLine_C.OnPercentageChanged
// (Net, NetReliable, Exec, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UParameterProgressLine_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.OnPercentageChanged");

	UParameterProgressLine_C_OnPercentageChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterProgressLine.ParameterProgressLine_C.ExecuteUbergraph_ParameterProgressLine
// (NetReliable, NetRequest, Native, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterProgressLine_C::ExecuteUbergraph_ParameterProgressLine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.ExecuteUbergraph_ParameterProgressLine");

	UParameterProgressLine_C_ExecuteUbergraph_ParameterProgressLine_Params params;
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
