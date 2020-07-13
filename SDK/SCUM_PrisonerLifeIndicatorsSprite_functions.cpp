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

// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetAIDetectionBarPercent
// (NetRequest, Native, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetClient, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPrisonerLifeIndicatorsSprite_C::STATIC_GetAIDetectionBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetAIDetectionBarPercent");

	UPrisonerLifeIndicatorsSprite_C_GetAIDetectionBarPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetNoiseBarPercent
// (NetReliable, Static, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPrisonerLifeIndicatorsSprite_C::STATIC_GetNoiseBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetNoiseBarPercent");

	UPrisonerLifeIndicatorsSprite_C_GetNoiseBarPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Get_BloodDropBox_Visibility_1
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UPrisonerLifeIndicatorsSprite_C::Get_BloodDropBox_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Get_BloodDropBox_Visibility_1");

	UPrisonerLifeIndicatorsSprite_C_Get_BloodDropBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetImageVisibility
// (NetReliable, Exec, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// EBodyPart*                     bodyPart                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage**                 Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::SetImageVisibility(EBodyPart* bodyPart, class UImage** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetImageVisibility");

	UPrisonerLifeIndicatorsSprite_C_SetImageVisibility_Params params;
	params.bodyPart = bodyPart;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetDefaultPrisoner
// (Net, NetReliable, Native, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrisoner*               Prisoner                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::GetDefaultPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetDefaultPrisoner");

	UPrisonerLifeIndicatorsSprite_C_GetDefaultPrisoner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Prisoner != nullptr)
		*Prisoner = params.Prisoner;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetProgressBar
// (Net, NetRequest, Exec, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCircularProgressBarSprites_C* circularProgresBar             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::GetProgressBar(int* Index, class UCircularProgressBarSprites_C** circularProgresBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetProgressBar");

	UPrisonerLifeIndicatorsSprite_C_GetProgressBar_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (circularProgresBar != nullptr)
		*circularProgresBar = params.circularProgresBar;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetDefaultPrisonerToMonitor
// (NetReliable, Event, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::SetDefaultPrisonerToMonitor(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetDefaultPrisonerToMonitor");

	UPrisonerLifeIndicatorsSprite_C_SetDefaultPrisonerToMonitor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateIndicators
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void UPrisonerLifeIndicatorsSprite_C::STATIC_UpdateIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateIndicators");

	UPrisonerLifeIndicatorsSprite_C_UpdateIndicators_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetPrisonerToMonitor
// (Net, NetRequest, Static, Public, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::STATIC_SetPrisonerToMonitor(class APrisoner** Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetPrisonerToMonitor");

	UPrisonerLifeIndicatorsSprite_C_SetPrisonerToMonitor_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Construct
// (Net, Exec, Static, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UPrisonerLifeIndicatorsSprite_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Construct");

	UPrisonerLifeIndicatorsSprite_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateLifeIndicatorsEvent
// (Exec, Static, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UPrisonerLifeIndicatorsSprite_C::STATIC_UpdateLifeIndicatorsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateLifeIndicatorsEvent");

	UPrisonerLifeIndicatorsSprite_C_UpdateLifeIndicatorsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.OnPrisonerSet
// (Net, NetReliable, NetRequest, Static, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UPrisonerLifeIndicatorsSprite_C::STATIC_OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.OnPrisonerSet");

	UPrisonerLifeIndicatorsSprite_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.OnStartDiving
// (NetReliable, NetRequest, Static, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UPrisonerLifeIndicatorsSprite_C::STATIC_OnStartDiving()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.OnStartDiving");

	UPrisonerLifeIndicatorsSprite_C_OnStartDiving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetBreathingBarPercent
// (Exec, Static, Public, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// float*                         frontCirclePercent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         backCirclePercent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::STATIC_SetBreathingBarPercent(float* frontCirclePercent, float* backCirclePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetBreathingBarPercent");

	UPrisonerLifeIndicatorsSprite_C_SetBreathingBarPercent_Params params;
	params.frontCirclePercent = frontCirclePercent;
	params.backCirclePercent = backCirclePercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.HideBreathingWidgets
// (Net, NetRequest, Static, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UPrisonerLifeIndicatorsSprite_C::STATIC_HideBreathingWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.HideBreathingWidgets");

	UPrisonerLifeIndicatorsSprite_C_HideBreathingWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.ShowBreathingWidgets
// (NetRequest, Static, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UPrisonerLifeIndicatorsSprite_C::STATIC_ShowBreathingWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.ShowBreathingWidgets");

	UPrisonerLifeIndicatorsSprite_C_ShowBreathingWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetNoiseBarPercent
// (Net, NetReliable, Static, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::STATIC_SetNoiseBarPercent(float* percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetNoiseBarPercent");

	UPrisonerLifeIndicatorsSprite_C_SetNoiseBarPercent_Params params;
	params.percent = percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Tick
// (Net, Native, Static, Public, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Tick");

	UPrisonerLifeIndicatorsSprite_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetAIDetectionBarPercent
// (NetReliable, Static, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::STATIC_SetAIDetectionBarPercent(float* percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetAIDetectionBarPercent");

	UPrisonerLifeIndicatorsSprite_C_SetAIDetectionBarPercent_Params params;
	params.percent = percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.ExecuteUbergraph_PrisonerLifeIndicatorsSprite
// (NetReliable, Static, NetMulticast, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::STATIC_ExecuteUbergraph_PrisonerLifeIndicatorsSprite(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.ExecuteUbergraph_PrisonerLifeIndicatorsSprite");

	UPrisonerLifeIndicatorsSprite_C_ExecuteUbergraph_PrisonerLifeIndicatorsSprite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
