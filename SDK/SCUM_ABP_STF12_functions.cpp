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

// Function ABP_STF12.ABP_STF12_C.AnimGraph
// (Net, Native, NetResponse, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UABP_STF12_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_STF12.ABP_STF12_C.AnimGraph");

	UABP_STF12_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_STF12.ABP_STF12_C.BlueprintUpdateAnimation
// (NetRequest, Exec, NetResponse, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_STF12_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_STF12.ABP_STF12_C.BlueprintUpdateAnimation");

	UABP_STF12_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_STF12.ABP_STF12_C.ExecuteUbergraph_ABP_STF12
// (NetReliable, Exec, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_STF12_C::STATIC_ExecuteUbergraph_ABP_STF12(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_STF12.ABP_STF12_C.ExecuteUbergraph_ABP_STF12");

	UABP_STF12_C_ExecuteUbergraph_ABP_STF12_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
