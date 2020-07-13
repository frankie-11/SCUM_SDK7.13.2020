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

// Function UI_BombDefusalWidget.UI_BombDefusalWidget_C.OnSuccess
// (NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UUI_BombDefusalWidget_C::STATIC_OnSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BombDefusalWidget.UI_BombDefusalWidget_C.OnSuccess");

	UUI_BombDefusalWidget_C_OnSuccess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BombDefusalWidget.UI_BombDefusalWidget_C.ShowInfo
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UUI_BombDefusalWidget_C::STATIC_ShowInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BombDefusalWidget.UI_BombDefusalWidget_C.ShowInfo");

	UUI_BombDefusalWidget_C_ShowInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BombDefusalWidget.UI_BombDefusalWidget_C.HideInfo
// (Native, NetResponse, Static, NetMulticast, Public, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UUI_BombDefusalWidget_C::STATIC_HideInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BombDefusalWidget.UI_BombDefusalWidget_C.HideInfo");

	UUI_BombDefusalWidget_C_HideInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BombDefusalWidget.UI_BombDefusalWidget_C.ExecuteUbergraph_UI_BombDefusalWidget
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BombDefusalWidget_C::ExecuteUbergraph_UI_BombDefusalWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BombDefusalWidget.UI_BombDefusalWidget_C.ExecuteUbergraph_UI_BombDefusalWidget");

	UUI_BombDefusalWidget_C_ExecuteUbergraph_UI_BombDefusalWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
