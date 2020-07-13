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

// Function BorderFilled.BorderFilled_C.UpdateBorderFilled
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UBorderFilled_C::STATIC_UpdateBorderFilled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.UpdateBorderFilled");

	UBorderFilled_C_UpdateBorderFilled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.SetBottomMarginOn
// (Exec, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          shouldBottomMarginBeOn         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBorderFilled_C::SetBottomMarginOn(bool* shouldBottomMarginBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetBottomMarginOn");

	UBorderFilled_C_SetBottomMarginOn_Params params;
	params.shouldBottomMarginBeOn = shouldBottomMarginBeOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.SetPaddingOnBackgroundImage
// (Net, NetResponse, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         Margin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         marginGap                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBorderFilled_C::SetPaddingOnBackgroundImage(float* Margin, float* marginGap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetPaddingOnBackgroundImage");

	UBorderFilled_C_SetPaddingOnBackgroundImage_Params params;
	params.Margin = Margin;
	params.marginGap = marginGap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.SetColorOnBackgroundImage
// (Net, NetReliable, NetRequest, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBorderFilled_C::SetColorOnBackgroundImage(struct FLinearColor* InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetColorOnBackgroundImage");

	UBorderFilled_C_SetColorOnBackgroundImage_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.SetBackgroundColor
// (Net, NetReliable, NetRequest, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           backgroundColorToSet           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBorderFilled_C::SetBackgroundColor(struct FLinearColor* backgroundColorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetBackgroundColor");

	UBorderFilled_C_SetBackgroundColor_Params params;
	params.backgroundColorToSet = backgroundColorToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.UpdateBackgroundColor
// (NetReliable, NetRequest, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           NewBackgroundColor             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBorderFilled_C::UpdateBackgroundColor(struct FLinearColor* NewBackgroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.UpdateBackgroundColor");

	UBorderFilled_C_UpdateBackgroundColor_Params params;
	params.NewBackgroundColor = NewBackgroundColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.SetBorderColor
// (Net, NetRequest, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           borderColorToSet               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBorderFilled_C::SetBorderColor(struct FLinearColor* borderColorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetBorderColor");

	UBorderFilled_C_SetBorderColor_Params params;
	params.borderColorToSet = borderColorToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.Construct
// (NetRequest, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UBorderFilled_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.Construct");

	UBorderFilled_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.OnSynchronizeProperties
// (Net, NetReliable, Event, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UBorderFilled_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.OnSynchronizeProperties");

	UBorderFilled_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.ExecuteUbergraph_BorderFilled
// (Net, NetReliable, Exec, Native, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBorderFilled_C::ExecuteUbergraph_BorderFilled(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.ExecuteUbergraph_BorderFilled");

	UBorderFilled_C_ExecuteUbergraph_BorderFilled_Params params;
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
