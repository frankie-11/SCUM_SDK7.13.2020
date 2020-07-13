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

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.SetSelectedSector
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           InRow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InColumn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnSectorSelector_C::SetSelectedSector(int* InRow, int* InColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.SetSelectedSector");

	UUI_SpawnSectorSelector_C_SetSelectedSector_Params params;
	params.InRow = InRow;
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.UpdateCurrentSector
// (Net, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnRow                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ReturnColumn                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnSectorSelector_C::UpdateCurrentSector(int* ReturnRow, int* ReturnColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.UpdateCurrentSector");

	UUI_SpawnSectorSelector_C_UpdateCurrentSector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnRow != nullptr)
		*ReturnRow = params.ReturnRow;
	if (ReturnColumn != nullptr)
		*ReturnColumn = params.ReturnColumn;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.GetSelectedSector
// (Exec, Native, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            X                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnSectorSelector_C::GetSelectedSector(int* X, int* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.GetSelectedSector");

	UUI_SpawnSectorSelector_C_GetSelectedSector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.SelectSector
// (Net, NetRequest, Exec, Event, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UButton**                Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SpawnSectorSelector_C::SelectSector(class UButton** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.SelectSector");

	UUI_SpawnSectorSelector_C_SelectSector_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_544_OnButtonClickedEvent__DelegateSignature
// (Event, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnSectorSelector_C::STATIC_BndEvt__Button_1_K2Node_ComponentBoundEvent_544_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_544_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_544_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_561_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnSectorSelector_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_561_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_561_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_561_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnSectorSelector_C::STATIC_BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_15_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (Net, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnSectorSelector_C::STATIC_BndEvt__Button_15_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_15_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_15_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_14_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnSectorSelector_C::STATIC_BndEvt__Button_14_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_14_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_14_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_13_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnSectorSelector_C::STATIC_BndEvt__Button_13_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_13_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_13_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_12_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (NetReliable, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnSectorSelector_C::STATIC_BndEvt__Button_12_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_12_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_12_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (Net, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnSectorSelector_C::STATIC_BndEvt__Button_11_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_11_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnSectorSelector_C::STATIC_BndEvt__Button_10_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_10_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_9_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnSectorSelector_C::STATIC_BndEvt__Button_9_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_9_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_9_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnSectorSelector_C::STATIC_BndEvt__Button_8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (Net, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnSectorSelector_C::STATIC_BndEvt__Button_7_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_7_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnSectorSelector_C::STATIC_BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, Native, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnSectorSelector_C::STATIC_BndEvt__Button_5_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (NetReliable, Native, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnSectorSelector_C::STATIC_BndEvt__Button_4_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (Native, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnSectorSelector_C::STATIC_BndEvt__Button_3_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnSectorSelector_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.Construct
// (Net, Native, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnSectorSelector_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.Construct");

	UUI_SpawnSectorSelector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.ExecuteUbergraph_UI_SpawnSectorSelector
// (Net, NetRequest, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnSectorSelector_C::ExecuteUbergraph_UI_SpawnSectorSelector(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.ExecuteUbergraph_UI_SpawnSectorSelector");

	UUI_SpawnSectorSelector_C_ExecuteUbergraph_UI_SpawnSectorSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
