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

// Function Recurve_Bow.Recurve_Bow_C.ReceiveTick
// (Net, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintPure, Const)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPC_Recurve_Bow_70_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Recurve_Bow.Recurve_Bow_C.ReceiveTick");

	ABPC_Recurve_Bow_70_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Recurve_Bow.Recurve_Bow_C.ExecuteUbergraph_Recurve_Bow
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPC_Recurve_Bow_70_C::STATIC_ExecuteUbergraph_Recurve_Bow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Recurve_Bow.Recurve_Bow_C.ExecuteUbergraph_Recurve_Bow");

	ABPC_Recurve_Bow_70_C_ExecuteUbergraph_Recurve_Bow_Params params;
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
