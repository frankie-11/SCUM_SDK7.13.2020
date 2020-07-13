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

// Function InteractionWidget.InteractionWidget_C.BndEvt___actionButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
// (Net, NetRequest, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)

void UInteractionWidget_C::STATIC_BndEvt___actionButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.BndEvt___actionButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");

	UInteractionWidget_C_BndEvt___actionButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionWidget.InteractionWidget_C.BndEvt___actionButton_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature
// (NetReliable, NetRequest, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)

void UInteractionWidget_C::STATIC_BndEvt___actionButton_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.BndEvt___actionButton_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature");

	UInteractionWidget_C_BndEvt___actionButton_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractionWidget.InteractionWidget_C.ExecuteUbergraph_InteractionWidget
// (Exec, Native, Event, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInteractionWidget_C::STATIC_ExecuteUbergraph_InteractionWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractionWidget.InteractionWidget_C.ExecuteUbergraph_InteractionWidget");

	UInteractionWidget_C_ExecuteUbergraph_InteractionWidget_Params params;
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
