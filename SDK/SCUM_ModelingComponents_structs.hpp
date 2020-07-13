#pragma once

// SCUM (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ModelingComponents.EDynamicMeshTangentCalcType
enum class EDynamicMeshTangentCalcType : uint8_t
{
	EDynamicMeshTangentCalcType__NoTangents = 0,
	EDynamicMeshTangentCalcType__AutoCalculated = 1,
	EDynamicMeshTangentCalcType__ExternallyCalculated = 2,
	EDynamicMeshTangentCalcType__EDynamicMeshTangentCalcType_MAX = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
