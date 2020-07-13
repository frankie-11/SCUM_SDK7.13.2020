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

// Function BP_WeaponBullet_WoodenArrowFeathers.BP_WeaponBullet_WoodenArrowFeathers_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, NetValidate)

void ABP_WeaponBullet_WoodenArrowFeathers_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_WoodenArrowFeathers.BP_WeaponBullet_WoodenArrowFeathers_C.ReceiveBeginPlay");

	ABP_WeaponBullet_WoodenArrowFeathers_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_WoodenArrowFeathers.BP_WeaponBullet_WoodenArrowFeathers_C.ExecuteUbergraph_BP_WeaponBullet_WoodenArrowFeathers
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_WoodenArrowFeathers_C::ExecuteUbergraph_BP_WeaponBullet_WoodenArrowFeathers(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_WoodenArrowFeathers.BP_WeaponBullet_WoodenArrowFeathers_C.ExecuteUbergraph_BP_WeaponBullet_WoodenArrowFeathers");

	ABP_WeaponBullet_WoodenArrowFeathers_C_ExecuteUbergraph_BP_WeaponBullet_WoodenArrowFeathers_Params params;
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
