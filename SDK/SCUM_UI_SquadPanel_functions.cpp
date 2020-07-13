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

// Function UI_SquadPanel.UI_SquadPanel_C.UpdateRanking
// (NetRequest, Native, NetResponse, Static, Private, NetClient, BlueprintPure, NetValidate)

void UUI_SquadPanel_C::STATIC_UpdateRanking()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateRanking");

	UUI_SquadPanel_C_UpdateRanking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadLimit
// (NetRequest, Native, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void UUI_SquadPanel_C::STATIC_UpdateSquadLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadLimit");

	UUI_SquadPanel_C_UpdateSquadLimit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.AskForConfirmation
// (Net, NetReliable, NetRequest, Exec, NetResponse, Public, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FText*                  DialogText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FScriptDelegate*        OnConfirmEvent                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate*        OnCancelEvent                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_SquadPanel_C::AskForConfirmation(struct FText* DialogText, struct FScriptDelegate* OnConfirmEvent, struct FScriptDelegate* OnCancelEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.AskForConfirmation");

	UUI_SquadPanel_C_AskForConfirmation_Params params;
	params.DialogText = DialogText;
	params.OnConfirmEvent = OnConfirmEvent;
	params.OnCancelEvent = OnCancelEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateMemberList
// (Native, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void UUI_SquadPanel_C::STATIC_UpdateMemberList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateMemberList");

	UUI_SquadPanel_C_UpdateMemberList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateElementVisibility
// (Net, NetRequest, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void UUI_SquadPanel_C::UpdateElementVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateElementVisibility");

	UUI_SquadPanel_C_UpdateElementVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateCurrentSquadData
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void UUI_SquadPanel_C::UpdateCurrentSquadData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateCurrentSquadData");

	UUI_SquadPanel_C_UpdateCurrentSquadData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.Update
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SquadPanel_C::STATIC_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.Update");

	UUI_SquadPanel_C_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SquadPanel_C::STATIC_BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadPanel_C_BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadMemberInfo
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SquadPanel_C::STATIC_UpdateSquadMemberInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadMemberInfo");

	UUI_SquadPanel_C_UpdateSquadMemberInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SquadPanel_C::STATIC_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadPanel_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (Net, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SquadPanel_C::STATIC_BndEvt__CreateButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadPanel_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.OnLeaveConfirm
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SquadPanel_C::STATIC_OnLeaveConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.OnLeaveConfirm");

	UUI_SquadPanel_C_OnLeaveConfirm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.OnLeaveCanceled
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SquadPanel_C::STATIC_OnLeaveCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.OnLeaveCanceled");

	UUI_SquadPanel_C_OnLeaveCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadRankingData
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SquadPanel_C::STATIC_UpdateSquadRankingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadRankingData");

	UUI_SquadPanel_C_UpdateSquadRankingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadTopData
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SquadPanel_C::STATIC_UpdateSquadTopData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadTopData");

	UUI_SquadPanel_C_UpdateSquadTopData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.Construct
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SquadPanel_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.Construct");

	UUI_SquadPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.ExecuteUbergraph_UI_SquadPanel
// (NetReliable, NetRequest, Static, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadPanel_C::STATIC_ExecuteUbergraph_UI_SquadPanel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.ExecuteUbergraph_UI_SquadPanel");

	UUI_SquadPanel_C_ExecuteUbergraph_UI_SquadPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
