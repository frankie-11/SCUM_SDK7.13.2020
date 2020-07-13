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

// Function UI_BCUICUMonitor.UI_BCUICUMonitor_C.SetPrisoner
// (NetReliable, NetRequest, Event, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUICUMonitor_C::STATIC_SetPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUICUMonitor.UI_BCUICUMonitor_C.SetPrisoner");

	UUI_BCUICUMonitor_C_SetPrisoner_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUICUMonitor.UI_BCUICUMonitor_C.Construct
// (NetReliable, NetRequest, Event, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_BCUICUMonitor_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUICUMonitor.UI_BCUICUMonitor_C.Construct");

	UUI_BCUICUMonitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUICUMonitor.UI_BCUICUMonitor_C.ExecuteUbergraph_UI_BCUICUMonitor
// (Exec, Native, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUICUMonitor_C::STATIC_ExecuteUbergraph_UI_BCUICUMonitor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUICUMonitor.UI_BCUICUMonitor_C.ExecuteUbergraph_UI_BCUICUMonitor");

	UUI_BCUICUMonitor_C_ExecuteUbergraph_UI_BCUICUMonitor_Params params;
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
