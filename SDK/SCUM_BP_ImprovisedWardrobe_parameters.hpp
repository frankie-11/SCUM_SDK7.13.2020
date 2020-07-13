#pragma once

// SCUM (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConZ.StorageItem.OnRep_InventoryCount
struct ABP_ImprovisedWardrobe_C_OnRep_InventoryCount_Params
{
};

// Function ConZ.StorageItem.BP_OnNumContainedItemsChanged
struct ABP_ImprovisedWardrobe_C_BP_OnNumContainedItemsChanged_Params
{
	int*                                               numContainedItems;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
