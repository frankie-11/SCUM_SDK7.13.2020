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

// BlueprintGeneratedClass Wild_Strawberry.Wild_Strawberry_C
// 0x0000 (0x07B0 - 0x07B0)
class AWild_Strawberry_C : public AFoodItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Wild_Strawberry.Wild_Strawberry_C");
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
