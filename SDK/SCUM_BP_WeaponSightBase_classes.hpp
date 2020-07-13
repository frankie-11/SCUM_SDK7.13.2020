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

// BlueprintGeneratedClass BP_WeaponSightBase.BP_WeaponSightBase_C
// 0x0008 (0x06B0 - 0x06A8)
class ABP_WeaponSightBase_C : public AWeaponAttachmentSight
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponSightBase.BP_WeaponSightBase_C");
		return ptr;
	}


	void OnAttachedToItem(class AItem** Item);
	void STATIC_OnDetachedFromItem(class AItem** Item);
	void STATIC_ExecuteUbergraph_BP_WeaponSightBase(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
