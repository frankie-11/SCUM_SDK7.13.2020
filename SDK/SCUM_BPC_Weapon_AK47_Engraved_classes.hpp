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

// BlueprintGeneratedClass BPC_Weapon_AK47_Engraved.BPC_Weapon_AK47_Engraved_C
// 0x0000 (0x1258 - 0x1258)
class ABPC_Weapon_AK47_Engraved_C : public ABP_Weapon_AK47_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Weapon_AK47_Engraved.BPC_Weapon_AK47_Engraved_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
