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

// Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkMagicLeapHandTrackingSourceFactory : public ULiveLinkSourceFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory");
		return ptr;
	}

};


// Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapHandTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
