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

// Function M9_AnimBlueprint.M9_AnimBlueprint_C.AnimGraph
struct UM9_AnimBlueprint_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function M9_AnimBlueprint.M9_AnimBlueprint_C.ExecuteUbergraph_M9_AnimBlueprint
struct UM9_AnimBlueprint_C_ExecuteUbergraph_M9_AnimBlueprint_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
