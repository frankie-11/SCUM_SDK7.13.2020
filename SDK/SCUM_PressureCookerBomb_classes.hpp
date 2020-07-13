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

// BlueprintGeneratedClass PressureCookerBomb.PressureCookerBomb_C
// 0x0018 (0x0838 - 0x0820)
class APressureCookerBomb_C : public AExplosiveTrapItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0820(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        ArmedLight;                                               // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LIGHT_ON_TIME;                                            // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LIGHT_OFF_TIME;                                           // 0x0834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PressureCookerBomb.PressureCookerBomb_C");
		return ptr;
	}


	void STATIC_BP_OnArmed();
	void STATIC_BP_OnDisarmed();
	void STATIC_ReceiveBeginPlay();
	void ExecuteUbergraph_PressureCookerBomb(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
