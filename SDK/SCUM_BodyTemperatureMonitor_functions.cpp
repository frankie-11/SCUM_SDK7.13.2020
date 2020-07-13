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

// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.AlarmControl
// (NetReliable, Event, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           alarmCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBodyTemperatureMonitor_C::AlarmControl(int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.AlarmControl");

	UBodyTemperatureMonitor_C_AlarmControl_Params params;
	params.alarmCode = alarmCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.DeactivateAlarm
// (NetReliable, Event, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UBodyTemperatureMonitor_C::DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.DeactivateAlarm");

	UBodyTemperatureMonitor_C_DeactivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.ActivateAlarm
// (Net, Exec, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UBodyTemperatureMonitor_C::STATIC_ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.ActivateAlarm");

	UBodyTemperatureMonitor_C_ActivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.CheckBodyTemperatureAlarm
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// float*                         bodyTemperature                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBodyTemperatureMonitor_C::CheckBodyTemperatureAlarm(float* bodyTemperature, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.CheckBodyTemperatureAlarm");

	UBodyTemperatureMonitor_C_CheckBodyTemperatureAlarm_Params params;
	params.bodyTemperature = bodyTemperature;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.SetPrisonerAndLifeComponentToMonitor
// (Net, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBodyTemperatureMonitor_C::SetPrisonerAndLifeComponentToMonitor(class APrisoner** Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.SetPrisonerAndLifeComponentToMonitor");

	UBodyTemperatureMonitor_C_SetPrisonerAndLifeComponentToMonitor_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.ProvideTemperatureExtremes
// (NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FText                   minTemp_MaxTemp                (Parm, OutParm)

void UBodyTemperatureMonitor_C::ProvideTemperatureExtremes(struct FText* minTemp_MaxTemp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.ProvideTemperatureExtremes");

	UBodyTemperatureMonitor_C_ProvideTemperatureExtremes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (minTemp_MaxTemp != nullptr)
		*minTemp_MaxTemp = params.minTemp_MaxTemp;
}


// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.GetHeartRateBPM
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBodyTemperatureMonitor_C::GetHeartRateBPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.GetHeartRateBPM");

	UBodyTemperatureMonitor_C_GetHeartRateBPM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.Tick
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBodyTemperatureMonitor_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.Tick");

	UBodyTemperatureMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.Construct
// (NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UBodyTemperatureMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.Construct");

	UBodyTemperatureMonitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.ExecuteUbergraph_BodyTemperatureMonitor
// (NetRequest, Event, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBodyTemperatureMonitor_C::STATIC_ExecuteUbergraph_BodyTemperatureMonitor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.ExecuteUbergraph_BodyTemperatureMonitor");

	UBodyTemperatureMonitor_C_ExecuteUbergraph_BodyTemperatureMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif