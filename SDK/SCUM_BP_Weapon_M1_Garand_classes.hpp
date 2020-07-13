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

// BlueprintGeneratedClass BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C
// 0x0020 (0x1270 - 0x1250)
class ABP_Weapon_M1_Garand_C : public AWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x1258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IronSightsHideAlpha;                                      // 0x1260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                LastShotNoPingMontage;                                    // 0x1268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C");
		return ptr;
	}


	void IsReadyForReloadUsingEmptyClipAndAmmo(bool* Ready);
	void FindEmptyClip(TArray<class AItem*>* Items, class AItem** Item, bool* Found);
	bool STATIC_FindReloadData(TArray<class AItem*>* Items, struct FWeaponReloadData* reloadData);
	bool CanReloadUsingData(struct FWeaponReloadData* Data);
	class UAnimMontage* GetFiringMontage(bool* isLastShot);
	void STATIC_UpdateReloadData(struct FWeaponReloadData* reloadDataIn, struct FWeaponReloadData* reloadDataOut);
	int STATIC_GetAmmoReloadCapacity(class AAmmunitionItem** ammo);
	bool CanSwitchFiringMode();
	void ReceiveBeginPlay();
	void STATIC_OnAttachmentAdded(class AWeapon** sender, class AWeaponAttachment** Attachment);
	void STATIC_OnAttachmentRemoved(class AWeapon** sender, class AWeaponAttachment** Attachment);
	void ExecuteUbergraph_BP_Weapon_M1_Garand(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
