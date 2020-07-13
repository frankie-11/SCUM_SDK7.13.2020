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

// Function UI_ItemInventory2.UI_ItemInventory2_C.InitBlueprint
// (Net, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UInventoryNode>* Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUI_ItemInventory2_C::STATIC_InitBlueprint(TScriptInterface<class UInventoryNode>* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemInventory2.UI_ItemInventory2_C.InitBlueprint");

	UUI_ItemInventory2_C_InitBlueprint_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemInventory2.UI_ItemInventory2_C.Tick
// (NetReliable, Private, HasOutParms)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemInventory2_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemInventory2.UI_ItemInventory2_C.Tick");

	UUI_ItemInventory2_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemInventory2.UI_ItemInventory2_C.Blink
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_ItemInventory2_C::STATIC_Blink()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemInventory2.UI_ItemInventory2_C.Blink");

	UUI_ItemInventory2_C_Blink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemInventory2.UI_ItemInventory2_C.ExecuteUbergraph_UI_ItemInventory2
// (NetReliable, NetRequest, Exec, Static, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemInventory2_C::STATIC_ExecuteUbergraph_UI_ItemInventory2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemInventory2.UI_ItemInventory2_C.ExecuteUbergraph_UI_ItemInventory2");

	UUI_ItemInventory2_C_ExecuteUbergraph_UI_ItemInventory2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
