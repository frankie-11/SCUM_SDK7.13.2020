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

// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.UpdatePreviewPrisoners
// (Net, NetReliable, Exec, Native, Event, Private, HasOutParms)
// Parameters:
// class UUserProfile**           UserProfile                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainMenuGameMode_C::UpdatePreviewPrisoners(class UUserProfile** UserProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.UpdatePreviewPrisoners");

	ABP_MainMenuGameMode_C_UpdatePreviewPrisoners_Params params;
	params.UserProfile = UserProfile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ReceiveBeginPlay
// (Net, NetReliable, Exec, NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_MainMenuGameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ReceiveBeginPlay");

	ABP_MainMenuGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ReceiveTick
// (Exec, NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainMenuGameMode_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ReceiveTick");

	ABP_MainMenuGameMode_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ExecuteUbergraph_BP_MainMenuGameMode
// (NetRequest, Exec, NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainMenuGameMode_C::ExecuteUbergraph_BP_MainMenuGameMode(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ExecuteUbergraph_BP_MainMenuGameMode");

	ABP_MainMenuGameMode_C_ExecuteUbergraph_BP_MainMenuGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
