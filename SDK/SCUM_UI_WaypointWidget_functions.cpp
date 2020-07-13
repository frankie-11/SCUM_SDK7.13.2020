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

// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Label_Text
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_WaypointWidget_C::STATIC_Get_Label_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Label_Text");

	UUI_WaypointWidget_C_Get_Label_Text_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Accent_Brush
// (NetReliable, Exec, Native, Event, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_WaypointWidget_C::Get_Accent_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Accent_Brush");

	UUI_WaypointWidget_C_Get_Accent_Brush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Emphasis_Color
// (Net, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_WaypointWidget_C::Get_Emphasis_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Emphasis_Color");

	UUI_WaypointWidget_C_Get_Emphasis_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Emphasis_Visibility
// (Net, Exec, Native, NetResponse, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_WaypointWidget_C::Get_Emphasis_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Emphasis_Visibility");

	UUI_WaypointWidget_C_Get_Emphasis_Visibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Bar_Visibility
// (NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_WaypointWidget_C::Get_Bar_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Bar_Visibility");

	UUI_WaypointWidget_C_Get_Bar_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Distance_Text
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_WaypointWidget_C::Get_Distance_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Distance_Text");

	UUI_WaypointWidget_C_Get_Distance_Text_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Bar_Brush
// (Net, NetRequest, Event, NetResponse, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_WaypointWidget_C::Get_Bar_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Bar_Brush");

	UUI_WaypointWidget_C_Get_Bar_Brush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_BigPointer_Visibility
// (Net, Native, Event, NetMulticast, Private, HasOutParms)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_WaypointWidget_C::Get_BigPointer_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_BigPointer_Visibility");

	UUI_WaypointWidget_C_Get_BigPointer_Visibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_SmallPointer_Visibility
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Private, HasOutParms)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_WaypointWidget_C::Get_SmallPointer_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_SmallPointer_Visibility");

	UUI_WaypointWidget_C_Get_SmallPointer_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Icon_Brush
// (Net, NetReliable, NetRequest, Exec, NetResponse, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_WaypointWidget_C::Get_Icon_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Icon_Brush");

	UUI_WaypointWidget_C_Get_Icon_Brush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Tick
// (NetRequest, Exec, Native, NetMulticast, Private, HasOutParms)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WaypointWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Tick");

	UUI_WaypointWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.ExecuteUbergraph_UI_WaypointWidget
// (Native, NetResponse, Static, NetMulticast, Private, HasOutParms)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WaypointWidget_C::STATIC_ExecuteUbergraph_UI_WaypointWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.ExecuteUbergraph_UI_WaypointWidget");

	UUI_WaypointWidget_C_ExecuteUbergraph_UI_WaypointWidget_Params params;
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
