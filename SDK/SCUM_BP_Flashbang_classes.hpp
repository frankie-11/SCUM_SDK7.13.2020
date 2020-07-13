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

// BlueprintGeneratedClass BP_Flashbang.BP_Flashbang_C
// 0x0000 (0x0688 - 0x0688)
class ABP_Flashbang_C : public AFlashbangItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Flashbang.BP_Flashbang_C");
		return ptr;
	}


	void Multicast_PlayEffects(struct FVector* zeroBasedFlashbangLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
