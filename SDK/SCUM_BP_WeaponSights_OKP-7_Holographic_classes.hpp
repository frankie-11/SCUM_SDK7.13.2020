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

// BlueprintGeneratedClass BP_WeaponSights_OKP-7_Holographic.BP_WeaponSights_OKP-7_Holographic_C
// 0x0000 (0x06B0 - 0x06B0)
class ABP_WeaponSights_OKP_7_Holographic_C : public ABP_WeaponSightBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponSights_OKP-7_Holographic.BP_WeaponSights_OKP-7_Holographic_C");
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
