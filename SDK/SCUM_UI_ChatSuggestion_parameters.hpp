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

// Function ConZ.ChatSuggestionWidget.SetText
struct UUI_ChatSuggestion_C_SetText_Params
{
	struct FString*                                    Text;                                                     // (Parm, ZeroConstructor)
};

// Function ConZ.ChatSuggestionWidget.SetIsHighlighted
struct UUI_ChatSuggestion_C_SetIsHighlighted_Params
{
	bool*                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
