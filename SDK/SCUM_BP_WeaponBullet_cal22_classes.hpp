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

// BlueprintGeneratedClass BP_WeaponBullet_cal22.BP_WeaponBullet_cal22_C
// 0x0008 (0x03F0 - 0x03E8)
class ABP_WeaponBullet_cal22_C : public AProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBullet_cal22.BP_WeaponBullet_cal22_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BP_WeaponBullet_cal22(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
