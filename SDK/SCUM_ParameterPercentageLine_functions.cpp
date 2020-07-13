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

// Function ParameterPercentageLine.ParameterPercentageLine_C.ActivateNormalColor
// (NetReliable, NetRequest, Native, Static, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UParameterPercentageLine_C::STATIC_ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.ActivateNormalColor");

	UParameterPercentageLine_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.ActivateAlarmColor
// (Native, Static, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UParameterPercentageLine_C::STATIC_ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.ActivateAlarmColor");

	UParameterPercentageLine_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SetAlarmColor
// (NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterPercentageLine_C::STATIC_SetAlarmColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SetAlarmColor");

	UParameterPercentageLine_C_SetAlarmColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.Update
// (NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UParameterPercentageLine_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.Update");

	UParameterPercentageLine_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.GetValueTextBlock
// (Net, NetReliable, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UParameterPercentageLine_C::GetValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.GetValueTextBlock");

	UParameterPercentageLine_C_GetValueTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SetColorOfValue
// (Net, NetReliable, NetRequest, Exec, Native, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterPercentageLine_C::SetColorOfValue(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SetColorOfValue");

	UParameterPercentageLine_C_SetColorOfValue_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SetColorOfParameterName
// (Net, NetReliable, NetRequest, Exec, Native, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterPercentageLine_C::SetColorOfParameterName(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SetColorOfParameterName");

	UParameterPercentageLine_C_SetColorOfParameterName_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SetColor
// (Net, NetRequest, Exec, Native, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterPercentageLine_C::SetColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SetColor");

	UParameterPercentageLine_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.GetParameterNameTextBlock
// (NetReliable, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UParameterPercentageLine_C::GetParameterNameTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.GetParameterNameTextBlock");

	UParameterPercentageLine_C_GetParameterNameTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SelectCustomColor
// (NetReliable, Exec, Static, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UParameterPercentageLine_C::STATIC_SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SelectCustomColor");

	UParameterPercentageLine_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.Construct
// (Net, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UParameterPercentageLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.Construct");

	UParameterPercentageLine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.Tick
// (Net, Exec, Event, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterPercentageLine_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.Tick");

	UParameterPercentageLine_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.OnPercentageChanged
// (NetReliable, Exec, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UParameterPercentageLine_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.OnPercentageChanged");

	UParameterPercentageLine_C_OnPercentageChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.AlarmSwitchOn
// (NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UParameterPercentageLine_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.AlarmSwitchOn");

	UParameterPercentageLine_C_AlarmSwitchOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.AlarmSwitchOff
// (Net, NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UParameterPercentageLine_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.AlarmSwitchOff");

	UParameterPercentageLine_C_AlarmSwitchOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.ExecuteUbergraph_ParameterPercentageLine
// (Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterPercentageLine_C::ExecuteUbergraph_ParameterPercentageLine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.ExecuteUbergraph_ParameterPercentageLine");

	UParameterPercentageLine_C_ExecuteUbergraph_ParameterPercentageLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
