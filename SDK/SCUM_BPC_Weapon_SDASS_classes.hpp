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

// BlueprintGeneratedClass BPC_Weapon_SDASS.BPC_Weapon_SDASS_C
// 0x0000 (0x1264 - 0x1264)
class ABPC_Weapon_SDASS_C : public ABP_Weapon_590A11_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Weapon_SDASS.BPC_Weapon_SDASS_C");
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
