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

// Enum MeshModelingTools.EMakeMeshPivotLocation
enum class EMakeMeshPivotLocation : uint8_t
{
	EMakeMeshPivotLocation__Base   = 0,
	EMakeMeshPivotLocation__Centered = 1,
	EMakeMeshPivotLocation__EMakeMeshPivotLocation_MAX = 2
};


// Enum MeshModelingTools.EMakeMeshPlacementType
enum class EMakeMeshPlacementType : uint8_t
{
	EMakeMeshPlacementType__OnPlane = 0,
	EMakeMeshPlacementType__OnScene = 1,
	EMakeMeshPlacementType__EMakeMeshPlacementType_MAX = 2
};


// Enum MeshModelingTools.EMakeMeshShapeType
enum class EMakeMeshShapeType : uint8_t
{
	EMakeMeshShapeType__None       = 0,
	EMakeMeshShapeType__All        = 1,
	EMakeMeshShapeType__Box        = 2,
	EMakeMeshShapeType__Cylinder   = 3,
	EMakeMeshShapeType__Cone       = 4,
	EMakeMeshShapeType__Plane      = 5,
	EMakeMeshShapeType__Sphere     = 6,
	EMakeMeshShapeType__EMakeMeshShapeType_MAX = 7
};


// Enum MeshModelingTools.EDisplaceMeshToolDisplaceType
enum class EDisplaceMeshToolDisplaceType : uint8_t
{
	EDisplaceMeshToolDisplaceType__Constant = 0,
	EDisplaceMeshToolDisplaceType__RandomNoise = 1,
	EDisplaceMeshToolDisplaceType__DisplacementMap = 2,
	EDisplaceMeshToolDisplaceType__EDisplaceMeshToolDisplaceType_MAX = 3
};


// Enum MeshModelingTools.EDrawPolygonOutputMode
enum class EDrawPolygonOutputMode : uint8_t
{
	EDrawPolygonOutputMode__MeshedPolygon = 0,
	EDrawPolygonOutputMode__ExtrudedConstant = 1,
	EDrawPolygonOutputMode__ExtrudedInteractive = 2,
	EDrawPolygonOutputMode__EDrawPolygonOutputMode_MAX = 3
};


// Enum MeshModelingTools.EDrawPolygonDrawMode
enum class EDrawPolygonDrawMode : uint8_t
{
	EDrawPolygonDrawMode__Freehand = 0,
	EDrawPolygonDrawMode__Circle   = 1,
	EDrawPolygonDrawMode__Square   = 2,
	EDrawPolygonDrawMode__Rectangle = 3,
	EDrawPolygonDrawMode__EDrawPolygonDrawMode_MAX = 4
};


// Enum MeshModelingTools.EDynamicMeshSculptBrushType
enum class EDynamicMeshSculptBrushType : uint8_t
{
	EDynamicMeshSculptBrushType__Move = 0,
	EDynamicMeshSculptBrushType__Smooth = 1,
	EDynamicMeshSculptBrushType__Offset = 2,
	EDynamicMeshSculptBrushType__SculptMax = 3,
	EDynamicMeshSculptBrushType__Inflate = 4,
	EDynamicMeshSculptBrushType__Pinch = 5,
	EDynamicMeshSculptBrushType__Flatten = 6,
	EDynamicMeshSculptBrushType__Plane = 7,
	EDynamicMeshSculptBrushType__LastValue = 8,
	EDynamicMeshSculptBrushType__EDynamicMeshSculptBrushType_MAX = 9
};


// Enum MeshModelingTools.EPolygonGroupMode
enum class EPolygonGroupMode : uint8_t
{
	EPolygonGroupMode__KeepInputPolygons = 0,
	EPolygonGroupMode__RecomputePolygonsByAngleThreshold = 1,
	EPolygonGroupMode__PolygonsAreTriangles = 2,
	EPolygonGroupMode__EPolygonGroupMode_MAX = 3
};


// Enum MeshModelingTools.EQuickTransformerMode
enum class EQuickTransformerMode : uint8_t
{
	EQuickTransformerMode__AxisTranslation = 0,
	EQuickTransformerMode__AxisRotation = 1,
	EQuickTransformerMode__EQuickTransformerMode_MAX = 2
};


// Enum MeshModelingTools.EWeightScheme
enum class EWeightScheme : uint8_t
{
	EWeightScheme__Uniform         = 0,
	EWeightScheme__Umbrella        = 1,
	EWeightScheme__Valence         = 2,
	EWeightScheme__MeanValue       = 3,
	EWeightScheme__Cotangent       = 4,
	EWeightScheme__ClampedCotangent = 5,
	EWeightScheme__EWeightScheme_MAX = 6
};


// Enum MeshModelingTools.EGroupTopologyDeformationStrategy
enum class EGroupTopologyDeformationStrategy : uint8_t
{
	EGroupTopologyDeformationStrategy__Linear = 0,
	EGroupTopologyDeformationStrategy__Laplacian = 1,
	EGroupTopologyDeformationStrategy__EGroupTopologyDeformationStrategy_MAX = 2
};


