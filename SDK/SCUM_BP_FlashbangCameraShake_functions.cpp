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

// Function Engine.CameraShake.ReceiveStopShake
// ()
// Parameters:
// bool*                          bImmediately                   (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FlashbangCameraShake_C::ReceiveStopShake(bool* bImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CameraShake.ReceiveStopShake");

	UBP_FlashbangCameraShake_C_ReceiveStopShake_Params params;
	params.bImmediately = bImmediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CameraShake.ReceivePlayShake
// ()
// Parameters:
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FlashbangCameraShake_C::ReceivePlayShake(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CameraShake.ReceivePlayShake");

	UBP_FlashbangCameraShake_C_ReceivePlayShake_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CameraShake.ReceiveIsFinished
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_FlashbangCameraShake_C::ReceiveIsFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CameraShake.ReceiveIsFinished");

	UBP_FlashbangCameraShake_C_ReceiveIsFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.CameraShake.BlueprintUpdateCameraShake
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FMinimalViewInfo*       POV                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FMinimalViewInfo        ModifiedPOV                    (Parm, OutParm)

void UBP_FlashbangCameraShake_C::BlueprintUpdateCameraShake(float* DeltaTime, float* Alpha, struct FMinimalViewInfo* POV, struct FMinimalViewInfo* ModifiedPOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CameraShake.BlueprintUpdateCameraShake");

	UBP_FlashbangCameraShake_C_BlueprintUpdateCameraShake_Params params;
	params.DeltaTime = DeltaTime;
	params.Alpha = Alpha;
	params.POV = POV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifiedPOV != nullptr)
		*ModifiedPOV = params.ModifiedPOV;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
