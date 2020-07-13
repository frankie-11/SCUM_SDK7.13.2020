#pragma once

// SCUM (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_StorageShelf.BP_StorageShelf_C
// 0x0000 (0x06F8 - 0x06F8)
class ABP_StorageShelf_C : public AStorageItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_StorageShelf.BP_StorageShelf_C");
		return ptr;
	}


	void OnRep_InventoryCount();
	void BP_OnNumContainedItemsChanged(int* numContainedItems);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
