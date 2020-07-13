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

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.DisableAlarm
// (NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UVitalStatsOxygenation_C::DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.DisableAlarm");

	UVitalStatsOxygenation_C_DisableAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.EnableAlarm
// (Net, NetReliable, NetRequest, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UVitalStatsOxygenation_C::STATIC_EnableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.EnableAlarm");

	UVitalStatsOxygenation_C_EnableAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.CheckAlarm
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)

void UVitalStatsOxygenation_C::STATIC_CheckAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.CheckAlarm");

	UVitalStatsOxygenation_C_CheckAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.ActivateAlarmColor
// (NetReliable, NetRequest, Event, Static, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UVitalStatsOxygenation_C::STATIC_ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.ActivateAlarmColor");

	UVitalStatsOxygenation_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.ActivateNormalColor
// (Exec, Native, Event, Static, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UVitalStatsOxygenation_C::STATIC_ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.ActivateNormalColor");

	UVitalStatsOxygenation_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.SetBackgroundColor
// (Net, NetReliable, NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor*           colorToSet                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility*              Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsOxygenation_C::SetBackgroundColor(struct FLinearColor* colorToSet, ESlateVisibility* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.SetBackgroundColor");

	UVitalStatsOxygenation_C_SetBackgroundColor_Params params;
	params.colorToSet = colorToSet;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetOxygenSaturationLevelFloat
// (NetReliable, NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float                          oxygenSaturationLevel          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalStatsOxygenation_C::GetOxygenSaturationLevelFloat(float* oxygenSaturationLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetOxygenSaturationLevelFloat");

	UVitalStatsOxygenation_C_GetOxygenSaturationLevelFloat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (oxygenSaturationLevel != nullptr)
		*oxygenSaturationLevel = params.oxygenSaturationLevel;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetOxygenationLevel
// (Native, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStatsOxygenation_C::GetOxygenationLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetOxygenationLevel");

	UVitalStatsOxygenation_C_GetOxygenationLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.SetTextColor
// (Net, NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsOxygenation_C::SetTextColor(struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.SetTextColor");

	UVitalStatsOxygenation_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHeartRateBPM
// (Net, NetReliable, NetRequest, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStatsOxygenation_C::GetHeartRateBPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHeartRateBPM");

	UVitalStatsOxygenation_C_GetHeartRateBPM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHealthPercentText
// (Net, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStatsOxygenation_C::GetHealthPercentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHealthPercentText");

	UVitalStatsOxygenation_C_GetHealthPercentText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHealthPercentBar
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVitalStatsOxygenation_C::STATIC_GetHealthPercentBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHealthPercentBar");

	UVitalStatsOxygenation_C_GetHealthPercentBar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetStaminaPercentText
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStatsOxygenation_C::STATIC_GetStaminaPercentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetStaminaPercentText");

	UVitalStatsOxygenation_C_GetStaminaPercentText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetStaminaPercentBar
// (Net, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVitalStatsOxygenation_C::STATIC_GetStaminaPercentBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetStaminaPercentBar");

	UVitalStatsOxygenation_C_GetStaminaPercentBar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.Construct
// (Native, Event, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UVitalStatsOxygenation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.Construct");

	UVitalStatsOxygenation_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.Tick
// (NetRequest, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsOxygenation_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.Tick");

	UVitalStatsOxygenation_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.ExecuteUbergraph_VitalStatsOxygenation
// (Net, NetRequest, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsOxygenation_C::ExecuteUbergraph_VitalStatsOxygenation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.ExecuteUbergraph_VitalStatsOxygenation");

	UVitalStatsOxygenation_C_ExecuteUbergraph_VitalStatsOxygenation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
