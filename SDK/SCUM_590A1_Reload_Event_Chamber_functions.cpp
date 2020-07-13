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

// Function 590A1_Reload_Event_Chamber.590A1_Reload_Event_Chamber_C.ExecuteUsingData
// (NetReliable, Exec, Event, NetResponse, Delegate, NetServer, HasOutParms, HasDefaults)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float U590A1_Reload_Event_Chamber_C::ExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_Reload_Event_Chamber.590A1_Reload_Event_Chamber_C.ExecuteUsingData");

	U590A1_Reload_Event_Chamber_C_ExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function 590A1_Reload_Event_Chamber.590A1_Reload_Event_Chamber_C.CanExecuteUsingData
// (NetRequest, Event, NetResponse, Delegate, NetServer, HasOutParms, HasDefaults)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool U590A1_Reload_Event_Chamber_C::CanExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_Reload_Event_Chamber.590A1_Reload_Event_Chamber_C.CanExecuteUsingData");

	U590A1_Reload_Event_Chamber_C_CanExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function 590A1_Reload_Event_Chamber.590A1_Reload_Event_Chamber_C.OnActionAnimNotify
// (NetRequest, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ECharacterActionNotifyType*    notifyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U590A1_Reload_Event_Chamber_C::OnActionAnimNotify(ECharacterActionNotifyType* notifyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_Reload_Event_Chamber.590A1_Reload_Event_Chamber_C.OnActionAnimNotify");

	U590A1_Reload_Event_Chamber_C_OnActionAnimNotify_Params params;
	params.notifyType = notifyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 590A1_Reload_Event_Chamber.590A1_Reload_Event_Chamber_C.ExecuteUbergraph_590A1_Reload_Event_Chamber
// (Net, NetReliable, NetRequest, Event, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U590A1_Reload_Event_Chamber_C::ExecuteUbergraph_590A1_Reload_Event_Chamber(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_Reload_Event_Chamber.590A1_Reload_Event_Chamber_C.ExecuteUbergraph_590A1_Reload_Event_Chamber");

	U590A1_Reload_Event_Chamber_C_ExecuteUbergraph_590A1_Reload_Event_Chamber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
