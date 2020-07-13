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

// Function Mine_02.Mine_02_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void AMine_02_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_02.Mine_02_C.ReceiveBeginPlay");

	AMine_02_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mine_02.Mine_02_C.BP_OnArmed
// (Net, NetReliable, Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void AMine_02_C::STATIC_BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_02.Mine_02_C.BP_OnArmed");

	AMine_02_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mine_02.Mine_02_C.BP_OnDisarmed
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void AMine_02_C::STATIC_BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_02.Mine_02_C.BP_OnDisarmed");

	AMine_02_C_BP_OnDisarmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mine_02.Mine_02_C.ExecuteUbergraph_Mine_02
// (NetReliable, Exec, Native, Event, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMine_02_C::STATIC_ExecuteUbergraph_Mine_02(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_02.Mine_02_C.ExecuteUbergraph_Mine_02");

	AMine_02_C_ExecuteUbergraph_Mine_02_Params params;
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
