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

// Function VitalStatsRespiration.VitalStatsRespiration_C.DisableAlarm
// (NetReliable, NetRequest, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UVitalStatsRespiration_C::STATIC_DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.DisableAlarm");

	UVitalStatsRespiration_C_DisableAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.EnableAlarm
// (NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UVitalStatsRespiration_C::EnableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.EnableAlarm");

	UVitalStatsRespiration_C_EnableAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.CheckAlarm
// (Net, Exec, Event, Static, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UVitalStatsRespiration_C::STATIC_CheckAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.CheckAlarm");

	UVitalStatsRespiration_C_CheckAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.GetRespiratoryRateInt
// (Net, NetReliable, Exec, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            respiratoryRate                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalStatsRespiration_C::GetRespiratoryRateInt(int* respiratoryRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.GetRespiratoryRateInt");

	UVitalStatsRespiration_C_GetRespiratoryRateInt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (respiratoryRate != nullptr)
		*respiratoryRate = params.respiratoryRate;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.ActivateNormalColor
// (NetReliable, Native, Event, NetResponse, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UVitalStatsRespiration_C::STATIC_ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.ActivateNormalColor");

	UVitalStatsRespiration_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.ActivateAlarmColor
// (Exec, Native, Event, NetResponse, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UVitalStatsRespiration_C::STATIC_ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.ActivateAlarmColor");

	UVitalStatsRespiration_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.GetBreathRate
// (NetReliable, Exec, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStatsRespiration_C::GetBreathRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.GetBreathRate");

	UVitalStatsRespiration_C_GetBreathRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.SetTextColor
// (Native, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsRespiration_C::SetTextColor(struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.SetTextColor");

	UVitalStatsRespiration_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.Construct
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UVitalStatsRespiration_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.Construct");

	UVitalStatsRespiration_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.Tick
// (Net, NetRequest, Exec, Event, Static, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsRespiration_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.Tick");

	UVitalStatsRespiration_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.ExecuteUbergraph_VitalStatsRespiration
// (NetRequest, Event, Static, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsRespiration_C::STATIC_ExecuteUbergraph_VitalStatsRespiration(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.ExecuteUbergraph_VitalStatsRespiration");

	UVitalStatsRespiration_C_ExecuteUbergraph_VitalStatsRespiration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
