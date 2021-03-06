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

// Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.Tick
// (Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemInventoryVicinity_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.Tick");

	UUI_ItemInventoryVicinity_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.Blink
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_ItemInventoryVicinity_C::Blink()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.Blink");

	UUI_ItemInventoryVicinity_C_Blink_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.InitBlueprint
// (NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Protected, Delegate, NetClient, BlueprintCallable)
// Parameters:
// TScriptInterface<class UInventoryNode>* Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUI_ItemInventoryVicinity_C::STATIC_InitBlueprint(TScriptInterface<class UInventoryNode>* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.InitBlueprint");

	UUI_ItemInventoryVicinity_C_InitBlueprint_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.ExecuteUbergraph_UI_ItemInventoryVicinity
// (Net, NetRequest, Native, NetResponse, Private, Delegate, DLLImport, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemInventoryVicinity_C::ExecuteUbergraph_UI_ItemInventoryVicinity(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.ExecuteUbergraph_UI_ItemInventoryVicinity");

	UUI_ItemInventoryVicinity_C_ExecuteUbergraph_UI_ItemInventoryVicinity_Params params;
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
