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

// BlueprintGeneratedClass Zombie_Baseball_Cap_19.Zombie_Baseball_Cap_18_C
// 0x0000 (0x0730 - 0x0730)
class AZombie_Baseball_Cap_18_C : public AClothesItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Zombie_Baseball_Cap_19.Zombie_Baseball_Cap_18_C");
		return ptr;
	}


	void UpdateMaterialParamsOnClients();
	void SetDirtiness(float* dirtiness);
	void OnRep_MaterialParameters();
	int GetWarmth();
	int GetCapacityY();
	int GetCapacityX();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
