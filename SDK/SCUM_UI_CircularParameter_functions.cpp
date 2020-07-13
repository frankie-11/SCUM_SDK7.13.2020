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

// Function UI_CircularParameter.UI_CircularParameter_C.GetPercentageSecond
// (NetReliable, NetRequest, Native, Event, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float                          percentageSecond               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::STATIC_GetPercentageSecond(float* percentageSecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.GetPercentageSecond");

	UUI_CircularParameter_C_GetPercentageSecond_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (percentageSecond != nullptr)
		*percentageSecond = params.percentageSecond;
}


// Function UI_CircularParameter.UI_CircularParameter_C.DisableAlarm
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CircularParameter_C::STATIC_DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.DisableAlarm");

	UUI_CircularParameter_C_DisableAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.EnableAlarm
// (Net, NetReliable, Exec, Static, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool*                          above                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::STATIC_EnableAlarm(bool* above)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.EnableAlarm");

	UUI_CircularParameter_C_EnableAlarm_Params params;
	params.above = above;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.CheckAlarm
// (Net, NetRequest, Static, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CircularParameter_C::STATIC_CheckAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.CheckAlarm");

	UUI_CircularParameter_C_CheckAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetDescriptionText
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  Description                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CircularParameter_C::STATIC_SetDescriptionText(struct FText* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetDescriptionText");

	UUI_CircularParameter_C_SetDescriptionText_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetMeasurementUnit
// (Net, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  unit                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CircularParameter_C::STATIC_SetMeasurementUnit(struct FText* unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetMeasurementUnit");

	UUI_CircularParameter_C_SetMeasurementUnit_Params params;
	params.unit = unit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.GetMaxValue
// (Net, NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_CircularParameter_C::STATIC_GetMaxValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.GetMaxValue");

	UUI_CircularParameter_C_GetMaxValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CircularParameter.UI_CircularParameter_C.GetCurrentValue
// (Net, NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Protected, Delegate, NetClient, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_CircularParameter_C::GetCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.GetCurrentValue");

	UUI_CircularParameter_C_GetCurrentValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CircularParameter.UI_CircularParameter_C.GetPercentage
// (Net, NetReliable, Static, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_CircularParameter_C::STATIC_GetPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.GetPercentage");

	UUI_CircularParameter_C_GetPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CircularParameter.UI_CircularParameter_C.Tick
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.Tick");

	UUI_CircularParameter_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.Construct
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_CircularParameter_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.Construct");

	UUI_CircularParameter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetMaxValue
// (Net, Native, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::STATIC_SetMaxValue(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetMaxValue");

	UUI_CircularParameter_C_SetMaxValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetCurrentValue
// (Native, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::STATIC_SetCurrentValue(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetCurrentValue");

	UUI_CircularParameter_C_SetCurrentValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.OnMouseEnter
// (Static, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CircularParameter_C::STATIC_OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.OnMouseEnter");

	UUI_CircularParameter_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.OnSynchronizeProperties
// (Native, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_CircularParameter_C::STATIC_OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.OnSynchronizeProperties");

	UUI_CircularParameter_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.OnMouseLeave
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CircularParameter_C::STATIC_OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.OnMouseLeave");

	UUI_CircularParameter_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetCurrentValueSecond
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::STATIC_SetCurrentValueSecond(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetCurrentValueSecond");

	UUI_CircularParameter_C_SetCurrentValueSecond_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.ExecuteUbergraph_UI_CircularParameter
// (Net, NetRequest, Exec, Native, MulticastDelegate, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::ExecuteUbergraph_UI_CircularParameter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.ExecuteUbergraph_UI_CircularParameter");

	UUI_CircularParameter_C_ExecuteUbergraph_UI_CircularParameter_Params params;
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
