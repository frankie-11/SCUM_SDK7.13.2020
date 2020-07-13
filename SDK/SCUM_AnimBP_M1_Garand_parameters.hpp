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

// Function AnimBP_M1_Garand.AnimBP_M1_Garand_C.AnimGraph
struct UAnimBP_M1_Garand_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function AnimBP_M1_Garand.AnimBP_M1_Garand_C.BlueprintUpdateAnimation
struct UAnimBP_M1_Garand_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimBP_M1_Garand.AnimBP_M1_Garand_C.ExecuteUbergraph_AnimBP_M1_Garand
struct UAnimBP_M1_Garand_C_ExecuteUbergraph_AnimBP_M1_Garand_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
