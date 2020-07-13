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

// Function AnimBP_ImprovisedPistol50cal.AnimBP_ImprovisedPistol50cal_C.AnimGraph
// (Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UAnimBP_ImprovisedPistol50cal_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_ImprovisedPistol50cal.AnimBP_ImprovisedPistol50cal_C.AnimGraph");

	UAnimBP_ImprovisedPistol50cal_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnimBP_ImprovisedPistol50cal.AnimBP_ImprovisedPistol50cal_C.ExecuteUbergraph_AnimBP_ImprovisedPistol50cal
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_ImprovisedPistol50cal_C::ExecuteUbergraph_AnimBP_ImprovisedPistol50cal(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_ImprovisedPistol50cal.AnimBP_ImprovisedPistol50cal_C.ExecuteUbergraph_AnimBP_ImprovisedPistol50cal");

	UAnimBP_ImprovisedPistol50cal_C_ExecuteUbergraph_AnimBP_ImprovisedPistol50cal_Params params;
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
