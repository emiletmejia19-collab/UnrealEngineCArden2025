// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UECArden/MyActorTest_Clase1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorTest_Clase1() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UECARDEN_API UClass* Z_Construct_UClass_AMyActorTest_Clase1();
UECARDEN_API UClass* Z_Construct_UClass_AMyActorTest_Clase1_NoRegister();
UPackage* Z_Construct_UPackage__Script_UECArden();
// End Cross Module References

// Begin Class AMyActorTest_Clase1
void AMyActorTest_Clase1::StaticRegisterNativesAMyActorTest_Clase1()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActorTest_Clase1);
UClass* Z_Construct_UClass_AMyActorTest_Clase1_NoRegister()
{
	return AMyActorTest_Clase1::StaticClass();
}
struct Z_Construct_UClass_AMyActorTest_Clase1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorTest_Clase1.h" },
		{ "ModuleRelativePath", "MyActorTest_Clase1.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorTest_Clase1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyActorTest_Clase1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UECArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorTest_Clase1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActorTest_Clase1_Statics::ClassParams = {
	&AMyActorTest_Clase1::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorTest_Clase1_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActorTest_Clase1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActorTest_Clase1()
{
	if (!Z_Registration_Info_UClass_AMyActorTest_Clase1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActorTest_Clase1.OuterSingleton, Z_Construct_UClass_AMyActorTest_Clase1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActorTest_Clase1.OuterSingleton;
}
template<> UECARDEN_API UClass* StaticClass<AMyActorTest_Clase1>()
{
	return AMyActorTest_Clase1::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorTest_Clase1);
AMyActorTest_Clase1::~AMyActorTest_Clase1() {}
// End Class AMyActorTest_Clase1

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_UECArden_Source_UECArden_MyActorTest_Clase1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActorTest_Clase1, AMyActorTest_Clase1::StaticClass, TEXT("AMyActorTest_Clase1"), &Z_Registration_Info_UClass_AMyActorTest_Clase1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActorTest_Clase1), 2606197768U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_UECArden_Source_UECArden_MyActorTest_Clase1_h_1168231068(TEXT("/Script/UECArden"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_UECArden_Source_UECArden_MyActorTest_Clase1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_UECArden_Source_UECArden_MyActorTest_Clase1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
