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

// Function ConZ.NightVisionGogglesItem.SetActivatedOnServer
// ()
// Parameters:
// bool*                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ANightVisionGoggles3_test_C::SetActivatedOnServer(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.NightVisionGogglesItem.SetActivatedOnServer");

	ANightVisionGoggles3_test_C_SetActivatedOnServer_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.NightVisionGogglesItem.OnRep_Activated
// ()

void ANightVisionGoggles3_test_C::OnRep_Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.NightVisionGogglesItem.OnRep_Activated");

	ANightVisionGoggles3_test_C_OnRep_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ConZ.NightVisionGogglesItem.ActivatedChangedEvent__DelegateSignature
// ()
// Parameters:
// class ANightVisionGogglesItem** sender                         (Parm, ZeroConstructor, IsPlainOldData)

void ANightVisionGoggles3_test_C::ActivatedChangedEvent__DelegateSignature(class ANightVisionGogglesItem** sender)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ConZ.NightVisionGogglesItem.ActivatedChangedEvent__DelegateSignature");

	ANightVisionGoggles3_test_C_ActivatedChangedEvent__DelegateSignature_Params params;
	params.sender = sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
