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

// Function STF12_Reload_Event_NoChamber.STF12_Reload_Event_NoChamber_C.ExecuteUsingData
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USTF12_Reload_Event_NoChamber_C::STATIC_ExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function STF12_Reload_Event_NoChamber.STF12_Reload_Event_NoChamber_C.ExecuteUsingData");

	USTF12_Reload_Event_NoChamber_C_ExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STF12_Reload_Event_NoChamber.STF12_Reload_Event_NoChamber_C.CanExecuteUsingData
// (Net, Static, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTF12_Reload_Event_NoChamber_C::STATIC_CanExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function STF12_Reload_Event_NoChamber.STF12_Reload_Event_NoChamber_C.CanExecuteUsingData");

	USTF12_Reload_Event_NoChamber_C_CanExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STF12_Reload_Event_NoChamber.STF12_Reload_Event_NoChamber_C.OnActionAnimNotify
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ECharacterActionNotifyType*    notifyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USTF12_Reload_Event_NoChamber_C::STATIC_OnActionAnimNotify(ECharacterActionNotifyType* notifyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function STF12_Reload_Event_NoChamber.STF12_Reload_Event_NoChamber_C.OnActionAnimNotify");

	USTF12_Reload_Event_NoChamber_C_OnActionAnimNotify_Params params;
	params.notifyType = notifyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function STF12_Reload_Event_NoChamber.STF12_Reload_Event_NoChamber_C.ExecuteUbergraph_STF12_Reload_Event_NoChamber
// (Net, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USTF12_Reload_Event_NoChamber_C::STATIC_ExecuteUbergraph_STF12_Reload_Event_NoChamber(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function STF12_Reload_Event_NoChamber.STF12_Reload_Event_NoChamber_C.ExecuteUbergraph_STF12_Reload_Event_NoChamber");

	USTF12_Reload_Event_NoChamber_C_ExecuteUbergraph_STF12_Reload_Event_NoChamber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
