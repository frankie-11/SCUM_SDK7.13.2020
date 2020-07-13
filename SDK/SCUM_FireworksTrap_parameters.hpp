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

// Function FireworksTrap.FireworksTrap_C.LaunchShell
struct AFireworksTrap_C_LaunchShell_Params
{
};

// Function FireworksTrap.FireworksTrap_C.ExecuteUbergraph_FireworksTrap
struct AFireworksTrap_C_ExecuteUbergraph_FireworksTrap_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
