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

// Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.Unhighlight
// (NetRequest, Native, Static, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable)

void UUI_CC_ProgressBarSegmentMarker_C::STATIC_Unhighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.Unhighlight");

	UUI_CC_ProgressBarSegmentMarker_C_Unhighlight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.Highlight
// (Net, NetRequest, Exec, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable)

void UUI_CC_ProgressBarSegmentMarker_C::Highlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.Highlight");

	UUI_CC_ProgressBarSegmentMarker_C_Highlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.Construct
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UUI_CC_ProgressBarSegmentMarker_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.Construct");

	UUI_CC_ProgressBarSegmentMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.OnSynchronizeProperties
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UUI_CC_ProgressBarSegmentMarker_C::STATIC_OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.OnSynchronizeProperties");

	UUI_CC_ProgressBarSegmentMarker_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.ExecuteUbergraph_UI_CC_ProgressBarSegmentMarker
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Private, NetServer, DLLImport, BlueprintCallable)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_ProgressBarSegmentMarker_C::STATIC_ExecuteUbergraph_UI_CC_ProgressBarSegmentMarker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.ExecuteUbergraph_UI_CC_ProgressBarSegmentMarker");

	UUI_CC_ProgressBarSegmentMarker_C_ExecuteUbergraph_UI_CC_ProgressBarSegmentMarker_Params params;
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
