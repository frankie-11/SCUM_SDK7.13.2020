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

// Function UI_VitalsMonitor.UI_VitalsMonitor_C.GetOxygenSaturationExtremesText
// (Net, NetReliable, NetRequest, Native, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText                   OxygenSaturationExtremes       (Parm, OutParm)

void UUI_VitalsMonitor_C::GetOxygenSaturationExtremesText(struct FText* OxygenSaturationExtremes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VitalsMonitor.UI_VitalsMonitor_C.GetOxygenSaturationExtremesText");

	UUI_VitalsMonitor_C_GetOxygenSaturationExtremesText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OxygenSaturationExtremes != nullptr)
		*OxygenSaturationExtremes = params.OxygenSaturationExtremes;
}


// Function UI_VitalsMonitor.UI_VitalsMonitor_C.GetTemperatureExtremesText
// (Net, NetReliable, Event, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText                   temperatureExtremes            (Parm, OutParm)

void UUI_VitalsMonitor_C::GetTemperatureExtremesText(struct FText* temperatureExtremes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VitalsMonitor.UI_VitalsMonitor_C.GetTemperatureExtremesText");

	UUI_VitalsMonitor_C_GetTemperatureExtremesText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (temperatureExtremes != nullptr)
		*temperatureExtremes = params.temperatureExtremes;
}


// Function UI_VitalsMonitor.UI_VitalsMonitor_C.GetRespiratoryRateExtremesText
// (NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText                   respiratoryRateExtremes        (Parm, OutParm)

void UUI_VitalsMonitor_C::GetRespiratoryRateExtremesText(struct FText* respiratoryRateExtremes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VitalsMonitor.UI_VitalsMonitor_C.GetRespiratoryRateExtremesText");

	UUI_VitalsMonitor_C_GetRespiratoryRateExtremesText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (respiratoryRateExtremes != nullptr)
		*respiratoryRateExtremes = params.respiratoryRateExtremes;
}


// Function UI_VitalsMonitor.UI_VitalsMonitor_C.SetPrisoner
// (NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Protected, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VitalsMonitor_C::STATIC_SetPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VitalsMonitor.UI_VitalsMonitor_C.SetPrisoner");

	UUI_VitalsMonitor_C_SetPrisoner_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VitalsMonitor.UI_VitalsMonitor_C.Tick
// (Exec, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VitalsMonitor_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VitalsMonitor.UI_VitalsMonitor_C.Tick");

	UUI_VitalsMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VitalsMonitor.UI_VitalsMonitor_C.ExecuteUbergraph_UI_VitalsMonitor
// (Native, Event, Static, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VitalsMonitor_C::STATIC_ExecuteUbergraph_UI_VitalsMonitor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VitalsMonitor.UI_VitalsMonitor_C.ExecuteUbergraph_UI_VitalsMonitor");

	UUI_VitalsMonitor_C_ExecuteUbergraph_UI_VitalsMonitor_Params params;
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
