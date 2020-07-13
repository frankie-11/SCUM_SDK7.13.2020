#pragma once

// SCUM (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConZ.NightVisionGogglesItem.SetActivatedOnServer
struct ANightVisionGoggles_Test_C_SetActivatedOnServer_Params
{
	bool*                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.NightVisionGogglesItem.OnRep_Activated
struct ANightVisionGoggles_Test_C_OnRep_Activated_Params
{
};

// DelegateFunction ConZ.NightVisionGogglesItem.ActivatedChangedEvent__DelegateSignature
struct ANightVisionGoggles_Test_C_ActivatedChangedEvent__DelegateSignature_Params
{
	class ANightVisionGogglesItem**                    sender;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
