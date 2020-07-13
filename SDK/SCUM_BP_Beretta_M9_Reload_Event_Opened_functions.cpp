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

// Function BP_Beretta_M9_Reload_Event_Opened.BP_Beretta_M9_Reload_Event_Opened_C.OnActionAnimNotify
// (NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ECharacterActionNotifyType*    notifyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Beretta_M9_Reload_Event_Opened_C::OnActionAnimNotify(ECharacterActionNotifyType* notifyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beretta_M9_Reload_Event_Opened.BP_Beretta_M9_Reload_Event_Opened_C.OnActionAnimNotify");

	UBP_Beretta_M9_Reload_Event_Opened_C_OnActionAnimNotify_Params params;
	params.notifyType = notifyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Beretta_M9_Reload_Event_Opened.BP_Beretta_M9_Reload_Event_Opened_C.ExecuteUbergraph_BP_Beretta_M9_Reload_Event_Opened
// (NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Beretta_M9_Reload_Event_Opened_C::ExecuteUbergraph_BP_Beretta_M9_Reload_Event_Opened(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beretta_M9_Reload_Event_Opened.BP_Beretta_M9_Reload_Event_Opened_C.ExecuteUbergraph_BP_Beretta_M9_Reload_Event_Opened");

	UBP_Beretta_M9_Reload_Event_Opened_C_ExecuteUbergraph_BP_Beretta_M9_Reload_Event_Opened_Params params;
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
