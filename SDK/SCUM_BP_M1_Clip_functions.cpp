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

// Function BP_M1_Clip.BP_M1_Clip_C.GetInteractionsWithItem
// (NetReliable, NetRequest, Native, Event, NetMulticast, Public, NetServer, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// class UObject**                User                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AItem**                  Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FInteractionStruct> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FInteractionStruct> ABP_M1_Clip_C::GetInteractionsWithItem(class UObject** User, class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_Clip.BP_M1_Clip_C.GetInteractionsWithItem");

	ABP_M1_Clip_C_GetInteractionsWithItem_Params params;
	params.User = User;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_M1_Clip.BP_M1_Clip_C.GetStateForInteractionWithItem
// (Net, NetReliable, Native, Event, NetMulticast, Public, NetServer, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// class AItem**                  Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EInteractionState              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInteractionState ABP_M1_Clip_C::GetStateForInteractionWithItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_Clip.BP_M1_Clip_C.GetStateForInteractionWithItem");

	ABP_M1_Clip_C_GetStateForInteractionWithItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_M1_Clip.BP_M1_Clip_C.GetDefaultInteractionForPrisoner
// (Event, Static, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrisoner**              Prisoner                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInteractionQueryParameters* Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FInteractionStruct      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInteractionStruct ABP_M1_Clip_C::STATIC_GetDefaultInteractionForPrisoner(class APrisoner** Prisoner, struct FInteractionQueryParameters* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_Clip.BP_M1_Clip_C.GetDefaultInteractionForPrisoner");

	ABP_M1_Clip_C_GetDefaultInteractionForPrisoner_Params params;
	params.Prisoner = Prisoner;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_M1_Clip.BP_M1_Clip_C.ReceiveBeginPlay
// (Net, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintPure, Const)

void ABP_M1_Clip_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_Clip.BP_M1_Clip_C.ReceiveBeginPlay");

	ABP_M1_Clip_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_M1_Clip.BP_M1_Clip_C.OnAmmoChangedEvent
// (Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintPure, Const)

void ABP_M1_Clip_C::STATIC_OnAmmoChangedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_Clip.BP_M1_Clip_C.OnAmmoChangedEvent");

	ABP_M1_Clip_C_OnAmmoChangedEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_M1_Clip.BP_M1_Clip_C.OnDetachedFromItem
// (NetReliable, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintPure, Const)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_M1_Clip_C::OnDetachedFromItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_Clip.BP_M1_Clip_C.OnDetachedFromItem");

	ABP_M1_Clip_C_OnDetachedFromItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_M1_Clip.BP_M1_Clip_C.ExecuteUbergraph_BP_M1_Clip
// (NetRequest, Event, NetResponse, Static, NetMulticast, Public, NetServer, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_M1_Clip_C::STATIC_ExecuteUbergraph_BP_M1_Clip(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_Clip.BP_M1_Clip_C.ExecuteUbergraph_BP_M1_Clip");

	ABP_M1_Clip_C_ExecuteUbergraph_BP_M1_Clip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
