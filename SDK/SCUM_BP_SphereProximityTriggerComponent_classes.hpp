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

// BlueprintGeneratedClass BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C
// 0x0014 (0x04C4 - 0x04B0)
class UBP_SphereProximityTriggerComponent_C : public USphereProximityTriggerComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              MaxBeepPeriod;                                            // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBeepPeriod;                                            // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeepDelayCounter;                                         // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C");
		return ptr;
	}


	void STATIC_ReceiveTick(float* DeltaSeconds);
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BP_SphereProximityTriggerComponent(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
