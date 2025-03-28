#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Simpleholographic

#include "Basic.hpp"

#include "EHolographicState_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "SHolographicMaterialsCache_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Simpleholographic.BP_SimpleHolographic_C
// 0x00A0 (0x0350 - 0x02B0)
class ABP_SimpleHolographic_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<class USkeletalMeshComponent*, struct FSHolographicMaterialsCache> ComponentMaterialsCache;                           // 0x02C0(0x0050)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<class UMaterialInstanceDynamic*>       OL_Materials;                                      // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       Other_Materials;                                   // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPD_HolographicEffect_C*                DATA;                                              // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         TimeCounter;                                       // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33C[0x4];                                      // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 TargetRole;                                        // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	EHolographicState                             State;                                             // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCached;                                           // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_SimpleHolographic(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void StartEffect();
	void EndEffect();
	void UpdateMaterialsWithDa(TArray<class UMaterialInstanceDynamic*>& Materials, const struct FSHolographicData& SHolographicData);
	void RemoveNpcEffect();
	void Clear();
	void CacheMaterialParameters(TArray<struct FSMaterialControllerFloatParameter>& Floats, TArray<struct FSMaterialControllerColorParameter>& Colors, class UMaterialInstanceDynamic* Material, bool bReplaceMaterial, int32 Param_Index, struct FSMaterialParamCache* Result);
	class UMaterialInstanceDynamic* CacheAndReplace(const struct FSHolographicData& SHolographicData, class UPrimitiveComponent* Self2, int32 ElementIndex, class UMaterialInstanceDynamic* Material, struct FSMaterialParamCache* CacheResult);
	void RevertMaterialParamters(const struct FSMaterialParamCache& MaterialCache, class UMaterialInstanceDynamic** Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SimpleHolographic_C">();
	}
	static class ABP_SimpleHolographic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SimpleHolographic_C>();
	}
};
static_assert(alignof(ABP_SimpleHolographic_C) == 0x000008, "Wrong alignment on ABP_SimpleHolographic_C");
static_assert(sizeof(ABP_SimpleHolographic_C) == 0x000350, "Wrong size on ABP_SimpleHolographic_C");
static_assert(offsetof(ABP_SimpleHolographic_C, UberGraphFrame) == 0x0002B0, "Member 'ABP_SimpleHolographic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SimpleHolographic_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_SimpleHolographic_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SimpleHolographic_C, ComponentMaterialsCache) == 0x0002C0, "Member 'ABP_SimpleHolographic_C::ComponentMaterialsCache' has a wrong offset!");
static_assert(offsetof(ABP_SimpleHolographic_C, OL_Materials) == 0x000310, "Member 'ABP_SimpleHolographic_C::OL_Materials' has a wrong offset!");
static_assert(offsetof(ABP_SimpleHolographic_C, Other_Materials) == 0x000320, "Member 'ABP_SimpleHolographic_C::Other_Materials' has a wrong offset!");
static_assert(offsetof(ABP_SimpleHolographic_C, DATA) == 0x000330, "Member 'ABP_SimpleHolographic_C::DATA' has a wrong offset!");
static_assert(offsetof(ABP_SimpleHolographic_C, TimeCounter) == 0x000338, "Member 'ABP_SimpleHolographic_C::TimeCounter' has a wrong offset!");
static_assert(offsetof(ABP_SimpleHolographic_C, TargetRole) == 0x000340, "Member 'ABP_SimpleHolographic_C::TargetRole' has a wrong offset!");
static_assert(offsetof(ABP_SimpleHolographic_C, State) == 0x000348, "Member 'ABP_SimpleHolographic_C::State' has a wrong offset!");
static_assert(offsetof(ABP_SimpleHolographic_C, bCached) == 0x000349, "Member 'ABP_SimpleHolographic_C::bCached' has a wrong offset!");

}

