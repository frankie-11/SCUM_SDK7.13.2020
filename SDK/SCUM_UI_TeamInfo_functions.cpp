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

// Function UI_TeamInfo.UI_TeamInfo_C.ClearTeammateNames
// (Net, NetRequest, Exec, Native, NetResponse, Delegate, HasDefaults, NetClient, DLLImport)

void UUI_TeamInfo_C::ClearTeammateNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo.UI_TeamInfo_C.ClearTeammateNames");

	UUI_TeamInfo_C_ClearTeammateNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamInfo.UI_TeamInfo_C.GetVisibility_1
// (Net, NetReliable, NetRequest, Exec, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_TeamInfo_C::STATIC_GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo.UI_TeamInfo_C.GetVisibility_1");

	UUI_TeamInfo_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_TeamInfo.UI_TeamInfo_C.RemoveTeammateName
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Private, HasOutParms)
// Parameters:
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_TeamInfo_C::RemoveTeammateName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo.UI_TeamInfo_C.RemoveTeammateName");

	UUI_TeamInfo_C_RemoveTeammateName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamInfo.UI_TeamInfo_C.AddTeammateName
// (NetRequest, Native, Event, NetResponse, Private, HasOutParms)
// Parameters:
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_TeamInfo_C::AddTeammateName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo.UI_TeamInfo_C.AddTeammateName");

	UUI_TeamInfo_C_AddTeammateName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamInfo.UI_TeamInfo_C.Construct
// (NetRequest, Exec, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_TeamInfo_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo.UI_TeamInfo_C.Construct");

	UUI_TeamInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamInfo.UI_TeamInfo_C.ExecuteUbergraph_UI_TeamInfo
// (NetReliable, Event, NetResponse, Private, HasOutParms)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TeamInfo_C::ExecuteUbergraph_UI_TeamInfo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo.UI_TeamInfo_C.ExecuteUbergraph_UI_TeamInfo");

	UUI_TeamInfo_C_ExecuteUbergraph_UI_TeamInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
