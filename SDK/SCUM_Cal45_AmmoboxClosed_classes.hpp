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

// BlueprintGeneratedClass Cal45_AmmoboxClosed.Cal45_AmmoboxClosed_C
// 0x0000 (0x0688 - 0x0688)
class ACal45_AmmoboxClosed_C : public AAmmunitionBoxItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cal45_AmmoboxClosed.Cal45_AmmoboxClosed_C");
		return ptr;
	}


	void OnRep_AmmoCount();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
