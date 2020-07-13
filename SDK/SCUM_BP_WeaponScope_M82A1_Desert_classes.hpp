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

// BlueprintGeneratedClass BP_WeaponScope_M82A1_Desert.BP_WeaponScope_M82A1_Desert_C
// 0x0000 (0x07A8 - 0x07A8)
class ABP_WeaponScope_M82A1_Desert_C : public ABP_WeaponScope_M82A1_Black_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponScope_M82A1_Desert.BP_WeaponScope_M82A1_Desert_C");
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
