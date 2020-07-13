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

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.AllowWakeUp
// (NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SpawnMenuWidget_C::AllowWakeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.AllowWakeUp");

	UUI_SpawnMenuWidget_C_AllowWakeUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.ResetComaTimer
// (Net, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SpawnMenuWidget_C::STATIC_ResetComaTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.ResetComaTimer");

	UUI_SpawnMenuWidget_C_ResetComaTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateComaTimer
// (Exec, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::UpdateComaTimer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateComaTimer");

	UUI_SpawnMenuWidget_C_UpdateComaTimer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateLabels
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnMenuWidget_C::UpdateLabels()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateLabels");

	UUI_SpawnMenuWidget_C_UpdateLabels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.EnableOption
// (NetReliable, Event, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ERespawnOption*                option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::STATIC_EnableOption(ERespawnOption* option)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.EnableOption");

	UUI_SpawnMenuWidget_C_EnableOption_Params params;
	params.option = option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSpawnTag
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FName                   spawnTag                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::STATIC_GetSpawnTag(struct FName* spawnTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSpawnTag");

	UUI_SpawnMenuWidget_C_GetSpawnTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (spawnTag != nullptr)
		*spawnTag = params.spawnTag;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSectorSelectorVisibility
// (Net, Exec, Event, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_SpawnMenuWidget_C::STATIC_GetSectorSelectorVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSectorSelectorVisibility");

	UUI_SpawnMenuWidget_C_GetSectorSelectorVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateOptions
// (Net, NetReliable, Exec, Event, NetMulticast, HasOutParms, NetClient, DLLImport)

void UUI_SpawnMenuWidget_C::UpdateOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateOptions");

	UUI_SpawnMenuWidget_C_UpdateOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_RemainingFPText_ColorAndOpacity
// (Net, Native, Event, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_SpawnMenuWidget_C::STATIC_Get_RemainingFPText_ColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_RemainingFPText_ColorAndOpacity");

	UUI_SpawnMenuWidget_C_Get_RemainingFPText_ColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_CurrentFPText_ColorAndOpacity
// (NetReliable, Exec, Native, Event, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_SpawnMenuWidget_C::STATIC_Get_CurrentFPText_ColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_CurrentFPText_ColorAndOpacity");

	UUI_SpawnMenuWidget_C_Get_CurrentFPText_ColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_RemainingFPText
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_SpawnMenuWidget_C::STATIC_Get_RemainingFPText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_RemainingFPText");

	UUI_SpawnMenuWidget_C_Get_RemainingFPText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_CurrentFPText
// (NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_SpawnMenuWidget_C::Get_CurrentFPText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_CurrentFPText");

	UUI_SpawnMenuWidget_C_Get_CurrentFPText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_TotalPriceText
// (Net, NetReliable, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_SpawnMenuWidget_C::Get_TotalPriceText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_TotalPriceText");

	UUI_SpawnMenuWidget_C_Get_TotalPriceText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateCurrentFP
// (Exec, Native, Event, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SpawnMenuWidget_C::STATIC_UpdateCurrentFP()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateCurrentFP");

	UUI_SpawnMenuWidget_C_UpdateCurrentFP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateTotalPrice
// (NetRequest, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SpawnMenuWidget_C::STATIC_UpdateTotalPrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateTotalPrice");

	UUI_SpawnMenuWidget_C_UpdateTotalPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.SelectionValid
// (Net, NetReliable, NetRequest, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::STATIC_SelectionValid(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.SelectionValid");

	UUI_SpawnMenuWidget_C_SelectionValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSelectedLocation
// (Net, NetRequest, Exec, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::STATIC_GetSelectedLocation(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSelectedLocation");

	UUI_SpawnMenuWidget_C_GetSelectedLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.SelectLocation
// (Native, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UUI_SpawnChoiceWidget_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SpawnMenuWidget_C::STATIC_SelectLocation(class UUI_SpawnChoiceWidget_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.SelectLocation");

	UUI_SpawnMenuWidget_C_SelectLocation_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__RandomLocation_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C** this                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SpawnMenuWidget_C::STATIC_BndEvt__RandomLocation_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature(class UUI_SpawnChoiceWidget_C** this)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__RandomLocation_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature");

	UUI_SpawnMenuWidget_C_BndEvt__RandomLocation_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature_Params params;
	params.this = this;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__ShelterLocation_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C** this                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SpawnMenuWidget_C::STATIC_BndEvt__ShelterLocation_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature(class UUI_SpawnChoiceWidget_C** this)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__ShelterLocation_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature");

	UUI_SpawnMenuWidget_C_BndEvt__ShelterLocation_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature_Params params;
	params.this = this;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__SquadLocation_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature
// (Net, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C** this                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SpawnMenuWidget_C::STATIC_BndEvt__SquadLocation_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature(class UUI_SpawnChoiceWidget_C** this)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__SquadLocation_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature");

	UUI_SpawnMenuWidget_C_BndEvt__SquadLocation_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature_Params params;
	params.this = this;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Construct
// (Net, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnMenuWidget_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Construct");

	UUI_SpawnMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__SectorLocation_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
// (NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C** this                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SpawnMenuWidget_C::STATIC_BndEvt__SectorLocation_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature(class UUI_SpawnChoiceWidget_C** this)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__SectorLocation_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature");

	UUI_SpawnMenuWidget_C_BndEvt__SectorLocation_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature_Params params;
	params.this = this;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Tick
// (NetRequest, Exec, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Tick");

	UUI_SpawnMenuWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__ReviveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnMenuWidget_C::STATIC_BndEvt__ReviveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__ReviveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnMenuWidget_C_BndEvt__ReviveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.ExecuteUbergraph_UI_SpawnMenuWidget
// (NetReliable, NetRequest, Native, NetResponse, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::STATIC_ExecuteUbergraph_UI_SpawnMenuWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.ExecuteUbergraph_UI_SpawnMenuWidget");

	UUI_SpawnMenuWidget_C_ExecuteUbergraph_UI_SpawnMenuWidget_Params params;
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
