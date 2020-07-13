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

// Function BP_Eder22_Reload_Event_Opened.BP_Eder22_Reload_Event_Opened_C.OnActionAnimNotify
// (NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// ECharacterActionNotifyType*    notifyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Eder22_Reload_Event_Opened_C::STATIC_OnActionAnimNotify(ECharacterActionNotifyType* notifyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Eder22_Reload_Event_Opened.BP_Eder22_Reload_Event_Opened_C.OnActionAnimNotify");

	UBP_Eder22_Reload_Event_Opened_C_OnActionAnimNotify_Params params;
	params.notifyType = notifyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Eder22_Reload_Event_Opened.BP_Eder22_Reload_Event_Opened_C.ExecuteUbergraph_BP_Eder22_Reload_Event_Opened
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Eder22_Reload_Event_Opened_C::ExecuteUbergraph_BP_Eder22_Reload_Event_Opened(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Eder22_Reload_Event_Opened.BP_Eder22_Reload_Event_Opened_C.ExecuteUbergraph_BP_Eder22_Reload_Event_Opened");

	UBP_Eder22_Reload_Event_Opened_C_ExecuteUbergraph_BP_Eder22_Reload_Event_Opened_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
