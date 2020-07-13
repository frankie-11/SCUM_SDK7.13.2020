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

// Function Compound_Bow.Compound_Bow_C.ReceiveBeginPlay
// (NetReliable, Exec, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ACompound_Bow_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Compound_Bow.Compound_Bow_C.ReceiveBeginPlay");

	ACompound_Bow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Compound_Bow.Compound_Bow_C.ReceiveTick
// (Net, NetReliable, Native, Event, NetResponse, Static, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACompound_Bow_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Compound_Bow.Compound_Bow_C.ReceiveTick");

	ACompound_Bow_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Compound_Bow.Compound_Bow_C.OnAttachmentAdded
// (Net, NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon**                sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment**      Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACompound_Bow_C::OnAttachmentAdded(class AWeapon** sender, class AWeaponAttachment** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Compound_Bow.Compound_Bow_C.OnAttachmentAdded");

	ACompound_Bow_C_OnAttachmentAdded_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Compound_Bow.Compound_Bow_C.OnAttachmentRemoved
// (NetReliable, NetRequest, Exec, Native, Event, Static, Public, NetServer, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// class AWeapon**                sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment**      Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACompound_Bow_C::STATIC_OnAttachmentRemoved(class AWeapon** sender, class AWeaponAttachment** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Compound_Bow.Compound_Bow_C.OnAttachmentRemoved");

	ACompound_Bow_C_OnAttachmentRemoved_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Compound_Bow.Compound_Bow_C.ExecuteUbergraph_Compound_Bow
// (Net, NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACompound_Bow_C::ExecuteUbergraph_Compound_Bow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Compound_Bow.Compound_Bow_C.ExecuteUbergraph_Compound_Bow");

	ACompound_Bow_C_ExecuteUbergraph_Compound_Bow_Params params;
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
