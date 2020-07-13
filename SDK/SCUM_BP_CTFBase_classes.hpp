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

// BlueprintGeneratedClass BP_CTFBase.BP_CTFBase_C
// 0x0000 (0x0248 - 0x0248)
class ABP_CTFBase_C : public ACTFBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CTFBase.BP_CTFBase_C");
		return ptr;
	}


	void SphereOverlap(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void OnRep_Team();
	void OnRep_Radius();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
