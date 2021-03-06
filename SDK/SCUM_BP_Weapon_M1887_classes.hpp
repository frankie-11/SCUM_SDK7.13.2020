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

// BlueprintGeneratedClass BP_Weapon_M1887.BP_Weapon_M1887_C
// 0x0038 (0x1288 - 0x1250)
class ABP_Weapon_M1887_C : public AWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x1258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FWeaponReloadData                           ModifiedReloadData;                                       // 0x1260(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_M1887.BP_Weapon_M1887_C");
		return ptr;
	}


	bool CanSwitchFiringMode();
	int STATIC_GetAmmoReloadCapacity(class AAmmunitionItem** ammo);
	struct FWidgetDisplayInfo GetWidgetDisplayInfo();
	void ReceiveBeginPlay();
	void FillUpWithAmmo();
	void STATIC_ExecuteUbergraph_BP_Weapon_M1887(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
