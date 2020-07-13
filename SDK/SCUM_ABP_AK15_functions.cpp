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

// Function ABP_AK15.ABP_AK15_C.AnimGraph
// (Net, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UABP_AK15_C::STATIC_AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AK15.ABP_AK15_C.AnimGraph");

	UABP_AK15_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_AK15.ABP_AK15_C.ExecuteUbergraph_ABP_AK15
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_AK15_C::STATIC_ExecuteUbergraph_ABP_AK15(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AK15.ABP_AK15_C.ExecuteUbergraph_ABP_AK15");

	UABP_AK15_C_ExecuteUbergraph_ABP_AK15_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
