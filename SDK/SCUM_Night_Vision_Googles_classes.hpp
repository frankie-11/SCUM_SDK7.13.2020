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

// BlueprintGeneratedClass Night_Vision_Googles.Night_Vision_Googles_C
// 0x0000 (0x0760 - 0x0760)
class ANight_Vision_Googles_C : public ANightVisionGogglesItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Night_Vision_Googles.Night_Vision_Googles_C");
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
