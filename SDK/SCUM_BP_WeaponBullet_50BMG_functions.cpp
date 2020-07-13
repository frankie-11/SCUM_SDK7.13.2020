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

// Function BP_WeaponBullet_50BMG.BP_WeaponBullet_50BMG_C.ReceiveBeginPlay
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_WeaponBullet_50BMG_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_50BMG.BP_WeaponBullet_50BMG_C.ReceiveBeginPlay");

	ABP_WeaponBullet_50BMG_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_50BMG.BP_WeaponBullet_50BMG_C.ExecuteUbergraph_BP_WeaponBullet_50BMG
// (Net, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_50BMG_C::ExecuteUbergraph_BP_WeaponBullet_50BMG(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_50BMG.BP_WeaponBullet_50BMG_C.ExecuteUbergraph_BP_WeaponBullet_50BMG");

	ABP_WeaponBullet_50BMG_C_ExecuteUbergraph_BP_WeaponBullet_50BMG_Params params;
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
