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

// Function BP_Weapon_MK18.BP_Weapon_MK18_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Native, Event, Public, Protected, Delegate, NetServer, BlueprintPure)

void ABP_Weapon_MK18_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MK18.BP_Weapon_MK18_C.ReceiveBeginPlay");

	ABP_Weapon_MK18_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MK18.BP_Weapon_MK18_C.OnAttachmentAdded
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Public, NetServer, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// class AWeapon**                sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment**      Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_MK18_C::OnAttachmentAdded(class AWeapon** sender, class AWeaponAttachment** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MK18.BP_Weapon_MK18_C.OnAttachmentAdded");

	ABP_Weapon_MK18_C_OnAttachmentAdded_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MK18.BP_Weapon_MK18_C.OnAttachmentRemoved
// (Exec, NetResponse, NetMulticast, Public, NetServer, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// class AWeapon**                sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment**      Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_MK18_C::OnAttachmentRemoved(class AWeapon** sender, class AWeaponAttachment** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MK18.BP_Weapon_MK18_C.OnAttachmentRemoved");

	ABP_Weapon_MK18_C_OnAttachmentRemoved_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MK18.BP_Weapon_MK18_C.ExecuteUbergraph_BP_Weapon_MK18
// (Net, NetResponse, Static, Public, NetServer, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_MK18_C::STATIC_ExecuteUbergraph_BP_Weapon_MK18(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MK18.BP_Weapon_MK18_C.ExecuteUbergraph_BP_Weapon_MK18");

	ABP_Weapon_MK18_C_ExecuteUbergraph_BP_Weapon_MK18_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
