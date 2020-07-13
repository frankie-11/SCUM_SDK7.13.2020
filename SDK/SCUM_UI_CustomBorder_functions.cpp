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

// Function UI_CustomBorder.UI_CustomBorder_C.PreConstruct
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CustomBorder_C::STATIC_PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomBorder.UI_CustomBorder_C.PreConstruct");

	UUI_CustomBorder_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomBorder.UI_CustomBorder_C.ExecuteUbergraph_UI_CustomBorder
// (Net, NetReliable, NetRequest, Exec, Static, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CustomBorder_C::STATIC_ExecuteUbergraph_UI_CustomBorder(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomBorder.UI_CustomBorder_C.ExecuteUbergraph_UI_CustomBorder");

	UUI_CustomBorder_C_ExecuteUbergraph_UI_CustomBorder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
