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

// BlueprintGeneratedClass BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C
// 0x0030 (0x0370 - 0x0340)
class ABP_Survival_Tutorial_CraftStoneKnifeObjective_C : public ACraftingObjective
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AMissionDialogueManager*                     DialogueManager;                                          // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      _firstTimeOpened;                                         // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCraftableItem*                              CraftableItem;                                            // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDialogueData*                               DialogueData;                                             // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C");
		return ptr;
	}


	void UnbindItemClicked(struct FScriptDelegate* Delegate);
	void UnbindTabModeOpened(struct FScriptDelegate* Delegate);
	void GetPrisoner(class APrisoner** AsPrisoner);
	void STATIC_AddToDialogueQueue(EDialogEvent* dialogEvent);
	void STATIC_OnObjectiveStarted();
	void STATIC_OnTabModeOpened(ETabMode* tabMode);
	void STATIC_CraftingTabOpened();
	void STATIC_CraftingItemClicked(class UCraftableItem** CraftableItem);
	void STATIC_OnObjectiveCompleted();
	void STATIC_OnObjectiveFailed();
	void STATIC_OnObjectiveBelated();
	void STATIC_ExecuteUbergraph_BP_Survival_Tutorial_CraftStoneKnifeObjective(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
