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

// BlueprintGeneratedClass BP_WeaponBullet_12Gauge_FlareTrap.BP_WeaponBullet_12Gauge_FlareTrap_C
// 0x0010 (0x0448 - 0x0438)
class ABP_WeaponBullet_12Gauge_FlareTrap_C : public ABP_WeaponBullet_12Gauge_Flare_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                                Ak_Flare_1;                                               // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBullet_12Gauge_FlareTrap.BP_WeaponBullet_12Gauge_FlareTrap_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeaponBullet_12Gauge_FlareTrap(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
