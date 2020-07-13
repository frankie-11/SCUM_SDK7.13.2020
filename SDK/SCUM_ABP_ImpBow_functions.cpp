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

// Function ABP_ImpBow.ABP_ImpBow_C.AnimGraph
// (Net, NetRequest, Exec, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UABP_ImpBow_C::STATIC_AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_ImpBow.ABP_ImpBow_C.AnimGraph");

	UABP_ImpBow_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_ImpBow.ABP_ImpBow_C.ExecuteUbergraph_ABP_ImpBow
// (Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_ImpBow_C::STATIC_ExecuteUbergraph_ABP_ImpBow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_ImpBow.ABP_ImpBow_C.ExecuteUbergraph_ABP_ImpBow");

	UABP_ImpBow_C_ExecuteUbergraph_ABP_ImpBow_Params params;
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
