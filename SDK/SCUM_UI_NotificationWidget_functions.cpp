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

// Function UI_NotificationWidget.UI_NotificationWidget_C.CheckLifespan
// (Net, NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationWidget_C::STATIC_CheckLifespan(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.CheckLifespan");

	UUI_NotificationWidget_C_CheckLifespan_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.SetLifeSpan
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationWidget_C::STATIC_SetLifeSpan(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.SetLifeSpan");

	UUI_NotificationWidget_C_SetLifeSpan_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.SetText
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_NotificationWidget_C::STATIC_SetText(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.SetText");

	UUI_NotificationWidget_C_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.UpdateScale
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_NotificationWidget_C::STATIC_UpdateScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.UpdateScale");

	UUI_NotificationWidget_C_UpdateScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.Show
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool*                          Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationWidget_C::STATIC_Show(bool* Instant)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.Show");

	UUI_NotificationWidget_C_Show_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.Dismiss
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool*                          Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationWidget_C::STATIC_Dismiss(bool* Instant)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.Dismiss");

	UUI_NotificationWidget_C_Dismiss_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.Construct
// (Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_NotificationWidget_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.Construct");

	UUI_NotificationWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.Tick
// (NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.Tick");

	UUI_NotificationWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.ExecuteUbergraph_UI_NotificationWidget
// (Net, NetReliable, Event, NetResponse, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationWidget_C::ExecuteUbergraph_UI_NotificationWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.ExecuteUbergraph_UI_NotificationWidget");

	UUI_NotificationWidget_C_ExecuteUbergraph_UI_NotificationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
