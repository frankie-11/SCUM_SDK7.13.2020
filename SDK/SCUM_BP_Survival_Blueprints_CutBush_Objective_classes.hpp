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

// BlueprintGeneratedClass BP_Survival_Blueprints_CutBush_Objective.BP_Survival_Blueprints_CutBush_Objective_C
// 0x0008 (0x0360 - 0x0358)
class ABP_Survival_Blueprints_CutBush_Objective_C : public ACuttingObjective
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Survival_Blueprints_CutBush_Objective.BP_Survival_Blueprints_CutBush_Objective_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
