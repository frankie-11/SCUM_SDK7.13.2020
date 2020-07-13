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

// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.AlarmControl
// (Event, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           alarmCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URespiratoryRateMonitor_C::AlarmControl(int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.AlarmControl");

	URespiratoryRateMonitor_C_AlarmControl_Params params;
	params.alarmCode = alarmCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.DeactivateAlarm
// (Event, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void URespiratoryRateMonitor_C::DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.DeactivateAlarm");

	URespiratoryRateMonitor_C_DeactivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ActivateAlarm
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void URespiratoryRateMonitor_C::ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ActivateAlarm");

	URespiratoryRateMonitor_C_ActivateAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.CheckRespiratoryRateAlarm
// (NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// int*                           respiratoryRate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URespiratoryRateMonitor_C::CheckRespiratoryRateAlarm(int* respiratoryRate, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.CheckRespiratoryRateAlarm");

	URespiratoryRateMonitor_C_CheckRespiratoryRateAlarm_Params params;
	params.respiratoryRate = respiratoryRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.SetPrisonerAndLifeComponentToMonitor
// (Net, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// class APrisoner**              prisonerToSet                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URespiratoryRateMonitor_C::SetPrisonerAndLifeComponentToMonitor(class APrisoner** prisonerToSet, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.SetPrisonerAndLifeComponentToMonitor");

	URespiratoryRateMonitor_C_SetPrisonerAndLifeComponentToMonitor_Params params;
	params.prisonerToSet = prisonerToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ProvideRespiratoryRateExtremes
// (NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FText                   respiratoryRateExtremes        (Parm, OutParm)

void URespiratoryRateMonitor_C::ProvideRespiratoryRateExtremes(struct FText* respiratoryRateExtremes)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ProvideRespiratoryRateExtremes");

	URespiratoryRateMonitor_C_ProvideRespiratoryRateExtremes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (respiratoryRateExtremes != nullptr)
		*respiratoryRateExtremes = params.respiratoryRateExtremes;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.Construct
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void URespiratoryRateMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.Construct");

	URespiratoryRateMonitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.Tick
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URespiratoryRateMonitor_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.Tick");

	URespiratoryRateMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ExecuteUbergraph_RespiratoryRateMonitor
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URespiratoryRateMonitor_C::STATIC_ExecuteUbergraph_RespiratoryRateMonitor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ExecuteUbergraph_RespiratoryRateMonitor");

	URespiratoryRateMonitor_C_ExecuteUbergraph_RespiratoryRateMonitor_Params params;
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
