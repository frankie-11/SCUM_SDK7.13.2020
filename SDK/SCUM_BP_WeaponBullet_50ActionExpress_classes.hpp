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

// BlueprintGeneratedClass BP_WeaponBullet_50ActionExpress.BP_WeaponBullet_50ActionExpress_C
// 0x0000 (0x03E8 - 0x03E8)
class ABP_WeaponBullet_50ActionExpress_C : public AProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBullet_50ActionExpress.BP_WeaponBullet_50ActionExpress_C");
		return ptr;
	}


	void OnStop(struct FHitResult* HitResult);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
