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

// BlueprintGeneratedClass BP_M9_Silver.BP_M9_Silver_C
// 0x0000 (0x1260 - 0x1260)
class ABP_M9_Silver_C : public ABP_M9_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M9_Silver.BP_M9_Silver_C");
		return ptr;
	}


	bool CanSwitchFiringMode();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_M9(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
