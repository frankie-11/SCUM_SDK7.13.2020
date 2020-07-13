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

// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.Get_LeavingSquadWarning_Visibility
// (Net, NetRequest, Exec, Native, Event, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_LogoutConfirmation_C::STATIC_Get_LeavingSquadWarning_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.Get_LeavingSquadWarning_Visibility");

	UUI_LogoutConfirmation_C_Get_LeavingSquadWarning_Visibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.GetCountdownText
// (Net, Event, NetResponse, Static, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_LogoutConfirmation_C::STATIC_GetCountdownText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.GetCountdownText");

	UUI_LogoutConfirmation_C_GetCountdownText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.Construct
// (Net, NetRequest, Exec, Native, Event, NetResponse, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_LogoutConfirmation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.Construct");

	UUI_LogoutConfirmation_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (NetRequest, Exec, Native, Event, NetResponse, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_LogoutConfirmation_C::BndEvt__NoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UUI_LogoutConfirmation_C_BndEvt__NoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.OnCountdownFinished
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_LogoutConfirmation_C::OnCountdownFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.OnCountdownFinished");

	UUI_LogoutConfirmation_C_OnCountdownFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.OnNo
// (Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_LogoutConfirmation_C::STATIC_OnNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.OnNo");

	UUI_LogoutConfirmation_C_OnNo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.BndEvt__ForceButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
// (Net, NetReliable, Exec, Native, Event, NetResponse, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_LogoutConfirmation_C::BndEvt__ForceButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.BndEvt__ForceButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");

	UUI_LogoutConfirmation_C_BndEvt__ForceButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.ExecuteUbergraph_UI_LogoutConfirmation
// (Net, NetReliable, NetRequest, NetResponse, Delegate, HasOutParms, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_LogoutConfirmation_C::ExecuteUbergraph_UI_LogoutConfirmation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.ExecuteUbergraph_UI_LogoutConfirmation");

	UUI_LogoutConfirmation_C_ExecuteUbergraph_UI_LogoutConfirmation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.CountdownFinished__DelegateSignature
// ()

void UUI_LogoutConfirmation_C::CountdownFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.CountdownFinished__DelegateSignature");

	UUI_LogoutConfirmation_C_CountdownFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
