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

// BlueprintGeneratedClass BPC_Improvised_Bow_36.BPC_Improvised_Bow_35_C
// 0x0000 (0x16A8 - 0x16A8)
class ABPC_Improvised_Bow_35_C : public AImprovised_Bow_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Improvised_Bow_36.BPC_Improvised_Bow_35_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void STATIC_ExecuteUbergraph_Improvised_Bow(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif