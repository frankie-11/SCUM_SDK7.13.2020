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

// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.AdjustPosition
// (Native, Event, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D*              adjustment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_YesNoMenuConfirmation_C::AdjustPosition(struct FVector2D* adjustment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.AdjustPosition");

	UUI_YesNoMenuConfirmation_C_AdjustPosition_Params params;
	params.adjustment = adjustment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.Init
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCanvasPanel**           CanvasPanel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText*                  Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_YesNoMenuConfirmation_C::STATIC_Init(class UCanvasPanel** CanvasPanel, struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.Init");

	UUI_YesNoMenuConfirmation_C_Init_Params params;
	params.CanvasPanel = CanvasPanel;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const)

void UUI_YesNoMenuConfirmation_C::STATIC_BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UUI_YesNoMenuConfirmation_C_BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (Net, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const)

void UUI_YesNoMenuConfirmation_C::STATIC_BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UUI_YesNoMenuConfirmation_C_BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.OnYes
// (Net, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const)

void UUI_YesNoMenuConfirmation_C::STATIC_OnYes()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.OnYes");

	UUI_YesNoMenuConfirmation_C_OnYes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.ExecuteUbergraph_UI_YesNoMenuConfirmation
// (NetReliable, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_YesNoMenuConfirmation_C::STATIC_ExecuteUbergraph_UI_YesNoMenuConfirmation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.ExecuteUbergraph_UI_YesNoMenuConfirmation");

	UUI_YesNoMenuConfirmation_C_ExecuteUbergraph_UI_YesNoMenuConfirmation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.YesClicked__DelegateSignature
// ()

void UUI_YesNoMenuConfirmation_C::YesClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.YesClicked__DelegateSignature");

	UUI_YesNoMenuConfirmation_C_YesClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
