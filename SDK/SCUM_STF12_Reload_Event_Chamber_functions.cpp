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

// Function STF12_Reload_Event_Chamber.STF12_Reload_Event_Chamber_C.ExecuteUsingData
// (Net, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USTF12_Reload_Event_Chamber_C::ExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function STF12_Reload_Event_Chamber.STF12_Reload_Event_Chamber_C.ExecuteUsingData");

	USTF12_Reload_Event_Chamber_C_ExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STF12_Reload_Event_Chamber.STF12_Reload_Event_Chamber_C.CanExecuteUsingData
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTF12_Reload_Event_Chamber_C::CanExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function STF12_Reload_Event_Chamber.STF12_Reload_Event_Chamber_C.CanExecuteUsingData");

	USTF12_Reload_Event_Chamber_C_CanExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function STF12_Reload_Event_Chamber.STF12_Reload_Event_Chamber_C.OnActionAnimNotify
// (Exec, Native, NetResponse, Static, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ECharacterActionNotifyType*    notifyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USTF12_Reload_Event_Chamber_C::STATIC_OnActionAnimNotify(ECharacterActionNotifyType* notifyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function STF12_Reload_Event_Chamber.STF12_Reload_Event_Chamber_C.OnActionAnimNotify");

	USTF12_Reload_Event_Chamber_C_OnActionAnimNotify_Params params;
	params.notifyType = notifyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function STF12_Reload_Event_Chamber.STF12_Reload_Event_Chamber_C.ExecuteUbergraph_STF12_Reload_Event_Chamber
// (Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USTF12_Reload_Event_Chamber_C::ExecuteUbergraph_STF12_Reload_Event_Chamber(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function STF12_Reload_Event_Chamber.STF12_Reload_Event_Chamber_C.ExecuteUbergraph_STF12_Reload_Event_Chamber");

	USTF12_Reload_Event_Chamber_C_ExecuteUbergraph_STF12_Reload_Event_Chamber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
