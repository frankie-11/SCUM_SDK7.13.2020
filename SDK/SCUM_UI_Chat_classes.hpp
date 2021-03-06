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

// WidgetBlueprintGeneratedClass UI_Chat.UI_Chat_C
// 0x004B (0x036B - 0x0320)
class UUI_Chat_C : public UChatWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_1;                                                  // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     MuteButton;                                               // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  MuteText;                                                 // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FString>                             ActiveSuggestions;                                        // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentSuggestion;                                        // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UUI_ChatSuggestion_C*>                ActiveSuggestionWidgets;                                  // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      SuggestionsUpdated;                                       // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      SuggestionSelected;                                       // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      IsInHistoryMode;                                          // 0x036A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Chat.UI_Chat_C");
		return ptr;
	}


	void CreateSuggestionLine(struct FString* Text, class UUI_ChatSuggestion_C** Widget);
	struct FEventReply STATIC_OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void SetInputFocusIfNeeded();
	struct FEventReply STATIC_OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void STATIC_BndEvt__MuteButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
	void STATIC_Construct();
	void STATIC_UpdateActiveSuggestions();
	void STATIC_ExecuteUbergraph_UI_Chat(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
