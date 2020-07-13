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

// BlueprintGeneratedClass Cal_7_92x57mm_AmmoboxOpen.Cal_7_92x57mm_AmmoboxOpen_C
// 0x0000 (0x0688 - 0x0688)
class ACal_7_92x57mm_AmmoboxOpen_C : public AAmmunitionBoxItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cal_7_92x57mm_AmmoboxOpen.Cal_7_92x57mm_AmmoboxOpen_C");
		return ptr;
	}


	void OnRep_AmmoCount();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
