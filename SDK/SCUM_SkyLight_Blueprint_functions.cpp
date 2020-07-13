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

// Function SkyLight_Blueprint.SkyLight_Blueprint_C.ReceiveBeginPlay
// (Net, NetReliable, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ASkyLight_Blueprint_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkyLight_Blueprint.SkyLight_Blueprint_C.ReceiveBeginPlay");

	ASkyLight_Blueprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkyLight_Blueprint.SkyLight_Blueprint_C.ReceiveTick
// (Net, NetRequest, Exec, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASkyLight_Blueprint_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkyLight_Blueprint.SkyLight_Blueprint_C.ReceiveTick");

	ASkyLight_Blueprint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkyLight_Blueprint.SkyLight_Blueprint_C.ExecuteUbergraph_SkyLight_Blueprint
// (Net, NetRequest, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASkyLight_Blueprint_C::STATIC_ExecuteUbergraph_SkyLight_Blueprint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkyLight_Blueprint.SkyLight_Blueprint_C.ExecuteUbergraph_SkyLight_Blueprint");

	ASkyLight_Blueprint_C_ExecuteUbergraph_SkyLight_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
