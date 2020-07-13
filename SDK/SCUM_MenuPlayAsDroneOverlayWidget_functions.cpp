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

// Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.ToggleVisibility
// (NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UMenuPlayAsDroneOverlayWidget_C::ToggleVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.ToggleVisibility");

	UMenuPlayAsDroneOverlayWidget_C_ToggleVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.Construct
// (NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UMenuPlayAsDroneOverlayWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.Construct");

	UMenuPlayAsDroneOverlayWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.ExecuteUbergraph_MenuPlayAsDroneOverlayWidget
// (NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuPlayAsDroneOverlayWidget_C::ExecuteUbergraph_MenuPlayAsDroneOverlayWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.ExecuteUbergraph_MenuPlayAsDroneOverlayWidget");

	UMenuPlayAsDroneOverlayWidget_C_ExecuteUbergraph_MenuPlayAsDroneOverlayWidget_Params params;
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
