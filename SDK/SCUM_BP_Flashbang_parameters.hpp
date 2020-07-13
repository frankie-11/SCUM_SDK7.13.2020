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

// Function ConZ.FlashbangItem.Multicast_PlayEffects
struct ABP_Flashbang_C_Multicast_PlayEffects_Params
{
	struct FVector*                                    zeroBasedFlashbangLocation;                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
