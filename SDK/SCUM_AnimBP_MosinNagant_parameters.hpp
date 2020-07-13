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

// Function AnimBP_MosinNagant.AnimBP_MosinNagant_C.AnimGraph
struct UAnimBP_MosinNagant_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function AnimBP_MosinNagant.AnimBP_MosinNagant_C.ExecuteUbergraph_AnimBP_MosinNagant
struct UAnimBP_MosinNagant_C_ExecuteUbergraph_AnimBP_MosinNagant_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
