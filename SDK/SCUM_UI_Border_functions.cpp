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

// Function UI_Border.UI_Border_C.SetColor
// (Net, NetRequest, Exec, Native, Event, Static, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Border_C::STATIC_SetColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Border.UI_Border_C.SetColor");

	UUI_Border_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Border.UI_Border_C.OnSynchronizeProperties
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_Border_C::STATIC_OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Border.UI_Border_C.OnSynchronizeProperties");

	UUI_Border_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Border.UI_Border_C.ExecuteUbergraph_UI_Border
// (NetReliable, Exec, Native, Static, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Border_C::STATIC_ExecuteUbergraph_UI_Border(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Border.UI_Border_C.ExecuteUbergraph_UI_Border");

	UUI_Border_C_ExecuteUbergraph_UI_Border_Params params;
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
