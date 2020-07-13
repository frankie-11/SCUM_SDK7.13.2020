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

// Function AnimBP_98k.AnimBP_98k_C.AnimGraph
// (NetRequest, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UAnimBP_98k_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_98k.AnimBP_98k_C.AnimGraph");

	UAnimBP_98k_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnimBP_98k.AnimBP_98k_C.ExecuteUbergraph_AnimBP_98k
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_98k_C::STATIC_ExecuteUbergraph_AnimBP_98k(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_98k.AnimBP_98k_C.ExecuteUbergraph_AnimBP_98k");

	UAnimBP_98k_C_ExecuteUbergraph_AnimBP_98k_Params params;
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
