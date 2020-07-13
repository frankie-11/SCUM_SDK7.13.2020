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

// Function UI_CraftingRecipe.UI_CraftingRecipe_C.OnMouseButtonDown
// (Net, Native, Event, NetResponse, Static, NetMulticast, Private, HasOutParms)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_CraftingRecipe_C::STATIC_OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.OnMouseButtonDown");

	UUI_CraftingRecipe_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetTooltipFromClass
// (Event, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingRecipe_C::SetTooltipFromClass(class UClass** ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetTooltipFromClass");

	UUI_CraftingRecipe_C_SetTooltipFromClass_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingRecipe.UI_CraftingRecipe_C.Construct
// (Event, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UUI_CraftingRecipe_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.Construct");

	UUI_CraftingRecipe_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetIsGrayedOut
// (Net, NetReliable, NetRequest, Exec, Native, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          isGrayedOut                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingRecipe_C::SetIsGrayedOut(bool* isGrayedOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetIsGrayedOut");

	UUI_CraftingRecipe_C_SetIsGrayedOut_Params params;
	params.isGrayedOut = isGrayedOut;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetAvailabilityState
// (NetReliable, NetRequest, Exec, Native, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERecipeAvailabilityState*      State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingRecipe_C::SetAvailabilityState(ERecipeAvailabilityState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetAvailabilityState");

	UUI_CraftingRecipe_C_SetAvailabilityState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetIsSelected
// (Native, Event, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool*                          isSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingRecipe_C::STATIC_SetIsSelected(bool* isSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetIsSelected");

	UUI_CraftingRecipe_C_SetIsSelected_Params params;
	params.isSelected = isSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetTooltipFromCaptionAndDescription
// (Exec, Event, Static, NetMulticast, Private, HasOutParms)
// Parameters:
// struct FText*                  Caption                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  Description                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CraftingRecipe_C::STATIC_SetTooltipFromCaptionAndDescription(struct FText* Caption, struct FText* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetTooltipFromCaptionAndDescription");

	UUI_CraftingRecipe_C_SetTooltipFromCaptionAndDescription_Params params;
	params.Caption = Caption;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingRecipe.UI_CraftingRecipe_C.ExecuteUbergraph_UI_CraftingRecipe
// (NetRequest, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingRecipe_C::ExecuteUbergraph_UI_CraftingRecipe(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.ExecuteUbergraph_UI_CraftingRecipe");

	UUI_CraftingRecipe_C_ExecuteUbergraph_UI_CraftingRecipe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
