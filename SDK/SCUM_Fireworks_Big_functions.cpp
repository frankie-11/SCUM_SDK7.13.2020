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

// Function Fireworks_Small.Fireworks_Small_C.LaunchShell
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintCallable)

void AFireworks_Big_C::STATIC_LaunchShell()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fireworks_Small.Fireworks_Small_C.LaunchShell");

	AFireworks_Big_C_LaunchShell_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fireworks_Small.Fireworks_Small_C.ExecuteUbergraph_Fireworks_Small
// (NetRequest, Native, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFireworks_Big_C::STATIC_ExecuteUbergraph_Fireworks_Small(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fireworks_Small.Fireworks_Small_C.ExecuteUbergraph_Fireworks_Small");

	AFireworks_Big_C_ExecuteUbergraph_Fireworks_Small_Params params;
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
