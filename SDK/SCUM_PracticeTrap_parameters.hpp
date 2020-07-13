#pragma once

// SCUM (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConZ.TrapItem.OnTriggerEvent
struct APracticeTrap_C_OnTriggerEvent_Params
{
	struct FTriggeredEventData*                        eventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.TrapItem.OnTrapDestroyTimer
struct APracticeTrap_C_OnTrapDestroyTimer_Params
{
};

// Function ConZ.TrapItem.OnRep_WasTriggered
struct APracticeTrap_C_OnRep_WasTriggered_Params
{
};

// Function ConZ.TrapItem.OnRep_LastTriggerOwner
struct APracticeTrap_C_OnRep_LastTriggerOwner_Params
{
};

// Function ConZ.TrapItem.OnRep_IsDestroyed
struct APracticeTrap_C_OnRep_IsDestroyed_Params
{
};

// Function ConZ.TrapItem.OnRep_IsBurried
struct APracticeTrap_C_OnRep_IsBurried_Params
{
};

// Function ConZ.TrapItem.OnRep_IsArmed
struct APracticeTrap_C_OnRep_IsArmed_Params
{
};

// Function ConZ.TrapItem.OnRep_CurrentTrigger
struct APracticeTrap_C_OnRep_CurrentTrigger_Params
{
};

// Function ConZ.TrapItem.OnLocalPrisonerSpawned
struct APracticeTrap_C_OnLocalPrisonerSpawned_Params
{
	class APrisoner**                                  Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.TrapItem.OnActorDestroyTimer
struct APracticeTrap_C_OnActorDestroyTimer_Params
{
};

// Function ConZ.TrapItem.NetMulticast_TriggerTrap
struct APracticeTrap_C_NetMulticast_TriggerTrap_Params
{
	struct FTrapTriggerParams*                         Params;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function ConZ.TrapItem.IsBuried
struct APracticeTrap_C_IsBuried_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.TrapItem.IsArmed
struct APracticeTrap_C_IsArmed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.TrapItem.BP_OnTriggered
struct APracticeTrap_C_BP_OnTriggered_Params
{
};

// Function ConZ.TrapItem.BP_OnRefueled
struct APracticeTrap_C_BP_OnRefueled_Params
{
};

// Function ConZ.TrapItem.BP_OnDisarmed
struct APracticeTrap_C_BP_OnDisarmed_Params
{
};

// Function ConZ.TrapItem.BP_OnArmed
struct APracticeTrap_C_BP_OnArmed_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
