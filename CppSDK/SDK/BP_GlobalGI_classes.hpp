#pragma once
// Package: BP_GlobalGI

#include "Basic.hpp"

#include "KuroRenderingRuntimeBPPlugin_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "E_Cloud_Presents_structs.hpp"
#include "KuroCurve_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GlobalGI.BP_GlobalGI_C
// 0x0480 (0x3060 - 0x2BE0)
class ABP_GlobalGI_C final : public AKuroGlobalGI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2BE0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneRayTracingGICaptureComponentCube* SceneRayTracingGICaptureComponentCube;             // 0x2BE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   KuroVolumeCloudGlobal;                             // 0x2BF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   RainOverrider;                                     // 0x2BF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKuroGlobalHeightMapComponent*          KuroGlobalHeightMap;                               // 0x2C00(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CloudOcean;                                        // 0x2C08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKuroGlobalColorMapComponent*           KuroGlobalColorMap;                                // 0x2C10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_MilkyWay;                                       // 0x2C18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_UiSceneRenderingComponent_C*        BP_UiSceneRenderingComponent;                      // 0x2C20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKuroPostProcessComponent*              GlobalUiScenePostProcess;                          // 0x2C28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ImposterManager;                                   // 0x2C30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Com_Roc_01AS6;                                  // 0x2C38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Com_Roc_01AS5;                                  // 0x2C40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Com_Roc_01AS4;                                  // 0x2C48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Com_Roc_01AS3;                                  // 0x2C50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Com_Roc_01AS2;                                  // 0x2C58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Com_Roc_01AS1;                                  // 0x2C60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Com_Roc_01AS;                                   // 0x2C68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKuroPostProcessComponent*              LUTPostProcess;                                    // 0x2C70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Stars;                                          // 0x2C78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Skybox;                                            // 0x2C80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  GlobalPostProcessVolume;                           // 0x2C88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             SceneLight;                                        // 0x2C90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             AtmoMoonLight;                                     // 0x2C98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             AtmoSunLight;                                      // 0x2CA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                     SkyLight;                                          // 0x2CA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UExponentialHeightFogComponent*         HeightFog;                                         // 0x2CB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x2CB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         CharacterLightHorizontal;                          // 0x2CC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrTimeOfDay;                                     // 0x2CC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableTODCycle;                                    // 0x2CC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PauseTOD;                                          // 0x2CC9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	bool                                          编辑器下更新;                                      // 0x2CCA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CCB[0x1];                                     // 0x2CCB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TODCycleTime;                                      // 0x2CCC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               SenenDirLightRot;                                  // 0x2CD0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         MainLightAngleLimit;                               // 0x2CDC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsGIEnable;                                        // 0x2CE0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          使用随机的昼夜循环天气组;                          // 0x2CE1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CE2[0x2];                                     // 0x2CE2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         当前的天气组索引值;                                // 0x2CE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           太阳颜色;                                          // 0x2CE8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector2D>                      SunLightExistTime;                                 // 0x2CF8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector2D>                      MoonLightExistTime;                                // 0x2D08(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          运行时自动开始循环;                                // 0x2D18(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UISceneRendering;                                  // 0x2D19(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsRootGI;                                          // 0x2D1A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          DEBUG_使用角色预览方向光;                          // 0x2D1B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	float                                         DEBUG_角色预览方向光方向;                          // 0x2D1C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalDaysElapsed;                                  // 0x2D20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MoonFade;                                          // 0x2D24(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              MoonVisibleTime;                                   // 0x2D28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          编辑器下关闭LensFlare;                             // 0x2D30(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                          关闭雾效;                                          // 0x2D31(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          RuntimeTimeEnable;                                 // 0x2D32(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                         Pad_2D33[0x1];                                     // 0x2D33(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MainLightTickSecond;                               // 0x2D34(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         MainLightTickCounter;                              // 0x2D38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForceUpdateMainLightDir;                           // 0x2D3C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D3D[0x3];                                     // 0x2D3D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WindDir;                                           // 0x2D40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          使用临时雾效;                                      // 0x2D44(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D45[0x3];                                     // 0x2D45(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      TempFogMaterial;                                   // 0x2D48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               TempFogDMI;                                        // 0x2D50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      SkyboxMaterial;                                    // 0x2D58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SunDiscColor;                                      // 0x2D60(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SunScatterColor;                                   // 0x2D70(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SunSize;                                           // 0x2D80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MoonDiscColor;                                     // 0x2D84(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MoonScatterColor;                                  // 0x2D94(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MoonSize;                                          // 0x2DA4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HorizonColor;                                      // 0x2DA8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HorizonFalloff;                                    // 0x2DB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ZenithColor;                                       // 0x2DBC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExtremWeatherWeight;                               // 0x2DCC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ST_TopColor;                                       // 0x2DD0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ST_DomeColorTint;                                  // 0x2DE0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ST_TopWidth;                                       // 0x2DF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DF4[0x4];                                     // 0x2DF4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            CharMainLightCurve;                                // 0x2DF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            CharSkyLightCurve;                                 // 0x2E00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseCharCustomLighting;                             // 0x2E08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E09[0x3];                                     // 0x2E09(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CharAmbientColor;                                  // 0x2E0C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CharSkinAmbientColor;                              // 0x2E1C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E2C[0x4];                                     // 0x2E2C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            CharShadowCurve;                                   // 0x2E30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      LightFunctionMaterial;                             // 0x2E38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightFunctionIntensity;                            // 0x2E40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E44[0x4];                                     // 0x2E44(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               LightFunctionDMI;                                  // 0x2E48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DEBUG开启无音区特殊地表;                           // 0x2E50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                         Pad_2E51[0x7];                                     // 0x2E51(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      LensFlareMI;                                       // 0x2E58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               LensFlareDMI;                                      // 0x2E60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      MobileLensFlareMI_Ghost;                           // 0x2E68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Nadir_Color;                                       // 0x2E70(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Nadir_Falloff;                                     // 0x2E80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Sun_Scatter_Size;                                  // 0x2E84(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Moon_Scatter_Size;                                 // 0x2E88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E8C[0x4];                                     // 0x2E8C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      StarsMaterial;                                     // 0x2E90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MainDirectionLightUpdateThreshold_Mobile;          // 0x2E98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MainDirectionLightUpdateThreshold;                 // 0x2E9C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GlobalWindDirection;                               // 0x2EA0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GlobalWindRightDirection;                          // 0x2EAC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DEBUG无音区特殊地表强度;                           // 0x2EB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EBC[0x4];                                     // 0x2EBC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ControlTodTime_C*                   TodTimeController;                                 // 0x2EC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RealTimeOfDay;                                     // 0x2EC8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2ECC[0x4];                                     // 0x2ECC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Clouds_C*                           DynamicCloudsActor;                                // 0x2ED0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKuroDynamicCloudType                         LocalDynamicCloudsType;                            // 0x2ED8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2ED9[0x3];                                     // 0x2ED9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RainDensityChangeSpeed;                            // 0x2EDC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RainDensity;                                       // 0x2EE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SnowDensity;                                       // 0x2EE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RainGravity;                                       // 0x2EE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RainGravityChangeSpeed;                            // 0x2EEC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RainWindPower;                                     // 0x2EF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RainWindPowerChangeSpeed;                          // 0x2EF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanSpawnEffect;                                    // 0x2EF8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2EF9[0x3];                                     // 0x2EF9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FinalSnowDensity;                                  // 0x2EFC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FinalRainDensity;                                  // 0x2F00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FinalRainGravity;                                  // 0x2F04(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultSkyLightShadowSupplement;                   // 0x2F08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultSkyLightReflectionAddIntensity;             // 0x2F0C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      MobileLensFlareMI_Halo;                            // 0x2F10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MobileLensFlareDMI_Ghost;                          // 0x2F18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MobileLensFlareDMI_Halo;                           // 0x2F20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             HeightMapTexture;                                  // 0x2F28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HeightMapUpdated;                                  // 0x2F30(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F31[0x3];                                     // 0x2F31(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SunLightDirection;                                 // 0x2F34(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsComponentsEnable;                                // 0x2F40(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F41[0x7];                                     // 0x2F41(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               Last_LightFunction_Map;                            // 0x2F48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               InitLightFunctionMap;                              // 0x2F50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TODLightLoadingWait;                               // 0x2F58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DayLightLoadingTime;                               // 0x2F5C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NightLightLoadingTime;                             // 0x2F60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ComputeLightGridSkipFrames;                        // 0x2F64(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      MilkyWayMaterial;                                  // 0x2F68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          使用主角位置;                                      // 0x2F70(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F71[0x3];                                     // 0x2F71(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DEBUG_角色预览方向光垂直方向;                      // 0x2F74(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(E_Cloud_Presents CloudPresents, float ChangeSpeed, bool IsinEditor)> CallCloudChange;                                   // 0x2F78(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FKuroCurveFloat                        FogTImeControl;                                    // 0x2F88(0x0090)(Edit, BlueprintVisible)
	bool                                          Is_Editor_Update;                                  // 0x3018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          EnableImposterUpdate;                              // 0x3019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_301A[0x2];                                     // 0x301A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Clouds_Change_CD;                                  // 0x301C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Clouds_Change_Time;                                // 0x3020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Clouds_Change_Time_0;                              // 0x3024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          启用时间参数写入;                                  // 0x3028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UINeedLerpData;                                    // 0x3029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bEnableLumen;                                      // 0x302A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_302B[0x5];                                     // 0x302B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      LightFunctionMaterial_seq;                         // 0x3030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Override_Cloud_Rotation;                           // 0x3038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3039[0x3];                                     // 0x3039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Sequence_Cloud_Time_Control;                       // 0x303C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Sequence_Cloud_Time_Offset;                        // 0x3040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3044[0x4];                                     // 0x3044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      VolumetricLightFunctionMaterial;                   // 0x3048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PerformanceLightExist;                             // 0x3050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          EnsureCastShadow;                                  // 0x3051(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_GlobalGI(int32 EntryPoint);
	void OnKuroTickEditor(float DeltaTime);
	void OnKuroTick(float DeltaTime);
	void OnKuroEndUiScene();
	void OnKuroStartUiScene(const class FString& InName, class ULevel* InUILevel);
	void OnKuroSetRuntimeTime(float CurrentTime);
	void OnKuroRuntimeDestroy();
	void ReceiveBeginPlay();
	void OnKuroInit();
	void UserConstructionScript();
	void UpdateCharacterGI();
	void UpdateGIData(bool Skip_Lerp_Data);
	void UpdateFog();
	void Update_Env();
	void Get2SkyboxLerpWeight(float startSetting, float EndSetting, float CurrentTime, float* Weight);
	void UpdateWind();
	void InitMaterials();
	void InitGICompoemnt();
	void Get_Scene_Light_Direction(struct FVector* LightDir);
	void UpdateSkyLight();
	void UpdateAtmosphere();
	void CalculateLightDirection(float Vertical, float Horizontal, float Time, struct FRotator* NewParam);
	void CalculateLightDirectionWithLimit(float V, float H, float Time, struct FRotator* NewParam);
	void InitFeature();
	void GetViewLocation(struct FVector* WorldPosition, bool* Suc);
	void UpdateTime();
	void Update_UI_Env();
	void Update_Main_Light();
	void Update_Light_Direction();
	void UpdateLightParameters();
	void UpdatePostProcessVolume();
	void GetLightDirectionFromVH(float Vertical, float Horizontal, struct FRotator* Result);
	void UpdateLightShaft();
	void Set_All_Components_States(bool IsEnable);
	void InitGI();
	void UpdateSkyDome();
	void 清晨();
	void 中午();
	void 黄昏();
	void 黄昏到夜晚();
	void 夜晚到清晨();
	void 夜晚();
	void UpdateCloudCard(struct FKuroCloudCardSetting& CloudCardSetting);
	void Update_Day_Night_Data_Layer();
	void 辰时();
	void 上午();
	void 下午();
	void 申时();
	void UpdateFlowmapSkybox();
	void UpdateMisc();
	void UpdateSkybox();
	void GetSkyboxDMI(class UMaterialInstanceDynamic** DMIRet);
	void UpdateClusteredStuff();
	void GetStarsDMI(class UMaterialInstanceDynamic** DMIRet);
	void SetLevelSequenceTimeControl(class ABP_ControlTodTime_C* TodTimeControl);
	void Update_Dynamic_Clouds();
	struct FVector EulerToForward(float Pitch, float Yaw);
	struct FLinearColor Clamp_Luminance(const struct FLinearColor& InColor, float Min, float Max);
	void GetParallaxCorrectCachedShadowDirection(struct FRotator* NewParam);
	void GetTODCharacterLighting(const struct FLinearColor& mainLight, float mainLightIntensity, const struct FLinearColor& skyLight, float skyLightIntensity, struct FLinearColor* FrontSideLight, struct FLinearColor* BackSideLight);
	void GetParallaxCorrectCachedCrossFadeShadowDirection(struct FRotator* NewParam);
	void updateLightFunctions();
	void GetMilkyWayDMI(class UMaterialInstanceDynamic** DMIRet);
	void UpdateMilkWay(class UMaterialInstanceDynamic*& MilkyWay_DMI, struct FKuroMilkyWaySetting& CloudCardSetting);
	void UpdateBigWorld();
	void OnGlobalGITick();
	void UpdateEditor();
	void UpdateOcean();
	void IsPerformanceLightExist();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GlobalGI_C">();
	}
	static class ABP_GlobalGI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GlobalGI_C>();
	}
};
static_assert(alignof(ABP_GlobalGI_C) == 0x000010, "Wrong alignment on ABP_GlobalGI_C");
static_assert(sizeof(ABP_GlobalGI_C) == 0x003060, "Wrong size on ABP_GlobalGI_C");
static_assert(offsetof(ABP_GlobalGI_C, UberGraphFrame) == 0x002BE0, "Member 'ABP_GlobalGI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SceneRayTracingGICaptureComponentCube) == 0x002BE8, "Member 'ABP_GlobalGI_C::SceneRayTracingGICaptureComponentCube' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, KuroVolumeCloudGlobal) == 0x002BF0, "Member 'ABP_GlobalGI_C::KuroVolumeCloudGlobal' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, RainOverrider) == 0x002BF8, "Member 'ABP_GlobalGI_C::RainOverrider' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, KuroGlobalHeightMap) == 0x002C00, "Member 'ABP_GlobalGI_C::KuroGlobalHeightMap' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, CloudOcean) == 0x002C08, "Member 'ABP_GlobalGI_C::CloudOcean' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, KuroGlobalColorMap) == 0x002C10, "Member 'ABP_GlobalGI_C::KuroGlobalColorMap' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SM_MilkyWay) == 0x002C18, "Member 'ABP_GlobalGI_C::SM_MilkyWay' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, BP_UiSceneRenderingComponent) == 0x002C20, "Member 'ABP_GlobalGI_C::BP_UiSceneRenderingComponent' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, GlobalUiScenePostProcess) == 0x002C28, "Member 'ABP_GlobalGI_C::GlobalUiScenePostProcess' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, ImposterManager) == 0x002C30, "Member 'ABP_GlobalGI_C::ImposterManager' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SM_Com_Roc_01AS6) == 0x002C38, "Member 'ABP_GlobalGI_C::SM_Com_Roc_01AS6' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SM_Com_Roc_01AS5) == 0x002C40, "Member 'ABP_GlobalGI_C::SM_Com_Roc_01AS5' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SM_Com_Roc_01AS4) == 0x002C48, "Member 'ABP_GlobalGI_C::SM_Com_Roc_01AS4' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SM_Com_Roc_01AS3) == 0x002C50, "Member 'ABP_GlobalGI_C::SM_Com_Roc_01AS3' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SM_Com_Roc_01AS2) == 0x002C58, "Member 'ABP_GlobalGI_C::SM_Com_Roc_01AS2' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SM_Com_Roc_01AS1) == 0x002C60, "Member 'ABP_GlobalGI_C::SM_Com_Roc_01AS1' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SM_Com_Roc_01AS) == 0x002C68, "Member 'ABP_GlobalGI_C::SM_Com_Roc_01AS' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, LUTPostProcess) == 0x002C70, "Member 'ABP_GlobalGI_C::LUTPostProcess' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SM_Stars) == 0x002C78, "Member 'ABP_GlobalGI_C::SM_Stars' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, Skybox) == 0x002C80, "Member 'ABP_GlobalGI_C::Skybox' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, GlobalPostProcessVolume) == 0x002C88, "Member 'ABP_GlobalGI_C::GlobalPostProcessVolume' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SceneLight) == 0x002C90, "Member 'ABP_GlobalGI_C::SceneLight' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, AtmoMoonLight) == 0x002C98, "Member 'ABP_GlobalGI_C::AtmoMoonLight' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, AtmoSunLight) == 0x002CA0, "Member 'ABP_GlobalGI_C::AtmoSunLight' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SkyLight) == 0x002CA8, "Member 'ABP_GlobalGI_C::SkyLight' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, HeightFog) == 0x002CB0, "Member 'ABP_GlobalGI_C::HeightFog' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, DefaultSceneRoot) == 0x002CB8, "Member 'ABP_GlobalGI_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, CharacterLightHorizontal) == 0x002CC0, "Member 'ABP_GlobalGI_C::CharacterLightHorizontal' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, CurrTimeOfDay) == 0x002CC4, "Member 'ABP_GlobalGI_C::CurrTimeOfDay' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, EnableTODCycle) == 0x002CC8, "Member 'ABP_GlobalGI_C::EnableTODCycle' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, PauseTOD) == 0x002CC9, "Member 'ABP_GlobalGI_C::PauseTOD' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, 编辑器下更新) == 0x002CCA, "Member 'ABP_GlobalGI_C::编辑器下更新' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, TODCycleTime) == 0x002CCC, "Member 'ABP_GlobalGI_C::TODCycleTime' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SenenDirLightRot) == 0x002CD0, "Member 'ABP_GlobalGI_C::SenenDirLightRot' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, MainLightAngleLimit) == 0x002CDC, "Member 'ABP_GlobalGI_C::MainLightAngleLimit' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, IsGIEnable) == 0x002CE0, "Member 'ABP_GlobalGI_C::IsGIEnable' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, 使用随机的昼夜循环天气组) == 0x002CE1, "Member 'ABP_GlobalGI_C::使用随机的昼夜循环天气组' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, 当前的天气组索引值) == 0x002CE4, "Member 'ABP_GlobalGI_C::当前的天气组索引值' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, 太阳颜色) == 0x002CE8, "Member 'ABP_GlobalGI_C::太阳颜色' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SunLightExistTime) == 0x002CF8, "Member 'ABP_GlobalGI_C::SunLightExistTime' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, MoonLightExistTime) == 0x002D08, "Member 'ABP_GlobalGI_C::MoonLightExistTime' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, 运行时自动开始循环) == 0x002D18, "Member 'ABP_GlobalGI_C::运行时自动开始循环' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, UISceneRendering) == 0x002D19, "Member 'ABP_GlobalGI_C::UISceneRendering' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, IsRootGI) == 0x002D1A, "Member 'ABP_GlobalGI_C::IsRootGI' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, DEBUG_使用角色预览方向光) == 0x002D1B, "Member 'ABP_GlobalGI_C::DEBUG_使用角色预览方向光' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, DEBUG_角色预览方向光方向) == 0x002D1C, "Member 'ABP_GlobalGI_C::DEBUG_角色预览方向光方向' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, TotalDaysElapsed) == 0x002D20, "Member 'ABP_GlobalGI_C::TotalDaysElapsed' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, MoonFade) == 0x002D24, "Member 'ABP_GlobalGI_C::MoonFade' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, MoonVisibleTime) == 0x002D28, "Member 'ABP_GlobalGI_C::MoonVisibleTime' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, 编辑器下关闭LensFlare) == 0x002D30, "Member 'ABP_GlobalGI_C::编辑器下关闭LensFlare' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, 关闭雾效) == 0x002D31, "Member 'ABP_GlobalGI_C::关闭雾效' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, RuntimeTimeEnable) == 0x002D32, "Member 'ABP_GlobalGI_C::RuntimeTimeEnable' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, MainLightTickSecond) == 0x002D34, "Member 'ABP_GlobalGI_C::MainLightTickSecond' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, MainLightTickCounter) == 0x002D38, "Member 'ABP_GlobalGI_C::MainLightTickCounter' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, ForceUpdateMainLightDir) == 0x002D3C, "Member 'ABP_GlobalGI_C::ForceUpdateMainLightDir' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, WindDir) == 0x002D40, "Member 'ABP_GlobalGI_C::WindDir' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, 使用临时雾效) == 0x002D44, "Member 'ABP_GlobalGI_C::使用临时雾效' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, TempFogMaterial) == 0x002D48, "Member 'ABP_GlobalGI_C::TempFogMaterial' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, TempFogDMI) == 0x002D50, "Member 'ABP_GlobalGI_C::TempFogDMI' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SkyboxMaterial) == 0x002D58, "Member 'ABP_GlobalGI_C::SkyboxMaterial' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SunDiscColor) == 0x002D60, "Member 'ABP_GlobalGI_C::SunDiscColor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SunScatterColor) == 0x002D70, "Member 'ABP_GlobalGI_C::SunScatterColor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SunSize) == 0x002D80, "Member 'ABP_GlobalGI_C::SunSize' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, MoonDiscColor) == 0x002D84, "Member 'ABP_GlobalGI_C::MoonDiscColor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, MoonScatterColor) == 0x002D94, "Member 'ABP_GlobalGI_C::MoonScatterColor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, MoonSize) == 0x002DA4, "Member 'ABP_GlobalGI_C::MoonSize' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, HorizonColor) == 0x002DA8, "Member 'ABP_GlobalGI_C::HorizonColor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, HorizonFalloff) == 0x002DB8, "Member 'ABP_GlobalGI_C::HorizonFalloff' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, ZenithColor) == 0x002DBC, "Member 'ABP_GlobalGI_C::ZenithColor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, ExtremWeatherWeight) == 0x002DCC, "Member 'ABP_GlobalGI_C::ExtremWeatherWeight' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, ST_TopColor) == 0x002DD0, "Member 'ABP_GlobalGI_C::ST_TopColor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, ST_DomeColorTint) == 0x002DE0, "Member 'ABP_GlobalGI_C::ST_DomeColorTint' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, ST_TopWidth) == 0x002DF0, "Member 'ABP_GlobalGI_C::ST_TopWidth' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, CharMainLightCurve) == 0x002DF8, "Member 'ABP_GlobalGI_C::CharMainLightCurve' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, CharSkyLightCurve) == 0x002E00, "Member 'ABP_GlobalGI_C::CharSkyLightCurve' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, UseCharCustomLighting) == 0x002E08, "Member 'ABP_GlobalGI_C::UseCharCustomLighting' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, CharAmbientColor) == 0x002E0C, "Member 'ABP_GlobalGI_C::CharAmbientColor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, CharSkinAmbientColor) == 0x002E1C, "Member 'ABP_GlobalGI_C::CharSkinAmbientColor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, CharShadowCurve) == 0x002E30, "Member 'ABP_GlobalGI_C::CharShadowCurve' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, LightFunctionMaterial) == 0x002E38, "Member 'ABP_GlobalGI_C::LightFunctionMaterial' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, LightFunctionIntensity) == 0x002E40, "Member 'ABP_GlobalGI_C::LightFunctionIntensity' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, LightFunctionDMI) == 0x002E48, "Member 'ABP_GlobalGI_C::LightFunctionDMI' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, DEBUG开启无音区特殊地表) == 0x002E50, "Member 'ABP_GlobalGI_C::DEBUG开启无音区特殊地表' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, LensFlareMI) == 0x002E58, "Member 'ABP_GlobalGI_C::LensFlareMI' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, LensFlareDMI) == 0x002E60, "Member 'ABP_GlobalGI_C::LensFlareDMI' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, MobileLensFlareMI_Ghost) == 0x002E68, "Member 'ABP_GlobalGI_C::MobileLensFlareMI_Ghost' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, Nadir_Color) == 0x002E70, "Member 'ABP_GlobalGI_C::Nadir_Color' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, Nadir_Falloff) == 0x002E80, "Member 'ABP_GlobalGI_C::Nadir_Falloff' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, Sun_Scatter_Size) == 0x002E84, "Member 'ABP_GlobalGI_C::Sun_Scatter_Size' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, Moon_Scatter_Size) == 0x002E88, "Member 'ABP_GlobalGI_C::Moon_Scatter_Size' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, StarsMaterial) == 0x002E90, "Member 'ABP_GlobalGI_C::StarsMaterial' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, MainDirectionLightUpdateThreshold_Mobile) == 0x002E98, "Member 'ABP_GlobalGI_C::MainDirectionLightUpdateThreshold_Mobile' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, MainDirectionLightUpdateThreshold) == 0x002E9C, "Member 'ABP_GlobalGI_C::MainDirectionLightUpdateThreshold' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, GlobalWindDirection) == 0x002EA0, "Member 'ABP_GlobalGI_C::GlobalWindDirection' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, GlobalWindRightDirection) == 0x002EAC, "Member 'ABP_GlobalGI_C::GlobalWindRightDirection' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, DEBUG无音区特殊地表强度) == 0x002EB8, "Member 'ABP_GlobalGI_C::DEBUG无音区特殊地表强度' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, TodTimeController) == 0x002EC0, "Member 'ABP_GlobalGI_C::TodTimeController' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, RealTimeOfDay) == 0x002EC8, "Member 'ABP_GlobalGI_C::RealTimeOfDay' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, DynamicCloudsActor) == 0x002ED0, "Member 'ABP_GlobalGI_C::DynamicCloudsActor' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, LocalDynamicCloudsType) == 0x002ED8, "Member 'ABP_GlobalGI_C::LocalDynamicCloudsType' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, RainDensityChangeSpeed) == 0x002EDC, "Member 'ABP_GlobalGI_C::RainDensityChangeSpeed' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, RainDensity) == 0x002EE0, "Member 'ABP_GlobalGI_C::RainDensity' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SnowDensity) == 0x002EE4, "Member 'ABP_GlobalGI_C::SnowDensity' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, RainGravity) == 0x002EE8, "Member 'ABP_GlobalGI_C::RainGravity' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, RainGravityChangeSpeed) == 0x002EEC, "Member 'ABP_GlobalGI_C::RainGravityChangeSpeed' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, RainWindPower) == 0x002EF0, "Member 'ABP_GlobalGI_C::RainWindPower' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, RainWindPowerChangeSpeed) == 0x002EF4, "Member 'ABP_GlobalGI_C::RainWindPowerChangeSpeed' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, CanSpawnEffect) == 0x002EF8, "Member 'ABP_GlobalGI_C::CanSpawnEffect' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, FinalSnowDensity) == 0x002EFC, "Member 'ABP_GlobalGI_C::FinalSnowDensity' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, FinalRainDensity) == 0x002F00, "Member 'ABP_GlobalGI_C::FinalRainDensity' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, FinalRainGravity) == 0x002F04, "Member 'ABP_GlobalGI_C::FinalRainGravity' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, DefaultSkyLightShadowSupplement) == 0x002F08, "Member 'ABP_GlobalGI_C::DefaultSkyLightShadowSupplement' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, DefaultSkyLightReflectionAddIntensity) == 0x002F0C, "Member 'ABP_GlobalGI_C::DefaultSkyLightReflectionAddIntensity' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, MobileLensFlareMI_Halo) == 0x002F10, "Member 'ABP_GlobalGI_C::MobileLensFlareMI_Halo' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, MobileLensFlareDMI_Ghost) == 0x002F18, "Member 'ABP_GlobalGI_C::MobileLensFlareDMI_Ghost' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, MobileLensFlareDMI_Halo) == 0x002F20, "Member 'ABP_GlobalGI_C::MobileLensFlareDMI_Halo' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, HeightMapTexture) == 0x002F28, "Member 'ABP_GlobalGI_C::HeightMapTexture' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, HeightMapUpdated) == 0x002F30, "Member 'ABP_GlobalGI_C::HeightMapUpdated' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, SunLightDirection) == 0x002F34, "Member 'ABP_GlobalGI_C::SunLightDirection' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, IsComponentsEnable) == 0x002F40, "Member 'ABP_GlobalGI_C::IsComponentsEnable' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, Last_LightFunction_Map) == 0x002F48, "Member 'ABP_GlobalGI_C::Last_LightFunction_Map' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, InitLightFunctionMap) == 0x002F50, "Member 'ABP_GlobalGI_C::InitLightFunctionMap' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, TODLightLoadingWait) == 0x002F58, "Member 'ABP_GlobalGI_C::TODLightLoadingWait' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, DayLightLoadingTime) == 0x002F5C, "Member 'ABP_GlobalGI_C::DayLightLoadingTime' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, NightLightLoadingTime) == 0x002F60, "Member 'ABP_GlobalGI_C::NightLightLoadingTime' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, ComputeLightGridSkipFrames) == 0x002F64, "Member 'ABP_GlobalGI_C::ComputeLightGridSkipFrames' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, MilkyWayMaterial) == 0x002F68, "Member 'ABP_GlobalGI_C::MilkyWayMaterial' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, 使用主角位置) == 0x002F70, "Member 'ABP_GlobalGI_C::使用主角位置' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, DEBUG_角色预览方向光垂直方向) == 0x002F74, "Member 'ABP_GlobalGI_C::DEBUG_角色预览方向光垂直方向' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, CallCloudChange) == 0x002F78, "Member 'ABP_GlobalGI_C::CallCloudChange' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, FogTImeControl) == 0x002F88, "Member 'ABP_GlobalGI_C::FogTImeControl' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, Is_Editor_Update) == 0x003018, "Member 'ABP_GlobalGI_C::Is_Editor_Update' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, EnableImposterUpdate) == 0x003019, "Member 'ABP_GlobalGI_C::EnableImposterUpdate' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, Clouds_Change_CD) == 0x00301C, "Member 'ABP_GlobalGI_C::Clouds_Change_CD' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, Clouds_Change_Time) == 0x003020, "Member 'ABP_GlobalGI_C::Clouds_Change_Time' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, Clouds_Change_Time_0) == 0x003024, "Member 'ABP_GlobalGI_C::Clouds_Change_Time_0' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, 启用时间参数写入) == 0x003028, "Member 'ABP_GlobalGI_C::启用时间参数写入' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, UINeedLerpData) == 0x003029, "Member 'ABP_GlobalGI_C::UINeedLerpData' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, bEnableLumen) == 0x00302A, "Member 'ABP_GlobalGI_C::bEnableLumen' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, LightFunctionMaterial_seq) == 0x003030, "Member 'ABP_GlobalGI_C::LightFunctionMaterial_seq' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, Override_Cloud_Rotation) == 0x003038, "Member 'ABP_GlobalGI_C::Override_Cloud_Rotation' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, Sequence_Cloud_Time_Control) == 0x00303C, "Member 'ABP_GlobalGI_C::Sequence_Cloud_Time_Control' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, Sequence_Cloud_Time_Offset) == 0x003040, "Member 'ABP_GlobalGI_C::Sequence_Cloud_Time_Offset' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, VolumetricLightFunctionMaterial) == 0x003048, "Member 'ABP_GlobalGI_C::VolumetricLightFunctionMaterial' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, PerformanceLightExist) == 0x003050, "Member 'ABP_GlobalGI_C::PerformanceLightExist' has a wrong offset!");
static_assert(offsetof(ABP_GlobalGI_C, EnsureCastShadow) == 0x003051, "Member 'ABP_GlobalGI_C::EnsureCastShadow' has a wrong offset!");

}

