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

// Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.ReceiveBeginPlay
// (NetReliable, NetRequest, NetResponse, Public, Protected, Delegate, NetServer, BlueprintPure)

void ABP_Weapon_M16A4_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.ReceiveBeginPlay");

	ABP_Weapon_M16A4_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.OnAttachmentAdded
// (Net, NetReliable, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// class AWeapon**                sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment**      Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M16A4_C::OnAttachmentAdded(class AWeapon** sender, class AWeaponAttachment** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.OnAttachmentAdded");

	ABP_Weapon_M16A4_C_OnAttachmentAdded_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.OnAttachmentRemoved
// (Net, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// class AWeapon**                sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment**      Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M16A4_C::STATIC_OnAttachmentRemoved(class AWeapon** sender, class AWeaponAttachment** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.OnAttachmentRemoved");

	ABP_Weapon_M16A4_C_OnAttachmentRemoved_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.ExecuteUbergraph_BP_Weapon_M16A4
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M16A4_C::ExecuteUbergraph_BP_Weapon_M16A4(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.ExecuteUbergraph_BP_Weapon_M16A4");

	ABP_Weapon_M16A4_C_ExecuteUbergraph_BP_Weapon_M16A4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
