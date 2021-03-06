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

// WidgetBlueprintGeneratedClass UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C
// 0x007C (0x02E4 - 0x0268)
class UUI_GameEventParticipantStatsWidget_C : public UGameEventParticipantStatsWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FLinearColor                                TextColor;                                                // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                _lastTeamIndex;                                           // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameEventTeamColours                       TeamColours;                                              // 0x0284(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C");
		return ptr;
	}


	void UpdateTeamColor(int* TeamIndex);
	struct FText UpdateNumber();
	bool STATIC_IsOwning();
	ESlateVisibility STATIC_GetSelectedOverlayVisiblity();
	ESlateVisibility GetInactiveOverlayVisibility();
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void STATIC_OnMouseLeave(struct FPointerEvent* MouseEvent);
	void STATIC_UpdateColours();
	void STATIC_SetColours(struct FGameEventTeamColours* colours);
	void STATIC_UpdateStats();
	void STATIC_ExecuteUbergraph_UI_GameEventParticipantStatsWidget(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
