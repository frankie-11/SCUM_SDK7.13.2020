// SCUM (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConZ.DogTagItem.OnRep_UserProfileName
// ()

void ABCU_Chip_C::OnRep_UserProfileName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.DogTagItem.OnRep_UserProfileName");

	ABCU_Chip_C_OnRep_UserProfileName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
