#pragma once
// Package: BP_SceneBattleInteract

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SceneBattleInteract.BP_SceneBattleInteract_C
// 0x0040 (0x0078 - 0x0038)
class UBP_SceneBattleInteract_C final : public UPrimaryDataAsset
{
public:
	int32                                         ShapeType;                                         // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EffectRadius;                                      // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CollisionRadius;                                   // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CollisionHalfHeight;                               // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CollisionOffset;                                   // 0x0048(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Interval;                                          // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SelfRipple;                                        // 0x0064(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RippleRadius;                                      // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RippleIntensity;                                   // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RippleDensity;                                     // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SceneBattleInteract_C">();
	}
	static class UBP_SceneBattleInteract_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SceneBattleInteract_C>();
	}
};
static_assert(alignof(UBP_SceneBattleInteract_C) == 0x000008, "Wrong alignment on UBP_SceneBattleInteract_C");
static_assert(sizeof(UBP_SceneBattleInteract_C) == 0x000078, "Wrong size on UBP_SceneBattleInteract_C");
static_assert(offsetof(UBP_SceneBattleInteract_C, ShapeType) == 0x000038, "Member 'UBP_SceneBattleInteract_C::ShapeType' has a wrong offset!");
static_assert(offsetof(UBP_SceneBattleInteract_C, EffectRadius) == 0x00003C, "Member 'UBP_SceneBattleInteract_C::EffectRadius' has a wrong offset!");
static_assert(offsetof(UBP_SceneBattleInteract_C, CollisionRadius) == 0x000040, "Member 'UBP_SceneBattleInteract_C::CollisionRadius' has a wrong offset!");
static_assert(offsetof(UBP_SceneBattleInteract_C, CollisionHalfHeight) == 0x000044, "Member 'UBP_SceneBattleInteract_C::CollisionHalfHeight' has a wrong offset!");
static_assert(offsetof(UBP_SceneBattleInteract_C, CollisionOffset) == 0x000048, "Member 'UBP_SceneBattleInteract_C::CollisionOffset' has a wrong offset!");
static_assert(offsetof(UBP_SceneBattleInteract_C, Interval) == 0x000060, "Member 'UBP_SceneBattleInteract_C::Interval' has a wrong offset!");
static_assert(offsetof(UBP_SceneBattleInteract_C, SelfRipple) == 0x000064, "Member 'UBP_SceneBattleInteract_C::SelfRipple' has a wrong offset!");
static_assert(offsetof(UBP_SceneBattleInteract_C, RippleRadius) == 0x000068, "Member 'UBP_SceneBattleInteract_C::RippleRadius' has a wrong offset!");
static_assert(offsetof(UBP_SceneBattleInteract_C, RippleIntensity) == 0x00006C, "Member 'UBP_SceneBattleInteract_C::RippleIntensity' has a wrong offset!");
static_assert(offsetof(UBP_SceneBattleInteract_C, RippleDensity) == 0x000070, "Member 'UBP_SceneBattleInteract_C::RippleDensity' has a wrong offset!");

}

