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

// Function VitalStatsTemperature.VitalStatsTemperature_C.DisableAlarm
// (Exec, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UVitalStatsTemperature_C::DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.DisableAlarm");

	UVitalStatsTemperature_C_DisableAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.EnableAlarm
// (Exec, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UVitalStatsTemperature_C::EnableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.EnableAlarm");

	UVitalStatsTemperature_C_EnableAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.CheckAlarm
// (NetReliable, Exec, Native, Event, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UVitalStatsTemperature_C::CheckAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.CheckAlarm");

	UVitalStatsTemperature_C_CheckAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.GetBodyTemperatureFloat
// (NetReliable, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float                          NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalStatsTemperature_C::GetBodyTemperatureFloat(float* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.GetBodyTemperatureFloat");

	UVitalStatsTemperature_C_GetBodyTemperatureFloat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.ActivateNormalColor
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UVitalStatsTemperature_C::STATIC_ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.ActivateNormalColor");

	UVitalStatsTemperature_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.ActivateAlarmColor
// (Exec, Event, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UVitalStatsTemperature_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.ActivateAlarmColor");

	UVitalStatsTemperature_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureDeviationText
// (NetReliable, Exec, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  temperatureDeviationText       (BlueprintVisible, BlueprintReadOnly, Parm)

void UVitalStatsTemperature_C::SetTemperatureDeviationText(struct FText* temperatureDeviationText)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureDeviationText");

	UVitalStatsTemperature_C_SetTemperatureDeviationText_Params params;
	params.temperatureDeviationText = temperatureDeviationText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureDeviation
// (Net, NetReliable, Exec, Event, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         temperatureDeviation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsTemperature_C::SetTemperatureDeviation(float* temperatureDeviation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureDeviation");

	UVitalStatsTemperature_C_SetTemperatureDeviation_Params params;
	params.temperatureDeviation = temperatureDeviation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureExtremes
// (Net, Exec, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  tempExtremes                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UVitalStatsTemperature_C::SetTemperatureExtremes(struct FText* tempExtremes)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureExtremes");

	UVitalStatsTemperature_C_SetTemperatureExtremes_Params params;
	params.tempExtremes = tempExtremes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.GetTemperatureDeviation
// (NetReliable, Exec, Native, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStatsTemperature_C::GetTemperatureDeviation()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.GetTemperatureDeviation");

	UVitalStatsTemperature_C_GetTemperatureDeviation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.GetBodyTemperature
// (NetResponse, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStatsTemperature_C::GetBodyTemperature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.GetBodyTemperature");

	UVitalStatsTemperature_C_GetBodyTemperature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.SetTextColor
// (NetReliable, NetRequest, NetResponse, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsTemperature_C::SetTextColor(struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.SetTextColor");

	UVitalStatsTemperature_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.Construct
// (NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UVitalStatsTemperature_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.Construct");

	UVitalStatsTemperature_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.Tick
// (Net, Exec, Native, Event, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsTemperature_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.Tick");

	UVitalStatsTemperature_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.ExecuteUbergraph_VitalStatsTemperature
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsTemperature_C::ExecuteUbergraph_VitalStatsTemperature(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.ExecuteUbergraph_VitalStatsTemperature");

	UVitalStatsTemperature_C_ExecuteUbergraph_VitalStatsTemperature_Params params;
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
