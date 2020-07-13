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

// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Label_Text
// (Net, NetReliable, NetRequest, Exec, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_WorldCraftingMarker_C::Get_Label_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Label_Text");

	UUI_WorldCraftingMarker_C_Get_Label_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Accent_Brush
// (NetRequest, Exec, Native, Static, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_WorldCraftingMarker_C::STATIC_Get_Accent_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Accent_Brush");

	UUI_WorldCraftingMarker_C_Get_Accent_Brush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Emphasis_Color
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_WorldCraftingMarker_C::STATIC_Get_Emphasis_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Emphasis_Color");

	UUI_WorldCraftingMarker_C_Get_Emphasis_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Emphasis_Visibility
// (Net, Exec, Native, Static, NetMulticast, Private, HasOutParms)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_WorldCraftingMarker_C::STATIC_Get_Emphasis_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Emphasis_Visibility");

	UUI_WorldCraftingMarker_C_Get_Emphasis_Visibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Bar_Visibility
// (NetReliable, NetRequest, Exec, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_WorldCraftingMarker_C::Get_Bar_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Bar_Visibility");

	UUI_WorldCraftingMarker_C_Get_Bar_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Distance_Text
// (Net, NetRequest, Native, Event, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_WorldCraftingMarker_C::STATIC_Get_Distance_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Distance_Text");

	UUI_WorldCraftingMarker_C_Get_Distance_Text_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Bar_Brush
// (Net, Exec, Event, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_WorldCraftingMarker_C::STATIC_Get_Bar_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Bar_Brush");

	UUI_WorldCraftingMarker_C_Get_Bar_Brush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_BigPointer_Visibility
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_WorldCraftingMarker_C::STATIC_Get_BigPointer_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_BigPointer_Visibility");

	UUI_WorldCraftingMarker_C_Get_BigPointer_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_SmallPointer_Visibility
// (NetReliable, NetRequest, Event, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_WorldCraftingMarker_C::STATIC_Get_SmallPointer_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_SmallPointer_Visibility");

	UUI_WorldCraftingMarker_C_Get_SmallPointer_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Icon_Brush
// (NetReliable, Exec, Event, Static, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_WorldCraftingMarker_C::STATIC_Get_Icon_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Get_Icon_Brush");

	UUI_WorldCraftingMarker_C_Get_Icon_Brush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Tick
// (NetReliable, NetRequest, Native, Static, NetMulticast, Private, HasOutParms)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WorldCraftingMarker_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.Tick");

	UUI_WorldCraftingMarker_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.ChangeMode
// (Net, NetReliable, NetRequest, Exec, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECraftingMarkerMode*           Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WorldCraftingMarker_C::ChangeMode(ECraftingMarkerMode* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.ChangeMode");

	UUI_WorldCraftingMarker_C_ChangeMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.ExecuteUbergraph_UI_WorldCraftingMarker
// (Net, NetReliable, Event, Static, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WorldCraftingMarker_C::STATIC_ExecuteUbergraph_UI_WorldCraftingMarker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorldCraftingMarker.UI_WorldCraftingMarker_C.ExecuteUbergraph_UI_WorldCraftingMarker");

	UUI_WorldCraftingMarker_C_ExecuteUbergraph_UI_WorldCraftingMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
