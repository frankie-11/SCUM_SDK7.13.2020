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

// BlueprintGeneratedClass Jack_o_Lantern_01.Jack_o_Lantern_01_C
// 0x0008 (0x0690 - 0x0688)
class AJack_o_Lantern_01_C : public AEquipmentItem
{
public:
	class USpotLightComponent*                         SpotLight;                                                // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Jack_o_Lantern_01.Jack_o_Lantern_01_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
