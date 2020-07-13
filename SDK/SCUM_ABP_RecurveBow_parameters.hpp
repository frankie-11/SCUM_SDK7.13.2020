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

// Function ABP_RecurveBow.ABP_RecurveBow_C.AnimGraph
struct UABP_RecurveBow_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function ABP_RecurveBow.ABP_RecurveBow_C.ExecuteUbergraph_ABP_RecurveBow
struct UABP_RecurveBow_C_ExecuteUbergraph_ABP_RecurveBow_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
