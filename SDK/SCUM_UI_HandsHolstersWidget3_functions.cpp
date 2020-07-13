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

// Function UI_HandsHolstersWidget3.UI_HandsHolstersWidget3_C.PreConstruct
// (Exec, Event, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HandsHolstersWidget3_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandsHolstersWidget3.UI_HandsHolstersWidget3_C.PreConstruct");

	UUI_HandsHolstersWidget3_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandsHolstersWidget3.UI_HandsHolstersWidget3_C.ExecuteUbergraph_UI_HandsHolstersWidget3
// (NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Protected, Delegate, NetClient, BlueprintCallable)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HandsHolstersWidget3_C::STATIC_ExecuteUbergraph_UI_HandsHolstersWidget3(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandsHolstersWidget3.UI_HandsHolstersWidget3_C.ExecuteUbergraph_UI_HandsHolstersWidget3");

	UUI_HandsHolstersWidget3_C_ExecuteUbergraph_UI_HandsHolstersWidget3_Params params;
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
