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

// BlueprintGeneratedClass BP_WeaponBullet_ShotgunShell.BP_WeaponBullet_ShotgunShell_C
// 0x0008 (0x0400 - 0x03F8)
class ABP_WeaponBullet_ShotgunShell_C : public AProjectileShotgun
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBullet_ShotgunShell.BP_WeaponBullet_ShotgunShell_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeaponBullet_ShotgunShell(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
