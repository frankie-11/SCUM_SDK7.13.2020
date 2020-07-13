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

// BlueprintGeneratedClass BP_BlankSign.BP_BlankSign_C
// 0x0000 (0x06C0 - 0x06C0)
class ABP_BlankSign_C : public AItemWithText
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BlankSign.BP_BlankSign_C");
		return ptr;
	}


	void OnTextAccepted(class APrisoner** User, struct FText* Text);
	void OnRep_Text();
	void OnLocalPrisonerPanelsClosed_ItemWithText();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
