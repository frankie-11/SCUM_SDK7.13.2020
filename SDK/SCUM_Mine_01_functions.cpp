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

// Function Mine_01.Mine_01_C.BP_OnArmed
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void AMine_01_C::STATIC_BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_01.Mine_01_C.BP_OnArmed");

	AMine_01_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mine_01.Mine_01_C.BP_OnDisarmed
// (Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void AMine_01_C::STATIC_BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_01.Mine_01_C.BP_OnDisarmed");

	AMine_01_C_BP_OnDisarmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mine_01.Mine_01_C.ReceiveBeginPlay
// (Net, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)

void AMine_01_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_01.Mine_01_C.ReceiveBeginPlay");

	AMine_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mine_01.Mine_01_C.ExecuteUbergraph_Mine_01
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMine_01_C::STATIC_ExecuteUbergraph_Mine_01(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_01.Mine_01_C.ExecuteUbergraph_Mine_01");

	AMine_01_C_ExecuteUbergraph_Mine_01_Params params;
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
