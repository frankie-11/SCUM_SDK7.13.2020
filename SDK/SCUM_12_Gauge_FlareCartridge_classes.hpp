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

// BlueprintGeneratedClass 12_Gauge_FlareCartridge.12_Gauge_FlareCartridge_C
// 0x0000 (0x0688 - 0x0688)
class A12_Gauge_FlareCartridge_C : public AAmmunitionItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 12_Gauge_FlareCartridge.12_Gauge_FlareCartridge_C");
		return ptr;
	}


	void SetAmmoCount(int* count, bool* replicateToOwner);
	void OnRep_AmmoCountOwnerHelper();
	void OnRep_AmmoCount();
	int GetAmmoCount();
	void Client_SetAmmoCount(int* count);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
