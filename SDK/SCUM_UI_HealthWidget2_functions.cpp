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

// Function UI_HealthWidget2.UI_HealthWidget2_C.Construct
// (NetReliable, Exec, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UUI_HealthWidget2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HealthWidget2.UI_HealthWidget2_C.Construct");

	UUI_HealthWidget2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HealthWidget2.UI_HealthWidget2_C.SetHealthPercentage
// (Net, Exec, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HealthWidget2_C::SetHealthPercentage(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HealthWidget2.UI_HealthWidget2_C.SetHealthPercentage");

	UUI_HealthWidget2_C_SetHealthPercentage_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HealthWidget2.UI_HealthWidget2_C.SetMaxHealthPercentage
// (Exec, MulticastDelegate, Private, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HealthWidget2_C::SetMaxHealthPercentage(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HealthWidget2.UI_HealthWidget2_C.SetMaxHealthPercentage");

	UUI_HealthWidget2_C_SetMaxHealthPercentage_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HealthWidget2.UI_HealthWidget2_C.ExecuteUbergraph_UI_HealthWidget2
// (Native, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HealthWidget2_C::STATIC_ExecuteUbergraph_UI_HealthWidget2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HealthWidget2.UI_HealthWidget2_C.ExecuteUbergraph_UI_HealthWidget2");

	UUI_HealthWidget2_C_ExecuteUbergraph_UI_HealthWidget2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
