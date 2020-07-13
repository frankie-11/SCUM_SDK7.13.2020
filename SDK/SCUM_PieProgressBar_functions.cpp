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

// Function PieProgressBar.PieProgressBar_C.HidePieImages
// (Net, NetReliable, Exec, Native, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UPieProgressBar_C::STATIC_HidePieImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.HidePieImages");

	UPieProgressBar_C_HidePieImages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.GetPercentageText
// (NetReliable, Static, MulticastDelegate, Protected, Delegate, NetClient, BlueprintCallable)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPieProgressBar_C::STATIC_GetPercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.GetPercentageText");

	UPieProgressBar_C_GetPercentageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PieProgressBar.PieProgressBar_C.SetImageColor
// (Net, Event, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UImage**                 Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPieProgressBar_C::STATIC_SetImageColor(class UImage** Image, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetImageColor");

	UPieProgressBar_C_SetImageColor_Params params;
	params.Image = Image;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.SetTextColor
// (Net, NetReliable, Native, Event, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UTextBlock**             textWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPieProgressBar_C::STATIC_SetTextColor(class UTextBlock** textWidget, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetTextColor");

	UPieProgressBar_C_SetTextColor_Params params;
	params.textWidget = textWidget;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.SetCircularBarColor
// (Net, NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor*           circularBarColor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPieProgressBar_C::SetCircularBarColor(struct FLinearColor* circularBarColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetCircularBarColor");

	UPieProgressBar_C_SetCircularBarColor_Params params;
	params.circularBarColor = circularBarColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.GetCircularBarColor
// (NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor            circularBarColor               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPieProgressBar_C::GetCircularBarColor(struct FLinearColor* circularBarColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.GetCircularBarColor");

	UPieProgressBar_C_GetCircularBarColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (circularBarColor != nullptr)
		*circularBarColor = params.circularBarColor;
}


// Function PieProgressBar.PieProgressBar_C.SetOuterCircleColor
// (Net, NetReliable, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor*           outerCircleColor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPieProgressBar_C::SetOuterCircleColor(struct FLinearColor* outerCircleColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetOuterCircleColor");

	UPieProgressBar_C_SetOuterCircleColor_Params params;
	params.outerCircleColor = outerCircleColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.GetOuterCircleColor
// (NetReliable, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor            outerCircleColor               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPieProgressBar_C::GetOuterCircleColor(struct FLinearColor* outerCircleColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.GetOuterCircleColor");

	UPieProgressBar_C_GetOuterCircleColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outerCircleColor != nullptr)
		*outerCircleColor = params.outerCircleColor;
}


// Function PieProgressBar.PieProgressBar_C.GetNormalColor
// (Net, Native, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor            NormalColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPieProgressBar_C::GetNormalColor(struct FLinearColor* NormalColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.GetNormalColor");

	UPieProgressBar_C_GetNormalColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NormalColor != nullptr)
		*NormalColor = params.NormalColor;
}


// Function PieProgressBar.PieProgressBar_C.SetNormalColor
// (Native, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor*           NormalColor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPieProgressBar_C::SetNormalColor(struct FLinearColor* NormalColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetNormalColor");

	UPieProgressBar_C_SetNormalColor_Params params;
	params.NormalColor = NormalColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.UpdatePercentageArc
// (NetReliable, NetResponse, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UPieProgressBar_C::UpdatePercentageArc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.UpdatePercentageArc");

	UPieProgressBar_C_UpdatePercentageArc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.OnPercentageChanged
// (Net, NetReliable, NetRequest, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UPieProgressBar_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.OnPercentageChanged");

	UPieProgressBar_C_OnPercentageChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.Tick
// (Net, Native, Event, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPieProgressBar_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.Tick");

	UPieProgressBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.Construct
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UPieProgressBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.Construct");

	UPieProgressBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.OnSynchronizeProperties
// (Net, NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UPieProgressBar_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.OnSynchronizeProperties");

	UPieProgressBar_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PieProgressBar.PieProgressBar_C.ExecuteUbergraph_PieProgressBar
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPieProgressBar_C::ExecuteUbergraph_PieProgressBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.ExecuteUbergraph_PieProgressBar");

	UPieProgressBar_C_ExecuteUbergraph_PieProgressBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
