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

// BlueprintGeneratedClass BP_MenuPlayerController.BP_MenuPlayerController_C
// 0x0018 (0x0580 - 0x0568)
class ABP_MenuPlayerController_C : public AMenuPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0568(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class APrisoner*                                   Prisoner;                                                 // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      _isMouseDown;                                             // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PrisonerRotationSpeed;                                    // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuPlayerController.BP_MenuPlayerController_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void InputComponent_MouseReleased();
	void InputComponent_MousePressed();
	void STATIC_ExecuteUbergraph_BP_MenuPlayerController(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
