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

// BlueprintGeneratedClass BP_Survival_Tutorial_TakeKnifeInHands.BP_Survival_Tutorial_TakeKnifeInHands_C
// 0x0008 (0x0378 - 0x0370)
class ABP_Survival_Tutorial_TakeKnifeInHands_C : public AObtainItemObjective
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Survival_Tutorial_TakeKnifeInHands.BP_Survival_Tutorial_TakeKnifeInHands_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
