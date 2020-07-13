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

// Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.GetColor
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_CTFMiniStatsWidget_C::STATIC_GetColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.GetColor");

	UUI_CTFMiniStatsWidget_C_GetColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.UpdateStats
// (Net, NetReliable, Event, NetResponse, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UUI_CTFMiniStatsWidget_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.UpdateStats");

	UUI_CTFMiniStatsWidget_C_UpdateStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.FillLabels
// (Net, Event, NetResponse, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UUI_CTFMiniStatsWidget_C::FillLabels()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.FillLabels");

	UUI_CTFMiniStatsWidget_C_FillLabels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.ExecuteUbergraph_UI_CTFMiniStatsWidget
// (NetRequest, Native, NetResponse, Static, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CTFMiniStatsWidget_C::STATIC_ExecuteUbergraph_UI_CTFMiniStatsWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.ExecuteUbergraph_UI_CTFMiniStatsWidget");

	UUI_CTFMiniStatsWidget_C_ExecuteUbergraph_UI_CTFMiniStatsWidget_Params params;
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
