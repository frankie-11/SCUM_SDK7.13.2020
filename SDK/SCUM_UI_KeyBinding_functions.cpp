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

// Function UI_KeyBinding.UI_KeyBinding_C.BindKey
// (NetReliable, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_KeyBinding_C::STATIC_BindKey(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.BindKey");

	UUI_KeyBinding_C_BindKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBinding.UI_KeyBinding_C.OnMouseButtonDown_1
// (Net, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_KeyBinding_C::OnMouseButtonDown_1(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.OnMouseButtonDown_1");

	UUI_KeyBinding_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_KeyBinding.UI_KeyBinding_C.Init
// (NetReliable, NetRequest, Native, Event, NetMulticast, Delegate, HasOutParms, NetClient, DLLImport)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Shift                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ctrl                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Alt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KeyBinding_C::Init(struct FKey* Key, bool* Shift, bool* ctrl, bool* Alt)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.Init");

	UUI_KeyBinding_C_Init_Params params;
	params.Key = Key;
	params.Shift = Shift;
	params.ctrl = ctrl;
	params.Alt = Alt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBinding.UI_KeyBinding_C.OnSynchronizeProperties
// (Net, NetRequest, Exec, Event, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_KeyBinding_C::STATIC_OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.OnSynchronizeProperties");

	UUI_KeyBinding_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBinding.UI_KeyBinding_C.OnDeselected
// (NetReliable, NetRequest, Native, Event, NetMulticast, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_KeyBinding_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.OnDeselected");

	UUI_KeyBinding_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBinding.UI_KeyBinding_C.ExecuteUbergraph_UI_KeyBinding
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KeyBinding_C::STATIC_ExecuteUbergraph_UI_KeyBinding(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.ExecuteUbergraph_UI_KeyBinding");

	UUI_KeyBinding_C_ExecuteUbergraph_UI_KeyBinding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBinding.UI_KeyBinding_C.OnRebindInitiated__DelegateSignature
// ()
// Parameters:
// class UUI_KeyBinding_C**       keyBindingWidget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_KeyBinding_C::OnRebindInitiated__DelegateSignature(class UUI_KeyBinding_C** keyBindingWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.OnRebindInitiated__DelegateSignature");

	UUI_KeyBinding_C_OnRebindInitiated__DelegateSignature_Params params;
	params.keyBindingWidget = keyBindingWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KeyBinding.UI_KeyBinding_C.KeyPressed__DelegateSignature
// ()
// Parameters:
// struct FName*                  ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey*                   actionKey                      (BlueprintVisible, BlueprintReadOnly, Parm)
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KeyBinding_C::KeyPressed__DelegateSignature(struct FName* ActionName, struct FKey* actionKey, float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.KeyPressed__DelegateSignature");

	UUI_KeyBinding_C_KeyPressed__DelegateSignature_Params params;
	params.ActionName = ActionName;
	params.actionKey = actionKey;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
