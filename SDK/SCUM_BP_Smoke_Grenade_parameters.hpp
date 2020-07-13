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

// Function ConZ.SmokeGrenadeItem.Multicast_PlayEffects
struct ABP_Smoke_Grenade_C_Multicast_PlayEffects_Params
{
	struct FVector*                                    ZeroBasedLcoation;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
