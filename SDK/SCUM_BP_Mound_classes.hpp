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

// BlueprintGeneratedClass BP_Mound.BP_Mound_C
// 0x0000 (0x06C0 - 0x06C0)
class ABP_Mound_C : public AMoundItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mound.BP_Mound_C");
		return ptr;
	}


	void OnRep_SurfaceType();
	void OnRep_StartFadeDistance();
	void OnRep_OwnerProfileId();
	void OnRep_EndFadeDistance();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
