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

// Function ABP_CompoundBow.ABP_CompoundBow_C.AnimGraph
// (Net, NetReliable, Exec, Native, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UABP_CompoundBow_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_CompoundBow.ABP_CompoundBow_C.AnimGraph");

	UABP_CompoundBow_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_CompoundBow.ABP_CompoundBow_C.BlueprintUpdateAnimation
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_CompoundBow_C::STATIC_BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_CompoundBow.ABP_CompoundBow_C.BlueprintUpdateAnimation");

	UABP_CompoundBow_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_CompoundBow.ABP_CompoundBow_C.ExecuteUbergraph_ABP_CompoundBow
// (Net, Exec, Native, Event, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_CompoundBow_C::ExecuteUbergraph_ABP_CompoundBow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_CompoundBow.ABP_CompoundBow_C.ExecuteUbergraph_ABP_CompoundBow");

	UABP_CompoundBow_C_ExecuteUbergraph_ABP_CompoundBow_Params params;
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
