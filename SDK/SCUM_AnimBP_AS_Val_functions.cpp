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

// Function AnimBP_AS_Val.AnimBP_AS_Val_C.AnimGraph
// (NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UAnimBP_AS_Val_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_AS_Val.AnimBP_AS_Val_C.AnimGraph");

	UAnimBP_AS_Val_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnimBP_AS_Val.AnimBP_AS_Val_C.ExecuteUbergraph_AnimBP_AS_Val
// (Net, NetReliable, Exec, Native, NetResponse, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_AS_Val_C::ExecuteUbergraph_AnimBP_AS_Val(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_AS_Val.AnimBP_AS_Val_C.ExecuteUbergraph_AnimBP_AS_Val");

	UAnimBP_AS_Val_C_ExecuteUbergraph_AnimBP_AS_Val_Params params;
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
