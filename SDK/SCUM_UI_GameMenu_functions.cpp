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

// Function UI_GameMenu.UI_GameMenu_C.Get_CommitSuicide_Visibility
// (Event, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameMenu_C::STATIC_Get_CommitSuicide_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Get_CommitSuicide_Visibility");

	UUI_GameMenu_C_Get_CommitSuicide_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameMenu.UI_GameMenu_C.SaveHUDLayout
// (Net, NetReliable, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void UUI_GameMenu_C::SaveHUDLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.SaveHUDLayout");

	UUI_GameMenu_C_SaveHUDLayout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.OnPreviewKeyDown
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_GameMenu_C::STATIC_OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnPreviewKeyDown");

	UUI_GameMenu_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonDoubleClick
// (Net, NetReliable, Native, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FGeometry*              InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_GameMenu_C::STATIC_OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonDoubleClick");

	UUI_GameMenu_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonDown
// (NetReliable, Native, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_GameMenu_C::STATIC_OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonDown");

	UUI_GameMenu_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonUp
// (NetReliable, NetRequest, Native, Event, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_GameMenu_C::STATIC_OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonUp");

	UUI_GameMenu_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Resume_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Event, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_GameMenu_C::STATIC_BndEvt__Resume_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__Resume_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature");

	UUI_GameMenu_C_BndEvt__Resume_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Quit_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature
// (Net, NetRequest, Native, Event, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_GameMenu_C::STATIC_BndEvt__Quit_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__Quit_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature");

	UUI_GameMenu_C_BndEvt__Quit_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Menu_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature
// (NetReliable, NetRequest, Event, NetResponse, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_GameMenu_C::STATIC_BndEvt__Menu_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__Menu_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature");

	UUI_GameMenu_C_BndEvt__Menu_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Options_K2Node_ComponentBoundEvent_103_OnClicked__DelegateSignature
// (Exec, Native, Event, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_GameMenu_C::STATIC_BndEvt__Options_K2Node_ComponentBoundEvent_103_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__Options_K2Node_ComponentBoundEvent_103_OnClicked__DelegateSignature");

	UUI_GameMenu_C_BndEvt__Options_K2Node_ComponentBoundEvent_103_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.Remove
// (Net, Exec, Native, Event, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_GameMenu_C::STATIC_Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Remove");

	UUI_GameMenu_C_Remove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.OnESC
// (NetReliable, Exec, Native, Event, NetResponse, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_GameMenu_C::STATIC_OnESC()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnESC");

	UUI_GameMenu_C_OnESC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.Construct
// (NetRequest, Exec, Native, Event, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_GameMenu_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Construct");

	UUI_GameMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.OnResume
// (Net, NetReliable, Exec, Native, Event, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_GameMenu_C::STATIC_OnResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnResume");

	UUI_GameMenu_C_OnResume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Hack_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_GameMenu_C::STATIC_BndEvt__Hack_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__Hack_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature");

	UUI_GameMenu_C_BndEvt__Hack_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature
// (Net, NetReliable, Event, NetResponse, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_GameMenu_C::STATIC_BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature");

	UUI_GameMenu_C_BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_GameMenu_C::STATIC_BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UUI_GameMenu_C_BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.OnQuitCanceled
// (Net, NetRequest, Exec, NetResponse, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_GameMenu_C::STATIC_OnQuitCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnQuitCanceled");

	UUI_GameMenu_C_OnQuitCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.OnQuit
// (Net, NetResponse, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_GameMenu_C::STATIC_OnQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnQuit");

	UUI_GameMenu_C_OnQuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.OnLeaveToMainMenu
// (NetRequest, Exec, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_GameMenu_C::STATIC_OnLeaveToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnLeaveToMainMenu");

	UUI_GameMenu_C_OnLeaveToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.OnLeaveToMainMenuCanceled
// (Net, NetRequest, Exec, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_GameMenu_C::STATIC_OnLeaveToMainMenuCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnLeaveToMainMenuCanceled");

	UUI_GameMenu_C_OnLeaveToMainMenuCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.OnSuicideCanceled
// (NetReliable, NetRequest, Exec, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_GameMenu_C::STATIC_OnSuicideCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnSuicideCanceled");

	UUI_GameMenu_C_OnSuicideCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.OnSuicideConfirmed
// (Net, NetReliable, NetRequest, Exec, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_GameMenu_C::STATIC_OnSuicideConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnSuicideConfirmed");

	UUI_GameMenu_C_OnSuicideConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Statistics_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (Net, NetReliable, Exec, Static, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UUI_GameMenu_C::STATIC_BndEvt__Statistics_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__Statistics_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UUI_GameMenu_C_BndEvt__Statistics_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameMenu.UI_GameMenu_C.ExecuteUbergraph_UI_GameMenu
// (Net, NetRequest, Native, Static, NetMulticast, Public, Private, Protected, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameMenu_C::STATIC_ExecuteUbergraph_UI_GameMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.ExecuteUbergraph_UI_GameMenu");

	UUI_GameMenu_C_ExecuteUbergraph_UI_GameMenu_Params params;
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
