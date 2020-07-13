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

// Function Minerals.Minerals_C.shouldAlarmBeOn
// (Net, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMinerals_C::STATIC_shouldAlarmBeOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.shouldAlarmBeOn");

	UMinerals_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Minerals.Minerals_C.SetParentsForChildren
// (Exec, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UMinerals_C::SetParentsForChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetParentsForChildren");

	UMinerals_C_SetParentsForChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.Update
// (NetReliable, NetRequest, Exec, Event, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UMinerals_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.Update");

	UMinerals_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.SetPrisonerToMonitor
// (NetRequest, Exec, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMinerals_C::STATIC_SetPrisonerToMonitor(class APrisoner** Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetPrisonerToMonitor");

	UMinerals_C_SetPrisonerToMonitor_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Minerals.Minerals_C.Init
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UMinerals_C::STATIC_Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.Init");

	UMinerals_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.SetDefaultTitle
// (NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                defaultTitle                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMinerals_C::STATIC_SetDefaultTitle(struct FString* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetDefaultTitle");

	UMinerals_C_SetDefaultTitle_Params params;
	params.defaultTitle = defaultTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.SetContentVisibility
// (Net, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility*              Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinerals_C::STATIC_SetContentVisibility(ESlateVisibility* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetContentVisibility");

	UMinerals_C_SetContentVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.SetTextColor
// (Net, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinerals_C::STATIC_SetTextColor(struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetTextColor");

	UMinerals_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.SetTextColorOfVerticalBox
// (Net, NetReliable, Exec, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UPanelWidget**           verticalBoxRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinerals_C::SetTextColorOfVerticalBox(class UPanelWidget** verticalBoxRef, struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetTextColorOfVerticalBox");

	UMinerals_C_SetTextColorOfVerticalBox_Params params;
	params.verticalBoxRef = verticalBoxRef;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.GetTitleText
// (Native, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMinerals_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.GetTitleText");

	UMinerals_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Minerals.Minerals_C.SetVerticalBoxContentVisibility
// (Net, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UVerticalBox**           verticalBoxRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ESlateVisibility*              Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinerals_C::STATIC_SetVerticalBoxContentVisibility(class UVerticalBox** verticalBoxRef, ESlateVisibility* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetVerticalBoxContentVisibility");

	UMinerals_C_SetVerticalBoxContentVisibility_Params params;
	params.verticalBoxRef = verticalBoxRef;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.SetContentMinimized
// ()
// Parameters:
// bool*                          minimized                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinerals_C::SetContentMinimized(bool* minimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetContentMinimized");

	UMinerals_C_SetContentMinimized_Params params;
	params.minimized = minimized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.MinimizeContent
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinerals_C::STATIC_MinimizeContent(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.MinimizeContent");

	UMinerals_C_MinimizeContent_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.GetDefaultTitle
// (Net, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void UMinerals_C::STATIC_GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.GetDefaultTitle");

	UMinerals_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function Minerals.Minerals_C.SelectCustomColor
// (NetRequest, Exec, Static, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMinerals_C::STATIC_SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SelectCustomColor");

	UMinerals_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function Minerals.Minerals_C.Construct
// (NetReliable, NetRequest, Exec, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UMinerals_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.Construct");

	UMinerals_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.Tick
// (Net, NetReliable, NetRequest, Event, Static, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinerals_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.Tick");

	UMinerals_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.OnPrisonerSet
// (Net, NetRequest, Exec, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UMinerals_C::STATIC_OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.OnPrisonerSet");

	UMinerals_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.MineralsUpdateEvent
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UMinerals_C::STATIC_MineralsUpdateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.MineralsUpdateEvent");

	UMinerals_C_MineralsUpdateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.AlarmOnWindowContent
// (Net, NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UMinerals_C::STATIC_AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.AlarmOnWindowContent");

	UMinerals_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.AlarmOffWindowContent
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UMinerals_C::STATIC_AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.AlarmOffWindowContent");

	UMinerals_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.OnMinimize
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinerals_C::STATIC_OnMinimize(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.OnMinimize");

	UMinerals_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.ExecuteUbergraph_Minerals
// (NetRequest, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinerals_C::ExecuteUbergraph_Minerals(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.ExecuteUbergraph_Minerals");

	UMinerals_C_ExecuteUbergraph_Minerals_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
