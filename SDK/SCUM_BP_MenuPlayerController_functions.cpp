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

// Function BP_MenuPlayerController.BP_MenuPlayerController_C.ReceiveTick
// (NetReliable, Exec, Native, NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MenuPlayerController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPlayerController.BP_MenuPlayerController_C.ReceiveTick");

	ABP_MenuPlayerController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuPlayerController.BP_MenuPlayerController_C.InputComponent_MouseReleased
// (Net, NetReliable, Exec, Native, NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_MenuPlayerController_C::InputComponent_MouseReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPlayerController.BP_MenuPlayerController_C.InputComponent_MouseReleased");

	ABP_MenuPlayerController_C_InputComponent_MouseReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuPlayerController.BP_MenuPlayerController_C.InputComponent_MousePressed
// (Net, Exec, Native, NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_MenuPlayerController_C::InputComponent_MousePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPlayerController.BP_MenuPlayerController_C.InputComponent_MousePressed");

	ABP_MenuPlayerController_C_InputComponent_MousePressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuPlayerController.BP_MenuPlayerController_C.ExecuteUbergraph_BP_MenuPlayerController
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, Private, HasOutParms)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MenuPlayerController_C::STATIC_ExecuteUbergraph_BP_MenuPlayerController(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuPlayerController.BP_MenuPlayerController_C.ExecuteUbergraph_BP_MenuPlayerController");

	ABP_MenuPlayerController_C_ExecuteUbergraph_BP_MenuPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
