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

// Function ConZ.PreviousNextSwitchWidget.SwitchToPrevious
struct UUI_PreviousNextSwitch_C_SwitchToPrevious_Params
{
};

// Function ConZ.PreviousNextSwitchWidget.SwitchToNext
struct UUI_PreviousNextSwitch_C_SwitchToNext_Params
{
};

// DelegateFunction ConZ.PreviousNextSwitchWidget.OnSwitchClickedDelegate__DelegateSignature
struct UUI_PreviousNextSwitch_C_OnSwitchClickedDelegate__DelegateSignature_Params
{
	int*                                               widgetArrayIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
