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

// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
// 0x0080 (0x0270 - 0x01F0)
class UMagicLeapImageTrackerComponent : public USceneComponent
{
public:
	class UTexture2D*                                  TargetImageTexture;                                       // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              LongerDimension;                                          // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsStationary;                                            // 0x020C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseUnreliablePose;                                       // 0x020D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSetImageTargetSucceeded;                                // 0x0210(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x020E(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnSetImageTargetFailed;                                   // 0x0220(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0220(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnImageTargetFound;                                       // 0x0230(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0230(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnImageTargetLost;                                        // 0x0240(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0240(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnImageTargetUnreliableTracking;                          // 0x0250(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0250(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData05[0x10];                                      // 0x0260(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapImageTracker.MagicLeapImageTrackerComponent");
		return ptr;
	}


	bool SetTargetAsync(class UTexture2D** ImageTarget);
	bool RemoveTargetAsync();
};


// Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapImageTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
