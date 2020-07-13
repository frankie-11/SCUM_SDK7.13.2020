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

// BlueprintGeneratedClass BP_M1_OpenInsertClipInsertBullet.BP_M1_OpenInsertClipInsertBullet_C
// 0x0004 (0x009C - 0x0098)
class UBP_M1_OpenInsertClipInsertBullet_C : public UInsertMagazineInsertCartridge
{
public:
	int                                                loadedAmmoCount;                                          // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M1_OpenInsertClipInsertBullet.BP_M1_OpenInsertClipInsertBullet_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
