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

// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetDisplayValues
// (Net, Exec, Native, NetResponse, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         value1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         value2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         value3                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         value4                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         value5                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MultipleProgressBar_C::SetDisplayValues(float* value1, float* value2, float* value3, float* value4, float* value5)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetDisplayValues");

	UUI_MultipleProgressBar_C_SetDisplayValues_Params params;
	params.value1 = value1;
	params.value2 = value2;
	params.value3 = value3;
	params.value4 = value4;
	params.value5 = value5;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetMaxValue
// (Net, NetRequest, Event, NetResponse, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         limitMaxValue                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         displayMaxValue                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MultipleProgressBar_C::SetMaxValue(float* MaxValue, float* limitMaxValue, float* displayMaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetMaxValue");

	UUI_MultipleProgressBar_C_SetMaxValue_Params params;
	params.MaxValue = MaxValue;
	params.limitMaxValue = limitMaxValue;
	params.displayMaxValue = displayMaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.OnMouseMove
// (Net, NetRequest, Event, MulticastDelegate, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_MultipleProgressBar_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.OnMouseMove");

	UUI_MultipleProgressBar_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetPercentages
// (NetReliable, Event, NetResponse, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         Percentage1                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Percentage2                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Percentage3                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Percentage4                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         percentage5                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MultipleProgressBar_C::SetPercentages(float* Percentage1, float* Percentage2, float* Percentage3, float* Percentage4, float* percentage5)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetPercentages");

	UUI_MultipleProgressBar_C_SetPercentages_Params params;
	params.Percentage1 = Percentage1;
	params.Percentage2 = Percentage2;
	params.Percentage3 = Percentage3;
	params.Percentage4 = Percentage4;
	params.percentage5 = percentage5;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.OnSynchronizeProperties
// (Native, Event, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_MultipleProgressBar_C::STATIC_OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.OnSynchronizeProperties");

	UUI_MultipleProgressBar_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.Construct
// (Net, NetReliable, NetRequest, Exec, Event, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_MultipleProgressBar_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.Construct");

	UUI_MultipleProgressBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.ExecuteUbergraph_UI_MultipleProgressBar
// (NetRequest, Native, Event, NetResponse, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MultipleProgressBar_C::ExecuteUbergraph_UI_MultipleProgressBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.ExecuteUbergraph_UI_MultipleProgressBar");

	UUI_MultipleProgressBar_C_ExecuteUbergraph_UI_MultipleProgressBar_Params params;
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
