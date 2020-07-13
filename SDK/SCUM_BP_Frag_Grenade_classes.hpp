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

// BlueprintGeneratedClass BP_Frag_Grenade.BP_Frag_Grenade_C
// 0x0000 (0x06B0 - 0x06B0)
class ABP_Frag_Grenade_C : public AFragGrenadeItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Frag_Grenade.BP_Frag_Grenade_C");
		return ptr;
	}


	void Multicast_PlayEffects(struct FVector* ZeroBasedLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
