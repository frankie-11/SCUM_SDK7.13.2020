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

// WidgetBlueprintGeneratedClass UI_PreviousNextSwitch.UI_PreviousNextSwitch_C
// 0x0000 (0x0278 - 0x0278)
class UUI_PreviousNextSwitch_C : public UPreviousNextSwitchWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PreviousNextSwitch.UI_PreviousNextSwitch_C");
		return ptr;
	}


	void SwitchToPrevious();
	void SwitchToNext();
	void OnSwitchClickedDelegate__DelegateSignature(int* widgetArrayIndex, int* Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
