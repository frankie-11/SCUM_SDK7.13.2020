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

// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.CheckIfNutritionPercentageIsSatisfying
// (NetReliable, NetRequest, Static, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// float*                         Percentage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          satisfying                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_BCUNutritionMonitor_C::STATIC_CheckIfNutritionPercentageIsSatisfying(float* Percentage, float* satisfying)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.CheckIfNutritionPercentageIsSatisfying");

	UUI_BCUNutritionMonitor_C_CheckIfNutritionPercentageIsSatisfying_Params params;
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (satisfying != nullptr)
		*satisfying = params.satisfying;
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateNutritionLines
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport)

void UUI_BCUNutritionMonitor_C::STATIC_UpdateNutritionLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateNutritionLines");

	UUI_BCUNutritionMonitor_C_UpdateNutritionLines_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateMinerals
// (Net, NetReliable, NetRequest, Exec, Static, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)

void UUI_BCUNutritionMonitor_C::STATIC_UpdateMinerals()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateMinerals");

	UUI_BCUNutritionMonitor_C_UpdateMinerals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateVitamins
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_BCUNutritionMonitor_C::STATIC_UpdateVitamins()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateVitamins");

	UUI_BCUNutritionMonitor_C_UpdateVitamins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateNutritions
// (NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport)

void UUI_BCUNutritionMonitor_C::STATIC_UpdateNutritions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateNutritions");

	UUI_BCUNutritionMonitor_C_UpdateNutritions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateValues
// ()

void UUI_BCUNutritionMonitor_C::UpdateValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateValues");

	UUI_BCUNutritionMonitor_C_UpdateValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.SetPrisoner
// (NetReliable, Exec, Native, Event, Static, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUNutritionMonitor_C::STATIC_SetPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.SetPrisoner");

	UUI_BCUNutritionMonitor_C_SetPrisoner_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.Tick
// (NetReliable, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUNutritionMonitor_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.Tick");

	UUI_BCUNutritionMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.Construct
// (NetReliable, Exec, Native, Event, Static, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UUI_BCUNutritionMonitor_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.Construct");

	UUI_BCUNutritionMonitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.ExecuteUbergraph_UI_BCUNutritionMonitor
// (NetReliable, Event, NetResponse, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUNutritionMonitor_C::ExecuteUbergraph_UI_BCUNutritionMonitor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.ExecuteUbergraph_UI_BCUNutritionMonitor");

	UUI_BCUNutritionMonitor_C_ExecuteUbergraph_UI_BCUNutritionMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
