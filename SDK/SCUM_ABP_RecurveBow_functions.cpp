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

// Function ABP_RecurveBow.ABP_RecurveBow_C.AnimGraph
// (NetRequest, Native, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UABP_RecurveBow_C::STATIC_AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RecurveBow.ABP_RecurveBow_C.AnimGraph");

	UABP_RecurveBow_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_RecurveBow.ABP_RecurveBow_C.ExecuteUbergraph_ABP_RecurveBow
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_RecurveBow_C::ExecuteUbergraph_ABP_RecurveBow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_RecurveBow.ABP_RecurveBow_C.ExecuteUbergraph_ABP_RecurveBow");

	UABP_RecurveBow_C_ExecuteUbergraph_ABP_RecurveBow_Params params;
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
