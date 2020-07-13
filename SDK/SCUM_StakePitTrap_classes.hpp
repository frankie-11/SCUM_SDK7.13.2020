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

// BlueprintGeneratedClass StakePitTrap.StakePitTrap_C
// 0x0010 (0x0780 - 0x0770)
class AStakePitTrap_C : public ADamagingTrapItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0770(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_BoxProximityTriggerComponent_C*          BoxProximityTrigger;                                      // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StakePitTrap.StakePitTrap_C");
		return ptr;
	}


	void STATIC_BP_OnTriggered();
	void STATIC_BP_OnArmed();
	void STATIC_BP_OnRefueled();
	void STATIC_ExecuteUbergraph_StakePitTrap(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
