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

// Function BP_LogShed_3.BP_LogShed_2_C.ReceiveBeginPlay
// (Net, NetReliable, Native, Event, Private, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_LogShed_2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LogShed_3.BP_LogShed_2_C.ReceiveBeginPlay");

	ABP_LogShed_2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LogShed_3.BP_LogShed_2_C.ExecuteUbergraph_BP_LogShed_3
// (Net, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LogShed_2_C::STATIC_ExecuteUbergraph_BP_LogShed_3(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LogShed_3.BP_LogShed_2_C.ExecuteUbergraph_BP_LogShed_3");

	ABP_LogShed_2_C_ExecuteUbergraph_BP_LogShed_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
