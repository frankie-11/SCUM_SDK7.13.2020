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

// Function MainMenuWidget.MainMenuWidget_C.GetCharacterName
// (Net, NetReliable, Event, NetResponse, Static, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMainMenuWidget_C::STATIC_GetCharacterName()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.GetCharacterName");

	UMainMenuWidget_C_GetCharacterName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainMenuWidget.MainMenuWidget_C.OnPreviewKeyDown
// (Net, NetReliable, Native, NetResponse, Static, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMainMenuWidget_C::STATIC_OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.OnPreviewKeyDown");

	UMainMenuWidget_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__UI_MenuButton_38_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature
// (Net, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UMainMenuWidget_C::STATIC_BndEvt__UI_MenuButton_38_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__UI_MenuButton_38_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature");

	UMainMenuWidget_C_BndEvt__UI_MenuButton_38_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__ChangeServer_K2Node_ComponentBoundEvent_195_OnClicked__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UMainMenuWidget_C::STATIC_BndEvt__ChangeServer_K2Node_ComponentBoundEvent_195_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__ChangeServer_K2Node_ComponentBoundEvent_195_OnClicked__DelegateSignature");

	UMainMenuWidget_C_BndEvt__ChangeServer_K2Node_ComponentBoundEvent_195_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__Quit_K2Node_ComponentBoundEvent_214_OnClicked__DelegateSignature
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UMainMenuWidget_C::STATIC_BndEvt__Quit_K2Node_ComponentBoundEvent_214_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__Quit_K2Node_ComponentBoundEvent_214_OnClicked__DelegateSignature");

	UMainMenuWidget_C_BndEvt__Quit_K2Node_ComponentBoundEvent_214_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__Quit_K2Node_ComponentBoundEvent_329_OnClicked__DelegateSignature
// (NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UMainMenuWidget_C::STATIC_BndEvt__Quit_K2Node_ComponentBoundEvent_329_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__Quit_K2Node_ComponentBoundEvent_329_OnClicked__DelegateSignature");

	UMainMenuWidget_C_BndEvt__Quit_K2Node_ComponentBoundEvent_329_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.OnQuitYesClicked
// (NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UMainMenuWidget_C::STATIC_OnQuitYesClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.OnQuitYesClicked");

	UMainMenuWidget_C_OnQuitYesClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.OnQuitNoClicked
// (Net, NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UMainMenuWidget_C::STATIC_OnQuitNoClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.OnQuitNoClicked");

	UMainMenuWidget_C_OnQuitNoClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.Construct
// (NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UMainMenuWidget_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.Construct");

	UMainMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.OnESC
// (Net, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UMainMenuWidget_C::STATIC_OnESC()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.OnESC");

	UMainMenuWidget_C_OnESC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UMainMenuWidget_C::STATIC_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature");

	UMainMenuWidget_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.OnNetworkErrorDismissed
// (NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UMainMenuWidget_C::OnNetworkErrorDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.OnNetworkErrorDismissed");

	UMainMenuWidget_C_OnNetworkErrorDismissed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.ExecuteUbergraph_MainMenuWidget
// (NetResponse, Static, NetMulticast, Public, Private, Protected, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenuWidget_C::STATIC_ExecuteUbergraph_MainMenuWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.ExecuteUbergraph_MainMenuWidget");

	UMainMenuWidget_C_ExecuteUbergraph_MainMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
