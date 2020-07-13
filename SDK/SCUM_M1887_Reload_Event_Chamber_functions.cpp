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

// Function M1887_Reload_Event_Chamber.M1887_Reload_Event_Chamber_C.ExecuteUsingData
// (Net, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UM1887_Reload_Event_Chamber_C::STATIC_ExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function M1887_Reload_Event_Chamber.M1887_Reload_Event_Chamber_C.ExecuteUsingData");

	UM1887_Reload_Event_Chamber_C_ExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function M1887_Reload_Event_Chamber.M1887_Reload_Event_Chamber_C.CanExecuteUsingData
// (Net, NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UM1887_Reload_Event_Chamber_C::STATIC_CanExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function M1887_Reload_Event_Chamber.M1887_Reload_Event_Chamber_C.CanExecuteUsingData");

	UM1887_Reload_Event_Chamber_C_CanExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function M1887_Reload_Event_Chamber.M1887_Reload_Event_Chamber_C.OnActionAnimNotify
// (NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ECharacterActionNotifyType*    notifyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UM1887_Reload_Event_Chamber_C::OnActionAnimNotify(ECharacterActionNotifyType* notifyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function M1887_Reload_Event_Chamber.M1887_Reload_Event_Chamber_C.OnActionAnimNotify");

	UM1887_Reload_Event_Chamber_C_OnActionAnimNotify_Params params;
	params.notifyType = notifyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M1887_Reload_Event_Chamber.M1887_Reload_Event_Chamber_C.ExecuteUbergraph_M1887_Reload_Event_Chamber
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UM1887_Reload_Event_Chamber_C::ExecuteUbergraph_M1887_Reload_Event_Chamber(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function M1887_Reload_Event_Chamber.M1887_Reload_Event_Chamber_C.ExecuteUbergraph_M1887_Reload_Event_Chamber");

	UM1887_Reload_Event_Chamber_C_ExecuteUbergraph_M1887_Reload_Event_Chamber_Params params;
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
