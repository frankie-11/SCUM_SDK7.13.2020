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

// Function BP_Deagle_51.BP_DEagle_50_C.CanSwitchFiringMode
// (NetReliable, Exec, Native, NetResponse, Public, Protected, Delegate, NetServer, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABPC_Deagle_357_C::CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deagle_51.BP_DEagle_50_C.CanSwitchFiringMode");

	ABPC_Deagle_357_C_CanSwitchFiringMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Deagle_51.BP_DEagle_50_C.ReceiveBeginPlay
// (Net, Exec, Native, NetResponse, Public, Protected, Delegate, NetServer, BlueprintPure)

void ABPC_Deagle_357_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deagle_51.BP_DEagle_50_C.ReceiveBeginPlay");

	ABPC_Deagle_357_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Deagle_51.BP_DEagle_50_C.ExecuteUbergraph_BP_DEagle_51
// (Exec, Native, NetResponse, Public, Protected, Delegate, NetServer, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPC_Deagle_357_C::ExecuteUbergraph_BP_DEagle_51(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deagle_51.BP_DEagle_50_C.ExecuteUbergraph_BP_DEagle_51");

	ABPC_Deagle_357_C_ExecuteUbergraph_BP_DEagle_51_Params params;
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
