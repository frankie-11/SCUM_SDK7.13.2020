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

// BlueprintGeneratedClass BP_M82A1_InsertMag.BP_M82A1_InsertMag_C
// 0x0000 (0x0088 - 0x0088)
class UBP_M82A1_InsertMag_C : public UInsertMagazine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M82A1_InsertMag.BP_M82A1_InsertMag_C");
		return ptr;
	}


	void SetNextMontageSectionFromPrevious(struct FName* previousSection, struct FName* NextSection);
	void SetNextMontageSection(struct FName* NextSection);
	void OnMontageEnded(class UAnimMontage** Montage, bool* interrupted);
	void OnMontageBlendingOutStarted(class UAnimMontage** Montage, bool* interrupted);
	struct FWeaponReloadData GetReloadData();
	class UAnimMontage* GetActiveAnimationWeapon();
	class UAnimMontage* GetActiveAnimationBody();
	float ExecuteUsingData(struct FWeaponReloadData* Data);
	void End(bool* Regular);
	bool CanInterrupt();
	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
