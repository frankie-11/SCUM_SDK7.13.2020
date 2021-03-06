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

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetFromNormalizedValue
// (Exec, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         normalizedValue                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_ProgressBar_C::STATIC_SetFromNormalizedValue(float* normalizedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetFromNormalizedValue");

	UUI_CC_ProgressBar_C_SetFromNormalizedValue_Params params;
	params.normalizedValue = normalizedValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.GetNormalizedValue
// (NetReliable, Exec, MulticastDelegate, Public, Delegate, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          normalizedValue                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CC_ProgressBar_C::GetNormalizedValue(float* normalizedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.GetNormalizedValue");

	UUI_CC_ProgressBar_C_GetNormalizedValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (normalizedValue != nullptr)
		*normalizedValue = params.normalizedValue;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.UpdateSliderFromMouseEvent
// (Net, NetReliable, NetResponse, NetMulticast, Delegate, HasOutParms, NetClient, DLLImport)
// Parameters:
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CC_ProgressBar_C::UpdateSliderFromMouseEvent(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.UpdateSliderFromMouseEvent");

	UUI_CC_ProgressBar_C_UpdateSliderFromMouseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetSliderFromPercentage
// (NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// float*                         percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          onlyWholeNumbers               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_ProgressBar_C::STATIC_SetSliderFromPercentage(float* percent, bool* onlyWholeNumbers)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetSliderFromPercentage");

	UUI_CC_ProgressBar_C_SetSliderFromPercentage_Params params;
	params.percent = percent;
	params.onlyWholeNumbers = onlyWholeNumbers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetValue
// (Exec, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         leftover                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_ProgressBar_C::STATIC_SetValue(int* Index, float* leftover)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetValue");

	UUI_CC_ProgressBar_C_SetValue_Params params;
	params.Index = Index;
	params.leftover = leftover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetTitle
// (NetReliable, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  Title                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CC_ProgressBar_C::SetTitle(struct FText* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetTitle");

	UUI_CC_ProgressBar_C_SetTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.ProcessIndexChange
// (NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void UUI_CC_ProgressBar_C::STATIC_ProcessIndexChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.ProcessIndexChange");

	UUI_CC_ProgressBar_C_ProcessIndexChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseButtonUp
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_CC_ProgressBar_C::STATIC_OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseButtonUp");

	UUI_CC_ProgressBar_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetEnabledState
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_ProgressBar_C::STATIC_SetEnabledState(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetEnabledState");

	UUI_CC_ProgressBar_C_SetEnabledState_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseButtonDown
// (Net, NetReliable, NetRequest, MulticastDelegate, Public, Delegate, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_CC_ProgressBar_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseButtonDown");

	UUI_CC_ProgressBar_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseMove
// (Net, NetReliable, NetRequest, Native, Static, MulticastDelegate, Public, Delegate, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_CC_ProgressBar_C::STATIC_OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseMove");

	UUI_CC_ProgressBar_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.UpdateBarFromIndex
// (NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, DLLImport, BlueprintCallable, NetValidate)

void UUI_CC_ProgressBar_C::STATIC_UpdateBarFromIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.UpdateBarFromIndex");

	UUI_CC_ProgressBar_C_UpdateBarFromIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.InitFromData
// (Net, NetRequest, Native, Event, NetMulticast, Delegate, HasOutParms, NetClient, DLLImport)

void UUI_CC_ProgressBar_C::InitFromData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.InitFromData");

	UUI_CC_ProgressBar_C_InitFromData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.CreateMarkers
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Delegate, HasOutParms, NetClient, DLLImport)

void UUI_CC_ProgressBar_C::STATIC_CreateMarkers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.CreateMarkers");

	UUI_CC_ProgressBar_C_CreateMarkers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnSynchronizeProperties
// (NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_CC_ProgressBar_C::STATIC_OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnSynchronizeProperties");

	UUI_CC_ProgressBar_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.Construct
// (Net, NetRequest, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_CC_ProgressBar_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.Construct");

	UUI_CC_ProgressBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.Tick
// (NetReliable, Exec, Native, Static, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_ProgressBar_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.Tick");

	UUI_CC_ProgressBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.ExecuteUbergraph_UI_CC_ProgressBar
// (Net, NetReliable, Exec, Native, Event, NetResponse, NetMulticast, Delegate, HasOutParms, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_ProgressBar_C::ExecuteUbergraph_UI_CC_ProgressBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.ExecuteUbergraph_UI_CC_ProgressBar");

	UUI_CC_ProgressBar_C_ExecuteUbergraph_UI_CC_ProgressBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.MouseDown__DelegateSignature
// ()

void UUI_CC_ProgressBar_C::MouseDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.MouseDown__DelegateSignature");

	UUI_CC_ProgressBar_C_MouseDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.MouseUp__DelegateSignature
// ()

void UUI_CC_ProgressBar_C::MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.MouseUp__DelegateSignature");

	UUI_CC_ProgressBar_C_MouseUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnIndexChanged__DelegateSignature
// ()
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         LeftoverPercentage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_ProgressBar_C::OnIndexChanged__DelegateSignature(int* Index, float* LeftoverPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnIndexChanged__DelegateSignature");

	UUI_CC_ProgressBar_C_OnIndexChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.LeftoverPercentage = LeftoverPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
