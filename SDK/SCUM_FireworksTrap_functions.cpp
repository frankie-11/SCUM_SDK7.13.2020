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

// Function FireworksTrap.FireworksTrap_C.LaunchShell
// (Exec, NetMulticast, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void AFireworksTrap_C::LaunchShell()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireworksTrap.FireworksTrap_C.LaunchShell");

	AFireworksTrap_C_LaunchShell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireworksTrap.FireworksTrap_C.ExecuteUbergraph_FireworksTrap
// (Net, NetRequest, Static, NetMulticast, MulticastDelegate, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFireworksTrap_C::STATIC_ExecuteUbergraph_FireworksTrap(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireworksTrap.FireworksTrap_C.ExecuteUbergraph_FireworksTrap");

	AFireworksTrap_C_ExecuteUbergraph_FireworksTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
