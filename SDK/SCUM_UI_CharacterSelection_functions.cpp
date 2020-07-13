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

// Function UI_CharacterSelection.UI_CharacterSelection_C.OnPreviewKeyDown
// (NetRequest, Exec, Native, NetResponse, Static, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_CharacterSelection_C::STATIC_OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnPreviewKeyDown");

	UUI_CharacterSelection_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
// (Net, Native, Event, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)

void UUI_CharacterSelection_C::BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
// (NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)

void UUI_CharacterSelection_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const)

void UUI_CharacterSelection_C::STATIC_BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.Construct
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const)

void UUI_CharacterSelection_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.Construct");

	UUI_CharacterSelection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature
// (NetReliable, NetRequest, Native, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const)

void UUI_CharacterSelection_C::BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature
// (Net, NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const)

void UUI_CharacterSelection_C::BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature
// (Exec, Native, Event, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const)

void UUI_CharacterSelection_C::STATIC_BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature
// (NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const)

void UUI_CharacterSelection_C::STATIC_BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.OnESC
// (Net, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const)

void UUI_CharacterSelection_C::OnESC()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnESC");

	UUI_CharacterSelection_C_OnESC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.CancelCriminalRecord
// (Net, NetReliable, Exec, Native, NetMulticast, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_CharacterSelection_C::CancelCriminalRecord()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.CancelCriminalRecord");

	UUI_CharacterSelection_C_CancelCriminalRecord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.CancelDeleteCharacter
// (Net, Exec, Native, Event, NetResponse, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_CharacterSelection_C::STATIC_CancelDeleteCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.CancelDeleteCharacter");

	UUI_CharacterSelection_C_CancelDeleteCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.Back
// (Net, Native, NetMulticast, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_CharacterSelection_C::Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.Back");

	UUI_CharacterSelection_C_Back_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterDeleted
// (Net, Native, Event, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)
// Parameters:
// class UUI_CharacterSlot_C**    Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CharacterSelection_C::STATIC_OnCharacterDeleted(class UUI_CharacterSlot_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterDeleted");

	UUI_CharacterSelection_C_OnCharacterDeleted_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterSelected
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class UUserProfile**           UserProfile                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterSelection_C::OnCharacterSelected(class UUserProfile** UserProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterSelected");

	UUI_CharacterSelection_C_OnCharacterSelected_Params params;
	params.UserProfile = UserProfile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.ExecuteUbergraph_UI_CharacterSelection
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, NetClient, BlueprintCallable, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterSelection_C::STATIC_ExecuteUbergraph_UI_CharacterSelection(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.ExecuteUbergraph_UI_CharacterSelection");

	UUI_CharacterSelection_C_ExecuteUbergraph_UI_CharacterSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
