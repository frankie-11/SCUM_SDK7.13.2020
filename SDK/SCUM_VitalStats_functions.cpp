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

// Function VitalStats.VitalStats_C.isAlarmOn
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           isHeartBPMAlarmOn              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalStats_C::isAlarmOn(bool* isHeartBPMAlarmOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.isAlarmOn");

	UVitalStats_C_isAlarmOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isHeartBPMAlarmOn != nullptr)
		*isHeartBPMAlarmOn = params.isHeartBPMAlarmOn;
}


// Function VitalStats.VitalStats_C.AlarmControl
// (Exec, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           alarmCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStats_C::STATIC_AlarmControl(int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.AlarmControl");

	UVitalStats_C_AlarmControl_Params params;
	params.alarmCode = alarmCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.DeactivateAlarm
// (Net, NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)

void UVitalStats_C::DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.DeactivateAlarm");

	UVitalStats_C_DeactivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.ActivateAlarm
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)

void UVitalStats_C::ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.ActivateAlarm");

	UVitalStats_C_ActivateAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.CheckHeartBPMAlarm
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// int*                           BeatsPerMinute                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalStats_C::CheckHeartBPMAlarm(int* BeatsPerMinute, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.CheckHeartBPMAlarm");

	UVitalStats_C_CheckHeartBPMAlarm_Params params;
	params.BeatsPerMinute = BeatsPerMinute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function VitalStats.VitalStats_C.SetTextColor
// (Net, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStats_C::SetTextColor(struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.SetTextColor");

	UVitalStats_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.GetHeartRateBPM
// (Net, NetReliable, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStats_C::GetHeartRateBPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetHeartRateBPM");

	UVitalStats_C_GetHeartRateBPM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.GetHealthPercentText
// (Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStats_C::GetHealthPercentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetHealthPercentText");

	UVitalStats_C_GetHealthPercentText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.GetHealthPercentBar
// (NetReliable, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVitalStats_C::GetHealthPercentBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetHealthPercentBar");

	UVitalStats_C_GetHealthPercentBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.GetStaminaPercentText
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStats_C::GetStaminaPercentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetStaminaPercentText");

	UVitalStats_C_GetStaminaPercentText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.GetStaminaPercentBar
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVitalStats_C::GetStaminaPercentBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetStaminaPercentBar");

	UVitalStats_C_GetStaminaPercentBar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.Construct
// (Net, NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UVitalStats_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.Construct");

	UVitalStats_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.UpdateContent
// (NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UVitalStats_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.UpdateContent");

	UVitalStats_C_UpdateContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.AlarmOnWindowContent
// (Net, NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UVitalStats_C::STATIC_AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.AlarmOnWindowContent");

	UVitalStats_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.Tick
// (NetReliable, NetRequest, Native, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStats_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.Tick");

	UVitalStats_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.ExecuteUbergraph_VitalStats
// (Net, NetReliable, Native, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStats_C::ExecuteUbergraph_VitalStats(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.ExecuteUbergraph_VitalStats");

	UVitalStats_C_ExecuteUbergraph_VitalStats_Params params;
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
