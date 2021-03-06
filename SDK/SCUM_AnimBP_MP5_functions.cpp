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

// Function AnimBP_MP5.AnimBP_MP5_C.AnimGraph
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Private, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UAnimBP_MP5_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_MP5.AnimBP_MP5_C.AnimGraph");

	UAnimBP_MP5_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnimBP_MP5.AnimBP_MP5_C.BlueprintUpdateAnimation
// (Net, NetRequest, Native, Event, MulticastDelegate, Private, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_MP5_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_MP5.AnimBP_MP5_C.BlueprintUpdateAnimation");

	UAnimBP_MP5_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_MP5.AnimBP_MP5_C.ExecuteUbergraph_AnimBP_MP5
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_MP5_C::STATIC_ExecuteUbergraph_AnimBP_MP5(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_MP5.AnimBP_MP5_C.ExecuteUbergraph_AnimBP_MP5");

	UAnimBP_MP5_C_ExecuteUbergraph_AnimBP_MP5_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
