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

// Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.Init
// (Net, Exec, Event, Static, MulticastDelegate, Protected, Delegate, NetClient, BlueprintCallable)
// Parameters:
// class AItem**                  itemCDO                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingInfoInWorld_C::STATIC_Init(class AItem** itemCDO)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.Init");

	UUI_CraftingInfoInWorld_C_Init_Params params;
	params.itemCDO = itemCDO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.SetCaptionAndDescription
// (NetReliable, Exec, NetResponse, MulticastDelegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText*                  Caption                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  Description                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CraftingInfoInWorld_C::SetCaptionAndDescription(struct FText* Caption, struct FText* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.SetCaptionAndDescription");

	UUI_CraftingInfoInWorld_C_SetCaptionAndDescription_Params params;
	params.Caption = Caption;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.ExecuteUbergraph_UI_CraftingInfoInWorld
// (Net, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingInfoInWorld_C::STATIC_ExecuteUbergraph_UI_CraftingInfoInWorld(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfoInWorld.UI_CraftingInfoInWorld_C.ExecuteUbergraph_UI_CraftingInfoInWorld");

	UUI_CraftingInfoInWorld_C_ExecuteUbergraph_UI_CraftingInfoInWorld_Params params;
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
