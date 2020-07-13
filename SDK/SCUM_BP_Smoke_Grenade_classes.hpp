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

// BlueprintGeneratedClass BP_Smoke_Grenade.BP_Smoke_Grenade_C
// 0x0000 (0x06A8 - 0x06A8)
class ABP_Smoke_Grenade_C : public ASmokeGrenadeItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Smoke_Grenade.BP_Smoke_Grenade_C");
		return ptr;
	}


	void Multicast_PlayEffects(struct FVector* ZeroBasedLcoation, struct FRotator* Rotation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
