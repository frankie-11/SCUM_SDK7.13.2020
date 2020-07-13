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

// Function AnimBP_Eder22.AnimBP_Eder22_C.AnimGraph
// (NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UAnimBP_Eder22_C::STATIC_AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Eder22.AnimBP_Eder22_C.AnimGraph");

	UAnimBP_Eder22_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnimBP_Eder22.AnimBP_Eder22_C.ExecuteUbergraph_AnimBP_Eder22
// (NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_Eder22_C::STATIC_ExecuteUbergraph_AnimBP_Eder22(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Eder22.AnimBP_Eder22_C.ExecuteUbergraph_AnimBP_Eder22");

	UAnimBP_Eder22_C_ExecuteUbergraph_AnimBP_Eder22_Params params;
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
