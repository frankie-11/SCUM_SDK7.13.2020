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

// Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.Construct
// (NetRequest, Native, NetResponse, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ScreenSpaceHealthWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.Construct");

	UUI_ScreenSpaceHealthWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.SetMaxHealthPercentage
// (Net, NetReliable, Native, NetResponse, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ScreenSpaceHealthWidget_C::SetMaxHealthPercentage(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.SetMaxHealthPercentage");

	UUI_ScreenSpaceHealthWidget_C_SetMaxHealthPercentage_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.SetHealthPercentage
// (NetRequest, Exec, NetResponse, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ScreenSpaceHealthWidget_C::SetHealthPercentage(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.SetHealthPercentage");

	UUI_ScreenSpaceHealthWidget_C_SetHealthPercentage_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.ExecuteUbergraph_UI_ScreenSpaceHealthWidget
// (NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ScreenSpaceHealthWidget_C::ExecuteUbergraph_UI_ScreenSpaceHealthWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.ExecuteUbergraph_UI_ScreenSpaceHealthWidget");

	UUI_ScreenSpaceHealthWidget_C_ExecuteUbergraph_UI_ScreenSpaceHealthWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
