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

// Function ConZ.PlaceableActorBase.Server_UpdateState
// ()
// Parameters:
// struct FPlaceableActorStateReplicationHelper* State                          (ConstParm, Parm, ReferenceParm)

void ABP_PlaceableActorFortifications_C::Server_UpdateState(struct FPlaceableActorStateReplicationHelper* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.PlaceableActorBase.Server_UpdateState");

	ABP_PlaceableActorFortifications_C_Server_UpdateState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.PlaceableActorBase.Server_Place
// ()
// Parameters:
// struct FVector*                Location                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator*               Rotation                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlaceableActorFortifications_C::Server_Place(struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.PlaceableActorBase.Server_Place");

	ABP_PlaceableActorFortifications_C_Server_Place_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.PlaceableActorBase.OnRep_ReplicatedRotation
// ()

void ABP_PlaceableActorFortifications_C::OnRep_ReplicatedRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.PlaceableActorBase.OnRep_ReplicatedRotation");

	ABP_PlaceableActorFortifications_C_OnRep_ReplicatedRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.PlaceableActorBase.OnRep_ReplicatedPlacedLocation
// ()

void ABP_PlaceableActorFortifications_C::OnRep_ReplicatedPlacedLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.PlaceableActorBase.OnRep_ReplicatedPlacedLocation");

	ABP_PlaceableActorFortifications_C_OnRep_ReplicatedPlacedLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.PlaceableActorBase.OnRep_ReplicatedLocation
// ()

void ABP_PlaceableActorFortifications_C::OnRep_ReplicatedLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.PlaceableActorBase.OnRep_ReplicatedLocation");

	ABP_PlaceableActorFortifications_C_OnRep_ReplicatedLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.PlaceableActorBase.OnRep_PlacementState
// ()

void ABP_PlaceableActorFortifications_C::OnRep_PlacementState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.PlaceableActorBase.OnRep_PlacementState");

	ABP_PlaceableActorFortifications_C_OnRep_PlacementState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.PlaceableActorBase.OnRep_Ingredients
// ()

void ABP_PlaceableActorFortifications_C::OnRep_Ingredients()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.PlaceableActorBase.OnRep_Ingredients");

	ABP_PlaceableActorFortifications_C_OnRep_Ingredients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.PlaceableActorBase.OnRep_IngredientMultiplier
// ()

void ABP_PlaceableActorFortifications_C::OnRep_IngredientMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.PlaceableActorBase.OnRep_IngredientMultiplier");

	ABP_PlaceableActorFortifications_C_OnRep_IngredientMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.PlaceableActorBase.OnRep_Id
// ()

void ABP_PlaceableActorFortifications_C::OnRep_Id()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.PlaceableActorBase.OnRep_Id");

	ABP_PlaceableActorFortifications_C_OnRep_Id_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.PlaceableActorBase.OnRep_CraftingIndex
// ()

void ABP_PlaceableActorFortifications_C::OnRep_CraftingIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.PlaceableActorBase.OnRep_CraftingIndex");

	ABP_PlaceableActorFortifications_C_OnRep_CraftingIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
