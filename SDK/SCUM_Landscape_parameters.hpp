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

// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
struct ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params
{
	struct FName*                                      ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
struct ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params
{
	struct FName*                                      ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture**                                   Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
struct ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params
{
	struct FName*                                      ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
struct ALandscapeProxy_EditorSetLandscapeMaterial_Params
{
	class UMaterialInterface**                         NewLandscapeMaterial;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.EditorApplySpline
struct ALandscapeProxy_EditorApplySpline_Params
{
	class USplineComponent**                           InSplineComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             StartWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EndWidth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             StartSideFalloff;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EndSideFalloff;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             StartRoll;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EndRoll;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumSubdivisions;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRaiseHeights;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLowerHeights;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ULandscapeLayerInfoObject**                  PaintLayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
struct ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Params
{
	bool*                                              InComponentScreenSizeToUseSubSections;                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
struct ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Params
{
	float*                                             InUseTessellationComponentScreenSizeFalloff;              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
struct ALandscapeProxy_ChangeTessellationComponentScreenSize_Params
{
	float*                                             InTessellationComponentScreenSize;                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
struct ALandscapeProxy_ChangeLODDistanceFactor_Params
{
	float*                                             InLODDistanceFactor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
struct ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params
{
	float*                                             InComponentScreenSizeToUseSubSections;                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
struct ALandscape_SetLandscapeMaterialVectorParameterValue_Params
{
	struct FName*                                      ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
struct ALandscape_SetLandscapeMaterialTextureParameterValue_Params
{
	struct FName*                                      ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture**                                   Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
struct ALandscape_SetLandscapeMaterialScalarParameterValue_Params
{
	struct FName*                                      ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
struct ALandscape_EditorSetLandscapeMaterial_Params
{
	class UMaterialInterface**                         NewLandscapeMaterial;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.EditorApplySpline
struct ALandscape_EditorApplySpline_Params
{
	class USplineComponent**                           InSplineComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             StartWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EndWidth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             StartSideFalloff;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EndSideFalloff;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             StartRoll;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EndRoll;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumSubdivisions;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRaiseHeights;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLowerHeights;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ULandscapeLayerInfoObject**                  PaintLayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
struct ALandscape_ChangeUseTessellationComponentScreenSizeFalloff_Params
{
	bool*                                              InComponentScreenSizeToUseSubSections;                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
struct ALandscape_ChangeTessellationComponentScreenSizeFalloff_Params
{
	float*                                             InUseTessellationComponentScreenSizeFalloff;              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
struct ALandscape_ChangeTessellationComponentScreenSize_Params
{
	float*                                             InTessellationComponentScreenSize;                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
struct ALandscape_ChangeLODDistanceFactor_Params
{
	float*                                             InLODDistanceFactor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
struct ALandscape_ChangeComponentScreenSizeToUseSubSections_Params
{
	float*                                             InComponentScreenSizeToUseSubSections;                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.WasRecentlyRendered
struct ALandscapeBlueprintBrushBase_WasRecentlyRendered_Params
{
	float*                                             Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.UserConstructionScript
struct ALandscapeBlueprintBrushBase_UserConstructionScript_Params
{
};

// Function Engine.Actor.TearOff
struct ALandscapeBlueprintBrushBase_TearOff_Params
{
};

// Function Engine.Actor.SnapRootComponentTo
struct ALandscapeBlueprintBrushBase_SnapRootComponentTo_Params
{
	class AActor**                                     InParentActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetTickGroup
struct ALandscapeBlueprintBrushBase_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>*                        NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetTickableWhenPaused
struct ALandscapeBlueprintBrushBase_SetTickableWhenPaused_Params
{
	bool*                                              bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetReplicates
struct ALandscapeBlueprintBrushBase_SetReplicates_Params
{
	bool*                                              bInReplicates;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetReplicateMovement
struct ALandscapeBlueprintBrushBase_SetReplicateMovement_Params
{
	bool*                                              bInReplicateMovement;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetOwner
struct ALandscapeBlueprintBrushBase_SetOwner_Params
{
	class AActor**                                     NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetNetDormancy
struct ALandscapeBlueprintBrushBase_SetNetDormancy_Params
{
	TEnumAsByte<ENetDormancy>*                         NewDormancy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetLifeSpan
struct ALandscapeBlueprintBrushBase_SetLifeSpan_Params
{
	float*                                             InLifespan;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorTickInterval
struct ALandscapeBlueprintBrushBase_SetActorTickInterval_Params
{
	float*                                             TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorTickEnabled
struct ALandscapeBlueprintBrushBase_SetActorTickEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorScale3D
struct ALandscapeBlueprintBrushBase_SetActorScale3D_Params
{
	struct FVector*                                    NewScale3D;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorRelativeScale3D
struct ALandscapeBlueprintBrushBase_SetActorRelativeScale3D_Params
{
	struct FVector*                                    NewRelativeScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorHiddenInGame
struct ALandscapeBlueprintBrushBase_SetActorHiddenInGame_Params
{
	bool*                                              bNewHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorEnableCollision
struct ALandscapeBlueprintBrushBase_SetActorEnableCollision_Params
{
	bool*                                              bNewActorEnableCollision;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteComponent
struct ALandscapeBlueprintBrushBase_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteActor
struct ALandscapeBlueprintBrushBase_RemoveTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveTick
struct ALandscapeBlueprintBrushBase_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveRadialDamage
struct ALandscapeBlueprintBrushBase_ReceiveRadialDamage_Params
{
	float*                                             DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceivePointDamage
struct ALandscapeBlueprintBrushBase_ReceivePointDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotFromDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.Actor.ReceiveHit
struct ALandscapeBlueprintBrushBase_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.Actor.ReceiveEndPlay
struct ALandscapeBlueprintBrushBase_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveDestroyed
struct ALandscapeBlueprintBrushBase_ReceiveDestroyed_Params
{
};

// Function Engine.Actor.ReceiveBeginPlay
struct ALandscapeBlueprintBrushBase_ReceiveBeginPlay_Params
{
};

// Function Engine.Actor.ReceiveAnyDamage
struct ALandscapeBlueprintBrushBase_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnReleased
struct ALandscapeBlueprintBrushBase_ReceiveActorOnReleased_Params
{
	struct FKey*                                       ButtonReleased;                                           // (Parm)
};

// Function Engine.Actor.ReceiveActorOnInputTouchLeave
struct ALandscapeBlueprintBrushBase_ReceiveActorOnInputTouchLeave_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnter
struct ALandscapeBlueprintBrushBase_ReceiveActorOnInputTouchEnter_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnd
struct ALandscapeBlueprintBrushBase_ReceiveActorOnInputTouchEnd_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchBegin
struct ALandscapeBlueprintBrushBase_ReceiveActorOnInputTouchBegin_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnClicked
struct ALandscapeBlueprintBrushBase_ReceiveActorOnClicked_Params
{
	struct FKey*                                       ButtonPressed;                                            // (Parm)
};

// Function Engine.Actor.ReceiveActorEndOverlap
struct ALandscapeBlueprintBrushBase_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorEndCursorOver
struct ALandscapeBlueprintBrushBase_ReceiveActorEndCursorOver_Params
{
};

// Function Engine.Actor.ReceiveActorBeginOverlap
struct ALandscapeBlueprintBrushBase_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorBeginCursorOver
struct ALandscapeBlueprintBrushBase_ReceiveActorBeginCursorOver_Params
{
};

// Function Engine.Actor.PrestreamTextures
struct ALandscapeBlueprintBrushBase_PrestreamTextures_Params
{
	float*                                             Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEnableStreaming;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CinematicTextureGroups;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.OnRep_ReplicateMovement
struct ALandscapeBlueprintBrushBase_OnRep_ReplicateMovement_Params
{
};

// Function Engine.Actor.OnRep_ReplicatedMovement
struct ALandscapeBlueprintBrushBase_OnRep_ReplicatedMovement_Params
{
};

// Function Engine.Actor.OnRep_Owner
struct ALandscapeBlueprintBrushBase_OnRep_Owner_Params
{
};

// Function Engine.Actor.OnRep_Instigator
struct ALandscapeBlueprintBrushBase_OnRep_Instigator_Params
{
};

// Function Engine.Actor.OnRep_AttachmentReplication
struct ALandscapeBlueprintBrushBase_OnRep_AttachmentReplication_Params
{
};

// Function Engine.Actor.MakeNoise
struct ALandscapeBlueprintBrushBase_MakeNoise_Params
{
	float*                                             Loudness;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      NoiseInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NoiseLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.MakeMIDForMaterial
struct ALandscapeBlueprintBrushBase_MakeMIDForMaterial_Params
{
	class UMaterialInterface**                         Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_TeleportTo
struct ALandscapeBlueprintBrushBase_K2_TeleportTo_Params
{
	struct FVector*                                    DestLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   DestRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorTransform
struct ALandscapeBlueprintBrushBase_K2_SetActorTransform_Params
{
	struct FTransform*                                 NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRotation
struct ALandscapeBlueprintBrushBase_K2_SetActorRotation_Params
{
	struct FRotator*                                   NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTeleportPhysics;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeTransform
struct ALandscapeBlueprintBrushBase_K2_SetActorRelativeTransform_Params
{
	struct FTransform*                                 NewRelativeTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeRotation
struct ALandscapeBlueprintBrushBase_K2_SetActorRelativeRotation_Params
{
	struct FRotator*                                   NewRelativeRotation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeLocation
struct ALandscapeBlueprintBrushBase_K2_SetActorRelativeLocation_Params
{
	struct FVector*                                    NewRelativeLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocationAndRotation
struct ALandscapeBlueprintBrushBase_K2_SetActorLocationAndRotation_Params
{
	struct FVector*                                    NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocation
struct ALandscapeBlueprintBrushBase_K2_SetActorLocation_Params
{
	struct FVector*                                    NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_OnReset
struct ALandscapeBlueprintBrushBase_K2_OnReset_Params
{
};

// Function Engine.Actor.K2_OnEndViewTarget
struct ALandscapeBlueprintBrushBase_K2_OnEndViewTarget_Params
{
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_OnBecomeViewTarget
struct ALandscapeBlueprintBrushBase_K2_OnBecomeViewTarget_Params
{
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_GetRootComponent
struct ALandscapeBlueprintBrushBase_K2_GetRootComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.K2_GetComponentsByClass
struct ALandscapeBlueprintBrushBase_K2_GetComponentsByClass_Params
{
	class UClass**                                     ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.K2_GetActorRotation
struct ALandscapeBlueprintBrushBase_K2_GetActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorLocation
struct ALandscapeBlueprintBrushBase_K2_GetActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_DetachFromActor
struct ALandscapeBlueprintBrushBase_K2_DetachFromActor_Params
{
	EDetachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyComponent
struct ALandscapeBlueprintBrushBase_K2_DestroyComponent_Params
{
	class UActorComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyActor
struct ALandscapeBlueprintBrushBase_K2_DestroyActor_Params
{
};

// Function Engine.Actor.K2_AttachToComponent
struct ALandscapeBlueprintBrushBase_K2_AttachToComponent_Params
{
	class USceneComponent**                            Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachToActor
struct ALandscapeBlueprintBrushBase_K2_AttachToActor_Params
{
	class AActor**                                     ParentActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentToActor
struct ALandscapeBlueprintBrushBase_K2_AttachRootComponentToActor_Params
{
	class AActor**                                     InParentActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      AttachLocationType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentTo
struct ALandscapeBlueprintBrushBase_K2_AttachRootComponentTo_Params
{
	class USceneComponent**                            InParent;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      AttachLocationType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldTransform
struct ALandscapeBlueprintBrushBase_K2_AddActorWorldTransform_Params
{
	struct FTransform*                                 DeltaTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldRotation
struct ALandscapeBlueprintBrushBase_K2_AddActorWorldRotation_Params
{
	struct FRotator*                                   DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldOffset
struct ALandscapeBlueprintBrushBase_K2_AddActorWorldOffset_Params
{
	struct FVector*                                    DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalTransform
struct ALandscapeBlueprintBrushBase_K2_AddActorLocalTransform_Params
{
	struct FTransform*                                 NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalRotation
struct ALandscapeBlueprintBrushBase_K2_AddActorLocalRotation_Params
{
	struct FRotator*                                   DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalOffset
struct ALandscapeBlueprintBrushBase_K2_AddActorLocalOffset_Params
{
	struct FVector*                                    DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.IsOverlappingActor
struct ALandscapeBlueprintBrushBase_IsOverlappingActor_Params
{
	class AActor**                                     Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsChildActor
struct ALandscapeBlueprintBrushBase_IsChildActor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsActorTickEnabled
struct ALandscapeBlueprintBrushBase_IsActorTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsActorBeingDestroyed
struct ALandscapeBlueprintBrushBase_IsActorBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.HasAuthority
struct ALandscapeBlueprintBrushBase_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetVerticalDistanceTo
struct ALandscapeBlueprintBrushBase_GetVerticalDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetVelocity
struct ALandscapeBlueprintBrushBase_GetVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetTransform
struct ALandscapeBlueprintBrushBase_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.Actor.GetTickableWhenPaused
struct ALandscapeBlueprintBrushBase_GetTickableWhenPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetSquaredDistanceTo
struct ALandscapeBlueprintBrushBase_GetSquaredDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetRemoteRole
struct ALandscapeBlueprintBrushBase_GetRemoteRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetParentComponent
struct ALandscapeBlueprintBrushBase_GetParentComponent_Params
{
	class UChildActorComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.GetParentActor
struct ALandscapeBlueprintBrushBase_GetParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetOwner
struct ALandscapeBlueprintBrushBase_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetOverlappingComponents
struct ALandscapeBlueprintBrushBase_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OverlappingComponents;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.Actor.GetOverlappingActors
struct ALandscapeBlueprintBrushBase_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (Parm, OutParm, ZeroConstructor)
	class UClass**                                     ClassFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetLocalRole
struct ALandscapeBlueprintBrushBase_GetLocalRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetLifeSpan
struct ALandscapeBlueprintBrushBase_GetLifeSpan_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInstigatorController
struct ALandscapeBlueprintBrushBase_GetInstigatorController_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInstigator
struct ALandscapeBlueprintBrushBase_GetInstigator_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputVectorAxisValue
struct ALandscapeBlueprintBrushBase_GetInputVectorAxisValue_Params
{
	struct FKey*                                       InputAxisKey;                                             // (ConstParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisValue
struct ALandscapeBlueprintBrushBase_GetInputAxisValue_Params
{
	struct FName*                                      InputAxisName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisKeyValue
struct ALandscapeBlueprintBrushBase_GetInputAxisKeyValue_Params
{
	struct FKey*                                       InputAxisKey;                                             // (ConstParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDotProductTo
struct ALandscapeBlueprintBrushBase_GetHorizontalDotProductTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDistanceTo
struct ALandscapeBlueprintBrushBase_GetHorizontalDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetGameTimeSinceCreation
struct ALandscapeBlueprintBrushBase_GetGameTimeSinceCreation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetDotProductTo
struct ALandscapeBlueprintBrushBase_GetDotProductTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetDistanceTo
struct ALandscapeBlueprintBrushBase_GetDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetComponentsByTag
struct ALandscapeBlueprintBrushBase_GetComponentsByTag_Params
{
	class UClass**                                     ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.GetComponentsByInterface
struct ALandscapeBlueprintBrushBase_GetComponentsByInterface_Params
{
	class UClass**                                     Interface;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.GetComponentByClass
struct ALandscapeBlueprintBrushBase_GetComponentByClass_Params
{
	class UClass**                                     ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentSocketName
struct ALandscapeBlueprintBrushBase_GetAttachParentSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentActor
struct ALandscapeBlueprintBrushBase_GetAttachParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetAttachedActors
struct ALandscapeBlueprintBrushBase_GetAttachedActors_Params
{
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
	bool*                                              bResetArray;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetAllChildActors
struct ALandscapeBlueprintBrushBase_GetAllChildActors_Params
{
	TArray<class AActor*>                              ChildActors;                                              // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIncludeDescendants;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetActorUpVector
struct ALandscapeBlueprintBrushBase_GetActorUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorTimeDilation
struct ALandscapeBlueprintBrushBase_GetActorTimeDilation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorTickInterval
struct ALandscapeBlueprintBrushBase_GetActorTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorScale3D
struct ALandscapeBlueprintBrushBase_GetActorScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorRightVector
struct ALandscapeBlueprintBrushBase_GetActorRightVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorRelativeScale3D
struct ALandscapeBlueprintBrushBase_GetActorRelativeScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorForwardVector
struct ALandscapeBlueprintBrushBase_GetActorForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorEyesViewPoint
struct ALandscapeBlueprintBrushBase_GetActorEyesViewPoint_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetActorEnableCollision
struct ALandscapeBlueprintBrushBase_GetActorEnableCollision_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorBounds
struct ALandscapeBlueprintBrushBase_GetActorBounds_Params
{
	bool*                                              bOnlyCollidingComponents;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ForceNetUpdate
struct ALandscapeBlueprintBrushBase_ForceNetUpdate_Params
{
};

// Function Engine.Actor.FlushNetDormancy
struct ALandscapeBlueprintBrushBase_FlushNetDormancy_Params
{
};

// Function Engine.Actor.EnableInput
struct ALandscapeBlueprintBrushBase_EnableInput_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.DisableInput
struct ALandscapeBlueprintBrushBase_DisableInput_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.DetachRootComponentFromParent
struct ALandscapeBlueprintBrushBase_DetachRootComponentFromParent_Params
{
	bool*                                              bMaintainWorldPosition;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteComponent
struct ALandscapeBlueprintBrushBase_AddTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteActor
struct ALandscapeBlueprintBrushBase_AddTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddComponent
struct ALandscapeBlueprintBrushBase_AddComponent_Params
{
	struct FName*                                      TemplateName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualAttachment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 RelativeTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject**                                    ComponentTemplateContext;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.ActorHasTag
struct ALandscapeBlueprintBrushBase_ActorHasTag_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
struct ULandscapeComponent_GetMaterialInstanceDynamic_Params
{
	int*                                               InIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
struct ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Params
{
	struct FVector*                                    InLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName*                                      InPaintLayerName;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
struct ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Params
{
	struct FVector*                                    InLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class ULandscapeLayerInfoObject**                  PaintLayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.WasRecentlyRendered
struct ALandscapeGizmoActor_WasRecentlyRendered_Params
{
	float*                                             Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.UserConstructionScript
struct ALandscapeGizmoActor_UserConstructionScript_Params
{
};

// Function Engine.Actor.TearOff
struct ALandscapeGizmoActor_TearOff_Params
{
};

// Function Engine.Actor.SnapRootComponentTo
struct ALandscapeGizmoActor_SnapRootComponentTo_Params
{
	class AActor**                                     InParentActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetTickGroup
struct ALandscapeGizmoActor_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>*                        NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetTickableWhenPaused
struct ALandscapeGizmoActor_SetTickableWhenPaused_Params
{
	bool*                                              bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetReplicates
struct ALandscapeGizmoActor_SetReplicates_Params
{
	bool*                                              bInReplicates;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetReplicateMovement
struct ALandscapeGizmoActor_SetReplicateMovement_Params
{
	bool*                                              bInReplicateMovement;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetOwner
struct ALandscapeGizmoActor_SetOwner_Params
{
	class AActor**                                     NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetNetDormancy
struct ALandscapeGizmoActor_SetNetDormancy_Params
{
	TEnumAsByte<ENetDormancy>*                         NewDormancy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetLifeSpan
struct ALandscapeGizmoActor_SetLifeSpan_Params
{
	float*                                             InLifespan;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorTickInterval
struct ALandscapeGizmoActor_SetActorTickInterval_Params
{
	float*                                             TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorTickEnabled
struct ALandscapeGizmoActor_SetActorTickEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorScale3D
struct ALandscapeGizmoActor_SetActorScale3D_Params
{
	struct FVector*                                    NewScale3D;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorRelativeScale3D
struct ALandscapeGizmoActor_SetActorRelativeScale3D_Params
{
	struct FVector*                                    NewRelativeScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorHiddenInGame
struct ALandscapeGizmoActor_SetActorHiddenInGame_Params
{
	bool*                                              bNewHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorEnableCollision
struct ALandscapeGizmoActor_SetActorEnableCollision_Params
{
	bool*                                              bNewActorEnableCollision;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteComponent
struct ALandscapeGizmoActor_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteActor
struct ALandscapeGizmoActor_RemoveTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveTick
struct ALandscapeGizmoActor_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveRadialDamage
struct ALandscapeGizmoActor_ReceiveRadialDamage_Params
{
	float*                                             DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceivePointDamage
struct ALandscapeGizmoActor_ReceivePointDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotFromDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.Actor.ReceiveHit
struct ALandscapeGizmoActor_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.Actor.ReceiveEndPlay
struct ALandscapeGizmoActor_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveDestroyed
struct ALandscapeGizmoActor_ReceiveDestroyed_Params
{
};

// Function Engine.Actor.ReceiveBeginPlay
struct ALandscapeGizmoActor_ReceiveBeginPlay_Params
{
};

// Function Engine.Actor.ReceiveAnyDamage
struct ALandscapeGizmoActor_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnReleased
struct ALandscapeGizmoActor_ReceiveActorOnReleased_Params
{
	struct FKey*                                       ButtonReleased;                                           // (Parm)
};

// Function Engine.Actor.ReceiveActorOnInputTouchLeave
struct ALandscapeGizmoActor_ReceiveActorOnInputTouchLeave_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnter
struct ALandscapeGizmoActor_ReceiveActorOnInputTouchEnter_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnd
struct ALandscapeGizmoActor_ReceiveActorOnInputTouchEnd_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchBegin
struct ALandscapeGizmoActor_ReceiveActorOnInputTouchBegin_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnClicked
struct ALandscapeGizmoActor_ReceiveActorOnClicked_Params
{
	struct FKey*                                       ButtonPressed;                                            // (Parm)
};

// Function Engine.Actor.ReceiveActorEndOverlap
struct ALandscapeGizmoActor_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorEndCursorOver
struct ALandscapeGizmoActor_ReceiveActorEndCursorOver_Params
{
};

// Function Engine.Actor.ReceiveActorBeginOverlap
struct ALandscapeGizmoActor_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorBeginCursorOver
struct ALandscapeGizmoActor_ReceiveActorBeginCursorOver_Params
{
};

// Function Engine.Actor.PrestreamTextures
struct ALandscapeGizmoActor_PrestreamTextures_Params
{
	float*                                             Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEnableStreaming;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CinematicTextureGroups;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.OnRep_ReplicateMovement
struct ALandscapeGizmoActor_OnRep_ReplicateMovement_Params
{
};

// Function Engine.Actor.OnRep_ReplicatedMovement
struct ALandscapeGizmoActor_OnRep_ReplicatedMovement_Params
{
};

// Function Engine.Actor.OnRep_Owner
struct ALandscapeGizmoActor_OnRep_Owner_Params
{
};

// Function Engine.Actor.OnRep_Instigator
struct ALandscapeGizmoActor_OnRep_Instigator_Params
{
};

// Function Engine.Actor.OnRep_AttachmentReplication
struct ALandscapeGizmoActor_OnRep_AttachmentReplication_Params
{
};

// Function Engine.Actor.MakeNoise
struct ALandscapeGizmoActor_MakeNoise_Params
{
	float*                                             Loudness;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      NoiseInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NoiseLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.MakeMIDForMaterial
struct ALandscapeGizmoActor_MakeMIDForMaterial_Params
{
	class UMaterialInterface**                         Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_TeleportTo
struct ALandscapeGizmoActor_K2_TeleportTo_Params
{
	struct FVector*                                    DestLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   DestRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorTransform
struct ALandscapeGizmoActor_K2_SetActorTransform_Params
{
	struct FTransform*                                 NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRotation
struct ALandscapeGizmoActor_K2_SetActorRotation_Params
{
	struct FRotator*                                   NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTeleportPhysics;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeTransform
struct ALandscapeGizmoActor_K2_SetActorRelativeTransform_Params
{
	struct FTransform*                                 NewRelativeTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeRotation
struct ALandscapeGizmoActor_K2_SetActorRelativeRotation_Params
{
	struct FRotator*                                   NewRelativeRotation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeLocation
struct ALandscapeGizmoActor_K2_SetActorRelativeLocation_Params
{
	struct FVector*                                    NewRelativeLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocationAndRotation
struct ALandscapeGizmoActor_K2_SetActorLocationAndRotation_Params
{
	struct FVector*                                    NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocation
struct ALandscapeGizmoActor_K2_SetActorLocation_Params
{
	struct FVector*                                    NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_OnReset
struct ALandscapeGizmoActor_K2_OnReset_Params
{
};

// Function Engine.Actor.K2_OnEndViewTarget
struct ALandscapeGizmoActor_K2_OnEndViewTarget_Params
{
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_OnBecomeViewTarget
struct ALandscapeGizmoActor_K2_OnBecomeViewTarget_Params
{
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_GetRootComponent
struct ALandscapeGizmoActor_K2_GetRootComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.K2_GetComponentsByClass
struct ALandscapeGizmoActor_K2_GetComponentsByClass_Params
{
	class UClass**                                     ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.K2_GetActorRotation
struct ALandscapeGizmoActor_K2_GetActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorLocation
struct ALandscapeGizmoActor_K2_GetActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_DetachFromActor
struct ALandscapeGizmoActor_K2_DetachFromActor_Params
{
	EDetachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyComponent
struct ALandscapeGizmoActor_K2_DestroyComponent_Params
{
	class UActorComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyActor
struct ALandscapeGizmoActor_K2_DestroyActor_Params
{
};

// Function Engine.Actor.K2_AttachToComponent
struct ALandscapeGizmoActor_K2_AttachToComponent_Params
{
	class USceneComponent**                            Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachToActor
struct ALandscapeGizmoActor_K2_AttachToActor_Params
{
	class AActor**                                     ParentActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentToActor
struct ALandscapeGizmoActor_K2_AttachRootComponentToActor_Params
{
	class AActor**                                     InParentActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      AttachLocationType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentTo
struct ALandscapeGizmoActor_K2_AttachRootComponentTo_Params
{
	class USceneComponent**                            InParent;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      AttachLocationType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldTransform
struct ALandscapeGizmoActor_K2_AddActorWorldTransform_Params
{
	struct FTransform*                                 DeltaTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldRotation
struct ALandscapeGizmoActor_K2_AddActorWorldRotation_Params
{
	struct FRotator*                                   DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldOffset
struct ALandscapeGizmoActor_K2_AddActorWorldOffset_Params
{
	struct FVector*                                    DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalTransform
struct ALandscapeGizmoActor_K2_AddActorLocalTransform_Params
{
	struct FTransform*                                 NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalRotation
struct ALandscapeGizmoActor_K2_AddActorLocalRotation_Params
{
	struct FRotator*                                   DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalOffset
struct ALandscapeGizmoActor_K2_AddActorLocalOffset_Params
{
	struct FVector*                                    DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.IsOverlappingActor
struct ALandscapeGizmoActor_IsOverlappingActor_Params
{
	class AActor**                                     Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsChildActor
struct ALandscapeGizmoActor_IsChildActor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsActorTickEnabled
struct ALandscapeGizmoActor_IsActorTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsActorBeingDestroyed
struct ALandscapeGizmoActor_IsActorBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.HasAuthority
struct ALandscapeGizmoActor_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetVerticalDistanceTo
struct ALandscapeGizmoActor_GetVerticalDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetVelocity
struct ALandscapeGizmoActor_GetVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetTransform
struct ALandscapeGizmoActor_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.Actor.GetTickableWhenPaused
struct ALandscapeGizmoActor_GetTickableWhenPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetSquaredDistanceTo
struct ALandscapeGizmoActor_GetSquaredDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetRemoteRole
struct ALandscapeGizmoActor_GetRemoteRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetParentComponent
struct ALandscapeGizmoActor_GetParentComponent_Params
{
	class UChildActorComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.GetParentActor
struct ALandscapeGizmoActor_GetParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetOwner
struct ALandscapeGizmoActor_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetOverlappingComponents
struct ALandscapeGizmoActor_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OverlappingComponents;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.Actor.GetOverlappingActors
struct ALandscapeGizmoActor_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (Parm, OutParm, ZeroConstructor)
	class UClass**                                     ClassFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetLocalRole
struct ALandscapeGizmoActor_GetLocalRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetLifeSpan
struct ALandscapeGizmoActor_GetLifeSpan_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInstigatorController
struct ALandscapeGizmoActor_GetInstigatorController_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInstigator
struct ALandscapeGizmoActor_GetInstigator_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputVectorAxisValue
struct ALandscapeGizmoActor_GetInputVectorAxisValue_Params
{
	struct FKey*                                       InputAxisKey;                                             // (ConstParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisValue
struct ALandscapeGizmoActor_GetInputAxisValue_Params
{
	struct FName*                                      InputAxisName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisKeyValue
struct ALandscapeGizmoActor_GetInputAxisKeyValue_Params
{
	struct FKey*                                       InputAxisKey;                                             // (ConstParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDotProductTo
struct ALandscapeGizmoActor_GetHorizontalDotProductTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDistanceTo
struct ALandscapeGizmoActor_GetHorizontalDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetGameTimeSinceCreation
struct ALandscapeGizmoActor_GetGameTimeSinceCreation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetDotProductTo
struct ALandscapeGizmoActor_GetDotProductTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetDistanceTo
struct ALandscapeGizmoActor_GetDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetComponentsByTag
struct ALandscapeGizmoActor_GetComponentsByTag_Params
{
	class UClass**                                     ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.GetComponentsByInterface
struct ALandscapeGizmoActor_GetComponentsByInterface_Params
{
	class UClass**                                     Interface;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.GetComponentByClass
struct ALandscapeGizmoActor_GetComponentByClass_Params
{
	class UClass**                                     ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentSocketName
struct ALandscapeGizmoActor_GetAttachParentSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentActor
struct ALandscapeGizmoActor_GetAttachParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetAttachedActors
struct ALandscapeGizmoActor_GetAttachedActors_Params
{
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
	bool*                                              bResetArray;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetAllChildActors
struct ALandscapeGizmoActor_GetAllChildActors_Params
{
	TArray<class AActor*>                              ChildActors;                                              // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIncludeDescendants;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetActorUpVector
struct ALandscapeGizmoActor_GetActorUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorTimeDilation
struct ALandscapeGizmoActor_GetActorTimeDilation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorTickInterval
struct ALandscapeGizmoActor_GetActorTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorScale3D
struct ALandscapeGizmoActor_GetActorScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorRightVector
struct ALandscapeGizmoActor_GetActorRightVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorRelativeScale3D
struct ALandscapeGizmoActor_GetActorRelativeScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorForwardVector
struct ALandscapeGizmoActor_GetActorForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorEyesViewPoint
struct ALandscapeGizmoActor_GetActorEyesViewPoint_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetActorEnableCollision
struct ALandscapeGizmoActor_GetActorEnableCollision_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorBounds
struct ALandscapeGizmoActor_GetActorBounds_Params
{
	bool*                                              bOnlyCollidingComponents;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ForceNetUpdate
struct ALandscapeGizmoActor_ForceNetUpdate_Params
{
};

// Function Engine.Actor.FlushNetDormancy
struct ALandscapeGizmoActor_FlushNetDormancy_Params
{
};

// Function Engine.Actor.EnableInput
struct ALandscapeGizmoActor_EnableInput_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.DisableInput
struct ALandscapeGizmoActor_DisableInput_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.DetachRootComponentFromParent
struct ALandscapeGizmoActor_DetachRootComponentFromParent_Params
{
	bool*                                              bMaintainWorldPosition;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteComponent
struct ALandscapeGizmoActor_AddTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteActor
struct ALandscapeGizmoActor_AddTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddComponent
struct ALandscapeGizmoActor_AddComponent_Params
{
	struct FName*                                      TemplateName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualAttachment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 RelativeTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject**                                    ComponentTemplateContext;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.ActorHasTag
struct ALandscapeGizmoActor_ActorHasTag_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.WasRecentlyRendered
struct ALandscapeGizmoActiveActor_WasRecentlyRendered_Params
{
	float*                                             Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.UserConstructionScript
struct ALandscapeGizmoActiveActor_UserConstructionScript_Params
{
};

// Function Engine.Actor.TearOff
struct ALandscapeGizmoActiveActor_TearOff_Params
{
};

// Function Engine.Actor.SnapRootComponentTo
struct ALandscapeGizmoActiveActor_SnapRootComponentTo_Params
{
	class AActor**                                     InParentActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetTickGroup
struct ALandscapeGizmoActiveActor_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>*                        NewTickGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetTickableWhenPaused
struct ALandscapeGizmoActiveActor_SetTickableWhenPaused_Params
{
	bool*                                              bTickableWhenPaused;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetReplicates
struct ALandscapeGizmoActiveActor_SetReplicates_Params
{
	bool*                                              bInReplicates;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetReplicateMovement
struct ALandscapeGizmoActiveActor_SetReplicateMovement_Params
{
	bool*                                              bInReplicateMovement;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetOwner
struct ALandscapeGizmoActiveActor_SetOwner_Params
{
	class AActor**                                     NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetNetDormancy
struct ALandscapeGizmoActiveActor_SetNetDormancy_Params
{
	TEnumAsByte<ENetDormancy>*                         NewDormancy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetLifeSpan
struct ALandscapeGizmoActiveActor_SetLifeSpan_Params
{
	float*                                             InLifespan;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorTickInterval
struct ALandscapeGizmoActiveActor_SetActorTickInterval_Params
{
	float*                                             TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorTickEnabled
struct ALandscapeGizmoActiveActor_SetActorTickEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorScale3D
struct ALandscapeGizmoActiveActor_SetActorScale3D_Params
{
	struct FVector*                                    NewScale3D;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorRelativeScale3D
struct ALandscapeGizmoActiveActor_SetActorRelativeScale3D_Params
{
	struct FVector*                                    NewRelativeScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorHiddenInGame
struct ALandscapeGizmoActiveActor_SetActorHiddenInGame_Params
{
	bool*                                              bNewHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.SetActorEnableCollision
struct ALandscapeGizmoActiveActor_SetActorEnableCollision_Params
{
	bool*                                              bNewActorEnableCollision;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteComponent
struct ALandscapeGizmoActiveActor_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteActor
struct ALandscapeGizmoActiveActor_RemoveTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveTick
struct ALandscapeGizmoActiveActor_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveRadialDamage
struct ALandscapeGizmoActiveActor_ReceiveRadialDamage_Params
{
	float*                                             DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceivePointDamage
struct ALandscapeGizmoActiveActor_ReceivePointDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotFromDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.Actor.ReceiveHit
struct ALandscapeGizmoActiveActor_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.Actor.ReceiveEndPlay
struct ALandscapeGizmoActiveActor_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveDestroyed
struct ALandscapeGizmoActiveActor_ReceiveDestroyed_Params
{
};

// Function Engine.Actor.ReceiveBeginPlay
struct ALandscapeGizmoActiveActor_ReceiveBeginPlay_Params
{
};

// Function Engine.Actor.ReceiveAnyDamage
struct ALandscapeGizmoActiveActor_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnReleased
struct ALandscapeGizmoActiveActor_ReceiveActorOnReleased_Params
{
	struct FKey*                                       ButtonReleased;                                           // (Parm)
};

// Function Engine.Actor.ReceiveActorOnInputTouchLeave
struct ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchLeave_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnter
struct ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchEnter_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnd
struct ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchEnd_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchBegin
struct ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchBegin_Params
{
	TEnumAsByte<ETouchIndex>*                          FingerIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnClicked
struct ALandscapeGizmoActiveActor_ReceiveActorOnClicked_Params
{
	struct FKey*                                       ButtonPressed;                                            // (Parm)
};

// Function Engine.Actor.ReceiveActorEndOverlap
struct ALandscapeGizmoActiveActor_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorEndCursorOver
struct ALandscapeGizmoActiveActor_ReceiveActorEndCursorOver_Params
{
};

// Function Engine.Actor.ReceiveActorBeginOverlap
struct ALandscapeGizmoActiveActor_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorBeginCursorOver
struct ALandscapeGizmoActiveActor_ReceiveActorBeginCursorOver_Params
{
};

// Function Engine.Actor.PrestreamTextures
struct ALandscapeGizmoActiveActor_PrestreamTextures_Params
{
	float*                                             Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEnableStreaming;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CinematicTextureGroups;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.OnRep_ReplicateMovement
struct ALandscapeGizmoActiveActor_OnRep_ReplicateMovement_Params
{
};

// Function Engine.Actor.OnRep_ReplicatedMovement
struct ALandscapeGizmoActiveActor_OnRep_ReplicatedMovement_Params
{
};

// Function Engine.Actor.OnRep_Owner
struct ALandscapeGizmoActiveActor_OnRep_Owner_Params
{
};

// Function Engine.Actor.OnRep_Instigator
struct ALandscapeGizmoActiveActor_OnRep_Instigator_Params
{
};

// Function Engine.Actor.OnRep_AttachmentReplication
struct ALandscapeGizmoActiveActor_OnRep_AttachmentReplication_Params
{
};

// Function Engine.Actor.MakeNoise
struct ALandscapeGizmoActiveActor_MakeNoise_Params
{
	float*                                             Loudness;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      NoiseInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NoiseLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.MakeMIDForMaterial
struct ALandscapeGizmoActiveActor_MakeMIDForMaterial_Params
{
	class UMaterialInterface**                         Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_TeleportTo
struct ALandscapeGizmoActiveActor_K2_TeleportTo_Params
{
	struct FVector*                                    DestLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   DestRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorTransform
struct ALandscapeGizmoActiveActor_K2_SetActorTransform_Params
{
	struct FTransform*                                 NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRotation
struct ALandscapeGizmoActiveActor_K2_SetActorRotation_Params
{
	struct FRotator*                                   NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTeleportPhysics;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeTransform
struct ALandscapeGizmoActiveActor_K2_SetActorRelativeTransform_Params
{
	struct FTransform*                                 NewRelativeTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeRotation
struct ALandscapeGizmoActiveActor_K2_SetActorRelativeRotation_Params
{
	struct FRotator*                                   NewRelativeRotation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeLocation
struct ALandscapeGizmoActiveActor_K2_SetActorRelativeLocation_Params
{
	struct FVector*                                    NewRelativeLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocationAndRotation
struct ALandscapeGizmoActiveActor_K2_SetActorLocationAndRotation_Params
{
	struct FVector*                                    NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   NewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocation
struct ALandscapeGizmoActiveActor_K2_SetActorLocation_Params
{
	struct FVector*                                    NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_OnReset
struct ALandscapeGizmoActiveActor_K2_OnReset_Params
{
};

// Function Engine.Actor.K2_OnEndViewTarget
struct ALandscapeGizmoActiveActor_K2_OnEndViewTarget_Params
{
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_OnBecomeViewTarget
struct ALandscapeGizmoActiveActor_K2_OnBecomeViewTarget_Params
{
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_GetRootComponent
struct ALandscapeGizmoActiveActor_K2_GetRootComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.K2_GetComponentsByClass
struct ALandscapeGizmoActiveActor_K2_GetComponentsByClass_Params
{
	class UClass**                                     ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.K2_GetActorRotation
struct ALandscapeGizmoActiveActor_K2_GetActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorLocation
struct ALandscapeGizmoActiveActor_K2_GetActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.K2_DetachFromActor
struct ALandscapeGizmoActiveActor_K2_DetachFromActor_Params
{
	EDetachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EDetachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyComponent
struct ALandscapeGizmoActiveActor_K2_DestroyComponent_Params
{
	class UActorComponent**                            Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyActor
struct ALandscapeGizmoActiveActor_K2_DestroyActor_Params
{
};

// Function Engine.Actor.K2_AttachToComponent
struct ALandscapeGizmoActiveActor_K2_AttachToComponent_Params
{
	class USceneComponent**                            Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachToActor
struct ALandscapeGizmoActiveActor_K2_AttachToActor_Params
{
	class AActor**                                     ParentActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   LocationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   RotationRule;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EAttachmentRule*                                   ScaleRule;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentToActor
struct ALandscapeGizmoActiveActor_K2_AttachRootComponentToActor_Params
{
	class AActor**                                     InParentActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      AttachLocationType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentTo
struct ALandscapeGizmoActiveActor_K2_AttachRootComponentTo_Params
{
	class USceneComponent**                            InParent;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      AttachLocationType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWeldSimulatedBodies;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldTransform
struct ALandscapeGizmoActiveActor_K2_AddActorWorldTransform_Params
{
	struct FTransform*                                 DeltaTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldRotation
struct ALandscapeGizmoActiveActor_K2_AddActorWorldRotation_Params
{
	struct FRotator*                                   DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldOffset
struct ALandscapeGizmoActiveActor_K2_AddActorWorldOffset_Params
{
	struct FVector*                                    DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalTransform
struct ALandscapeGizmoActiveActor_K2_AddActorLocalTransform_Params
{
	struct FTransform*                                 NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalRotation
struct ALandscapeGizmoActiveActor_K2_AddActorLocalRotation_Params
{
	struct FRotator*                                   DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalOffset
struct ALandscapeGizmoActiveActor_K2_AddActorLocalOffset_Params
{
	struct FVector*                                    DeltaLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSweep;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (Parm, OutParm, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.IsOverlappingActor
struct ALandscapeGizmoActiveActor_IsOverlappingActor_Params
{
	class AActor**                                     Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsChildActor
struct ALandscapeGizmoActiveActor_IsChildActor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsActorTickEnabled
struct ALandscapeGizmoActiveActor_IsActorTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.IsActorBeingDestroyed
struct ALandscapeGizmoActiveActor_IsActorBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.HasAuthority
struct ALandscapeGizmoActiveActor_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetVerticalDistanceTo
struct ALandscapeGizmoActiveActor_GetVerticalDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetVelocity
struct ALandscapeGizmoActiveActor_GetVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetTransform
struct ALandscapeGizmoActiveActor_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.Actor.GetTickableWhenPaused
struct ALandscapeGizmoActiveActor_GetTickableWhenPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetSquaredDistanceTo
struct ALandscapeGizmoActiveActor_GetSquaredDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetRemoteRole
struct ALandscapeGizmoActiveActor_GetRemoteRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetParentComponent
struct ALandscapeGizmoActiveActor_GetParentComponent_Params
{
	class UChildActorComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.GetParentActor
struct ALandscapeGizmoActiveActor_GetParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetOwner
struct ALandscapeGizmoActiveActor_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetOverlappingComponents
struct ALandscapeGizmoActiveActor_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OverlappingComponents;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.Actor.GetOverlappingActors
struct ALandscapeGizmoActiveActor_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (Parm, OutParm, ZeroConstructor)
	class UClass**                                     ClassFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetLocalRole
struct ALandscapeGizmoActiveActor_GetLocalRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetLifeSpan
struct ALandscapeGizmoActiveActor_GetLifeSpan_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInstigatorController
struct ALandscapeGizmoActiveActor_GetInstigatorController_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInstigator
struct ALandscapeGizmoActiveActor_GetInstigator_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputVectorAxisValue
struct ALandscapeGizmoActiveActor_GetInputVectorAxisValue_Params
{
	struct FKey*                                       InputAxisKey;                                             // (ConstParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisValue
struct ALandscapeGizmoActiveActor_GetInputAxisValue_Params
{
	struct FName*                                      InputAxisName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisKeyValue
struct ALandscapeGizmoActiveActor_GetInputAxisKeyValue_Params
{
	struct FKey*                                       InputAxisKey;                                             // (ConstParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDotProductTo
struct ALandscapeGizmoActiveActor_GetHorizontalDotProductTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDistanceTo
struct ALandscapeGizmoActiveActor_GetHorizontalDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetGameTimeSinceCreation
struct ALandscapeGizmoActiveActor_GetGameTimeSinceCreation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetDotProductTo
struct ALandscapeGizmoActiveActor_GetDotProductTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetDistanceTo
struct ALandscapeGizmoActiveActor_GetDistanceTo_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetComponentsByTag
struct ALandscapeGizmoActiveActor_GetComponentsByTag_Params
{
	class UClass**                                     ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.GetComponentsByInterface
struct ALandscapeGizmoActiveActor_GetComponentsByInterface_Params
{
	class UClass**                                     Interface;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.Actor.GetComponentByClass
struct ALandscapeGizmoActiveActor_GetComponentByClass_Params
{
	class UClass**                                     ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentSocketName
struct ALandscapeGizmoActiveActor_GetAttachParentSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentActor
struct ALandscapeGizmoActiveActor_GetAttachParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetAttachedActors
struct ALandscapeGizmoActiveActor_GetAttachedActors_Params
{
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
	bool*                                              bResetArray;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetAllChildActors
struct ALandscapeGizmoActiveActor_GetAllChildActors_Params
{
	TArray<class AActor*>                              ChildActors;                                              // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIncludeDescendants;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetActorUpVector
struct ALandscapeGizmoActiveActor_GetActorUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorTimeDilation
struct ALandscapeGizmoActiveActor_GetActorTimeDilation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorTickInterval
struct ALandscapeGizmoActiveActor_GetActorTickInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorScale3D
struct ALandscapeGizmoActiveActor_GetActorScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorRightVector
struct ALandscapeGizmoActiveActor_GetActorRightVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorRelativeScale3D
struct ALandscapeGizmoActiveActor_GetActorRelativeScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorForwardVector
struct ALandscapeGizmoActiveActor_GetActorForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorEyesViewPoint
struct ALandscapeGizmoActiveActor_GetActorEyesViewPoint_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.GetActorEnableCollision
struct ALandscapeGizmoActiveActor_GetActorEnableCollision_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.Actor.GetActorBounds
struct ALandscapeGizmoActiveActor_GetActorBounds_Params
{
	bool*                                              bOnlyCollidingComponents;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.ForceNetUpdate
struct ALandscapeGizmoActiveActor_ForceNetUpdate_Params
{
};

// Function Engine.Actor.FlushNetDormancy
struct ALandscapeGizmoActiveActor_FlushNetDormancy_Params
{
};

// Function Engine.Actor.EnableInput
struct ALandscapeGizmoActiveActor_EnableInput_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.DisableInput
struct ALandscapeGizmoActiveActor_DisableInput_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.DetachRootComponentFromParent
struct ALandscapeGizmoActiveActor_DetachRootComponentFromParent_Params
{
	bool*                                              bMaintainWorldPosition;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteComponent
struct ALandscapeGizmoActiveActor_AddTickPrerequisiteComponent_Params
{
	class UActorComponent**                            PrerequisiteComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteActor
struct ALandscapeGizmoActiveActor_AddTickPrerequisiteActor_Params
{
	class AActor**                                     PrerequisiteActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.Actor.AddComponent
struct ALandscapeGizmoActiveActor_AddComponent_Params
{
	struct FName*                                      TemplateName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualAttachment;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 RelativeTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject**                                    ComponentTemplateContext;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Engine.Actor.ActorHasTag
struct ALandscapeGizmoActiveActor_ActorHasTag_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.WakeRigidBody
struct ULandscapeGizmoRenderComponent_WakeRigidBody_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.WakeAllRigidBodies
struct ULandscapeGizmoRenderComponent_WakeAllRigidBodies_Params
{
};

// Function Engine.PrimitiveComponent.SetWalkableSlopeOverride
struct ULandscapeGizmoRenderComponent_SetWalkableSlopeOverride_Params
{
	struct FWalkableSlopeOverride*                     NewOverride;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetUseCCD
struct ULandscapeGizmoRenderComponent_SetUseCCD_Params
{
	bool*                                              InUseCCD;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetTranslucentSortPriority
struct ULandscapeGizmoRenderComponent_SetTranslucentSortPriority_Params
{
	int*                                               NewTranslucentSortPriority;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights
struct ULandscapeGizmoRenderComponent_SetSingleSampleShadowFromStationaryLights_Params
{
	bool*                                              bNewSingleSampleShadowFromStationaryLights;               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetSimulatePhysics
struct ULandscapeGizmoRenderComponent_SetSimulatePhysics_Params
{
	bool*                                              bSimulate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetRenderInMainPass
struct ULandscapeGizmoRenderComponent_SetRenderInMainPass_Params
{
	bool*                                              bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetRenderCustomDepth
struct ULandscapeGizmoRenderComponent_SetRenderCustomDepth_Params
{
	bool*                                              bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetReceivesDecals
struct ULandscapeGizmoRenderComponent_SetReceivesDecals_Params
{
	bool*                                              bNewReceivesDecals;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysMaterialOverride
struct ULandscapeGizmoRenderComponent_SetPhysMaterialOverride_Params
{
	class UPhysicalMaterial**                          NewPhysMaterial;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians
struct ULandscapeGizmoRenderComponent_SetPhysicsMaxAngularVelocityInRadians_Params
{
	float*                                             NewMaxAngVel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees
struct ULandscapeGizmoRenderComponent_SetPhysicsMaxAngularVelocityInDegrees_Params
{
	float*                                             NewMaxAngVel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
struct ULandscapeGizmoRenderComponent_SetPhysicsMaxAngularVelocity_Params
{
	float*                                             NewMaxAngVel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity
struct ULandscapeGizmoRenderComponent_SetPhysicsLinearVelocity_Params
{
	struct FVector*                                    NewVel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians
struct ULandscapeGizmoRenderComponent_SetPhysicsAngularVelocityInRadians_Params
{
	struct FVector*                                    NewAngVel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees
struct ULandscapeGizmoRenderComponent_SetPhysicsAngularVelocityInDegrees_Params
{
	struct FVector*                                    NewAngVel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity
struct ULandscapeGizmoRenderComponent_SetPhysicsAngularVelocity_Params
{
	struct FVector*                                    NewAngVel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetOwnerNoSee
struct ULandscapeGizmoRenderComponent_SetOwnerNoSee_Params
{
	bool*                                              bNewOwnerNoSee;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetOnlyOwnerSee
struct ULandscapeGizmoRenderComponent_SetOnlyOwnerSee_Params
{
	bool*                                              bNewOnlyOwnerSee;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
struct ULandscapeGizmoRenderComponent_SetNotifyRigidBodyCollision_Params
{
	bool*                                              bNewNotifyRigidBodyCollision;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMaterialByName
struct ULandscapeGizmoRenderComponent_SetMaterialByName_Params
{
	struct FName*                                      MaterialSlotName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMaterial
struct ULandscapeGizmoRenderComponent_SetMaterial_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMassScale
struct ULandscapeGizmoRenderComponent_SetMassScale_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InMassScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMassOverrideInKg
struct ULandscapeGizmoRenderComponent_SetMassOverrideInKg_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MassInKg;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bOverrideMass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetLinearDamping
struct ULandscapeGizmoRenderComponent_SetLinearDamping_Params
{
	float*                                             InDamping;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetLightAttachmentsAsGroup
struct ULandscapeGizmoRenderComponent_SetLightAttachmentsAsGroup_Params
{
	bool*                                              bInLightAttachmentsAsGroup;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetGenerateOverlapEvents
struct ULandscapeGizmoRenderComponent_SetGenerateOverlapEvents_Params
{
	bool*                                              bInGenerateOverlapEvents;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetExcludeFromLightAttachmentGroup
struct ULandscapeGizmoRenderComponent_SetExcludeFromLightAttachmentGroup_Params
{
	bool*                                              bInExcludeFromLightAttachmentGroup;                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetEnableGravity
struct ULandscapeGizmoRenderComponent_SetEnableGravity_Params
{
	bool*                                              bGravityEnabled;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector4
struct ULandscapeGizmoRenderComponent_SetCustomPrimitiveDataVector4_Params
{
	int*                                               DataIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector4*                                   Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector3
struct ULandscapeGizmoRenderComponent_SetCustomPrimitiveDataVector3_Params
{
	int*                                               DataIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector2
struct ULandscapeGizmoRenderComponent_SetCustomPrimitiveDataVector2_Params
{
	int*                                               DataIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataFloat
struct ULandscapeGizmoRenderComponent_SetCustomPrimitiveDataFloat_Params
{
	int*                                               DataIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask
struct ULandscapeGizmoRenderComponent_SetCustomDepthStencilWriteMask_Params
{
	ERendererStencilMask*                              WriteMaskBit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCustomDepthStencilValue
struct ULandscapeGizmoRenderComponent_SetCustomDepthStencilValue_Params
{
	int*                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCullDistance
struct ULandscapeGizmoRenderComponent_SetCullDistance_Params
{
	float*                                             NewCullDistance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetConstraintMode
struct ULandscapeGizmoRenderComponent_SetConstraintMode_Params
{
	TEnumAsByte<EDOFMode>*                             ConstraintMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionResponseToChannel
struct ULandscapeGizmoRenderComponent_SetCollisionResponseToChannel_Params
{
	TEnumAsByte<ECollisionChannel>*                    Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>*                   NewResponse;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
struct ULandscapeGizmoRenderComponent_SetCollisionResponseToAllChannels_Params
{
	TEnumAsByte<ECollisionResponse>*                   NewResponse;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionProfileName
struct ULandscapeGizmoRenderComponent_SetCollisionProfileName_Params
{
	struct FName*                                      InCollisionProfileName;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionObjectType
struct ULandscapeGizmoRenderComponent_SetCollisionObjectType_Params
{
	TEnumAsByte<ECollisionChannel>*                    Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionEnabled
struct ULandscapeGizmoRenderComponent_SetCollisionEnabled_Params
{
	TEnumAsByte<ECollisionEnabled>*                    NewType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCenterOfMass
struct ULandscapeGizmoRenderComponent_SetCenterOfMass_Params
{
	struct FVector*                                    CenterOfMassOffset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCastShadow
struct ULandscapeGizmoRenderComponent_SetCastShadow_Params
{
	bool*                                              NewCastShadow;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCastInsetShadow
struct ULandscapeGizmoRenderComponent_SetCastInsetShadow_Params
{
	bool*                                              bInCastInsetShadow;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetBoundsScale
struct ULandscapeGizmoRenderComponent_SetBoundsScale_Params
{
	float*                                             NewBoundsScale;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAngularDamping
struct ULandscapeGizmoRenderComponent_SetAngularDamping_Params
{
	float*                                             InDamping;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllUseCCD
struct ULandscapeGizmoRenderComponent_SetAllUseCCD_Params
{
	bool*                                              InUseCCD;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
struct ULandscapeGizmoRenderComponent_SetAllPhysicsLinearVelocity_Params
{
	struct FVector*                                    NewVel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians
struct ULandscapeGizmoRenderComponent_SetAllPhysicsAngularVelocityInRadians_Params
{
	struct FVector*                                    NewAngVel;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees
struct ULandscapeGizmoRenderComponent_SetAllPhysicsAngularVelocityInDegrees_Params
{
	struct FVector*                                    NewAngVel;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bAddToCurrent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllMassScale
struct ULandscapeGizmoRenderComponent_SetAllMassScale_Params
{
	float*                                             InMassScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.ScaleByMomentOfInertia
struct ULandscapeGizmoRenderComponent_ScaleByMomentOfInertia_Params
{
	struct FVector*                                    InputVector;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.PutRigidBodyToSleep
struct ULandscapeGizmoRenderComponent_PutRigidBodyToSleep_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_SphereTraceComponent
struct ULandscapeGizmoRenderComponent_K2_SphereTraceComponent_Params
{
	struct FVector*                                    TraceStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    TraceEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShowTrace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPersistentShowTrace;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_SphereOverlapComponent
struct ULandscapeGizmoRenderComponent_K2_SphereOverlapComponent_Params
{
	struct FVector*                                    InSphereCentre;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InSphereRadius;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShowTrace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPersistentShowTrace;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_LineTraceComponent
struct ULandscapeGizmoRenderComponent_K2_LineTraceComponent_Params
{
	struct FVector*                                    TraceStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    TraceEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShowTrace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPersistentShowTrace;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled
struct ULandscapeGizmoRenderComponent_K2_IsQueryCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled
struct ULandscapeGizmoRenderComponent_K2_IsPhysicsCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_IsCollisionEnabled
struct ULandscapeGizmoRenderComponent_K2_IsCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_BoxOverlapComponent
struct ULandscapeGizmoRenderComponent_K2_BoxOverlapComponent_Params
{
	struct FVector*                                    InBoxCentre;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBox*                                       InBox;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShowTrace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPersistentShowTrace;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsOverlappingComponent
struct ULandscapeGizmoRenderComponent_IsOverlappingComponent_Params
{
	class UPrimitiveComponent**                        OtherComp;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsOverlappingActor
struct ULandscapeGizmoRenderComponent_IsOverlappingActor_Params
{
	class AActor**                                     Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsGravityEnabled
struct ULandscapeGizmoRenderComponent_IsGravityEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake
struct ULandscapeGizmoRenderComponent_IsAnyRigidBodyAwake_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving
struct ULandscapeGizmoRenderComponent_IgnoreComponentWhenMoving_Params
{
	class UPrimitiveComponent**                        Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bShouldIgnore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IgnoreActorWhenMoving
struct ULandscapeGizmoRenderComponent_IgnoreActorWhenMoving_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShouldIgnore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetWalkableSlopeOverride
struct ULandscapeGizmoRenderComponent_GetWalkableSlopeOverride_Params
{
	struct FWalkableSlopeOverride                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
struct ULandscapeGizmoRenderComponent_GetPhysicsLinearVelocityAtPoint_Params
{
	struct FVector*                                    Point;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity
struct ULandscapeGizmoRenderComponent_GetPhysicsLinearVelocity_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians
struct ULandscapeGizmoRenderComponent_GetPhysicsAngularVelocityInRadians_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees
struct ULandscapeGizmoRenderComponent_GetPhysicsAngularVelocityInDegrees_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity
struct ULandscapeGizmoRenderComponent_GetPhysicsAngularVelocity_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetOverlappingComponents
struct ULandscapeGizmoRenderComponent_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OutOverlappingComponents;                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Engine.PrimitiveComponent.GetOverlappingActors
struct ULandscapeGizmoRenderComponent_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (Parm, OutParm, ZeroConstructor)
	class UClass**                                     ClassFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetNumMaterials
struct ULandscapeGizmoRenderComponent_GetNumMaterials_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex
struct ULandscapeGizmoRenderComponent_GetMaterialFromCollisionFaceIndex_Params
{
	int*                                               FaceIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SectionIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMaterial
struct ULandscapeGizmoRenderComponent_GetMaterial_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMassScale
struct ULandscapeGizmoRenderComponent_GetMassScale_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMass
struct ULandscapeGizmoRenderComponent_GetMass_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetLinearDamping
struct ULandscapeGizmoRenderComponent_GetLinearDamping_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetInertiaTensor
struct ULandscapeGizmoRenderComponent_GetInertiaTensor_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetGenerateOverlapEvents
struct ULandscapeGizmoRenderComponent_GetGenerateOverlapEvents_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionResponseToChannel
struct ULandscapeGizmoRenderComponent_GetCollisionResponseToChannel_Params
{
	TEnumAsByte<ECollisionChannel>*                    Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionProfileName
struct ULandscapeGizmoRenderComponent_GetCollisionProfileName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionObjectType
struct ULandscapeGizmoRenderComponent_GetCollisionObjectType_Params
{
	TEnumAsByte<ECollisionChannel>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionEnabled
struct ULandscapeGizmoRenderComponent_GetCollisionEnabled_Params
{
	TEnumAsByte<ECollisionEnabled>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetClosestPointOnCollision
struct ULandscapeGizmoRenderComponent_GetClosestPointOnCollision_Params
{
	struct FVector*                                    Point;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutPointOnBody;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCenterOfMass
struct ULandscapeGizmoRenderComponent_GetCenterOfMass_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetAngularDamping
struct ULandscapeGizmoRenderComponent_GetAngularDamping_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance
struct ULandscapeGizmoRenderComponent_CreateDynamicMaterialInstance_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         SourceMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      OptionalName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
struct ULandscapeGizmoRenderComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
struct ULandscapeGizmoRenderComponent_CreateAndSetMaterialInstanceDynamic_Params
{
	int*                                               ElementIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents
struct ULandscapeGizmoRenderComponent_CopyArrayOfMoveIgnoreComponents_Params
{
	TArray<class UPrimitiveComponent*>                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
struct ULandscapeGizmoRenderComponent_CopyArrayOfMoveIgnoreActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents
struct ULandscapeGizmoRenderComponent_ClearMoveIgnoreComponents_Params
{
};

// Function Engine.PrimitiveComponent.ClearMoveIgnoreActors
struct ULandscapeGizmoRenderComponent_ClearMoveIgnoreActors_Params
{
};

// Function Engine.PrimitiveComponent.CanCharacterStepUp
struct ULandscapeGizmoRenderComponent_CanCharacterStepUp_Params
{
	class APawn**                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddTorqueInRadians
struct ULandscapeGizmoRenderComponent_AddTorqueInRadians_Params
{
	struct FVector*                                    Torque;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddTorqueInDegrees
struct ULandscapeGizmoRenderComponent_AddTorqueInDegrees_Params
{
	struct FVector*                                    Torque;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddTorque
struct ULandscapeGizmoRenderComponent_AddTorque_Params
{
	struct FVector*                                    Torque;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddRadialImpulse
struct ULandscapeGizmoRenderComponent_AddRadialImpulse_Params
{
	struct FVector*                                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>*                Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddRadialForce
struct ULandscapeGizmoRenderComponent_AddRadialForce_Params
{
	struct FVector*                                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>*                Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddImpulseAtLocation
struct ULandscapeGizmoRenderComponent_AddImpulseAtLocation_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddImpulse
struct ULandscapeGizmoRenderComponent_AddImpulse_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForceAtLocationLocal
struct ULandscapeGizmoRenderComponent_AddForceAtLocationLocal_Params
{
	struct FVector*                                    Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForceAtLocation
struct ULandscapeGizmoRenderComponent_AddForceAtLocation_Params
{
	struct FVector*                                    Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForce
struct ULandscapeGizmoRenderComponent_AddForce_Params
{
	struct FVector*                                    Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddAngularImpulseInRadians
struct ULandscapeGizmoRenderComponent_AddAngularImpulseInRadians_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees
struct ULandscapeGizmoRenderComponent_AddAngularImpulseInDegrees_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddAngularImpulse
struct ULandscapeGizmoRenderComponent_AddAngularImpulse_Params
{
	struct FVector*                                    Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bVelChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
struct ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Params
{
	class ULandscapeComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
struct ULandscapeSplinesComponent_GetSplineMeshComponents_Params
{
	TArray<class USplineMeshComponent*>                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif