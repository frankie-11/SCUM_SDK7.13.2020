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

// Function UI_ParameterLine.UI_ParameterLine_C.SetExpandableContainer
// (NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UUI_ExpandableContainer_C** container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_ParameterLine_C::STATIC_SetExpandableContainer(class UUI_ExpandableContainer_C** container)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.SetExpandableContainer");

	UUI_ParameterLine_C_SetExpandableContainer_Params params;
	params.container = container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLine.UI_ParameterLine_C.DisableAlarm
// (NetReliable, NetRequest, Exec, Static, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ParameterLine_C::STATIC_DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.DisableAlarm");

	UUI_ParameterLine_C_DisableAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLine.UI_ParameterLine_C.EnableAlarm
// (NetRequest, Exec, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ParameterLine_C::STATIC_EnableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.EnableAlarm");

	UUI_ParameterLine_C_EnableAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLine.UI_ParameterLine_C.CheckAlarms
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ParameterLine_C::STATIC_CheckAlarms(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.CheckAlarms");

	UUI_ParameterLine_C_CheckAlarms_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLine.UI_ParameterLine_C.SetName
// (Native, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ParameterLine_C::STATIC_SetName(struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.SetName");

	UUI_ParameterLine_C_SetName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLine.UI_ParameterLine_C.SetMaxValueInt
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ParameterLine_C::SetMaxValueInt(int* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.SetMaxValueInt");

	UUI_ParameterLine_C_SetMaxValueInt_Params params;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLine.UI_ParameterLine_C.SetMaxValueFloat
// (Net, NetReliable, NetRequest, Event, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           minDecimals                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           maxDecimals                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ParameterLine_C::STATIC_SetMaxValueFloat(float* MaxValue, int* minDecimals, int* maxDecimals)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.SetMaxValueFloat");

	UUI_ParameterLine_C_SetMaxValueFloat_Params params;
	params.MaxValue = MaxValue;
	params.minDecimals = minDecimals;
	params.maxDecimals = maxDecimals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLine.UI_ParameterLine_C.SetMaxValueText
// (NetReliable, NetRequest, Event, NetResponse, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText*                  MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ParameterLine_C::STATIC_SetMaxValueText(struct FText* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.SetMaxValueText");

	UUI_ParameterLine_C_SetMaxValueText_Params params;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLine.UI_ParameterLine_C.SetValueInt
// (Net, NetReliable, Event, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ParameterLine_C::SetValueInt(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.SetValueInt");

	UUI_ParameterLine_C_SetValueInt_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLine.UI_ParameterLine_C.SetValueFloat
// (Net, NetRequest, Exec, Native, Static, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           minDecimals                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           maxDecimals                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ParameterLine_C::STATIC_SetValueFloat(float* Value, int* minDecimals, int* maxDecimals)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.SetValueFloat");

	UUI_ParameterLine_C_SetValueFloat_Params params;
	params.Value = Value;
	params.minDecimals = minDecimals;
	params.maxDecimals = maxDecimals;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLine.UI_ParameterLine_C.SetValueText
// (NetRequest, Exec, Native, Event, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ParameterLine_C::STATIC_SetValueText(struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.SetValueText");

	UUI_ParameterLine_C_SetValueText_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLine.UI_ParameterLine_C.Construct
// (NetReliable, Native, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_ParameterLine_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.Construct");

	UUI_ParameterLine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLine.UI_ParameterLine_C.OnSynchronizeProperties
// (Net, Native, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_ParameterLine_C::STATIC_OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.OnSynchronizeProperties");

	UUI_ParameterLine_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ParameterLine.UI_ParameterLine_C.ExecuteUbergraph_UI_ParameterLine
// (Net, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ParameterLine_C::ExecuteUbergraph_UI_ParameterLine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.ExecuteUbergraph_UI_ParameterLine");

	UUI_ParameterLine_C_ExecuteUbergraph_UI_ParameterLine_Params params;
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
