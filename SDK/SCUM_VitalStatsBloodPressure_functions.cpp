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

// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.AlarmControl
// (Net, NetReliable, NetRequest, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           alarmCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsBloodPressure_C::STATIC_AlarmControl(int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.AlarmControl");

	UVitalStatsBloodPressure_C_AlarmControl_Params params;
	params.alarmCode = alarmCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.DeactivateAlarm
// (Net, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)

void UVitalStatsBloodPressure_C::DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.DeactivateAlarm");

	UVitalStatsBloodPressure_C_DeactivateAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.ActivateAlarm
// (NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UVitalStatsBloodPressure_C::STATIC_ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.ActivateAlarm");

	UVitalStatsBloodPressure_C_ActivateAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.CheckBloodPressureAlarm
// (Net, NetReliable, Native, Event, Static, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           systolicPressure               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           diastolicPressure              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalStatsBloodPressure_C::STATIC_CheckBloodPressureAlarm(int* systolicPressure, int* diastolicPressure, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.CheckBloodPressureAlarm");

	UVitalStatsBloodPressure_C_CheckBloodPressureAlarm_Params params;
	params.systolicPressure = systolicPressure;
	params.diastolicPressure = diastolicPressure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.GetBloodPressure
// (NetRequest, Exec, NetResponse, Static, Private, Delegate, DLLImport, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStatsBloodPressure_C::STATIC_GetBloodPressure()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.GetBloodPressure");

	UVitalStatsBloodPressure_C_GetBloodPressure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.Construct
// (NetReliable, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UVitalStatsBloodPressure_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.Construct");

	UVitalStatsBloodPressure_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.UpdateContent
// (Net, NetReliable, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UVitalStatsBloodPressure_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.UpdateContent");

	UVitalStatsBloodPressure_C_UpdateContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.Tick
// (Net, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsBloodPressure_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.Tick");

	UVitalStatsBloodPressure_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.ExecuteUbergraph_VitalStatsBloodPressure
// (NetReliable, NetRequest, Exec, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsBloodPressure_C::ExecuteUbergraph_VitalStatsBloodPressure(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.ExecuteUbergraph_VitalStatsBloodPressure");

	UVitalStatsBloodPressure_C_ExecuteUbergraph_VitalStatsBloodPressure_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
