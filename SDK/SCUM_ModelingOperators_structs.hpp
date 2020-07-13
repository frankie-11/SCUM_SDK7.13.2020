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

// Enum ModelingOperators.ENormalCalculationMethod
enum class ENormalCalculationMethod : uint8_t
{
	ENormalCalculationMethod__AreaWeighted = 0,
	ENormalCalculationMethod__AngleWeighted = 1,
	ENormalCalculationMethod__AreaAngleWeighting = 2,
	ENormalCalculationMethod__ENormalCalculationMethod_MAX = 3
};


// Enum ModelingOperators.ERemeshSmoothingType
enum class ERemeshSmoothingType : uint8_t
{
	ERemeshSmoothingType__Uniform  = 0,
	ERemeshSmoothingType__Cotangent = 1,
	ERemeshSmoothingType__MeanValue = 2,
	ERemeshSmoothingType__ERemeshSmoothingType_MAX = 3
};


// Enum ModelingOperators.EUVProjectionMethod
enum class EUVProjectionMethod : uint8_t
{
	EUVProjectionMethod__Cube      = 0,
	EUVProjectionMethod__Cylinder  = 1,
	EUVProjectionMethod__Plane     = 2,
	EUVProjectionMethod__EUVProjectionMethod_MAX = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
