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

// BlueprintGeneratedClass BPC_Recurve_Bow_91.BPC_Recurve_Bow_90_C
// 0x0000 (0x16A8 - 0x16A8)
class ABPC_Recurve_Bow_90_C : public ARecurve_Bow_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Recurve_Bow_91.BPC_Recurve_Bow_90_C");
		return ptr;
	}


	void STATIC_ReceiveTick(float* DeltaSeconds);
	void STATIC_ExecuteUbergraph_Recurve_Bow(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
