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

// Function ABP_Prisoner_Corpse.ABP_Prisoner_Corpse_C.AnimGraph
struct UABP_Prisoner_Corpse_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function ABP_Prisoner_Corpse.ABP_Prisoner_Corpse_C.ExecuteUbergraph_ABP_Prisoner_Corpse
struct UABP_Prisoner_Corpse_C_ExecuteUbergraph_ABP_Prisoner_Corpse_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
