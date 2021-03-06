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

// Function ConZ.WeaponAttachmentScope.SetZoomLevelOnServer
struct AWeaponScope_ZF39_C_SetZoomLevelOnServer_Params
{
	int*                                               zoomLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponAttachmentScope.SetWindageOnServer
struct AWeaponScope_ZF39_C_SetWindageOnServer_Params
{
	int*                                               Windage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponAttachmentScope.SetLoadedVariablesOnClient
struct AWeaponScope_ZF39_C_SetLoadedVariablesOnClient_Params
{
	int*                                               zoomLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Windage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
