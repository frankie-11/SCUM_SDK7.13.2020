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

// Function ConZ.CTFFlagStand.OnRep_LightColor
// ()

void ABP_CTFFlagStand_C::OnRep_LightColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.CTFFlagStand.OnRep_LightColor");

	ABP_CTFFlagStand_C_OnRep_LightColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
