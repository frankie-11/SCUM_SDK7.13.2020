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

// WidgetBlueprintGeneratedClass UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C
// 0x0004 (0x024C - 0x0248)
class UUI_GameEventTeamHeaderWidget_C : public UGameEventTeamHeaderWidget
{
public:
	int                                                TeamIndex;                                                // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
