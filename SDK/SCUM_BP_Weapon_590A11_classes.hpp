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

// BlueprintGeneratedClass BP_Weapon_590A11.BP_Weapon_590A11_C
// 0x0014 (0x1264 - 0x1250)
class ABP_Weapon_590A11_C : public AWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x1258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IronSightsHideAlpha;                                      // 0x1260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_590A11.BP_Weapon_590A11_C");
		return ptr;
	}


	bool CanSwitchFiringMode();
	struct FWidgetDisplayInfo GetWidgetDisplayInfo();
	void FillUpWithAmmo();
	void ReceiveBeginPlay();
	void STATIC_OnAttachmentAdded(class AWeapon** sender, class AWeaponAttachment** Attachment);
	void OnAttachmentRemoved(class AWeapon** sender, class AWeaponAttachment** Attachment);
	void ExecuteUbergraph_BP_Weapon_590A11(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
