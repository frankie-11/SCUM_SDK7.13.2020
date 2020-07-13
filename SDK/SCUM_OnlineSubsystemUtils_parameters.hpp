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

// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
struct UAchievementQueryCallbackProxy_CacheAchievements_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAchievementQueryCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
struct UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAchievementQueryCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
struct UAchievementWriteCallbackProxy_WriteAchievementProgress_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      AchievementName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UserTag;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAchievementWriteCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
struct UConnectionCallbackProxy_ConnectToService_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UConnectionCallbackProxy*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
struct UCreateSessionCallbackProxy_CreateSession_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PublicConnections;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUseLAN;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UCreateSessionCallbackProxy*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
struct UDestroySessionCallbackProxy_DestroySession_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UDestroySessionCallbackProxy*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
struct UEndMatchCallbackProxy_EndMatch_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UTurnBasedMatchInterface>*  MatchActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    MatchID;                                                  // (Parm, ZeroConstructor)
	TEnumAsByte<EMPMatchOutcome>*                      LocalPlayerOutcome;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMPMatchOutcome>*                      OtherPlayersOutcome;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UEndMatchCallbackProxy*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
struct UEndTurnCallbackProxy_EndTurn_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    MatchID;                                                  // (Parm, ZeroConstructor)
	TScriptInterface<class UTurnBasedMatchInterface>*  TurnBasedMatchInterface;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UEndTurnCallbackProxy*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
struct UFindSessionsCallbackProxy_GetServerName_Params
{
	struct FBlueprintSessionResult*                    Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
struct UFindSessionsCallbackProxy_GetPingInMs_Params
{
	struct FBlueprintSessionResult*                    Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
struct UFindSessionsCallbackProxy_GetMaxPlayers_Params
{
	struct FBlueprintSessionResult*                    Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
struct UFindSessionsCallbackProxy_GetCurrentPlayers_Params
{
	struct FBlueprintSessionResult*                    Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
struct UFindSessionsCallbackProxy_FindSessions_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxResults;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUseLAN;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UFindSessionsCallbackProxy*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
struct UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UTurnBasedMatchInterface>*  MatchActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MinPlayers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxPlayers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PlayerGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowExistingMatches;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UFindTurnBasedMatchCallbackProxy*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
struct UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInAppPurchaseProductRequest*               ProductRequest;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class UInAppPurchaseCallbackProxy*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
struct UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>*                            ProductIdentifiers;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UInAppPurchaseQueryCallbackProxy*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
struct UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Params
{
	TArray<struct FInAppPurchaseProductRequest>*       ConsumableProductFlags;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UInAppPurchaseRestoreCallbackProxy*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
struct UJoinSessionCallbackProxy_JoinSession_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBlueprintSessionResult*                    SearchResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UJoinSessionCallbackProxy*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
struct ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SessionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ULeaderboardFlushCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
struct ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ULeaderboardQueryCallbackProxy*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
struct ULogoutCallbackProxy_Logout_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class ULogoutCallbackProxy*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
struct AOnlineBeaconClient_ClientOnConnected_Params
{
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
struct APartyBeaconClient_ServerUpdateReservationRequest_Params
{
	struct FString*                                    SessionId;                                                // (Parm, ZeroConstructor)
	struct FPartyReservation*                          ReservationUpdate;                                        // (ConstParm, Parm, ReferenceParm)
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
struct APartyBeaconClient_ServerReservationRequest_Params
{
	struct FString*                                    SessionId;                                                // (Parm, ZeroConstructor)
	struct FPartyReservation*                          Reservation;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
struct APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Params
{
	struct FString*                                    SessionId;                                                // (Parm, ZeroConstructor)
	struct FPartyReservation*                          ReservationUpdate;                                        // (ConstParm, Parm, ReferenceParm)
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
struct APartyBeaconClient_ServerCancelReservationRequest_Params
{
	struct FUniqueNetIdRepl*                           PartyLeader;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
struct APartyBeaconClient_ClientSendReservationUpdates_Params
{
	int*                                               NumRemainingReservations;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
struct APartyBeaconClient_ClientSendReservationFull_Params
{
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
struct APartyBeaconClient_ClientReservationResponse_Params
{
	TEnumAsByte<EPartyReservationResult>*              ReservationResponse;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
struct APartyBeaconClient_ClientCancelReservationResponse_Params
{
	TEnumAsByte<EPartyReservationResult>*              ReservationResponse;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
struct UQuitMatchCallbackProxy_QuitMatch_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    MatchID;                                                  // (Parm, ZeroConstructor)
	TEnumAsByte<EMPMatchOutcome>*                      Outcome;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TurnTimeoutInSeconds;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuitMatchCallbackProxy*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
struct UShowLoginUICallbackProxy_ShowExternalLoginUI_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UShowLoginUICallbackProxy*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
struct ASpectatorBeaconClient_ServerReservationRequest_Params
{
	struct FString*                                    SessionId;                                                // (Parm, ZeroConstructor)
	struct FSpectatorReservation*                      Reservation;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
struct ASpectatorBeaconClient_ServerCancelReservationRequest_Params
{
	struct FUniqueNetIdRepl*                           Spectator;                                                // (ConstParm, Parm, ReferenceParm)
};

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
struct ASpectatorBeaconClient_ClientSendReservationUpdates_Params
{
	int*                                               NumRemainingReservations;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
struct ASpectatorBeaconClient_ClientSendReservationFull_Params
{
};

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
struct ASpectatorBeaconClient_ClientReservationResponse_Params
{
	TEnumAsByte<ESpectatorReservationResult>*          ReservationResponse;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
struct ASpectatorBeaconClient_ClientCancelReservationResponse_Params
{
	TEnumAsByte<ESpectatorReservationResult>*          ReservationResponse;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
struct ATestBeaconClient_ClientOnConnected_Params
{
};

// Function AudioMixer.SynthComponent.Stop
struct UVoipListenerSynthComponent_Stop_Params
{
};

// Function AudioMixer.SynthComponent.Start
struct UVoipListenerSynthComponent_Start_Params
{
};

// Function AudioMixer.SynthComponent.SetVolumeMultiplier
struct UVoipListenerSynthComponent_SetVolumeMultiplier_Params
{
	float*                                             VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.SynthComponent.SetSubmixSend
struct UVoipListenerSynthComponent_SetSubmixSend_Params
{
	class USoundSubmix**                               Submix;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SendLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioMixer.SynthComponent.IsPlaying
struct UVoipListenerSynthComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif