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

// BlueprintGeneratedClass BP_FlareGun.BP_FlareGun_C
// 0x0010 (0x1260 - 0x1250)
class ABP_FlareGun_C : public AWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x1258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FlareGun.BP_FlareGun_C");
		return ptr;
	}


	bool CanSwitchFiringMode();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FlareGun(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
