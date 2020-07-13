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

// BlueprintGeneratedClass FireworksTrap.FireworksTrap_C
// 0x0040 (0x07D0 - 0x0790)
class AFireworksTrap_C : public AFireworksTrapItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_SphereProximityTriggerComponent_C*       ProximityTrigger;                                         // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  ShellTransform;                                           // 0x07A0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FireworksTrap.FireworksTrap_C");
		return ptr;
	}


	void LaunchShell();
	void STATIC_ExecuteUbergraph_FireworksTrap(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
