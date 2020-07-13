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

// Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.UserConstructionScript
// (Net, Event, NetResponse, Static, MulticastDelegate, Private, NetServer, HasOutParms, DLLImport, BlueprintCallable, Const, NetValidate)

void ATS_Fireworks_Shell_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.UserConstructionScript");

	ATS_Fireworks_Shell_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.BurstShapeScaler__FinishedFunc
// (NetReliable, NetRequest, Public, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ATS_Fireworks_Shell_C::BurstShapeScaler__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.BurstShapeScaler__FinishedFunc");

	ATS_Fireworks_Shell_C_BurstShapeScaler__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.BurstShapeScaler__UpdateFunc
// (Net, NetRequest, Public, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ATS_Fireworks_Shell_C::BurstShapeScaler__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.BurstShapeScaler__UpdateFunc");

	ATS_Fireworks_Shell_C_BurstShapeScaler__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.Explode
// (NetRequest, Public, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ATS_Fireworks_Shell_C::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.Explode");

	ATS_Fireworks_Shell_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.Stop Particles
// (Net, NetReliable, Public, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ATS_Fireworks_Shell_C::Stop_Particles()
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.Stop Particles");

	ATS_Fireworks_Shell_C_Stop_Particles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.ExplodeStandardBurst
// (NetReliable, Public, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ATS_Fireworks_Shell_C::ExplodeStandardBurst()
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.ExplodeStandardBurst");

	ATS_Fireworks_Shell_C_ExplodeStandardBurst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.ExplodeShapedBurst
// (Net, Public, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ATS_Fireworks_Shell_C::ExplodeShapedBurst()
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.ExplodeShapedBurst");

	ATS_Fireworks_Shell_C_ExplodeShapedBurst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, NetClient, BlueprintPure, NetValidate)

void ATS_Fireworks_Shell_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.ReceiveBeginPlay");

	ATS_Fireworks_Shell_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.ExecuteUbergraph_TS_Fireworks_Shell
// (Exec, Native, Static, Public, Protected, NetServer, HasDefaults, NetClient, DLLImport, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATS_Fireworks_Shell_C::STATIC_ExecuteUbergraph_TS_Fireworks_Shell(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.ExecuteUbergraph_TS_Fireworks_Shell");

	ATS_Fireworks_Shell_C_ExecuteUbergraph_TS_Fireworks_Shell_Params params;
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
