#pragma once

// SCUM (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AssetRegistry.ARFilter
// 0x00E8
struct FARFilter
{
	TArray<struct FName>                               PackageNames;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               PackagePaths;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ObjectPaths;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ClassNames;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0040(0x0050) UNKNOWN PROPERTY: SetProperty AssetRegistry.ARFilter.RecursiveClassesExclusionSet
	unsigned char                                      bRecursivePaths;                                          // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bRecursiveClasses;                                        // 0x00E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIncludeOnlyOnDiskAssets;                                 // 0x00E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AssetRegistry.AssetBundleEntry
// 0x0028
struct FAssetBundleEntry
{
	struct FPrimaryAssetId                             BundleScope;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FName                                       BundleName;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FSoftObjectPath>                     BundleAssets;                                             // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AssetRegistry.AssetBundleData
// 0x0010
struct FAssetBundleData
{
	TArray<struct FAssetBundleEntry>                   Bundles;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AssetRegistry.AssetData
// 0x0050
struct FAssetData
{
	struct FName                                       ObjectPath;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       PackageName;                                              // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       PackagePath;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       AssetName;                                                // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       AssetClass;                                               // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
};

// ScriptStruct AssetRegistry.TagAndValue
// 0x0018
struct FTagAndValue
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     Value;                                                    // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
};

// ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
// 0x0005
struct FAssetRegistryDependencyOptions
{
	unsigned char                                      bIncludeSoftPackageReferences;                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeHardPackageReferences;                            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeSearchableNames;                                  // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeSoftManagementReferences;                         // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeHardManagementReferences;                         // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
