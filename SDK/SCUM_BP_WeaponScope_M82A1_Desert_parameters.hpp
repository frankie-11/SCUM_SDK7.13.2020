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
struct ABP_WeaponScope_M82A1_Desert_C_SetZoomLevelOnServer_Params
{
	int*                                               zoomLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponAttachmentScope.SetWindageOnServer
struct ABP_WeaponScope_M82A1_Desert_C_SetWindageOnServer_Params
{
	int*                                               Windage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponAttachmentScope.SetLoadedVariablesOnClient
struct ABP_WeaponScope_M82A1_Desert_C_SetLoadedVariablesOnClient_Params
{
	int*                                               zoomLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Windage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
