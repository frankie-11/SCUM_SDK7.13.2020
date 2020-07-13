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

// BlueprintGeneratedClass PromTrap.PromTrap_C
// 0x0038 (0x0858 - 0x0820)
class APromTrap_C : public AExplosiveTrapItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0820(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        ArmedLight;                                               // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_BoxProximityTriggerComponent_C*          BoxProximityTrigger;                                      // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     TriggeredMovement_PromTrapTriggerCurve_E937A8874F7B8AC6150893BF78948185;// 0x0838(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TriggeredMovement__Direction_E937A8874F7B8AC6150893BF78948185;// 0x0844(0x0001) (ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          TriggeredMovement;                                        // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LIGHT_ON_TIME;                                            // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LIGHT_OFF_TIME;                                           // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PromTrap.PromTrap_C");
		return ptr;
	}


	void STATIC_TriggeredMovement__FinishedFunc();
	void STATIC_TriggeredMovement__UpdateFunc();
	void STATIC_BP_OnDisarmed();
	void STATIC_BP_OnArmed();
	void STATIC_BP_OnTriggered();
	void STATIC_ReceiveBeginPlay();
	void ExecuteUbergraph_PromTrap(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
