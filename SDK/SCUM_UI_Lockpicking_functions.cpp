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

// Function UI_Lockpicking.UI_Lockpicking_C.Tick
// (Net, Native, Event, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Lockpicking_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Lockpicking.UI_Lockpicking_C.Tick");

	UUI_Lockpicking_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Lockpicking.UI_Lockpicking_C.ExecuteUbergraph_UI_Lockpicking
// (Net, Event, NetMulticast, Delegate, HasDefaults, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Lockpicking_C::ExecuteUbergraph_UI_Lockpicking(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Lockpicking.UI_Lockpicking_C.ExecuteUbergraph_UI_Lockpicking");

	UUI_Lockpicking_C_ExecuteUbergraph_UI_Lockpicking_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
