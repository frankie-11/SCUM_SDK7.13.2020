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

// Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
// ()
// Parameters:
// class ULevelSequence**         SequenceToPlay                 (Parm, ZeroConstructor, IsPlainOldData)

void ADatasmithImportedSequencesActor::PlayLevelSequence(class ULevelSequence** SequenceToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence");

	ADatasmithImportedSequencesActor_PlayLevelSequence_Params params;
	params.SequenceToPlay = SequenceToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
