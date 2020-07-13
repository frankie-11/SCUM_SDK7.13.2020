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

// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.AlarmControl
// (Net, Exec, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           alarmCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOxygenSaturationMonitor_C::STATIC_AlarmControl(int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.AlarmControl");

	UOxygenSaturationMonitor_C_AlarmControl_Params params;
	params.alarmCode = alarmCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.DeactivateAlarm
// (Net, Event, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOxygenSaturationMonitor_C::DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.DeactivateAlarm");

	UOxygenSaturationMonitor_C_DeactivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ActivateAlarm
// (Net, Event, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UOxygenSaturationMonitor_C::ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ActivateAlarm");

	UOxygenSaturationMonitor_C_ActivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.CheckBloodOxygenationAlarm
// (Net, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// float*                         oxygenationLevel               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOxygenSaturationMonitor_C::CheckBloodOxygenationAlarm(float* oxygenationLevel, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.CheckBloodOxygenationAlarm");

	UOxygenSaturationMonitor_C_CheckBloodOxygenationAlarm_Params params;
	params.oxygenationLevel = oxygenationLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.SetPrisonerAndLifeComponentToMonitor
// (NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// class APrisoner**              prisonerToSet                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOxygenSaturationMonitor_C::SetPrisonerAndLifeComponentToMonitor(class APrisoner** prisonerToSet, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.SetPrisonerAndLifeComponentToMonitor");

	UOxygenSaturationMonitor_C_SetPrisonerAndLifeComponentToMonitor_Params params;
	params.prisonerToSet = prisonerToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ProvideOxygenSaturationExtremes
// (Net, NetReliable, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FText                   OxygenSaturationExtremes       (Parm, OutParm)

void UOxygenSaturationMonitor_C::ProvideOxygenSaturationExtremes(struct FText* OxygenSaturationExtremes)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ProvideOxygenSaturationExtremes");

	UOxygenSaturationMonitor_C_ProvideOxygenSaturationExtremes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OxygenSaturationExtremes != nullptr)
		*OxygenSaturationExtremes = params.OxygenSaturationExtremes;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.GetHeartRateBPM
// (NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOxygenSaturationMonitor_C::GetHeartRateBPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.GetHeartRateBPM");

	UOxygenSaturationMonitor_C_GetHeartRateBPM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.Construct
// (Exec, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UOxygenSaturationMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.Construct");

	UOxygenSaturationMonitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.Tick
// (Net, Event, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOxygenSaturationMonitor_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.Tick");

	UOxygenSaturationMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.AlarmOnWindowContent
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UOxygenSaturationMonitor_C::STATIC_AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.AlarmOnWindowContent");

	UOxygenSaturationMonitor_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ExecuteUbergraph_OxygenSaturationMonitor
// (Net, Exec, Event, Static, Private, Delegate, DLLImport, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOxygenSaturationMonitor_C::STATIC_ExecuteUbergraph_OxygenSaturationMonitor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ExecuteUbergraph_OxygenSaturationMonitor");

	UOxygenSaturationMonitor_C_ExecuteUbergraph_OxygenSaturationMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
