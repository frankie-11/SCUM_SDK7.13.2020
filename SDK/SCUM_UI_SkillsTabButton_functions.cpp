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

// Function UI_SkillsTabButton.UI_SkillsTabButton_C.Shrink
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Protected, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_SkillsTabButton_C::STATIC_Shrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillsTabButton.UI_SkillsTabButton_C.Shrink");

	UUI_SkillsTabButton_C_Shrink_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillsTabButton.UI_SkillsTabButton_C.Enlarge
// (NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Protected, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_SkillsTabButton_C::STATIC_Enlarge()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillsTabButton.UI_SkillsTabButton_C.Enlarge");

	UUI_SkillsTabButton_C_Enlarge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillsTabButton.UI_SkillsTabButton_C.Construct
// (Net, NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SkillsTabButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillsTabButton.UI_SkillsTabButton_C.Construct");

	UUI_SkillsTabButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillsTabButton.UI_SkillsTabButton_C.OnSynchronizeProperties
// (NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SkillsTabButton_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillsTabButton.UI_SkillsTabButton_C.OnSynchronizeProperties");

	UUI_SkillsTabButton_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillsTabButton.UI_SkillsTabButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
// (NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SkillsTabButton_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillsTabButton.UI_SkillsTabButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature");

	UUI_SkillsTabButton_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillsTabButton.UI_SkillsTabButton_C.ExecuteUbergraph_UI_SkillsTabButton
// (Exec, Native, Event, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillsTabButton_C::ExecuteUbergraph_UI_SkillsTabButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillsTabButton.UI_SkillsTabButton_C.ExecuteUbergraph_UI_SkillsTabButton");

	UUI_SkillsTabButton_C_ExecuteUbergraph_UI_SkillsTabButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillsTabButton.UI_SkillsTabButton_C.OnClickedDispatcher__DelegateSignature
// ()

void UUI_SkillsTabButton_C::OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillsTabButton.UI_SkillsTabButton_C.OnClickedDispatcher__DelegateSignature");

	UUI_SkillsTabButton_C_OnClickedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
