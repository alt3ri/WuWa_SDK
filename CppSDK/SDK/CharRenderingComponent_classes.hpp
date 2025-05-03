#pragma once
// Package: CharRenderingComponent

#include "Basic.hpp"

#include "ECharacterBodySpecifiedType_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"
#include "Engine_structs.hpp"
#include "ECharacterControllerCaseType_structs.hpp"
#include "ECharacterDitherType_structs.hpp"
#include "ECharacterSlotSpecifiedType_structs.hpp"
#include "ECharacterRenderingType_structs.hpp"


namespace SDK
{

// TypeScriptGeneratedClass CharRenderingComponent.CharRenderingComponent_C
// 0x0020 (0x00E8 - 0x00C8)
class UCharRenderingComponent_C final : public UKuroCharRenderingComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPDA_InteractionPlayerConfig_C*         InteractionConfig;                                 // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPDA_DecalShadowConfig_C*               DecalShadowConfig;                                 // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MonsterUseBodyEffect;                              // 0x00E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CharRenderingComponent(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Init(ECharacterRenderingType renderType);
	void RemoveMaterialControllerData(int32 handle1);
	int32 AddMaterialControllerData(class UObject* data);
	void ResetAllRenderingState();
	void RemoveMaterialControllerDataWithEnding(int32 handle);
	int32 AddMaterialControllerDataGroup(class UObject* data);
	void RemoveMaterialControllerDataGroup(int32 handle);
	bool CheckInit();
	void SetDebug(bool value);
	class UPD_MaterialDebug_C* GetDebugInfo();
	void AddComponent(const class FString& skelName, class UMeshComponent* skeletalComp);
	void RemoveComponent(const class FString& skelName);
	void OnFinalizedLevelSequence();
	void SetMaterialPropertyFloat(ECharacterBodySpecifiedType bodyType, float sectionIndex, ECharacterSlotSpecifiedType slotType, const class FString& propertyName, float value);
	void SetMaterialPropertyColor(ECharacterBodySpecifiedType bodyType, float sectionIndex, ECharacterSlotSpecifiedType slotType, const class FString& propertyName, const struct FLinearColor& value);
	void SetCapsuleDither(float value);
	void SetDitherEffect(float ditherRate, ECharacterDitherType ditherType);
	void RemoveMaterialControllerDataGroupWithEnding(int32 handle);
	float QuickInitAndAddDataGroup(class UObject* data, class ASkeletalMeshActor* meshActor);
	void AddComponentByCase(ECharacterControllerCaseType caseType, class UMeshComponent* skeletalComp);
	float QuickInitAndAddDataWithMeshComponent(class UObject* data, class UMeshComponent* meshComponent);
	bool GetInWater(float depthThreshold);
	void SetEffectProgress(float progress, int32 handleId);
	void RemoveComponentByCase(ECharacterControllerCaseType caseType);
	void SetBodyEffectOpacity(float opacity);
	float QuickInitAndAddDataGroupWithMeshComponent(class UObject* data, class UMeshComponent* meshComponent);
	void SetDecalShadowEnabled(bool enable);
	void DisableAllShadowByDecalShadowComponent();
	void AddComponentForDecalShadow(const class FString& name, class UPrimitiveComponent* comp);
	void RemoveComponentFromDecalShadow(const class FString& name);
	void ReceiveSeqTick(float deltaSeconds);
	void SetLogicOwner(class AActor* owner);
	float GetTimeDilation();
	void SetRealtimeShadowEnabled(bool enable);
	void SetDecalShadowOpacity(float opacity);
	void SetRealtimeShadowOpacity(float opacity);
	void Destroy();
	void SetDisableFightDither(bool disable);
	void AddComponentInnerV2(const class FString& skelName1, class UMeshComponent* skeletalComp1, bool useEmptyMaterial);
	void RemoveComponentInnerV2(const class FString& skelName);
	void SetEffectPause(int32 handle, bool paused);
	float QuickInitAndAddData(class UObject* data, class ASkeletalMeshActor* meshActor);
	class USkeletalMeshComponent* GetSkeletalMeshComponent(const class FString& skelName);
	void AddComponentWithEmptyMaterial(const class FString& skelName, class UMeshComponent* skeletalComp);
	void SetStarScarEnergy(float value);
	float AddMaterialControllerDataWithAnimObject(class UObject* data1, class USkeletalMeshComponent* animObject, class UObject* userData);
	float AddMaterialControllerDataGroupWithAnimObject(class UObject* data1, class USkeletalMeshComponent* animObject);
	void SetDitherApplyAll();
	void SetDitherApplyHeadsOnly();
	void RefreshMaterialController();
	bool ShouldTickAfterGoDown();
	void SetMaterialPropertyFloatV2(class FName name, float value, EKuroCharBodySpecifiedType bodyType, EKuroCharSlotSpecifiedType slotType, EKuroCharMeshPart meshPart);
	void SetMaterialPropertyColorV2(class FName name, const struct FLinearColor& value, EKuroCharBodySpecifiedType bodyType, EKuroCharSlotSpecifiedType slotType, EKuroCharMeshPart meshPart);
	void SetMaterialReplaceV2(class UMaterialInterface* material, EKuroCharBodySpecifiedType bodyType, EKuroCharSlotSpecifiedType slotType, EKuroCharMeshPart meshPart);
	void RemoveExternalMaterialReplaceV2(EKuroCharBodySpecifiedType bodyType, EKuroCharSlotSpecifiedType slotType, EKuroCharMeshPart meshPart);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharRenderingComponent_C">();
	}
	static class UCharRenderingComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharRenderingComponent_C>();
	}
};
static_assert(alignof(UCharRenderingComponent_C) == 0x000008, "Wrong alignment on UCharRenderingComponent_C");
static_assert(sizeof(UCharRenderingComponent_C) == 0x0000E8, "Wrong size on UCharRenderingComponent_C");
static_assert(offsetof(UCharRenderingComponent_C, UberGraphFrame) == 0x0000C8, "Member 'UCharRenderingComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCharRenderingComponent_C, InteractionConfig) == 0x0000D0, "Member 'UCharRenderingComponent_C::InteractionConfig' has a wrong offset!");
static_assert(offsetof(UCharRenderingComponent_C, DecalShadowConfig) == 0x0000D8, "Member 'UCharRenderingComponent_C::DecalShadowConfig' has a wrong offset!");
static_assert(offsetof(UCharRenderingComponent_C, MonsterUseBodyEffect) == 0x0000E0, "Member 'UCharRenderingComponent_C::MonsterUseBodyEffect' has a wrong offset!");

}

