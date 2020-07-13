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

// Function UI_Skills.UI_Skills_C.ShouldSkillBeVisible
// (Net, NetReliable, NetRequest, NetResponse, MulticastDelegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class USkill**                 Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Skills_C::ShouldSkillBeVisible(class USkill** Skill, bool* visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.ShouldSkillBeVisible");

	UUI_Skills_C_ShouldSkillBeVisible_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (visible != nullptr)
		*visible = params.visible;
}


// Function UI_Skills.UI_Skills_C.UpdateAttributeChange
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintPure, Const)

void UUI_Skills_C::UpdateAttributeChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.UpdateAttributeChange");

	UUI_Skills_C_UpdateAttributeChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.InitTimePeriodsBarForHorizontalBox
// (Net, NetRequest, Exec, Native, Event, NetResponse, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UHorizontalBox**         HorizontalBox                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Skills_C::InitTimePeriodsBarForHorizontalBox(class UHorizontalBox** HorizontalBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.InitTimePeriodsBarForHorizontalBox");

	UUI_Skills_C_InitTimePeriodsBarForHorizontalBox_Params params;
	params.HorizontalBox = HorizontalBox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.RefreshGraph
// (Net, NetRequest, Exec, Event, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_Skills_C::STATIC_RefreshGraph()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.RefreshGraph");

	UUI_Skills_C_RefreshGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.Maximize
// (Net, NetReliable, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_Skills_C::STATIC_Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.Maximize");

	UUI_Skills_C_Maximize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.Minimize
// (NetReliable, NetRequest, Static, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_Skills_C::STATIC_Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.Minimize");

	UUI_Skills_C_Minimize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.UpdateSkills
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_Skills_C::STATIC_UpdateSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.UpdateSkills");

	UUI_Skills_C_UpdateSkills_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.SetPrisoner
// (Exec, Native, Event, Static, NetMulticast, Public, Private, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Skills_C::STATIC_SetPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.SetPrisoner");

	UUI_Skills_C_SetPrisoner_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.UpdateAttributeValues
// (NetReliable, Exec, Native, Event, NetResponse, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_Skills_C::UpdateAttributeValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.UpdateAttributeValues");

	UUI_Skills_C_UpdateAttributeValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.Update
// ()

void UUI_Skills_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.Update");

	UUI_Skills_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.Tick
// (NetReliable, Exec, Native, Static, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Skills_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.Tick");

	UUI_Skills_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_2_K2Node_ComponentBoundEvent_13_OnClickedDispatcher__DelegateSignature
// (Event, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_Skills_C::STATIC_BndEvt__UI_SkillsTabButton_2_K2Node_ComponentBoundEvent_13_OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_2_K2Node_ComponentBoundEvent_13_OnClickedDispatcher__DelegateSignature");

	UUI_Skills_C_BndEvt__UI_SkillsTabButton_2_K2Node_ComponentBoundEvent_13_OnClickedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_K2Node_ComponentBoundEvent_7_OnClickedDispatcher__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_Skills_C::STATIC_BndEvt__UI_SkillsTabButton_K2Node_ComponentBoundEvent_7_OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_K2Node_ComponentBoundEvent_7_OnClickedDispatcher__DelegateSignature");

	UUI_Skills_C_BndEvt__UI_SkillsTabButton_K2Node_ComponentBoundEvent_7_OnClickedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_0_K2Node_ComponentBoundEvent_8_OnClickedDispatcher__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_Skills_C::STATIC_BndEvt__UI_SkillsTabButton_0_K2Node_ComponentBoundEvent_8_OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_0_K2Node_ComponentBoundEvent_8_OnClickedDispatcher__DelegateSignature");

	UUI_Skills_C_BndEvt__UI_SkillsTabButton_0_K2Node_ComponentBoundEvent_8_OnClickedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.Construct
// (Net, NetRequest, Exec, Native, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_Skills_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.Construct");

	UUI_Skills_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_1_K2Node_ComponentBoundEvent_10_OnClickedDispatcher__DelegateSignature
// (NetRequest, Exec, Native, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_Skills_C::STATIC_BndEvt__UI_SkillsTabButton_1_K2Node_ComponentBoundEvent_10_OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_1_K2Node_ComponentBoundEvent_10_OnClickedDispatcher__DelegateSignature");

	UUI_Skills_C_BndEvt__UI_SkillsTabButton_1_K2Node_ComponentBoundEvent_10_OnClickedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.BndEvt__ExpandButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, Exec, Native, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_Skills_C::STATIC_BndEvt__ExpandButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__ExpandButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");

	UUI_Skills_C_BndEvt__ExpandButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_C_0_K2Node_ComponentBoundEvent_111_OnClickedDispatcher__DelegateSignature
// (NetReliable, Exec, Native, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_Skills_C::STATIC_BndEvt__UI_SkillsTabButton_C_0_K2Node_ComponentBoundEvent_111_OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_C_0_K2Node_ComponentBoundEvent_111_OnClickedDispatcher__DelegateSignature");

	UUI_Skills_C_BndEvt__UI_SkillsTabButton_C_0_K2Node_ComponentBoundEvent_111_OnClickedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.BndEvt__Zoom30dButton_K2Node_ComponentBoundEvent_146_OnClickedDispatcher__DelegateSignature
// (Net, Exec, Native, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_Skills_C::STATIC_BndEvt__Zoom30dButton_K2Node_ComponentBoundEvent_146_OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__Zoom30dButton_K2Node_ComponentBoundEvent_146_OnClickedDispatcher__DelegateSignature");

	UUI_Skills_C_BndEvt__Zoom30dButton_K2Node_ComponentBoundEvent_146_OnClickedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.DisplayAttribute
// (NetRequest, MulticastDelegate, Protected, Delegate, NetClient, BlueprintCallable)
// Parameters:
// ESkillAttribute*               Attribute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Skills_C::DisplayAttribute(ESkillAttribute* Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.DisplayAttribute");

	UUI_Skills_C_DisplayAttribute_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Skills.UI_Skills_C.ExecuteUbergraph_UI_Skills
// (NetRequest, Native, Event, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Skills_C::STATIC_ExecuteUbergraph_UI_Skills(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.ExecuteUbergraph_UI_Skills");

	UUI_Skills_C_ExecuteUbergraph_UI_Skills_Params params;
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
