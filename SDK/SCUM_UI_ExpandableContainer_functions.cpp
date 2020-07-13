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

// Function UI_ExpandableContainer.UI_ExpandableContainer_C.SetParentContainer
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UUI_ExpandableContainer_C** container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_ExpandableContainer_C::SetParentContainer(class UUI_ExpandableContainer_C** container)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.SetParentContainer");

	UUI_ExpandableContainer_C_SetParentContainer_Params params;
	params.container = container;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.DisableAlarm
// (Net, NetRequest, Native, Event, MulticastDelegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.DisableAlarm");

	UUI_ExpandableContainer_C_DisableAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.EnableAlarm
// (Net, NetReliable, Event, MulticastDelegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::EnableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.EnableAlarm");

	UUI_ExpandableContainer_C_EnableAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.CheckAlarm
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::CheckAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.CheckAlarm");

	UUI_ExpandableContainer_C_CheckAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.DecrementAlarmsCount
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::DecrementAlarmsCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.DecrementAlarmsCount");

	UUI_ExpandableContainer_C_DecrementAlarmsCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.IncrementAlarmsCount
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::IncrementAlarmsCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.IncrementAlarmsCount");

	UUI_ExpandableContainer_C_IncrementAlarmsCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.Minimize
// (NetReliable, NetRequest, Exec, MulticastDelegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.Minimize");

	UUI_ExpandableContainer_C_Minimize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.Maximize
// (Exec, MulticastDelegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.Maximize");

	UUI_ExpandableContainer_C_Maximize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnSynchronizeProperties
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnSynchronizeProperties");

	UUI_ExpandableContainer_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.Construct
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.Construct");

	UUI_ExpandableContainer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UUI_ExpandableContainer_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.ExecuteUbergraph_UI_ExpandableContainer
// (Native, MulticastDelegate, Public, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ExpandableContainer_C::ExecuteUbergraph_UI_ExpandableContainer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.ExecuteUbergraph_UI_ExpandableContainer");

	UUI_ExpandableContainer_C_ExecuteUbergraph_UI_ExpandableContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnExpandChanged__DelegateSignature
// ()
// Parameters:
// class UUI_ExpandableContainer_C** container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsMinimized                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ExpandableContainer_C::OnExpandChanged__DelegateSignature(class UUI_ExpandableContainer_C** container, bool* IsMinimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnExpandChanged__DelegateSignature");

	UUI_ExpandableContainer_C_OnExpandChanged__DelegateSignature_Params params;
	params.container = container;
	params.IsMinimized = IsMinimized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
