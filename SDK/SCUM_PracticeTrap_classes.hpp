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

// BlueprintGeneratedClass PracticeTrap.PracticeTrap_C
// 0x0000 (0x0760 - 0x0760)
class APracticeTrap_C : public APracticeTrapItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PracticeTrap.PracticeTrap_C");
		return ptr;
	}


	void OnTriggerEvent(struct FTriggeredEventData* eventData);
	void OnTrapDestroyTimer();
	void OnRep_WasTriggered();
	void OnRep_LastTriggerOwner();
	void OnRep_IsDestroyed();
	void OnRep_IsBurried();
	void OnRep_IsArmed();
	void OnRep_CurrentTrigger();
	void OnLocalPrisonerSpawned(class APrisoner** Prisoner);
	void OnActorDestroyTimer();
	void NetMulticast_TriggerTrap(struct FTrapTriggerParams* Params);
	bool IsBuried();
	bool IsArmed();
	void BP_OnTriggered();
	void BP_OnRefueled();
	void BP_OnDisarmed();
	void BP_OnArmed();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
