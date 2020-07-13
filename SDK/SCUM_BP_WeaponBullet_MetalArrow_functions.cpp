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

// Function BP_WeaponBullet_MetalArrow.BP_WeaponBullet_MetalArrow_C.ReceiveBeginPlay
// (Net, Exec, NetResponse, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, NetValidate)

void ABP_WeaponBullet_MetalArrow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_MetalArrow.BP_WeaponBullet_MetalArrow_C.ReceiveBeginPlay");

	ABP_WeaponBullet_MetalArrow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_MetalArrow.BP_WeaponBullet_MetalArrow_C.ExecuteUbergraph_BP_WeaponBullet_MetalArrow
// (NetReliable, Exec, NetResponse, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_MetalArrow_C::ExecuteUbergraph_BP_WeaponBullet_MetalArrow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_MetalArrow.BP_WeaponBullet_MetalArrow_C.ExecuteUbergraph_BP_WeaponBullet_MetalArrow");

	ABP_WeaponBullet_MetalArrow_C_ExecuteUbergraph_BP_WeaponBullet_MetalArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
