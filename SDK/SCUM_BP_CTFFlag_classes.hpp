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

// BlueprintGeneratedClass BP_CTFFlag.BP_CTFFlag_C
// 0x0000 (0x02D0 - 0x02D0)
class ABP_CTFFlag_C : public ACTFFlag
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CTFFlag.BP_CTFFlag_C");
		return ptr;
	}


	void SphereOverlap(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void OnRep_Team();
	void OnRep_FlagTransform();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
