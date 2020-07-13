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

// BlueprintGeneratedClass BPC_Weapon_M82A1_Desert.BPC_Weapon_M82A1_Desert_C
// 0x0000 (0x1268 - 0x1268)
class ABPC_Weapon_M82A1_Desert_C : public ABP_Weapon_M82A1_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Weapon_M82A1_Desert.BPC_Weapon_M82A1_Desert_C");
		return ptr;
	}


	bool GetIgnoreSupportingHandIK();
	bool CanSwitchFiringMode();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void OnAttachmentAdded(class AWeapon** sender, class AWeaponAttachment** Attachment);
	void STATIC_OnAttachmentRemoved(class AWeapon** sender, class AWeaponAttachment** Attachment);
	void STATIC_ExecuteUbergraph_BP_Weapon_M82A1(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
