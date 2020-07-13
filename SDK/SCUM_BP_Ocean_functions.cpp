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

// Function BP_Ocean.BP_Ocean_C.Set Global Parameters
// (Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, NetServer, DLLImport, BlueprintCallable)

void ABP_Ocean_C::STATIC_Set_Global_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.Set Global Parameters");

	ABP_Ocean_C_Set_Global_Parameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.Set Display Parameters
// (Net, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintCallable, BlueprintPure, NetValidate)

void ABP_Ocean_C::STATIC_Set_Display_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.Set Display Parameters");

	ABP_Ocean_C_Set_Display_Parameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.Create Wave Set
// (NetReliable, Exec, Event, Static, MulticastDelegate, Private, NetServer, DLLImport, BlueprintCallable)

void ABP_Ocean_C::STATIC_Create_Wave_Set()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.Create Wave Set");

	ABP_Ocean_C_Create_Wave_Set_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.UserConstructionScript
// (Net, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, NetServer, DLLImport, BlueprintCallable)

void ABP_Ocean_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.UserConstructionScript");

	ABP_Ocean_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.ReceiveBeginPlay
// (Native, NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_Ocean_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.ReceiveBeginPlay");

	ABP_Ocean_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.SetNetworkOffset
// (Net, NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ocean_C::SetNetworkOffset(float* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.SetNetworkOffset");

	ABP_Ocean_C_SetNetworkOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.MySetNetworkOffset
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ocean_C::MySetNetworkOffset(float* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.MySetNetworkOffset");

	ABP_Ocean_C_MySetNetworkOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.ExecuteUbergraph_BP_Ocean
// (Event, NetResponse, Static, Private, HasOutParms)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ocean_C::STATIC_ExecuteUbergraph_BP_Ocean(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.ExecuteUbergraph_BP_Ocean");

	ABP_Ocean_C_ExecuteUbergraph_BP_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
