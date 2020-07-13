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

// Function AnimBP_Desert_Eagle.AnimBP_Desert_Eagle_C.AnimGraph
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UAnimBP_Desert_Eagle_C::STATIC_AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Desert_Eagle.AnimBP_Desert_Eagle_C.AnimGraph");

	UAnimBP_Desert_Eagle_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnimBP_Desert_Eagle.AnimBP_Desert_Eagle_C.ExecuteUbergraph_AnimBP_Desert_Eagle
// (NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_Desert_Eagle_C::STATIC_ExecuteUbergraph_AnimBP_Desert_Eagle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Desert_Eagle.AnimBP_Desert_Eagle_C.ExecuteUbergraph_AnimBP_Desert_Eagle");

	UAnimBP_Desert_Eagle_C_ExecuteUbergraph_AnimBP_Desert_Eagle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
