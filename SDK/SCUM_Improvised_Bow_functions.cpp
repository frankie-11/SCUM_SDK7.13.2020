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

// Function Improvised_Bow.Improvised_Bow_C.ReceiveTick
// (Net, NetReliable, Event, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintPure, Const)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AImprovised_Bow_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Improvised_Bow.Improvised_Bow_C.ReceiveTick");

	AImprovised_Bow_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Improvised_Bow.Improvised_Bow_C.ExecuteUbergraph_Improvised_Bow
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AImprovised_Bow_C::STATIC_ExecuteUbergraph_Improvised_Bow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Improvised_Bow.Improvised_Bow_C.ExecuteUbergraph_Improvised_Bow");

	AImprovised_Bow_C_ExecuteUbergraph_Improvised_Bow_Params params;
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
