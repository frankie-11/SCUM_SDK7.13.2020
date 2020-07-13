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

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.CanSwitchFiringMode
// (Net, NetReliable, Native, NetResponse, Public, Protected, Delegate, NetServer, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABPC_Weapon_SDASS_C::CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_590A11.BP_Weapon_590A11_C.CanSwitchFiringMode");

	ABPC_Weapon_SDASS_C_CanSwitchFiringMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_590A11.BP_Weapon_590A11_C.GetWidgetDisplayInfo
// (Net, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// struct FWidgetDisplayInfo      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWidgetDisplayInfo ABPC_Weapon_SDASS_C::GetWidgetDisplayInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_590A11.BP_Weapon_590A11_C.GetWidgetDisplayInfo");

	ABPC_Weapon_SDASS_C_GetWidgetDisplayInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_590A11.BP_Weapon_590A11_C.FillUpWithAmmo
// (NetReliable, Native, NetResponse, Public, Protected, Delegate, NetServer, BlueprintPure)

void ABPC_Weapon_SDASS_C::FillUpWithAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_590A11.BP_Weapon_590A11_C.FillUpWithAmmo");

	ABPC_Weapon_SDASS_C_FillUpWithAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_590A11.BP_Weapon_590A11_C.ReceiveBeginPlay
// (Net, Native, NetResponse, Public, Protected, Delegate, NetServer, BlueprintPure)

void ABPC_Weapon_SDASS_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_590A11.BP_Weapon_590A11_C.ReceiveBeginPlay");

	ABPC_Weapon_SDASS_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_590A11.BP_Weapon_590A11_C.OnAttachmentAdded
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// class AWeapon**                sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment**      Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPC_Weapon_SDASS_C::STATIC_OnAttachmentAdded(class AWeapon** sender, class AWeaponAttachment** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_590A11.BP_Weapon_590A11_C.OnAttachmentAdded");

	ABPC_Weapon_SDASS_C_OnAttachmentAdded_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_590A11.BP_Weapon_590A11_C.OnAttachmentRemoved
// (NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// class AWeapon**                sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment**      Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPC_Weapon_SDASS_C::OnAttachmentRemoved(class AWeapon** sender, class AWeaponAttachment** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_590A11.BP_Weapon_590A11_C.OnAttachmentRemoved");

	ABPC_Weapon_SDASS_C_OnAttachmentRemoved_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_590A11.BP_Weapon_590A11_C.ExecuteUbergraph_BP_Weapon_590A11
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPC_Weapon_SDASS_C::ExecuteUbergraph_BP_Weapon_590A11(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_590A11.BP_Weapon_590A11_C.ExecuteUbergraph_BP_Weapon_590A11");

	ABPC_Weapon_SDASS_C_ExecuteUbergraph_BP_Weapon_590A11_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
