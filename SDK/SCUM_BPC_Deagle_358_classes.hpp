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

// BlueprintGeneratedClass BPC_Deagle_358.BPC_Deagle_357_C
// 0x0000 (0x1260 - 0x1260)
class ABPC_Deagle_357_C : public ABP_DEagle_50_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Deagle_358.BPC_Deagle_357_C");
		return ptr;
	}


	bool CanSwitchFiringMode();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DEagle_51(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
