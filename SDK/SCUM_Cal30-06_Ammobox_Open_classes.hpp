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

// BlueprintGeneratedClass Cal30-06_Ammobox_Open.Cal30-06_Ammobox_Open_C
// 0x0000 (0x0688 - 0x0688)
class ACal30_06_Ammobox_Open_C : public AAmmunitionBoxItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cal30-06_Ammobox_Open.Cal30-06_Ammobox_Open_C");
		return ptr;
	}


	void OnRep_AmmoCount();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif