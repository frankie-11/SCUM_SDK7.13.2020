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

// BlueprintGeneratedClass BarbedSpikeTrap.BarbedSpikeTrap_C
// 0x0008 (0x0778 - 0x0770)
class ABarbedSpikeTrap_C : public ADamagingTrapItem
{
public:
	class UBP_BoxProximityTriggerComponent_C*          BoxProximityTrigger;                                      // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BarbedSpikeTrap.BarbedSpikeTrap_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
