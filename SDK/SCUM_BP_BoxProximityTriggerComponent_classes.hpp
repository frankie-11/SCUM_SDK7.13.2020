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

// BlueprintGeneratedClass BP_BoxProximityTriggerComponent.BP_BoxProximityTriggerComponent_C
// 0x0000 (0x04B0 - 0x04B0)
class UBP_BoxProximityTriggerComponent_C : public UBoxProximityTriggerComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BoxProximityTriggerComponent.BP_BoxProximityTriggerComponent_C");
		return ptr;
	}


	void BoxComponent_OnComponentEndOverlap(class UPrimitiveComponent** activatedComp, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex);
	void BoxComponent_OnComponentBeginOverlap(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
