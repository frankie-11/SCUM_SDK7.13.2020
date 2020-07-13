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

// BlueprintGeneratedClass Inmate_pants.Inmate_pants_C
// 0x0000 (0x0730 - 0x0730)
class AInmate_pants_C : public AClothesItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Inmate_pants.Inmate_pants_C");
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
