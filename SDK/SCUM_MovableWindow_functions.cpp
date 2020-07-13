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

// Function MovableWindow.MovableWindow_C.AttachContentWidget
// (NetReliable, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool*                          NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMovableWindow_C::STATIC_AttachContentWidget(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.AttachContentWidget");

	UMovableWindow_C_AttachContentWidget_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovableWindow.MovableWindow_C.OnMouseButtonUp
// (Net, Native, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMovableWindow_C::STATIC_OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.OnMouseButtonUp");

	UMovableWindow_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MovableWindow.MovableWindow_C.OnDragDetected
// (Net, NetRequest, Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMovableWindow_C::STATIC_OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.OnDragDetected");

	UMovableWindow_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function MovableWindow.MovableWindow_C.Construct
// (NetRequest, Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UMovableWindow_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.Construct");

	UMovableWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovableWindow.MovableWindow_C.Tick
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMovableWindow_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.Tick");

	UMovableWindow_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovableWindow.MovableWindow_C.StartDrag
// (Net, NetReliable, Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UMovableWindow_C::STATIC_StartDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.StartDrag");

	UMovableWindow_C_StartDrag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovableWindow.MovableWindow_C.Init
// (Net, Exec, Native, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector2D*              Dimensions                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                Title                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMovableWindow_C::STATIC_Init(struct FVector2D* Dimensions, struct FString* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.Init");

	UMovableWindow_C_Init_Params params;
	params.Dimensions = Dimensions;
	params.Title = Title;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovableWindow.MovableWindow_C.OnStartDrag
// (NetReliable, Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UMovableWindow_C::STATIC_OnStartDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.OnStartDrag");

	UMovableWindow_C_OnStartDrag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovableWindow.MovableWindow_C.ExecuteUbergraph_MovableWindow
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMovableWindow_C::ExecuteUbergraph_MovableWindow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.ExecuteUbergraph_MovableWindow");

	UMovableWindow_C_ExecuteUbergraph_MovableWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
