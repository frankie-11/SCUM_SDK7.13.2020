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

// Function UI_QuickAccessBar.UI_QuickAccessBar_C.Construct
// (NetResponse, Public, Private, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_QuickAccessBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessBar.UI_QuickAccessBar_C.Construct");

	UUI_QuickAccessBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessBar.UI_QuickAccessBar_C.ExecuteUbergraph_UI_QuickAccessBar
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessBar_C::ExecuteUbergraph_UI_QuickAccessBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessBar.UI_QuickAccessBar_C.ExecuteUbergraph_UI_QuickAccessBar");

	UUI_QuickAccessBar_C_ExecuteUbergraph_UI_QuickAccessBar_Params params;
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
