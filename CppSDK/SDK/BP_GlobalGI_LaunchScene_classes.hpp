#pragma once
// Package: BP_GlobalGI_LaunchScene

#include "Basic.hpp"

#include "KuroRenderingRuntimeBPPlugin_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "KuroCurve_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C
// 0x03C0 (0x2FA0 - 0x2BE0)
class ABP_GlobalGI_LaunchScene_C final : public AKuroGlobalGI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2BE0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneRayTracingGICaptureComponentCube* SceneRayTracingGICaptureComponentCube;             // 0x2BE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   KuroVolumeCloudGlobal1;                            // 0x2BF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKuroPostProcessComponent*              LUTPostProcess;                                    // 0x2BF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Skybox;                                            // 0x2C00(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKuroPostProcessComponent*              GlobalUiKuroPostProcess;                           // 0x2C08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  GlobalPostProcessVolume;                           // 0x2C10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             SceneLight;                                        // 0x2C18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             AtmoMoonLight;                                     // 0x2C20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             AtmoSunLight;                                      // 0x2C28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                     SkyLight;                                          // 0x2C30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UExponentialHeightFogComponent*         HeightFog;                                         // 0x2C38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x2C40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         CharacterLightHorizontal;                          // 0x2C48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrTimeOfDay;                                     // 0x2C4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaTime;                                         // 0x2C50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableTODCycle;                                    // 0x2C54(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PauseTOD;                                          // 0x2C55(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	bool                                          编辑器下更新;                                      // 0x2C56(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C57[0x1];                                     // 0x2C57(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TODCycleTime;                                      // 0x2C58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               AtmosphereSunRot;                                  // 0x2C5C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               SenenDirLightRot;                                  // 0x2C68(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         BP_SunHorizonAngle;                                // 0x2C74(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BP_SunVerticalAngle;                               // 0x2C78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MainLightHorizonAngle;                             // 0x2C7C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MainLightVerticalAngle;                            // 0x2C80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MainLightAngleLimit;                               // 0x2C84(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsGIEnable;                                        // 0x2C88(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          使用随机的昼夜循环天气组;                          // 0x2C89(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C8A[0x2];                                     // 0x2C8A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         当前的天气组索引值;                                // 0x2C8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           太阳颜色;                                          // 0x2C90(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector2D>                      SunLightExistTime;                                 // 0x2CA0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector2D>                      MoonLightExistTime;                                // 0x2CB0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          运行时自动开始循环;                                // 0x2CC0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UISceneRendering;                                  // 0x2CC1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CC2[0x6];                                     // 0x2CC2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPDA_GIUIData_C*                        UIData;                                            // 0x2CC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DEBUG_UI;                                          // 0x2CD0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsRootGI;                                          // 0x2CD1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsEditorUpdate;                                    // 0x2CD2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          更新角色光方向;                                    // 0x2CD3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          根据光源方向自动更新角色光方向;                    // 0x2CD4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          DEBUG_使用角色预览方向光;                          // 0x2CD5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CD6[0x2];                                     // 0x2CD6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DEBUG_角色预览方向光方向;                          // 0x2CD8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalDaysElapsed;                                  // 0x2CDC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MoonFade;                                          // 0x2CE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              MoonVisibleTime;                                   // 0x2CE4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          关闭雾效;                                          // 0x2CEC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          RuntimeTimeEnable;                                 // 0x2CED(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                         Pad_2CEE[0x2];                                     // 0x2CEE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MainLightTickSecond;                               // 0x2CF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         MainLightTickCounter;                              // 0x2CF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForceUpdateMainLightDir;                           // 0x2CF8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CF9[0x3];                                     // 0x2CF9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WindDir;                                           // 0x2CFC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          使用临时雾效;                                      // 0x2D00(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          开启集群特效;                                      // 0x2D01(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D02[0x6];                                     // 0x2D02(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      TempFogMaterial;                                   // 0x2D08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               TempFogDMI;                                        // 0x2D10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               SkyboxDMI;                                         // 0x2D18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      SkyboxMaterial;                                    // 0x2D20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SunDiscColor;                                      // 0x2D28(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SunScatterColor;                                   // 0x2D38(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SunSize;                                           // 0x2D48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MoonDiscColor;                                     // 0x2D4C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MoonScatterColor;                                  // 0x2D5C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MoonSize;                                          // 0x2D6C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HorizonColor;                                      // 0x2D70(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HorizonFalloff;                                    // 0x2D80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ZenithColor;                                       // 0x2D84(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExtremWeatherWeight;                               // 0x2D94(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ST_TopColor;                                       // 0x2D98(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ST_DomeColorTint;                                  // 0x2DA8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ST_TopWidth;                                       // 0x2DB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DBC[0x4];                                     // 0x2DBC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            CharMainLightCurve;                                // 0x2DC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            CharSkyLightCurve;                                 // 0x2DC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseCharCustomLighting;                             // 0x2DD0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2DD1[0x3];                                     // 0x2DD1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CharAmbientColor;                                  // 0x2DD4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CharSkinAmbientColor;                              // 0x2DE4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DF4[0x4];                                     // 0x2DF4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            CharShadowCurve;                                   // 0x2DF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      LightFunctionMaterial;                             // 0x2E00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightFunctionIntensity;                            // 0x2E08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E0C[0x4];                                     // 0x2E0C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               LightFunctionDMI;                                  // 0x2E10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DEBUG开启无音区特殊地表;                           // 0x2E18(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                         Pad_2E19[0x7];                                     // 0x2E19(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      LensFlareMI;                                       // 0x2E20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               LensFlareDMI;                                      // 0x2E28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Nadir_Color;                                       // 0x2E30(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Nadir_Falloff;                                     // 0x2E40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Sun_Scatter_Size;                                  // 0x2E44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Moon_Scatter_Size;                                 // 0x2E48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MainDirectionLightUpdateThreshold_Mobile;          // 0x2E4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MainDirectionLightUpdateThreshold;                 // 0x2E50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GlobalWindDirection;                               // 0x2E54(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GlobalWindRightDirection;                          // 0x2E60(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DEBUG无音区特殊地表强度;                           // 0x2E6C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Character_Rim_Color;                               // 0x2E70(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RealTimeOfDay;                                     // 0x2E80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               SunRotation;                                       // 0x2E84(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         DEBUG_角色预览方向光垂直方向;                      // 0x2E90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UIWorldZOffset;                                    // 0x2E94(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UINeedLerpData;                                    // 0x2E98(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanSpawnEffect;                                    // 0x2E99(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          编辑器下关闭LensFlare;                             // 0x2E9A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E9B[0x5];                                     // 0x2E9B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UKuroGlobalColorMapComponent*           KuroGlobalColorMap;                                // 0x2EA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKuroGlobalHeightMapComponent*          KuroGlobalHeightMap;                               // 0x2EA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsComponentsEnable;                                // 0x2EB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2EB1[0x3];                                     // 0x2EB1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DefaultSkyLightShadowSupplement;                   // 0x2EB4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultSkyLightReflectionAddIntensity;             // 0x2EB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EBC[0x4];                                     // 0x2EBC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChildActorComponent*                   RainOverrider;                                     // 0x2EC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Clouds_C*                           DynamicCloudsActor;                                // 0x2EC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Clouds_Change_Time;                                // 0x2ED0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKuroDynamicCloudType                         LocalDynamicCloudsType;                            // 0x2ED4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2ED5[0x3];                                     // 0x2ED5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Clouds_Change_CD;                                  // 0x2ED8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Editor_Update;                                  // 0x2EDC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          启用时间参数写入;                                  // 0x2EDD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2EDE[0x2];                                     // 0x2EDE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               InitLightFunctionMap;                              // 0x2EE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      StarsMaterial;                                     // 0x2EE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Stars;                                          // 0x2EF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      MilkyWayMaterial;                                  // 0x2EF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_MilkyWay;                                       // 0x2F00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CloudOcean;                                        // 0x2F08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKuroCurveFloat                        FogTImeControl;                                    // 0x2F10(0x0090)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_GlobalGI_LaunchScene(int32 EntryPoint);
	void OnKuroEndUiScene();
	void OnKuroStartUiScene(const class FString& InName, class ULevel* InUILevel);
	void OnKuroSetRuntimeTime(float CurrentTime);
	void ReceiveBeginPlay();
	void OnKuroTick(float DeltaTime_0);
	void OnKuroTickEditor(float DeltaTime_0);
	void UserConstructionScript();
	void UpdateGIData(bool SkipLerpData);
	void Update_Fog();
	void Update_Env();
	void Is_Day(bool* Result);
	void InitMaterials();
	void Get_Light_Direction(struct FVector* SunLight, struct FVector* NightLight);
	void Get_Light_Rotator(struct FRotator* SunLight, struct FRotator* NightLight);
	void InitGICompoemnt();
	void Get_Scene_Light_Direction(struct FVector* LightDir);
	void Get_Scene_Light_Rotator(struct FRotator* SunLight, struct FRotator* NightLight);
	void CalculateLightDirection(float Vertical, float Horizontal, float Time, struct FRotator* NewParam);
	void CalulateLightDirectionWithLimit(float V, float H, float Time, struct FRotator* NewParam);
	void InitFeature();
	void GetViewLocation(struct FVector* WorldPosition, bool* Suc);
	void UpdateTime();
	void UpdateMainLight();
	void Update_Main_Light_Direction();
	void GetLightDirectionFromVH(float Vertical, float Horizontal, struct FRotator* Result);
	void SetUIComponentsVisibility(bool IsVisible);
	void Set_All_Components_States(bool IsEnable);
	void InitGI();
	void UpdateSkyDome();
	void Get_Total_TOD_Time_Elapsed(float* Time);
	void GetSkyDomeActor();
	void 清晨();
	void 中午();
	void 黄昏();
	void 黄昏到夜晚();
	void 夜晚到清晨();
	void 夜晚();
	void UpdateDayNightDataLayer();
	void 辰时();
	void 上午();
	void 下午();
	void 申时();
	void GetTrulyTime(float* CurTime);
	void UpdateMisc();
	void GetSkyboxDMI(class UMaterialInstanceDynamic** DMIRet);
	struct FVector EulerToForward(float Pitch, float Yaw);
	struct FLinearColor Clamp_Luminance(const struct FLinearColor& InColor, float Min, float Max);
	void GetTODCharacterLighting(const struct FLinearColor& mainLight, float mainLightIntensity, const struct FLinearColor& skyLight, float skyLightIntensity, struct FLinearColor* FrontSideLight, struct FLinearColor* BackSideLight);
	void UpdateCloudCard(struct FKuroCloudCardSetting& CloudCardSetting);
	void UpdateEditor();
	void On_Global_GITick();
	void Update_Big_World();
	void Update_Dynamic_Clouds();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GlobalGI_LaunchScene_C">();
	}
	static class ABP_GlobalGI_LaunchScene_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GlobalGI_LaunchScene_C>();
	}
};
static_assert(alignof(ABP_GlobalGI_LaunchScene_C) == 0x000010, "Wrong alignment on ABP_GlobalGI_LaunchScene_C");
static_assert(sizeof(ABP_GlobalGI_LaunchScene_C) == 0x002FA0, "Wrong size on ABP_GlobalGI_LaunchScene_C");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, UberGraphFrame) == 0x002BE0, "Member 'ABP_GlobalGI_LaunchScene_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, SceneRayTracingGICaptureComponentCube) == 0x002BE8, "Member 'ABP_GlobalGI_LaunchScene_C::SceneRayTracingGICaptureComponentCube' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, KuroVolumeCloudGlobal1) == 0x002BF0, "Member 'ABP_GlobalGI_LaunchScene_C::KuroVolumeCloudGlobal1' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, LUTPostProcess) == 0x002BF8, "Member 'ABP_GlobalGI_LaunchScene_C::LUTPostProcess' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, Skybox) == 0x002C00, "Member 'ABP_GlobalGI_LaunchScene_C::Skybox' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, GlobalUiKuroPostProcess) == 0x002C08, "Member 'ABP_GlobalGI_LaunchScene_C::GlobalUiKuroPostProcess' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, GlobalPostProcessVolume) == 0x002C10, "Member 'ABP_GlobalGI_LaunchScene_C::GlobalPostProcessVolume' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, SceneLight) == 0x002C18, "Member 'ABP_GlobalGI_LaunchScene_C::SceneLight' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, AtmoMoonLight) == 0x002C20, "Member 'ABP_GlobalGI_LaunchScene_C::AtmoMoonLight' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, AtmoSunLight) == 0x002C28, "Member 'ABP_GlobalGI_LaunchScene_C::AtmoSunLight' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, SkyLight) == 0x002C30, "Member 'ABP_GlobalGI_LaunchScene_C::SkyLight' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, HeightFog) == 0x002C38, "Member 'ABP_GlobalGI_LaunchScene_C::HeightFog' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, DefaultSceneRoot) == 0x002C40, "Member 'ABP_GlobalGI_LaunchScene_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, CharacterLightHorizontal) == 0x002C48, "Member 'ABP_GlobalGI_LaunchScene_C::CharacterLightHorizontal' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, CurrTimeOfDay) == 0x002C4C, "Member 'ABP_GlobalGI_LaunchScene_C::CurrTimeOfDay' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, DeltaTime) == 0x002C50, "Member 'ABP_GlobalGI_LaunchScene_C::DeltaTime' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, EnableTODCycle) == 0x002C54, "Member 'ABP_GlobalGI_LaunchScene_C::EnableTODCycle' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, PauseTOD) == 0x002C55, "Member 'ABP_GlobalGI_LaunchScene_C::PauseTOD' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, 编辑器下更新) == 0x002C56, "Member 'ABP_GlobalGI_LaunchScene_C::编辑器下更新' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, TODCycleTime) == 0x002C58, "Member 'ABP_GlobalGI_LaunchScene_C::TODCycleTime' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, AtmosphereSunRot) == 0x002C5C, "Member 'ABP_GlobalGI_LaunchScene_C::AtmosphereSunRot' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, SenenDirLightRot) == 0x002C68, "Member 'ABP_GlobalGI_LaunchScene_C::SenenDirLightRot' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, BP_SunHorizonAngle) == 0x002C74, "Member 'ABP_GlobalGI_LaunchScene_C::BP_SunHorizonAngle' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, BP_SunVerticalAngle) == 0x002C78, "Member 'ABP_GlobalGI_LaunchScene_C::BP_SunVerticalAngle' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, MainLightHorizonAngle) == 0x002C7C, "Member 'ABP_GlobalGI_LaunchScene_C::MainLightHorizonAngle' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, MainLightVerticalAngle) == 0x002C80, "Member 'ABP_GlobalGI_LaunchScene_C::MainLightVerticalAngle' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, MainLightAngleLimit) == 0x002C84, "Member 'ABP_GlobalGI_LaunchScene_C::MainLightAngleLimit' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, IsGIEnable) == 0x002C88, "Member 'ABP_GlobalGI_LaunchScene_C::IsGIEnable' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, 使用随机的昼夜循环天气组) == 0x002C89, "Member 'ABP_GlobalGI_LaunchScene_C::使用随机的昼夜循环天气组' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, 当前的天气组索引值) == 0x002C8C, "Member 'ABP_GlobalGI_LaunchScene_C::当前的天气组索引值' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, 太阳颜色) == 0x002C90, "Member 'ABP_GlobalGI_LaunchScene_C::太阳颜色' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, SunLightExistTime) == 0x002CA0, "Member 'ABP_GlobalGI_LaunchScene_C::SunLightExistTime' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, MoonLightExistTime) == 0x002CB0, "Member 'ABP_GlobalGI_LaunchScene_C::MoonLightExistTime' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, 运行时自动开始循环) == 0x002CC0, "Member 'ABP_GlobalGI_LaunchScene_C::运行时自动开始循环' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, UISceneRendering) == 0x002CC1, "Member 'ABP_GlobalGI_LaunchScene_C::UISceneRendering' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, UIData) == 0x002CC8, "Member 'ABP_GlobalGI_LaunchScene_C::UIData' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, DEBUG_UI) == 0x002CD0, "Member 'ABP_GlobalGI_LaunchScene_C::DEBUG_UI' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, IsRootGI) == 0x002CD1, "Member 'ABP_GlobalGI_LaunchScene_C::IsRootGI' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, IsEditorUpdate) == 0x002CD2, "Member 'ABP_GlobalGI_LaunchScene_C::IsEditorUpdate' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, 更新角色光方向) == 0x002CD3, "Member 'ABP_GlobalGI_LaunchScene_C::更新角色光方向' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, 根据光源方向自动更新角色光方向) == 0x002CD4, "Member 'ABP_GlobalGI_LaunchScene_C::根据光源方向自动更新角色光方向' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, DEBUG_使用角色预览方向光) == 0x002CD5, "Member 'ABP_GlobalGI_LaunchScene_C::DEBUG_使用角色预览方向光' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, DEBUG_角色预览方向光方向) == 0x002CD8, "Member 'ABP_GlobalGI_LaunchScene_C::DEBUG_角色预览方向光方向' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, TotalDaysElapsed) == 0x002CDC, "Member 'ABP_GlobalGI_LaunchScene_C::TotalDaysElapsed' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, MoonFade) == 0x002CE0, "Member 'ABP_GlobalGI_LaunchScene_C::MoonFade' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, MoonVisibleTime) == 0x002CE4, "Member 'ABP_GlobalGI_LaunchScene_C::MoonVisibleTime' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, 关闭雾效) == 0x002CEC, "Member 'ABP_GlobalGI_LaunchScene_C::关闭雾效' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, RuntimeTimeEnable) == 0x002CED, "Member 'ABP_GlobalGI_LaunchScene_C::RuntimeTimeEnable' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, MainLightTickSecond) == 0x002CF0, "Member 'ABP_GlobalGI_LaunchScene_C::MainLightTickSecond' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, MainLightTickCounter) == 0x002CF4, "Member 'ABP_GlobalGI_LaunchScene_C::MainLightTickCounter' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, ForceUpdateMainLightDir) == 0x002CF8, "Member 'ABP_GlobalGI_LaunchScene_C::ForceUpdateMainLightDir' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, WindDir) == 0x002CFC, "Member 'ABP_GlobalGI_LaunchScene_C::WindDir' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, 使用临时雾效) == 0x002D00, "Member 'ABP_GlobalGI_LaunchScene_C::使用临时雾效' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, 开启集群特效) == 0x002D01, "Member 'ABP_GlobalGI_LaunchScene_C::开启集群特效' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, TempFogMaterial) == 0x002D08, "Member 'ABP_GlobalGI_LaunchScene_C::TempFogMaterial' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, TempFogDMI) == 0x002D10, "Member 'ABP_GlobalGI_LaunchScene_C::TempFogDMI' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, SkyboxDMI) == 0x002D18, "Member 'ABP_GlobalGI_LaunchScene_C::SkyboxDMI' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, SkyboxMaterial) == 0x002D20, "Member 'ABP_GlobalGI_LaunchScene_C::SkyboxMaterial' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, SunDiscColor) == 0x002D28, "Member 'ABP_GlobalGI_LaunchScene_C::SunDiscColor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, SunScatterColor) == 0x002D38, "Member 'ABP_GlobalGI_LaunchScene_C::SunScatterColor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, SunSize) == 0x002D48, "Member 'ABP_GlobalGI_LaunchScene_C::SunSize' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, MoonDiscColor) == 0x002D4C, "Member 'ABP_GlobalGI_LaunchScene_C::MoonDiscColor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, MoonScatterColor) == 0x002D5C, "Member 'ABP_GlobalGI_LaunchScene_C::MoonScatterColor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, MoonSize) == 0x002D6C, "Member 'ABP_GlobalGI_LaunchScene_C::MoonSize' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, HorizonColor) == 0x002D70, "Member 'ABP_GlobalGI_LaunchScene_C::HorizonColor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, HorizonFalloff) == 0x002D80, "Member 'ABP_GlobalGI_LaunchScene_C::HorizonFalloff' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, ZenithColor) == 0x002D84, "Member 'ABP_GlobalGI_LaunchScene_C::ZenithColor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, ExtremWeatherWeight) == 0x002D94, "Member 'ABP_GlobalGI_LaunchScene_C::ExtremWeatherWeight' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, ST_TopColor) == 0x002D98, "Member 'ABP_GlobalGI_LaunchScene_C::ST_TopColor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, ST_DomeColorTint) == 0x002DA8, "Member 'ABP_GlobalGI_LaunchScene_C::ST_DomeColorTint' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, ST_TopWidth) == 0x002DB8, "Member 'ABP_GlobalGI_LaunchScene_C::ST_TopWidth' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, CharMainLightCurve) == 0x002DC0, "Member 'ABP_GlobalGI_LaunchScene_C::CharMainLightCurve' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, CharSkyLightCurve) == 0x002DC8, "Member 'ABP_GlobalGI_LaunchScene_C::CharSkyLightCurve' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, UseCharCustomLighting) == 0x002DD0, "Member 'ABP_GlobalGI_LaunchScene_C::UseCharCustomLighting' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, CharAmbientColor) == 0x002DD4, "Member 'ABP_GlobalGI_LaunchScene_C::CharAmbientColor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, CharSkinAmbientColor) == 0x002DE4, "Member 'ABP_GlobalGI_LaunchScene_C::CharSkinAmbientColor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, CharShadowCurve) == 0x002DF8, "Member 'ABP_GlobalGI_LaunchScene_C::CharShadowCurve' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, LightFunctionMaterial) == 0x002E00, "Member 'ABP_GlobalGI_LaunchScene_C::LightFunctionMaterial' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, LightFunctionIntensity) == 0x002E08, "Member 'ABP_GlobalGI_LaunchScene_C::LightFunctionIntensity' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, LightFunctionDMI) == 0x002E10, "Member 'ABP_GlobalGI_LaunchScene_C::LightFunctionDMI' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, DEBUG开启无音区特殊地表) == 0x002E18, "Member 'ABP_GlobalGI_LaunchScene_C::DEBUG开启无音区特殊地表' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, LensFlareMI) == 0x002E20, "Member 'ABP_GlobalGI_LaunchScene_C::LensFlareMI' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, LensFlareDMI) == 0x002E28, "Member 'ABP_GlobalGI_LaunchScene_C::LensFlareDMI' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, Nadir_Color) == 0x002E30, "Member 'ABP_GlobalGI_LaunchScene_C::Nadir_Color' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, Nadir_Falloff) == 0x002E40, "Member 'ABP_GlobalGI_LaunchScene_C::Nadir_Falloff' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, Sun_Scatter_Size) == 0x002E44, "Member 'ABP_GlobalGI_LaunchScene_C::Sun_Scatter_Size' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, Moon_Scatter_Size) == 0x002E48, "Member 'ABP_GlobalGI_LaunchScene_C::Moon_Scatter_Size' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, MainDirectionLightUpdateThreshold_Mobile) == 0x002E4C, "Member 'ABP_GlobalGI_LaunchScene_C::MainDirectionLightUpdateThreshold_Mobile' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, MainDirectionLightUpdateThreshold) == 0x002E50, "Member 'ABP_GlobalGI_LaunchScene_C::MainDirectionLightUpdateThreshold' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, GlobalWindDirection) == 0x002E54, "Member 'ABP_GlobalGI_LaunchScene_C::GlobalWindDirection' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, GlobalWindRightDirection) == 0x002E60, "Member 'ABP_GlobalGI_LaunchScene_C::GlobalWindRightDirection' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, DEBUG无音区特殊地表强度) == 0x002E6C, "Member 'ABP_GlobalGI_LaunchScene_C::DEBUG无音区特殊地表强度' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, Character_Rim_Color) == 0x002E70, "Member 'ABP_GlobalGI_LaunchScene_C::Character_Rim_Color' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, RealTimeOfDay) == 0x002E80, "Member 'ABP_GlobalGI_LaunchScene_C::RealTimeOfDay' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, SunRotation) == 0x002E84, "Member 'ABP_GlobalGI_LaunchScene_C::SunRotation' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, DEBUG_角色预览方向光垂直方向) == 0x002E90, "Member 'ABP_GlobalGI_LaunchScene_C::DEBUG_角色预览方向光垂直方向' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, UIWorldZOffset) == 0x002E94, "Member 'ABP_GlobalGI_LaunchScene_C::UIWorldZOffset' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, UINeedLerpData) == 0x002E98, "Member 'ABP_GlobalGI_LaunchScene_C::UINeedLerpData' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, CanSpawnEffect) == 0x002E99, "Member 'ABP_GlobalGI_LaunchScene_C::CanSpawnEffect' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, 编辑器下关闭LensFlare) == 0x002E9A, "Member 'ABP_GlobalGI_LaunchScene_C::编辑器下关闭LensFlare' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, KuroGlobalColorMap) == 0x002EA0, "Member 'ABP_GlobalGI_LaunchScene_C::KuroGlobalColorMap' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, KuroGlobalHeightMap) == 0x002EA8, "Member 'ABP_GlobalGI_LaunchScene_C::KuroGlobalHeightMap' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, IsComponentsEnable) == 0x002EB0, "Member 'ABP_GlobalGI_LaunchScene_C::IsComponentsEnable' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, DefaultSkyLightShadowSupplement) == 0x002EB4, "Member 'ABP_GlobalGI_LaunchScene_C::DefaultSkyLightShadowSupplement' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, DefaultSkyLightReflectionAddIntensity) == 0x002EB8, "Member 'ABP_GlobalGI_LaunchScene_C::DefaultSkyLightReflectionAddIntensity' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, RainOverrider) == 0x002EC0, "Member 'ABP_GlobalGI_LaunchScene_C::RainOverrider' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, DynamicCloudsActor) == 0x002EC8, "Member 'ABP_GlobalGI_LaunchScene_C::DynamicCloudsActor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, Clouds_Change_Time) == 0x002ED0, "Member 'ABP_GlobalGI_LaunchScene_C::Clouds_Change_Time' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, LocalDynamicCloudsType) == 0x002ED4, "Member 'ABP_GlobalGI_LaunchScene_C::LocalDynamicCloudsType' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, Clouds_Change_CD) == 0x002ED8, "Member 'ABP_GlobalGI_LaunchScene_C::Clouds_Change_CD' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, Is_Editor_Update) == 0x002EDC, "Member 'ABP_GlobalGI_LaunchScene_C::Is_Editor_Update' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, 启用时间参数写入) == 0x002EDD, "Member 'ABP_GlobalGI_LaunchScene_C::启用时间参数写入' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, InitLightFunctionMap) == 0x002EE0, "Member 'ABP_GlobalGI_LaunchScene_C::InitLightFunctionMap' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, StarsMaterial) == 0x002EE8, "Member 'ABP_GlobalGI_LaunchScene_C::StarsMaterial' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, SM_Stars) == 0x002EF0, "Member 'ABP_GlobalGI_LaunchScene_C::SM_Stars' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, MilkyWayMaterial) == 0x002EF8, "Member 'ABP_GlobalGI_LaunchScene_C::MilkyWayMaterial' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, SM_MilkyWay) == 0x002F00, "Member 'ABP_GlobalGI_LaunchScene_C::SM_MilkyWay' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, CloudOcean) == 0x002F08, "Member 'ABP_GlobalGI_LaunchScene_C::CloudOcean' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_LaunchScene_C, FogTImeControl) == 0x002F10, "Member 'ABP_GlobalGI_LaunchScene_C::FogTImeControl' has a wrong offset!");

}

