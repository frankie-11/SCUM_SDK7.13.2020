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

// BlueprintGeneratedClass Compound_Bow.Compound_Bow_C
// 0x0018 (0x16B8 - 0x16A0)
class ACompound_Bow_C : public AWeaponBow
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x16A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              SightHideAlpha;                                           // 0x16A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DrawWeightMin;                                            // 0x16AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DrawWeightMax;                                            // 0x16B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DrawWeightToSet;                                          // 0x16B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Compound_Bow.Compound_Bow_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveTick(float* DeltaSeconds);
	void OnAttachmentAdded(class AWeapon** sender, class AWeaponAttachment** Attachment);
	void STATIC_OnAttachmentRemoved(class AWeapon** sender, class AWeaponAttachment** Attachment);
	void ExecuteUbergraph_Compound_Bow(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
