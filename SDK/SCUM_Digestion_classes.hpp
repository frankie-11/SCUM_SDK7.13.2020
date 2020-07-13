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

// WidgetBlueprintGeneratedClass Digestion.Digestion_C
// 0x0079 (0x0341 - 0x02C8)
class UDigestion_C : public UMonitoredWindowsContent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParameterLine_C*                            DigestionLineLeft;                                        // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UParameterLine_C*                            DigestionLineRight;                                       // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBoxContentLeft;                                   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBoxContentRight;                                  // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                                _color;                                                   // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       _defaultTitle;                                            // 0x0300(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                _digestionItemsCount;                                     // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParameterLine_C*>                    _digestionLines;                                          // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USickness*>                           _digestionItemsArray;                                     // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      _hasDigestionItemsCountChanged;                           // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Digestion.Digestion_C");
		return ptr;
	}


	void HasContentSizeChanged(int* oldDigestionItemCount, int* newDigestionItemCount, bool* contentSizeChanged);
	void STATIC_PrintArrayOfDigestionItems(TArray<class UDigestionItem*>* digestionItemsTArray);
	void UpdateDigestionItemsCount();
	void STATIC_DigestionItemToText(class UDigestionItem** digestionItemRef, struct FText* digestionItemName, struct FText* digestionItemID, struct FText* digestionItemWeight);
	void FillDigestionLine(class UParameterLine_C** digestionLineRef, class UDigestionItem** digestionItemRef);
	void CreateDigestionLine(class UDigestionItem** digestionItemRef, class UParameterLine_C** digestionParameterLine);
	void STATIC_ShowDigestion(ESlateVisibility* Visibility);
	void STATIC_InitDigestionItems();
	void STATIC_AddDigestionLine(int* Index, class UParameterLine_C** digestionLineRef);
	void STATIC_CreateDigestionLineFromText(struct FText* digestionItemName, struct FText* digestionItemID, struct FText* digestionItemWeightRemained, class UParameterLine_C** digestionLine);
	void STATIC_GetDigestionItems(TArray<class UDigestionItem*>* digestionItemsTArrayRef);
	void STATIC_SetDigestionCount(int* digestionItemsCountToSet);
	void ClearDigestionLines();
	void STATIC_CountDigestionItems(int* numberOfDigestionItems);
	void STATIC_HasDigestionCountChanged(bool* sicknessCountChanged);
	void STATIC_UpdateDigestion();
	struct FText STATIC_GetTitleText();
	void STATIC_GetDefaultTitle(struct FText* defaultTitle);
	void STATIC_SelectCustomColor(struct FLinearColor* Color);
	void STATIC_Construct();
	void STATIC_OnMinimize(bool* shouldMinimize);
	void STATIC_OnPrisonerSet();
	void STATIC_UpdateContent();
	void ExecuteUbergraph_Digestion(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
