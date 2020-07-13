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

// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.UpdateDigestions
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport)

void UUI_BCUDigestionMonitor_C::STATIC_UpdateDigestions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.UpdateDigestions");

	UUI_BCUDigestionMonitor_C_UpdateDigestions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.Update
// (NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_BCUDigestionMonitor_C::STATIC_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.Update");

	UUI_BCUDigestionMonitor_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.SetPrisoner
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUDigestionMonitor_C::STATIC_SetPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.SetPrisoner");

	UUI_BCUDigestionMonitor_C_SetPrisoner_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.Tick
// (Net, NetRequest, NetResponse, Static, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUDigestionMonitor_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.Tick");

	UUI_BCUDigestionMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.ExecuteUbergraph_UI_BCUDigestionMonitor
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetClient, BlueprintCallable)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUDigestionMonitor_C::ExecuteUbergraph_UI_BCUDigestionMonitor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.ExecuteUbergraph_UI_BCUDigestionMonitor");

	UUI_BCUDigestionMonitor_C_ExecuteUbergraph_UI_BCUDigestionMonitor_Params params;
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
