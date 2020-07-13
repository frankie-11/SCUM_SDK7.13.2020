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

// Function PerformanceMonitor.PerformanceMonitor_C.shouldAlarmBeOn
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPerformanceMonitor_C::STATIC_shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.shouldAlarmBeOn");

	UPerformanceMonitor_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function PerformanceMonitor.PerformanceMonitor_C.GetContentSize
// (Net, NetReliable, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               contentSize                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPerformanceMonitor_C::GetContentSize(struct FVector2D* contentSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.GetContentSize");

	UPerformanceMonitor_C_GetContentSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (contentSize != nullptr)
		*contentSize = params.contentSize;
}


// Function PerformanceMonitor.PerformanceMonitor_C.OnPrisonerSet
// (Net, NetReliable, Exec, Native, Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UPerformanceMonitor_C::STATIC_OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.OnPrisonerSet");

	UPerformanceMonitor_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceMonitor.PerformanceMonitor_C.Construct
// (NetReliable, Exec, Native, Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UPerformanceMonitor_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.Construct");

	UPerformanceMonitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceMonitor.PerformanceMonitor_C.WindowContentSizeChanged
// (Exec, Native, Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UPerformanceMonitor_C::STATIC_WindowContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.WindowContentSizeChanged");

	UPerformanceMonitor_C_WindowContentSizeChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceMonitor.PerformanceMonitor_C.AlarmOnWindowContent
// (Net, Native, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UPerformanceMonitor_C::STATIC_AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.AlarmOnWindowContent");

	UPerformanceMonitor_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceMonitor.PerformanceMonitor_C.AlarmOffWindowContent
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UPerformanceMonitor_C::STATIC_AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.AlarmOffWindowContent");

	UPerformanceMonitor_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceMonitor.PerformanceMonitor_C.ExecuteUbergraph_PerformanceMonitor
// (Net, Exec, Event, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerformanceMonitor_C::ExecuteUbergraph_PerformanceMonitor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.ExecuteUbergraph_PerformanceMonitor");

	UPerformanceMonitor_C_ExecuteUbergraph_PerformanceMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
