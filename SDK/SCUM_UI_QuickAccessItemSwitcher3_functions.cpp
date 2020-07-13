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

// Function UI_QuickAccessItemSwitcher3.UI_QuickAccessItemSwitcher3_C.PreConstruct
// (Net, NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Protected, Delegate, NetClient, BlueprintCallable)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessItemSwitcher3_C::STATIC_PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemSwitcher3.UI_QuickAccessItemSwitcher3_C.PreConstruct");

	UUI_QuickAccessItemSwitcher3_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemSwitcher3.UI_QuickAccessItemSwitcher3_C.ExecuteUbergraph_UI_QuickAccessItemSwitcher3
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessItemSwitcher3_C::STATIC_ExecuteUbergraph_UI_QuickAccessItemSwitcher3(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemSwitcher3.UI_QuickAccessItemSwitcher3_C.ExecuteUbergraph_UI_QuickAccessItemSwitcher3");

	UUI_QuickAccessItemSwitcher3_C_ExecuteUbergraph_UI_QuickAccessItemSwitcher3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
