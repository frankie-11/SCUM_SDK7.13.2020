#pragma once

// SCUM (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EngineMessages.EngineServiceNotification
// 0x0018
struct FEngineServiceNotification
{
	struct FString                                     Text;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	double                                             TimeSeconds;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EngineMessages.EngineServiceTerminate
// 0x0010
struct FEngineServiceTerminate
{
	struct FString                                     userName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceExecuteCommand
// 0x0020
struct FEngineServiceExecuteCommand
{
	struct FString                                     Command;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     userName;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceAuthGrant
// 0x0020
struct FEngineServiceAuthGrant
{
	struct FString                                     userName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     UserToGrant;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServiceAuthDeny
// 0x0020
struct FEngineServiceAuthDeny
{
	struct FString                                     userName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     UserToDeny;                                               // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct EngineMessages.EngineServicePong
// 0x0050
struct FEngineServicePong
{
	struct FString                                     CurrentLevel;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                EngineVersion;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      HasBegunPlay;                                             // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       InstanceId;                                               // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceType;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WorldTimeSeconds;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct EngineMessages.EngineServicePing
// 0x0001
struct FEngineServicePing
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
