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

// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetValueColor
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor*           maxValueLinearColorToSet       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPhysicalQuantityLine_C::SetValueColor(struct FLinearColor* maxValueLinearColorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetValueColor");

	UPhysicalQuantityLine_C_SetValueColor_Params params;
	params.maxValueLinearColorToSet = maxValueLinearColorToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetValueColor
// (NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            maxValueColor                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPhysicalQuantityLine_C::GetValueColor(struct FLinearColor* maxValueColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetValueColor");

	UPhysicalQuantityLine_C_GetValueColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (maxValueColor != nullptr)
		*maxValueColor = params.maxValueColor;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMaxValueColor
// (Net, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor*           maxValueLinearColorToSet       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPhysicalQuantityLine_C::SetMaxValueColor(struct FLinearColor* maxValueLinearColorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMaxValueColor");

	UPhysicalQuantityLine_C_SetMaxValueColor_Params params;
	params.maxValueLinearColorToSet = maxValueLinearColorToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMaxValueColor
// (Exec, Native, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            maxValueColor                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPhysicalQuantityLine_C::GetMaxValueColor(struct FLinearColor* maxValueColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMaxValueColor");

	UPhysicalQuantityLine_C_GetMaxValueColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (maxValueColor != nullptr)
		*maxValueColor = params.maxValueColor;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMeasurementUnit
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText*                  measurementUnitToSet           (BlueprintVisible, BlueprintReadOnly, Parm)

void UPhysicalQuantityLine_C::SetMeasurementUnit(struct FText* measurementUnitToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMeasurementUnit");

	UPhysicalQuantityLine_C_SetMeasurementUnit_Params params;
	params.measurementUnitToSet = measurementUnitToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMeasurementUnit
// (NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   measurementUnit                (Parm, OutParm)

void UPhysicalQuantityLine_C::GetMeasurementUnit(struct FText* measurementUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMeasurementUnit");

	UPhysicalQuantityLine_C_GetMeasurementUnit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (measurementUnit != nullptr)
		*measurementUnit = params.measurementUnit;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMaxValueText
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText*                  maxValueTextToSet              (BlueprintVisible, BlueprintReadOnly, Parm)

void UPhysicalQuantityLine_C::SetMaxValueText(struct FText* maxValueTextToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMaxValueText");

	UPhysicalQuantityLine_C_SetMaxValueText_Params params;
	params.maxValueTextToSet = maxValueTextToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMaxValueText
// (Net, Exec, Native, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   maxValueTxt                    (Parm, OutParm)

void UPhysicalQuantityLine_C::GetMaxValueText(struct FText* maxValueTxt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMaxValueText");

	UPhysicalQuantityLine_C_GetMaxValueText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (maxValueTxt != nullptr)
		*maxValueTxt = params.maxValueTxt;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetParameterValueText
// (Net, NetReliable, Native, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText*                  paramValueTextToSet            (BlueprintVisible, BlueprintReadOnly, Parm)

void UPhysicalQuantityLine_C::SetParameterValueText(struct FText* paramValueTextToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetParameterValueText");

	UPhysicalQuantityLine_C_SetParameterValueText_Params params;
	params.paramValueTextToSet = paramValueTextToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetParameterValueText
// (Net, NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   parameterValueTxt              (Parm, OutParm)

void UPhysicalQuantityLine_C::GetParameterValueText(struct FText* parameterValueTxt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetParameterValueText");

	UPhysicalQuantityLine_C_GetParameterValueText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (parameterValueTxt != nullptr)
		*parameterValueTxt = params.parameterValueTxt;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.Construct
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)

void UPhysicalQuantityLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.Construct");

	UPhysicalQuantityLine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.ExecuteUbergraph_PhysicalQuantityLine
// (NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPhysicalQuantityLine_C::ExecuteUbergraph_PhysicalQuantityLine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.ExecuteUbergraph_PhysicalQuantityLine");

	UPhysicalQuantityLine_C_ExecuteUbergraph_PhysicalQuantityLine_Params params;
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
