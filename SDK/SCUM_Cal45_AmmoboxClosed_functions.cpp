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

// Function ConZ.AmmunitionBoxItem.OnRep_AmmoCount
// ()

void ACal45_AmmoboxClosed_C::OnRep_AmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.AmmunitionBoxItem.OnRep_AmmoCount");

	ACal45_AmmoboxClosed_C_OnRep_AmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
