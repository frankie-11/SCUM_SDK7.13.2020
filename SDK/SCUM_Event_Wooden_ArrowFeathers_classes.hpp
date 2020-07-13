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

// BlueprintGeneratedClass Event_Wooden_ArrowFeathers.Event_Wooden_ArrowFeathers_C
// 0x0000 (0x06A8 - 0x06A8)
class AEvent_Wooden_ArrowFeathers_C : public AAmmunitionArrow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Event_Wooden_ArrowFeathers.Event_Wooden_ArrowFeathers_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
