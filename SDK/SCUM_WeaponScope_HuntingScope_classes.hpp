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

// BlueprintGeneratedClass WeaponScope_HuntingScope.WeaponScope_HuntingScope_C
// 0x0000 (0x07A8 - 0x07A8)
class AWeaponScope_HuntingScope_C : public AWeaponAttachmentScope
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponScope_HuntingScope.WeaponScope_HuntingScope_C");
		return ptr;
	}


	void SetZoomLevelOnServer(int* zoomLevel);
	void SetWindageOnServer(int* Windage);
	void SetLoadedVariablesOnClient(int* zoomLevel, int* Windage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
