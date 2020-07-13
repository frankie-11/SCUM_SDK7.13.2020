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

// WidgetBlueprintGeneratedClass Sicknesses.Sicknesses_C
// 0x0090 (0x0358 - 0x02C8)
class USicknesses_C : public UMonitoredWindowsContent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParameterLine_C*                            SicknessLine;                                             // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBoxContent;                                       // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                                _color;                                                   // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       _defaultTitle;                                            // 0x02F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                _sicknessCount;                                           // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParameterLine_C*>                    _sicknessLines;                                           // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USickness*>                           _sicknessesArray;                                         // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      _hasSicknessCountChanged;                                 // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    AlarmOnSicknessesEventDispatcher;                         // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0331(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    AlarmOffSicknessesEventDispatcher;                        // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0348(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Sicknesses.Sicknesses_C");
		return ptr;
	}


	void STATIC_HasContentSizeChanged(int* oldSicknessCount, int* newSicknessCount, bool* contentSizeChanged);
	void CheckForAlarms(int* previousSicknessCount, int* sicknessCount);
	void STATIC_UpdateSicknessCount();
	void STATIC_SicknessToText(class USickness** sicknessRef, struct FText* sicknessName, struct FText* sicknessState, struct FText* sicknessPhase);
	void STATIC_FillSicknessLine(class UParameterLine_C** sicknessLineRef, class USickness** Sickness);
	void UpdateSicknessLine();
	void CreateSicknessLine(class USickness** sicknessRef, class UParameterLine_C** sicknessParameterLine);
	void STATIC_ShowSickness(ESlateVisibility* Visibility);
	void STATIC_InitSicknesses();
	void STATIC_AddSicknessLine(class UParameterLine_C** sicknessLineRef);
	void CreateSicknessLineFromText(struct FText* sicknessName, struct FText* SicknessTextValue, struct FText* SicknessMaxValue, class UParameterLine_C** SicknessLine);
	TArray<class USickness*> GetSicknesses();
	void STATIC_SetSicknessCount(int* sicknessCountToSet);
	void STATIC_ClearSicknessLines();
	void STATIC_CountSicknesses(int* numberOfSicknesses);
	void STATIC_HasSicknessCountChanged(bool* sicknessCountChanged);
	void STATIC_UpdateSicknesses();
	struct FText GetTitleText();
	void STATIC_GetDefaultTitle(struct FText* defaultTitle);
	void SelectCustomColor(struct FLinearColor* Color);
	void STATIC_Construct();
	void STATIC_OnMinimize(bool* shouldMinimize);
	void STATIC_OnPrisonerSet();
	void STATIC_UpdateContent();
	void STATIC_SicknessEmergedShouldActivateAlarm();
	void STATIC_SicknessGoneShouldDeactivateAlarm();
	void ExecuteUbergraph_Sicknesses(int* EntryPoint);
	void AlarmOffSicknessesEventDispatcher__DelegateSignature();
	void AlarmOnSicknessesEventDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
