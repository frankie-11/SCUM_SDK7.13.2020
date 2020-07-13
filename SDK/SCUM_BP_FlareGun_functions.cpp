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

// Function BP_FlareGun.BP_FlareGun_C.CanSwitchFiringMode
// (Exec, Native, NetResponse, Public, Protected, Delegate, NetServer, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_FlareGun_C::CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlareGun.BP_FlareGun_C.CanSwitchFiringMode");

	ABP_FlareGun_C_CanSwitchFiringMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FlareGun.BP_FlareGun_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Native, NetResponse, Public, Protected, Delegate, NetServer, BlueprintPure)

void ABP_FlareGun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlareGun.BP_FlareGun_C.ReceiveBeginPlay");

	ABP_FlareGun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlareGun.BP_FlareGun_C.ExecuteUbergraph_BP_FlareGun
// (NetReliable, NetRequest, Native, NetResponse, Public, Protected, Delegate, NetServer, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FlareGun_C::ExecuteUbergraph_BP_FlareGun(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlareGun.BP_FlareGun_C.ExecuteUbergraph_BP_FlareGun");

	ABP_FlareGun_C_ExecuteUbergraph_BP_FlareGun_Params params;
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
