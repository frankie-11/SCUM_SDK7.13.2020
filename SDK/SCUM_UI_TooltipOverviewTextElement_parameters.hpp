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

// Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.OnTextDataChanged
struct UUI_TooltipOverviewTextElement_C_OnTextDataChanged_Params
{
	struct FText*                                      Value;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.PreConstruct
struct UUI_TooltipOverviewTextElement_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.OnNumberDataChanged
struct UUI_TooltipOverviewTextElement_C_OnNumberDataChanged_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C.ExecuteUbergraph_UI_TooltipOverviewTextElement
struct UUI_TooltipOverviewTextElement_C_ExecuteUbergraph_UI_TooltipOverviewTextElement_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
