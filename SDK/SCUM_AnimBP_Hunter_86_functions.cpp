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

// Function AnimBP_Hunter_86.AnimBP_Hunter_85_C.AnimGraph
// (Net, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UAnimBP_Hunter_85_C::STATIC_AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Hunter_86.AnimBP_Hunter_85_C.AnimGraph");

	UAnimBP_Hunter_85_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnimBP_Hunter_86.AnimBP_Hunter_85_C.ExecuteUbergraph_AnimBP_Hunter_86
// (NetRequest, Exec, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_Hunter_85_C::STATIC_ExecuteUbergraph_AnimBP_Hunter_86(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Hunter_86.AnimBP_Hunter_85_C.ExecuteUbergraph_AnimBP_Hunter_86");

	UAnimBP_Hunter_85_C_ExecuteUbergraph_AnimBP_Hunter_86_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
