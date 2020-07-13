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

// BlueprintGeneratedClass NightVisionGoggles3_test.NightVisionGoggles3_test_C
// 0x0000 (0x0760 - 0x0760)
class ANightVisionGoggles3_test_C : public ANightVisionGogglesItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NightVisionGoggles3_test.NightVisionGoggles3_test_C");
		return ptr;
	}


	void SetActivatedOnServer(bool* Value);
	void OnRep_Activated();
	void ActivatedChangedEvent__DelegateSignature(class ANightVisionGogglesItem** sender);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
