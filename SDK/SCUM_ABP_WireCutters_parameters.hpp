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

// Function ABP_WireCutters.ABP_WireCutters_C.AnimGraph
struct UABP_WireCutters_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function ABP_WireCutters.ABP_WireCutters_C.ExecuteUbergraph_ABP_WireCutters
struct UABP_WireCutters_C_ExecuteUbergraph_ABP_WireCutters_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
