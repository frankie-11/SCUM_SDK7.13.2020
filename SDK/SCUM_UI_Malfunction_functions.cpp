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

// Function UI_Malfunction.UI_Malfunction_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)

void UUI_Malfunction_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Malfunction.UI_Malfunction_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_Malfunction_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Malfunction.UI_Malfunction_C.ExecuteUbergraph_UI_Malfunction
// (NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Malfunction_C::ExecuteUbergraph_UI_Malfunction(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Malfunction.UI_Malfunction_C.ExecuteUbergraph_UI_Malfunction");

	UUI_Malfunction_C_ExecuteUbergraph_UI_Malfunction_Params params;
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