// Enum MeshModelingTools.EMeshEditingMaterialModes
enum class EMeshEditingMaterialModes : uint8_t
{
	EMeshEditingMaterialModes__ExistingMaterial = 0,
	EMeshEditingMaterialModes__MeshFocusMaterial = 1,
	EMeshEditingMaterialModes__EMeshEditingMaterialModes_MAX = 2
};


// Enum MeshModelingTools.ESetMeshMaterialMode
enum class ESetMeshMaterialMode : uint8_t
{
	ESetMeshMaterialMode__KeepOriginal = 0,
	ESetMeshMaterialMode__Checkerboard = 1,
	ESetMeshMaterialMode__Override = 2,
	ESetMeshMaterialMode__ESetMeshMaterialMode_MAX = 3
};


// Enum MeshModelingTools.EMeshSelectionToolPrimaryMode
enum class EMeshSelectionToolPrimaryMode : uint8_t
{
	EMeshSelectionToolPrimaryMode__Brush = 0,
	EMeshSelectionToolPrimaryMode__AngleFiltered = 1,
	EMeshSelectionToolPrimaryMode__Visible = 2,
	EMeshSelectionToolPrimaryMode__AllConnected = 3,
	EMeshSelectionToolPrimaryMode__AllInGroup = 4,
	EMeshSelectionToolPrimaryMode__AllWithinAngle = 5,
	EMeshSelectionToolPrimaryMode__EMeshSelectionToolPrimaryMode_MAX = 6
};


// Enum MeshModelingTools.EMeshSelectionToolActions
enum class EMeshSelectionToolActions : uint8_t
{
	EMeshSelectionToolActions__NoAction = 0,
	EMeshSelectionToolActions__ClearSelection = 1,
	EMeshSelectionToolActions__InvertSelection = 2,
	EMeshSelectionToolActions__GrowSelection = 3,
	EMeshSelectionToolActions__ShrinkSelection = 4,
	EMeshSelectionToolActions__ExpandToConnected = 5,
	EMeshSelectionToolActions__DeleteSelected = 6,
	EMeshSelectionToolActions__SeparateSelected = 7,
	EMeshSelectionToolActions__EMeshSelectionToolActions_MAX = 8
};


// Enum MeshModelingTools.ENonlinearOperationType
enum class ENonlinearOperationType : uint8_t
{
	ENonlinearOperationType__Bend  = 0,
	ENonlinearOperationType__Flare = 1,
	ENonlinearOperationType__Twist = 2,
	ENonlinearOperationType__ENonlinearOperationType_MAX = 3
};


// Enum MeshModelingTools.ESmoothMeshToolSmoothType
enum class ESmoothMeshToolSmoothType : uint8_t
{
	ESmoothMeshToolSmoothType__Iterative = 0,
	ESmoothMeshToolSmoothType__BiHarmonic_Cotan = 1,
	ESmoothMeshToolSmoothType__ESmoothMeshToolSmoothType_MAX = 2
};


// Enum MeshModelingTools.ETransformMeshesSnapDragRotationMode
enum class ETransformMeshesSnapDragRotationMode : uint8_t
{
	ETransformMeshesSnapDragRotationMode__Ignore = 0,
	ETransformMeshesSnapDragRotationMode__Align = 1,
	ETransformMeshesSnapDragRotationMode__AlignFlipped = 2,
	ETransformMeshesSnapDragRotationMode__LastValue = 3,
	ETransformMeshesSnapDragRotationMode__ETransformMeshesSnapDragRotationMode_MAX = 4
};


// Enum MeshModelingTools.ETransformMeshesSnapDragSource
enum class ETransformMeshesSnapDragSource : uint8_t
{
	ETransformMeshesSnapDragSource__ClickPoint = 0,
	ETransformMeshesSnapDragSource__Pivot = 1,
	ETransformMeshesSnapDragSource__LastValue = 2,
	ETransformMeshesSnapDragSource__ETransformMeshesSnapDragSource_MAX = 3
};


// Enum MeshModelingTools.ETransformMeshesTransformMode
enum class ETransformMeshesTransformMode : uint8_t
{
	ETransformMeshesTransformMode__SharedGizmo = 0,
	ETransformMeshesTransformMode__SharedGizmoLocal = 1,
	ETransformMeshesTransformMode__PerObjectGizmo = 2,
	ETransformMeshesTransformMode__LastValue = 3,
	ETransformMeshesTransformMode__ETransformMeshesTransformMode_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MeshModelingTools.BrushStampData
// 0x00A4
struct FBrushStampData
{
	unsigned char                                      UnknownData00[0xA4];                                      // 0x0000(0x00A4) MISSED OFFSET
};

// ScriptStruct MeshModelingTools.TransformMeshesTarget
// 0x0010
struct FTransformMeshesTarget
{
	class UTransformProxy*                             TransformProxy;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTransformGizmo*                             TransformGizmo;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
