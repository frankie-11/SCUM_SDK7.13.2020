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

// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.GetIgnoreSupportingHandIK
// (NetReliable, NetRequest, Native, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weapon_M82A1_Black_C::GetIgnoreSupportingHandIK()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.GetIgnoreSupportingHandIK");

	ABP_Weapon_M82A1_Black_C_GetIgnoreSupportingHandIK_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.CanSwitchFiringMode
// (NetReliable, NetRequest, Exec, Native, Event, Public, Protected, Delegate, NetServer, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weapon_M82A1_Black_C::CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.CanSwitchFiringMode");

	ABP_Weapon_M82A1_Black_C_CanSwitchFiringMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.ReceiveTick
// (NetRequest, Exec, Native, Event, Public, Protected, Delegate, NetServer, BlueprintPure)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M82A1_Black_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.ReceiveTick");

	ABP_Weapon_M82A1_Black_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Native, Event, Public, Protected, Delegate, NetServer, BlueprintPure)

void ABP_Weapon_M82A1_Black_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.ReceiveBeginPlay");

	ABP_Weapon_M82A1_Black_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.OnAttachmentAdded
// (Net, NetReliable, NetRequest, Native, Event, Public, NetServer, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// class AWeapon**                sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment**      Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M82A1_Black_C::OnAttachmentAdded(class AWeapon** sender, class AWeaponAttachment** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.OnAttachmentAdded");

	ABP_Weapon_M82A1_Black_C_OnAttachmentAdded_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.OnAttachmentRemoved
// (Net, Native, NetResponse, Static, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// class AWeapon**                sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment**      Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M82A1_Black_C::STATIC_OnAttachmentRemoved(class AWeapon** sender, class AWeaponAttachment** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.OnAttachmentRemoved");

	ABP_Weapon_M82A1_Black_C_OnAttachmentRemoved_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.ExecuteUbergraph_BP_Weapon_M82A1
// (Net, Native, Static, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M82A1_Black_C::STATIC_ExecuteUbergraph_BP_Weapon_M82A1(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.ExecuteUbergraph_BP_Weapon_M82A1");

	ABP_Weapon_M82A1_Black_C_ExecuteUbergraph_BP_Weapon_M82A1_Params params;
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
