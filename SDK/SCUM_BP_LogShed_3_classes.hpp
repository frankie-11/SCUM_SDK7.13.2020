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

// BlueprintGeneratedClass BP_LogShed_3.BP_LogShed_2_C
// 0x0018 (0x0710 - 0x06F8)
class ABP_LogShed_2_C : public AStorageItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UStaticMeshComponent*>                _logMeshComponents;                                       // 0x0700(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LogShed_3.BP_LogShed_2_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BP_LogShed_3(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
