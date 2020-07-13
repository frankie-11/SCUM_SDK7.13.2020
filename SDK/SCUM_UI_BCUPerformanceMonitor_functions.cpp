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

// Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.UpdateValues
// (NetRequest, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_BCUPerformanceMonitor_C::UpdateValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.UpdateValues");

	UUI_BCUPerformanceMonitor_C_UpdateValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.SetPrisoner
// (NetRequest, Event, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUPerformanceMonitor_C::STATIC_SetPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.SetPrisoner");

	UUI_BCUPerformanceMonitor_C_SetPrisoner_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.Tick
// (Net, NetRequest, Exec, NetResponse, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUPerformanceMonitor_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.Tick");

	UUI_BCUPerformanceMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.Construct
// (Net, NetReliable, Event, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_BCUPerformanceMonitor_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.Construct");

	UUI_BCUPerformanceMonitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.ExecuteUbergraph_UI_BCUPerformanceMonitor
// (Net, NetReliable, NetRequest, Native, MulticastDelegate, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUPerformanceMonitor_C::ExecuteUbergraph_UI_BCUPerformanceMonitor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.ExecuteUbergraph_UI_BCUPerformanceMonitor");

	UUI_BCUPerformanceMonitor_C_ExecuteUbergraph_UI_BCUPerformanceMonitor_Params params;
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
