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

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShowText
// (Net, Exec, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCircularProgressBarSprites_C::GetCurrentPercentageToShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShowText");

	UCircularProgressBarSprites_C_GetCurrentPercentageToShowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShow
// (Exec, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float                          currentPercentageToShow        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::GetCurrentPercentageToShow(float* currentPercentageToShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShow");

	UCircularProgressBarSprites_C_GetCurrentPercentageToShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (currentPercentageToShow != nullptr)
		*currentPercentageToShow = params.currentPercentageToShow;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCurrentPercentageToShow
// (Net, NetReliable, NetRequest, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         percentageToShow               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::SetCurrentPercentageToShow(float* percentageToShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCurrentPercentageToShow");

	UCircularProgressBarSprites_C_SetCurrentPercentageToShow_Params params;
	params.percentageToShow = percentageToShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetPercentageText
// (Net, Exec, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCircularProgressBarSprites_C::GetPercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetPercentageText");

	UCircularProgressBarSprites_C_GetPercentageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextalarmColorC
// (Net, Native, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UTextBlock**             textWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCircularProgressBarSprites_C::SetTextalarmColorC(class UTextBlock** textWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextalarmColorC");

	UCircularProgressBarSprites_C_SetTextalarmColorC_Params params;
	params.textWidget = textWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextColor
// (NetRequest, Exec, Event, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UTextBlock**             textWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::SetTextColor(class UTextBlock** textWidget, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextColor");

	UCircularProgressBarSprites_C_SetTextColor_Params params;
	params.textWidget = textWidget;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateNormalColor
// (Net, NetReliable, NetRequest, Exec, Event, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UCircularProgressBarSprites_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateNormalColor");

	UCircularProgressBarSprites_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCircularBarColor
// (NetReliable, Native, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor*           circularBarColor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::SetCircularBarColor(struct FLinearColor* circularBarColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCircularBarColor");

	UCircularProgressBarSprites_C_SetCircularBarColor_Params params;
	params.circularBarColor = circularBarColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCircularBarColor
// (Net, Native, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor            circularBarColor               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::GetCircularBarColor(struct FLinearColor* circularBarColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCircularBarColor");

	UCircularProgressBarSprites_C_GetCircularBarColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (circularBarColor != nullptr)
		*circularBarColor = params.circularBarColor;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetOuterCircleColor
// (Native, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor*           outerCircleColor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::SetOuterCircleColor(struct FLinearColor* outerCircleColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetOuterCircleColor");

	UCircularProgressBarSprites_C_SetOuterCircleColor_Params params;
	params.outerCircleColor = outerCircleColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetOuterCircleColor
// (Net, NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor            outerCircleColor               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::GetOuterCircleColor(struct FLinearColor* outerCircleColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetOuterCircleColor");

	UCircularProgressBarSprites_C_GetOuterCircleColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outerCircleColor != nullptr)
		*outerCircleColor = params.outerCircleColor;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetNormalColor
// (NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor            NormalColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::GetNormalColor(struct FLinearColor* NormalColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetNormalColor");

	UCircularProgressBarSprites_C_GetNormalColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NormalColor != nullptr)
		*NormalColor = params.NormalColor;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetNormalColor
// (Net, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor*           NormalColor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::SetNormalColor(struct FLinearColor* NormalColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetNormalColor");

	UCircularProgressBarSprites_C_SetNormalColor_Params params;
	params.NormalColor = NormalColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetAlarmColor
// (NetRequest, Exec, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor            AlarmColor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::GetAlarmColor(struct FLinearColor* AlarmColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetAlarmColor");

	UCircularProgressBarSprites_C_GetAlarmColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AlarmColor != nullptr)
		*AlarmColor = params.AlarmColor;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetAlarmColor
// (Net, NetReliable, Exec, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor*           AlarmColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::SetAlarmColor(struct FLinearColor* AlarmColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetAlarmColor");

	UCircularProgressBarSprites_C_SetAlarmColor_Params params;
	params.AlarmColor = AlarmColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateAlarmColor
// (NetReliable, Exec, Native, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UCircularProgressBarSprites_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateAlarmColor");

	UCircularProgressBarSprites_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.UpdatePercentageArc
// (NetReliable, Exec, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UCircularProgressBarSprites_C::UpdatePercentageArc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.UpdatePercentageArc");

	UCircularProgressBarSprites_C_UpdatePercentageArc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetImageAlarmColor
// (NetRequest, Native, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UImage**                 ImageWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCircularProgressBarSprites_C::SetImageAlarmColor(class UImage** ImageWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetImageAlarmColor");

	UCircularProgressBarSprites_C_SetImageAlarmColor_Params params;
	params.ImageWidget = ImageWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnPercentageChanged
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UCircularProgressBarSprites_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnPercentageChanged");

	UCircularProgressBarSprites_C_OnPercentageChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOn
// (Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UCircularProgressBarSprites_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOn");

	UCircularProgressBarSprites_C_AlarmSwitchOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOff
// (Net, Native, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UCircularProgressBarSprites_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOff");

	UCircularProgressBarSprites_C_AlarmSwitchOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.Tick
// (Event, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.Tick");

	UCircularProgressBarSprites_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.Construct
// (NetRequest, Native, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UCircularProgressBarSprites_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.Construct");

	UCircularProgressBarSprites_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnSynchronizeProperties
// (Net, NetReliable, Native, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UCircularProgressBarSprites_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnSynchronizeProperties");

	UCircularProgressBarSprites_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.ExecuteUbergraph_CircularProgressBarSprites
// (NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::ExecuteUbergraph_CircularProgressBarSprites(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.ExecuteUbergraph_CircularProgressBarSprites");

	UCircularProgressBarSprites_C_ExecuteUbergraph_CircularProgressBarSprites_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
