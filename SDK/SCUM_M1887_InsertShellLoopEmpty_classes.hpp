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

// BlueprintGeneratedClass M1887_InsertShellLoopEmpty.M1887_InsertShellLoopEmpty_C
// 0x0011 (0x00A9 - 0x0098)
class UM1887_InsertShellLoopEmpty_C : public UInsertCartridge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                RequestedAmmoCount;                                       // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InsertedAmmoCount;                                        // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      FinalSectionReached;                                      // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass M1887_InsertShellLoopEmpty.M1887_InsertShellLoopEmpty_C");
		return ptr;
	}


	float STATIC_ExecuteUsingData(struct FWeaponReloadData* Data);
	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
	void OnActionAnimNotify(ECharacterActionNotifyType* notifyType);
	void STATIC_ExecuteUbergraph_M1887_InsertShellLoopEmpty(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
