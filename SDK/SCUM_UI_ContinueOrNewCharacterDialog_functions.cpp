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

// Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_ContinueOrNewCharacterDialog_C::STATIC_BndEvt__YesButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");

	UUI_ContinueOrNewCharacterDialog_C_BndEvt__YesButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.BndEvt__NewCharacterButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature
// (Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_ContinueOrNewCharacterDialog_C::STATIC_BndEvt__NewCharacterButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.BndEvt__NewCharacterButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature");

	UUI_ContinueOrNewCharacterDialog_C_BndEvt__NewCharacterButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.Init
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_ContinueOrNewCharacterDialog_C::STATIC_Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.Init");

	UUI_ContinueOrNewCharacterDialog_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.ExecuteUbergraph_UI_ContinueOrNewCharacterDialog
// (Native, Delegate, HasOutParms, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ContinueOrNewCharacterDialog_C::ExecuteUbergraph_UI_ContinueOrNewCharacterDialog(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.ExecuteUbergraph_UI_ContinueOrNewCharacterDialog");

	UUI_ContinueOrNewCharacterDialog_C_ExecuteUbergraph_UI_ContinueOrNewCharacterDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.New__DelegateSignature
// ()
// Parameters:
// struct FString*                Ip                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           GameplayPort                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ResponsePort                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                AuthToken                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_ContinueOrNewCharacterDialog_C::New__DelegateSignature(struct FString* Ip, int* GameplayPort, int* ResponsePort, struct FString* AuthToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.New__DelegateSignature");

	UUI_ContinueOrNewCharacterDialog_C_New__DelegateSignature_Params params;
	params.Ip = Ip;
	params.GameplayPort = GameplayPort;
	params.ResponsePort = ResponsePort;
	params.AuthToken = AuthToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.Continue__DelegateSignature
// ()
// Parameters:
// struct FString*                Ip                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           GameplayPort                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ResponsePort                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                AuthToken                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_ContinueOrNewCharacterDialog_C::Continue__DelegateSignature(struct FString* Ip, int* GameplayPort, int* ResponsePort, struct FString* AuthToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.Continue__DelegateSignature");

	UUI_ContinueOrNewCharacterDialog_C_Continue__DelegateSignature_Params params;
	params.Ip = Ip;
	params.GameplayPort = GameplayPort;
	params.ResponsePort = ResponsePort;
	params.AuthToken = AuthToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
