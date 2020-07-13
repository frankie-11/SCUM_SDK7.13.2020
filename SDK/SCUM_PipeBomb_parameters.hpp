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

// Function PipeBomb.PipeBomb_C.BP_OnArmed
struct APipeBomb_C_BP_OnArmed_Params
{
};

// Function PipeBomb.PipeBomb_C.ReceiveBeginPlay
struct APipeBomb_C_ReceiveBeginPlay_Params
{
};

// Function PipeBomb.PipeBomb_C.BP_OnDisarmed
struct APipeBomb_C_BP_OnDisarmed_Params
{
};

// Function PipeBomb.PipeBomb_C.ExecuteUbergraph_PipeBomb
struct APipeBomb_C_ExecuteUbergraph_PipeBomb_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
