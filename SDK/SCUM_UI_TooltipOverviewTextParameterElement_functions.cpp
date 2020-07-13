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

// Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.OnTextDataChanged
// (Net, NetReliable, Native, Static, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText*                  Value                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_TooltipOverviewTextParameterElement_C::STATIC_OnTextDataChanged(struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.OnTextDataChanged");

	UUI_TooltipOverviewTextParameterElement_C_OnTextDataChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.PreConstruct
// (Net, Native, Static, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TooltipOverviewTextParameterElement_C::STATIC_PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.PreConstruct");

	UUI_TooltipOverviewTextParameterElement_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.OnNumberDataChanged
// (Net, Native, Static, NetMulticast, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TooltipOverviewTextParameterElement_C::STATIC_OnNumberDataChanged(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.OnNumberDataChanged");

	UUI_TooltipOverviewTextParameterElement_C_OnNumberDataChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.ExecuteUbergraph_UI_TooltipOverviewTextParameterElement
// (Net, Exec, MulticastDelegate, Public, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TooltipOverviewTextParameterElement_C::ExecuteUbergraph_UI_TooltipOverviewTextParameterElement(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TooltipOverviewTextParameterElement.UI_TooltipOverviewTextParameterElement_C.ExecuteUbergraph_UI_TooltipOverviewTextParameterElement");

	UUI_TooltipOverviewTextParameterElement_C_ExecuteUbergraph_UI_TooltipOverviewTextParameterElement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
