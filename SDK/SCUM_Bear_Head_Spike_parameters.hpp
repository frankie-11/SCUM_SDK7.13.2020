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

// Function ConZ.Item.Use
struct ABear_Head_Spike_C_Use_Params
{
	class APrisoner**                                  Prisoner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               usage;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             usageWeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Eat;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             damageMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.UpdateVisuals
struct ABear_Head_Spike_C_UpdateVisuals_Params
{
	bool*                                              shouldHandleAging;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.StopBlinking
struct ABear_Head_Spike_C_StopBlinking_Params
{
};

// DelegateFunction ConZ.Item.StaticMeshChangedDelegate__DelegateSignature
struct ABear_Head_Spike_C_StaticMeshChangedDelegate__DelegateSignature_Params
{
	class AItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ConZ.Item.SkeletalMeshChangedDelegate__DelegateSignature
struct ABear_Head_Spike_C_SkeletalMeshChangedDelegate__DelegateSignature_Params
{
	class AItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.SetWeight
struct ABear_Head_Spike_C_SetWeight_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.SetMaxHealth
struct ABear_Head_Spike_C_SetMaxHealth_Params
{
	float*                                             maxHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.SetHealthAndUsage
struct ABear_Head_Spike_C_SetHealthAndUsage_Params
{
	float*                                             health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               usage;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.SetHealth
struct ABear_Head_Spike_C_SetHealth_Params
{
	float*                                             health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.SetFuel
struct ABear_Head_Spike_C_SetFuel_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.Server_Throw
struct ABear_Head_Spike_C_Server_Throw_Params
{
	struct FVector*                                    ZeroBasedStartPosition;                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   StartRotation;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    StartVelocity;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ConZ.Item.Repair
struct ABear_Head_Spike_C_Repair_Params
{
	float*                                             healthToRepair;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.RemoveStacks
struct ABear_Head_Spike_C_RemoveStacks_Params
{
	int*                                               stacksToSplit;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UInventoryNode>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction ConZ.Item.PickedUpStateDelegate__DelegateSignature
struct ABear_Head_Spike_C_PickedUpStateDelegate__DelegateSignature_Params
{
	class AItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              pickedUp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.OnRightClicked
struct ABear_Head_Spike_C_OnRightClicked_Params
{
};

// Function ConZ.Item.OnRep_WeightUsed
struct ABear_Head_Spike_C_OnRep_WeightUsed_Params
{
};

// Function ConZ.Item.OnRep_WaterWeight
struct ABear_Head_Spike_C_OnRep_WaterWeight_Params
{
};

// Function ConZ.Item.OnRep_Visibility
struct ABear_Head_Spike_C_OnRep_Visibility_Params
{
};

// Function ConZ.Item.OnRep_Stacks
struct ABear_Head_Spike_C_OnRep_Stacks_Params
{
};

// Function ConZ.Item.OnRep_InventoryContainer2D
struct ABear_Head_Spike_C_OnRep_InventoryContainer2D_Params
{
};

// Function ConZ.Item.OnRep_Health
struct ABear_Head_Spike_C_OnRep_Health_Params
{
};

// Function ConZ.Item.OnRep_Examined
struct ABear_Head_Spike_C_OnRep_Examined_Params
{
};

// Function ConZ.Item.OnProjectileStop
struct ABear_Head_Spike_C_OnProjectileStop_Params
{
	struct FHitResult*                                 ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConZ.Item.OnLocalPrisonerPanelsClosed
struct ABear_Head_Spike_C_OnLocalPrisonerPanelsClosed_Params
{
};

// Function ConZ.Item.OnLocalPrisonerHoveredActorChanged
struct ABear_Head_Spike_C_OnLocalPrisonerHoveredActorChanged_Params
{
	class AActor**                                     hoveredActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.OnEditTextWidgetTextAccepted
struct ABear_Head_Spike_C_OnEditTextWidgetTextAccepted_Params
{
	class APrisoner**                                  User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.Item.OnDetachedFromItem
struct ABear_Head_Spike_C_OnDetachedFromItem_Params
{
	class AItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.OnDestroyedEvent
struct ABear_Head_Spike_C_OnDestroyedEvent_Params
{
	class AActor**                                     Self;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.OnContainedItemDestroyed
struct ABear_Head_Spike_C_OnContainedItemDestroyed_Params
{
	class AActor**                                     containedItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.OnAttachedToItem
struct ABear_Head_Spike_C_OnAttachedToItem_Params
{
	class AItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.NetMulticast_SpawnDestroyedEffects
struct ABear_Head_Spike_C_NetMulticast_SpawnDestroyedEffects_Params
{
};

// Function ConZ.Item.NetMulticast_SetPlayerGivenName
struct ABear_Head_Spike_C_NetMulticast_SetPlayerGivenName_Params
{
	struct FString*                                    Value;                                                    // (Parm, ZeroConstructor)
};

// Function ConZ.Item.NetMulticast_SetActorDropLocationAndRotation
struct ABear_Head_Spike_C_NetMulticast_SetActorDropLocationAndRotation_Params
{
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.Multicast_UpdateExpirationTime
struct ABear_Head_Spike_C_Multicast_UpdateExpirationTime_Params
{
	int64_t*                                           Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.Multicast_Throw
struct ABear_Head_Spike_C_Multicast_Throw_Params
{
	struct FVector*                                    ZeroBasedStartPosition;                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   StartRotation;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    StartVelocity;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ConZ.Item.HasPriorityForContainerItem
struct ABear_Head_Spike_C_HasPriorityForContainerItem_Params
{
	class AItem**                                      containerItem;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetWidgetDisplayInfo
struct ABear_Head_Spike_C_GetWidgetDisplayInfo_Params
{
	struct FWidgetDisplayInfo                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConZ.Item.GetWetness
struct ABear_Head_Spike_C_GetWetness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetWeightUsed
struct ABear_Head_Spike_C_GetWeightUsed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetWeightRemained
struct ABear_Head_Spike_C_GetWeightRemained_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetWeightPerUse
struct ABear_Head_Spike_C_GetWeightPerUse_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetWeight
struct ABear_Head_Spike_C_GetWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetWaterWeight
struct ABear_Head_Spike_C_GetWaterWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetUsedSlots
struct ABear_Head_Spike_C_GetUsedSlots_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetUsedMass
struct ABear_Head_Spike_C_GetUsedMass_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetTotalWeight
struct ABear_Head_Spike_C_GetTotalWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetTotalUses
struct ABear_Head_Spike_C_GetTotalUses_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetStacksCount
struct ABear_Head_Spike_C_GetStacksCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetSizeY
struct ABear_Head_Spike_C_GetSizeY_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetSizeX
struct ABear_Head_Spike_C_GetSizeX_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetRemainingUses
struct ABear_Head_Spike_C_GetRemainingUses_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetRemaining
struct ABear_Head_Spike_C_GetRemaining_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetNormalizedHealth
struct ABear_Head_Spike_C_GetNormalizedHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetNoiseLoudnessWhenPickedUp
struct ABear_Head_Spike_C_GetNoiseLoudnessWhenPickedUp_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetNoiseLoudnessWhenDropped
struct ABear_Head_Spike_C_GetNoiseLoudnessWhenDropped_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetNoiseLoudnessOnGroundImpact
struct ABear_Head_Spike_C_GetNoiseLoudnessOnGroundImpact_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetMeshComponent
struct ABear_Head_Spike_C_GetMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ConZ.Item.GetMaxHealth
struct ABear_Head_Spike_C_GetMaxHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetHealth
struct ABear_Head_Spike_C_GetHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetFuel
struct ABear_Head_Spike_C_GetFuel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetDefaultMaxHealth
struct ABear_Head_Spike_C_GetDefaultMaxHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetContainerDamagePercentage
struct ABear_Head_Spike_C_GetContainerDamagePercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.GetAllContainedItems
struct ABear_Head_Spike_C_GetAllContainedItems_Params
{
	bool*                                              recursive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AItem*>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ConZ.Item.DropAt
struct ABear_Head_Spike_C_DropAt_Params
{
	struct FVector*                                    dropLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   dropRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.DropAround
struct ABear_Head_Spike_C_DropAround_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.Drop
struct ABear_Head_Spike_C_Drop_Params
{
	bool*                                              wasThrowed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.DetachFromAll
struct ABear_Head_Spike_C_DetachFromAll_Params
{
};

// DelegateFunction ConZ.Item.DebugTextChangedDelegate__DelegateSignature
struct ABear_Head_Spike_C_DebugTextChangedDelegate__DelegateSignature_Params
{
	class AItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.CanStackWith
struct ABear_Head_Spike_C_CanStackWith_Params
{
	class UObject**                                    Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.CanStack
struct ABear_Head_Spike_C_CanStack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.CanBeDroppedBy
struct ABear_Head_Spike_C_CanBeDroppedBy_Params
{
	class AConZCharacter**                             Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.CanBeCraftedByCharactrer
struct ABear_Head_Spike_C_CanBeCraftedByCharactrer_Params
{
	class ACharacter**                                 Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.CanAutoAddItem
struct ABear_Head_Spike_C_CanAutoAddItem_Params
{
	class AItem**                                      Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      column;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      row;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.CanAddItem
struct ABear_Head_Spike_C_CanAddItem_Params
{
	class AItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     row;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.Blink
struct ABear_Head_Spike_C_Blink_Params
{
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.Item.AutoAddItemToInventoryNode
struct ABear_Head_Spike_C_AutoAddItemToInventoryNode_Params
{
	TScriptInterface<class UInventoryNode>*            Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.AttachToCharacterHands
struct ABear_Head_Spike_C_AttachToCharacterHands_Params
{
	class AConZCharacter**                             Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.Item.AddStack
struct ABear_Head_Spike_C_AddStack_Params
{
	TScriptInterface<class UInventoryNode>*            Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
