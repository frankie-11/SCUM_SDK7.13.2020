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

// Function Claymore.Claymore_C.BP_OnArmed
// (NetReliable, Exec, NetMulticast, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void AClaymore_C::BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Claymore.Claymore_C.BP_OnArmed");

	AClaymore_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Claymore.Claymore_C.BP_OnDisarmed
// (Net, NetReliable, Exec, NetMulticast, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void AClaymore_C::BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Claymore.Claymore_C.BP_OnDisarmed");

	AClaymore_C_BP_OnDisarmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Claymore.Claymore_C.ReceiveBeginPlay
// (NetRequest, Exec, NetMulticast, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void AClaymore_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Claymore.Claymore_C.ReceiveBeginPlay");

	AClaymore_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Claymore.Claymore_C.ExecuteUbergraph_Claymore
// (Net, Exec, NetMulticast, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AClaymore_C::ExecuteUbergraph_Claymore(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Claymore.Claymore_C.ExecuteUbergraph_Claymore");

	AClaymore_C_ExecuteUbergraph_Claymore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
