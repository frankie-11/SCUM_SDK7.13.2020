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

// Function UI_MissionResultWidget.UI_MissionResultWidget_C.PlayShowMissionResultAnimation
// (Net, Exec, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_MissionResultWidget_C::STATIC_PlayShowMissionResultAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionResultWidget.UI_MissionResultWidget_C.PlayShowMissionResultAnimation");

	UUI_MissionResultWidget_C_PlayShowMissionResultAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionResultWidget.UI_MissionResultWidget_C.OnAnimationFinished
// (Net, NetRequest, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionResultWidget_C::STATIC_OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionResultWidget.UI_MissionResultWidget_C.OnAnimationFinished");

	UUI_MissionResultWidget_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionResultWidget.UI_MissionResultWidget_C.ExecuteUbergraph_UI_MissionResultWidget
// (NetReliable, NetRequest, Exec, Private, HasOutParms)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionResultWidget_C::ExecuteUbergraph_UI_MissionResultWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionResultWidget.UI_MissionResultWidget_C.ExecuteUbergraph_UI_MissionResultWidget");

	UUI_MissionResultWidget_C_ExecuteUbergraph_UI_MissionResultWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
