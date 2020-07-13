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

// Function BP_WeaponSightBase.BP_WeaponSightBase_C.OnAttachedToItem
// (NetReliable, NetRequest, Event, MulticastDelegate, Private, Protected, NetServer, BlueprintPure)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponSights_MRO_Red_Dot_C::OnAttachedToItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSightBase.BP_WeaponSightBase_C.OnAttachedToItem");

	ABP_WeaponSights_MRO_Red_Dot_C_OnAttachedToItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponSightBase.BP_WeaponSightBase_C.OnDetachedFromItem
// (Native, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, BlueprintPure)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponSights_MRO_Red_Dot_C::STATIC_OnDetachedFromItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSightBase.BP_WeaponSightBase_C.OnDetachedFromItem");

	ABP_WeaponSights_MRO_Red_Dot_C_OnDetachedFromItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponSightBase.BP_WeaponSightBase_C.ExecuteUbergraph_BP_WeaponSightBase
// (NetReliable, Native, Event, Static, MulticastDelegate, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponSights_MRO_Red_Dot_C::STATIC_ExecuteUbergraph_BP_WeaponSightBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSightBase.BP_WeaponSightBase_C.ExecuteUbergraph_BP_WeaponSightBase");

	ABP_WeaponSights_MRO_Red_Dot_C_ExecuteUbergraph_BP_WeaponSightBase_Params params;
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
