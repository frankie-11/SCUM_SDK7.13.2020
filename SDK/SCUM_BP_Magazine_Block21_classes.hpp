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

// BlueprintGeneratedClass BP_Magazine_Block21.BP_Magazine_Block21_C
// 0x0000 (0x06A8 - 0x06A8)
class ABP_Magazine_Block21_C : public AWeaponAttachmentMagazine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Magazine_Block21.BP_Magazine_Block21_C");
		return ptr;
	}


	void SetAmmoCount(int* Amount);
	void Server_InsertCartridgeIntoMagazine(class AAmmunitionItem** ammo);
	void OnRep_AmmoCountOwnerHelper();
	void OnRep_AmmoCount();
	void OnAmmoChangedEvent();
	void Multicast_SetLoadedVariables(int* ammoCount);
	class UClass* GetProjectileClass();
	int GetCapacity();
	int GetAmmoCount();
	void AddAmmo(int* Amount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
