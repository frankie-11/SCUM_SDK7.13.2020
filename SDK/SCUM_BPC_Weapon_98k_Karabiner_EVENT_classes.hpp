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

// BlueprintGeneratedClass BPC_Weapon_98k_Karabiner_EVENT.BPC_Weapon_98k_Karabiner_EVENT_C
// 0x0000 (0x12B0 - 0x12B0)
class ABPC_Weapon_98k_Karabiner_EVENT_C : public ABP_Weapon_98k_Karabiner_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Weapon_98k_Karabiner_EVENT.BPC_Weapon_98k_Karabiner_EVENT_C");
		return ptr;
	}


	bool CanSwitchFiringMode();
	int STATIC_GetAmmoReloadCapacity(class AAmmunitionItem** ammo);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Weapon_98k_Karabiner(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
