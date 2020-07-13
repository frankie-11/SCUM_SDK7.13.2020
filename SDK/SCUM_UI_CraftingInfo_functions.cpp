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

// Function UI_CraftingInfo.UI_CraftingInfo_C.OnSynchronizeProperties
// (Net, NetReliable, Exec, Event, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UUI_CraftingInfo_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.OnSynchronizeProperties");

	UUI_CraftingInfo_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingInfo.UI_CraftingInfo_C.Construct
// (Net, Exec, Event, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UUI_CraftingInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.Construct");

	UUI_CraftingInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingInfo.UI_CraftingInfo_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (Exec, Event, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UUI_CraftingInfo_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UUI_CraftingInfo_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingInfo.UI_CraftingInfo_C.Init
// (NetReliable, Exec, Event, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  itemCDO                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingInfo_C::Init(class AItem** itemCDO)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.Init");

	UUI_CraftingInfo_C_Init_Params params;
	params.itemCDO = itemCDO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingInfo.UI_CraftingInfo_C.ExecuteUbergraph_UI_CraftingInfo
// (Net, Native, Event, Static, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingInfo_C::STATIC_ExecuteUbergraph_UI_CraftingInfo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.ExecuteUbergraph_UI_CraftingInfo");

	UUI_CraftingInfo_C_ExecuteUbergraph_UI_CraftingInfo_Params params;
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
