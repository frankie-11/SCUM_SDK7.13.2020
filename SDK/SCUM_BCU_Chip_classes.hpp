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

// BlueprintGeneratedClass BCU_Chip.BCU_Chip_C
// 0x0000 (0x0680 - 0x0680)
class ABCU_Chip_C : public ADogTagItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BCU_Chip.BCU_Chip_C");
		return ptr;
	}


	void OnRep_UserProfileName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
