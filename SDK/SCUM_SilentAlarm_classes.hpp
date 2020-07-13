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

// BlueprintGeneratedClass SilentAlarm.SilentAlarm_C
// 0x0008 (0x0788 - 0x0780)
class ASilentAlarm_C : public ASilentAlarmTrapItem
{
public:
	class UBP_SphereProximityTriggerComponent_C*       ProximityTrigger;                                         // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SilentAlarm.SilentAlarm_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
