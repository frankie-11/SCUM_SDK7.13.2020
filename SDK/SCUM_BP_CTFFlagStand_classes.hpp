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

// BlueprintGeneratedClass BP_CTFFlagStand.BP_CTFFlagStand_C
// 0x0000 (0x0238 - 0x0238)
class ABP_CTFFlagStand_C : public ACTFFlagStand
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CTFFlagStand.BP_CTFFlagStand_C");
		return ptr;
	}


	void OnRep_LightColor();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
