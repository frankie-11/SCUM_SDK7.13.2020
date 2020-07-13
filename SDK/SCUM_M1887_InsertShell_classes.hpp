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

// BlueprintGeneratedClass M1887_InsertShell.M1887_InsertShell_C
// 0x0028 (0x00C0 - 0x0098)
class UM1887_InsertShell_C : public UInsertCartridge
{
public:
	struct FWeaponReloadData                           ModifiedReloadData;                                       // 0x0098(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass M1887_InsertShell.M1887_InsertShell_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
