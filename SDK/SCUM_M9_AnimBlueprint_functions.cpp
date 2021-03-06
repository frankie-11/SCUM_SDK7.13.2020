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

// Function M9_AnimBlueprint.M9_AnimBlueprint_C.AnimGraph
// (NetReliable, NetRequest, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UM9_AnimBlueprint_C::STATIC_AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function M9_AnimBlueprint.M9_AnimBlueprint_C.AnimGraph");

	UM9_AnimBlueprint_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function M9_AnimBlueprint.M9_AnimBlueprint_C.ExecuteUbergraph_M9_AnimBlueprint
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UM9_AnimBlueprint_C::ExecuteUbergraph_M9_AnimBlueprint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function M9_AnimBlueprint.M9_AnimBlueprint_C.ExecuteUbergraph_M9_AnimBlueprint");

	UM9_AnimBlueprint_C_ExecuteUbergraph_M9_AnimBlueprint_Params params;
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
