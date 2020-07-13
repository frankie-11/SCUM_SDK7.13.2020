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

// Function ServerInfoWidget.ServerInfoWidget_C.SetValid
// (Net, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          Valid                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerInfoWidget_C::SetValid(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.SetValid");

	UServerInfoWidget_C_SetValid_Params params;
	params.Valid = Valid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.Connect
// ()
// Parameters:
// struct FString*                password                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UServerInfoWidget_C::Connect(struct FString* password)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.Connect");

	UServerInfoWidget_C_Connect_Params params;
	params.password = password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.SetColor
// (Net, Event, NetMulticast, Delegate, HasOutParms, NetClient, DLLImport)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerInfoWidget_C::SetColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.SetColor");

	UServerInfoWidget_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.UpdateFromServerInfo
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// struct FServerInfo*            ServerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UServerInfoWidget_C::STATIC_UpdateFromServerInfo(struct FServerInfo* ServerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.UpdateFromServerInfo");

	UServerInfoWidget_C_UpdateFromServerInfo_Params params;
	params.ServerInfo = ServerInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.OnSynchronizeProperties
// (Net, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UServerInfoWidget_C::STATIC_OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnSynchronizeProperties");

	UServerInfoWidget_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UServerInfoWidget_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UServerInfoWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UServerInfoWidget_C::STATIC_BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature");

	UServerInfoWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.Construct
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetServer, NetClient, BlueprintEvent, Const, NetValidate)

void UServerInfoWidget_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.Construct");

	UServerInfoWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.ExecuteUbergraph_ServerInfoWidget
// (NetRequest, Exec, NetMulticast, Delegate, HasOutParms, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerInfoWidget_C::ExecuteUbergraph_ServerInfoWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.ExecuteUbergraph_ServerInfoWidget");

	UServerInfoWidget_C_ExecuteUbergraph_ServerInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.OnRemoved__DelegateSignature
// ()
// Parameters:
// struct FServerInfo*            Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UServerInfoWidget_C::OnRemoved__DelegateSignature(struct FServerInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnRemoved__DelegateSignature");

	UServerInfoWidget_C_OnRemoved__DelegateSignature_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.OnDoubleClicked__DelegateSignature
// ()
// Parameters:
// class UServerInfoWidget_C**    ServerInfoWidget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UServerInfoWidget_C::OnDoubleClicked__DelegateSignature(class UServerInfoWidget_C** ServerInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnDoubleClicked__DelegateSignature");

	UServerInfoWidget_C_OnDoubleClicked__DelegateSignature_Params params;
	params.ServerInfoWidget = ServerInfoWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.OnClicked__DelegateSignature
// ()
// Parameters:
// class UServerInfoWidget_C**    ServerInfoWidget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UServerInfoWidget_C::OnClicked__DelegateSignature(class UServerInfoWidget_C** ServerInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnClicked__DelegateSignature");

	UServerInfoWidget_C_OnClicked__DelegateSignature_Params params;
	params.ServerInfoWidget = ServerInfoWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
