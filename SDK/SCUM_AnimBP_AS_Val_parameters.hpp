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

// Function AnimBP_AS_Val.AnimBP_AS_Val_C.AnimGraph
struct UAnimBP_AS_Val_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function AnimBP_AS_Val.AnimBP_AS_Val_C.ExecuteUbergraph_AnimBP_AS_Val
struct UAnimBP_AS_Val_C_ExecuteUbergraph_AnimBP_AS_Val_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
