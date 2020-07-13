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

// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.GetHideAvatarAnimation
// (Net, NetReliable, NetRequest, Exec, Native, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidgetAnimation* UUI_DialogueContainerWidget_C::GetHideAvatarAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.GetHideAvatarAnimation");

	UUI_DialogueContainerWidget_C_GetHideAvatarAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.GetShowAvatarAnimation
// (Event, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidgetAnimation* UUI_DialogueContainerWidget_C::GetShowAvatarAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.GetShowAvatarAnimation");

	UUI_DialogueContainerWidget_C_GetShowAvatarAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Construct
// (NetReliable, NetRequest, Exec, Native, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_DialogueContainerWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Construct");

	UUI_DialogueContainerWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Tick
// (Net, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DialogueContainerWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Tick");

	UUI_DialogueContainerWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.ExecuteUbergraph_UI_DialogueContainerWidget
// (Net, NetRequest, Exec, Native, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DialogueContainerWidget_C::ExecuteUbergraph_UI_DialogueContainerWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.ExecuteUbergraph_UI_DialogueContainerWidget");

	UUI_DialogueContainerWidget_C_ExecuteUbergraph_UI_DialogueContainerWidget_Params params;
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
