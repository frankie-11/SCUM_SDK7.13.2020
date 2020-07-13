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

// BlueprintGeneratedClass Skewer_Sausages_small.Skewer_Sausages_small_C
// 0x0000 (0x07B0 - 0x07B0)
class ASkewer_Sausages_small_C : public AFoodItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skewer_Sausages_small.Skewer_Sausages_small_C");
		return ptr;
	}


	void OnRep_Temperature();
	void OnRep_ItemOpened();
	void OnRep_IsCooking();
	void OnAudioComponentExpired();
	bool IsCooking();
	float GetVolume();
	float GetThermalConductivityFactor();
	float GetTemperature();
	float GetEnvironmentTemperature();
	float GetCookingAmount();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif