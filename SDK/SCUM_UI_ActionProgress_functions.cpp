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

// Function UI_ActionProgress.UI_ActionProgress_C.OnMouseButtonDown
// (NetRequest, Native, NetResponse, Static, Private, HasOutParms)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_ActionProgress_C::STATIC_OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActionProgress.UI_ActionProgress_C.OnMouseButtonDown");

	UUI_ActionProgress_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ActionProgress.UI_ActionProgress_C.Get_PercentageText_Text_1
// (Net, NetRequest, Native, Static, Private, HasOutParms)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_ActionProgress_C::STATIC_Get_PercentageText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActionProgress.UI_ActionProgress_C.Get_PercentageText_Text_1");

	UUI_ActionProgress_C_Get_PercentageText_Text_1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ActionProgress.UI_ActionProgress_C.Construct
// (Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_ActionProgress_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActionProgress.UI_ActionProgress_C.Construct");

	UUI_ActionProgress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActionProgress.UI_ActionProgress_C.OnMouseEnter
// (Net, NetReliable, Static, Private, HasOutParms)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_ActionProgress_C::STATIC_OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActionProgress.UI_ActionProgress_C.OnMouseEnter");

	UUI_ActionProgress_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActionProgress.UI_ActionProgress_C.OnMouseLeave
// (NetReliable, Event, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_ActionProgress_C::STATIC_OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActionProgress.UI_ActionProgress_C.OnMouseLeave");

	UUI_ActionProgress_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ActionProgress.UI_ActionProgress_C.ExecuteUbergraph_UI_ActionProgress
// (NetReliable, Exec, Event, Static, Private, HasOutParms)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ActionProgress_C::STATIC_ExecuteUbergraph_UI_ActionProgress(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ActionProgress.UI_ActionProgress_C.ExecuteUbergraph_UI_ActionProgress");

	UUI_ActionProgress_C_ExecuteUbergraph_UI_ActionProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
