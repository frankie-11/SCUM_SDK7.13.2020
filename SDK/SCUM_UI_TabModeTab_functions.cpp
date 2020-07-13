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

// Function UI_TabModeTab.UI_TabModeTab_C.GetIsActive
// (Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_TabModeTab_C::STATIC_GetIsActive(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.GetIsActive");

	UUI_TabModeTab_C_GetIsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function UI_TabModeTab.UI_TabModeTab_C.OnClick
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_TabModeTab_C::OnClick(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.OnClick");

	UUI_TabModeTab_C_OnClick_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_TabModeTab.UI_TabModeTab_C.SetIsActive
// (NetReliable, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TabModeTab_C::SetIsActive(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.SetIsActive");

	UUI_TabModeTab_C_SetIsActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTab.UI_TabModeTab_C.Construct
// (Net, NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_TabModeTab_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.Construct");

	UUI_TabModeTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTab.UI_TabModeTab_C.OnSynchronizeProperties
// (NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_TabModeTab_C::STATIC_OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.OnSynchronizeProperties");

	UUI_TabModeTab_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTab.UI_TabModeTab_C.ExecuteUbergraph_UI_TabModeTab
// (Exec, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TabModeTab_C::STATIC_ExecuteUbergraph_UI_TabModeTab(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.ExecuteUbergraph_UI_TabModeTab");

	UUI_TabModeTab_C_ExecuteUbergraph_UI_TabModeTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTab.UI_TabModeTab_C.Clicked__DelegateSignature
// ()

void UUI_TabModeTab_C::Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.Clicked__DelegateSignature");

	UUI_TabModeTab_C_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
