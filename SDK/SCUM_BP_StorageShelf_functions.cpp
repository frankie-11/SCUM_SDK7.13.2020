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

// Function ConZ.StorageItem.OnRep_InventoryCount
// ()

void ABP_StorageShelf_C::OnRep_InventoryCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.StorageItem.OnRep_InventoryCount");

	ABP_StorageShelf_C_OnRep_InventoryCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.StorageItem.BP_OnNumContainedItemsChanged
// ()
// Parameters:
// int*                           numContainedItems              (Parm, ZeroConstructor, IsPlainOldData)

void ABP_StorageShelf_C::BP_OnNumContainedItemsChanged(int* numContainedItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.StorageItem.BP_OnNumContainedItemsChanged");

	ABP_StorageShelf_C_BP_OnNumContainedItemsChanged_Params params;
	params.numContainedItems = numContainedItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
