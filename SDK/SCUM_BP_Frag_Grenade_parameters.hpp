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

// Function ConZ.FragGrenadeItem.Multicast_PlayEffects
struct ABP_Frag_Grenade_C_Multicast_PlayEffects_Params
{
	struct FVector*                                    ZeroBasedLocation;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
