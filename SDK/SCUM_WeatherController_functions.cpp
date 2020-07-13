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

// Function WeatherController.WeatherController_C.ResetWeatherForecastNextTime
// (Net, NetReliable, Exec, Static, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable)

void AWeatherController_C::STATIC_ResetWeatherForecastNextTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.ResetWeatherForecastNextTime");

	AWeatherController_C_ResetWeatherForecastNextTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.RecaptureSkyProbe
// (Net, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const, NetValidate)

void AWeatherController_C::RecaptureSkyProbe()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.RecaptureSkyProbe");

	AWeatherController_C_RecaptureSkyProbe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.LerpFactors
// (NetReliable, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void AWeatherController_C::LerpFactors()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.LerpFactors");

	AWeatherController_C_LerpFactors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.UpdateSkyParameters
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, NetClient, BlueprintCallable, BlueprintPure, NetValidate)

void AWeatherController_C::UpdateSkyParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.UpdateSkyParameters");

	AWeatherController_C_UpdateSkyParameters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.sunCompute
// (NetReliable, Event, NetResponse, Static, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable)

void AWeatherController_C::STATIC_sunCompute()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.sunCompute");

	AWeatherController_C_sunCompute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.UserConstructionScript
// (Exec, Event, NetMulticast, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable)

void AWeatherController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.UserConstructionScript");

	AWeatherController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.StartWeatherTransition
// (Net, Exec, Native, NetResponse, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable)
// Parameters:
// float*                         newStormIntensity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TransitionTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeatherController_C::StartWeatherTransition(float* newStormIntensity, float* TransitionTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.StartWeatherTransition");

	AWeatherController_C_StartWeatherTransition_Params params;
	params.newStormIntensity = newStormIntensity;
	params.TransitionTime = TransitionTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.NetworkSyncDayTime
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void AWeatherController_C::NetworkSyncDayTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.NetworkSyncDayTime");

	AWeatherController_C_NetworkSyncDayTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.ReceiveTick
// (Net, Exec, Event, NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeatherController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.ReceiveTick");

	AWeatherController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.ReceiveBeginPlay
// (Net, Exec, Event, NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void AWeatherController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.ReceiveBeginPlay");

	AWeatherController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.Recapture
// (Exec, Event, NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void AWeatherController_C::Recapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.Recapture");

	AWeatherController_C_Recapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.Event_SetWindDirection
// (Net, NetReliable, Native, Event, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D*              Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeatherController_C::Event_SetWindDirection(struct FVector2D* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.Event_SetWindDirection");

	AWeatherController_C_Event_SetWindDirection_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.Event_SetWindSpeed
// (Net, NetRequest, Exec, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeatherController_C::Event_SetWindSpeed(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.Event_SetWindSpeed");

	AWeatherController_C_Event_SetWindSpeed_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.ChangeWindDir
// (Native, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void AWeatherController_C::ChangeWindDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.ChangeWindDir");

	AWeatherController_C_ChangeWindDir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.UpdateWeatherVisuals
// (NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool*                          shouldStopWeatherTransition    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeatherController_C::UpdateWeatherVisuals(bool* shouldStopWeatherTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.UpdateWeatherVisuals");

	AWeatherController_C_UpdateWeatherVisuals_Params params;
	params.shouldStopWeatherTransition = shouldStopWeatherTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.HaltWeatherTransition
// (Net, NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void AWeatherController_C::HaltWeatherTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.HaltWeatherTransition");

	AWeatherController_C_HaltWeatherTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.ExecuteUbergraph_WeatherController
// (NetReliable, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeatherController_C::ExecuteUbergraph_WeatherController(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.ExecuteUbergraph_WeatherController");

	AWeatherController_C_ExecuteUbergraph_WeatherController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
