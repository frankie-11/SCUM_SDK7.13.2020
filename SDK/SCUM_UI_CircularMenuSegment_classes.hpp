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

// WidgetBlueprintGeneratedClass UI_CircularMenuSegment.UI_CircularMenuSegment_C
// 0x0000 (0x02A8 - 0x02A8)
class UUI_CircularMenuSegment_C : public UCircularMenuSegmentWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CircularMenuSegment.UI_CircularMenuSegment_C");
		return ptr;
	}


	void UpdateVisualParameters(int* numberOfSegments, int* Index, float* Offset, float* middleCutoffPercentage, float* Size);
	class UCircularMenuSegmentWidget* CreateFromInfo(class UCircularMenuSegmentInfo** Info);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
