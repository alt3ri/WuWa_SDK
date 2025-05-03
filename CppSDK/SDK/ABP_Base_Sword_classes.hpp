#pragma once
// Package: ABP_Base_Sword

#include "Basic.hpp"

#include "KuroAnim_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Base_Sword.ABP_Base_Sword_C
// 0x04F0 (0x0B50 - 0x0660)
class UABP_Base_Sword_C final : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0660(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0668(0x0038)()
	struct FAnimNode_PhyCloth                     AnimGraphNode_PhyCloth;                            // 0x06A0(0x0450)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0AF0(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0B10(0x0020)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x0B30(0x0018)()

public:
	void ExecuteUbergraph_ABP_Base_Sword(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Base_Sword_C">();
	}
	static class UABP_Base_Sword_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Base_Sword_C>();
	}
};
static_assert(alignof(UABP_Base_Sword_C) == 0x000010, "Wrong alignment on UABP_Base_Sword_C");
static_assert(sizeof(UABP_Base_Sword_C) == 0x000B50, "Wrong size on UABP_Base_Sword_C");
static_assert(offsetof(UABP_Base_Sword_C, UberGraphFrame) == 0x000660, "Member 'UABP_Base_Sword_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Base_Sword_C, AnimGraphNode_Root) == 0x000668, "Member 'UABP_Base_Sword_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Base_Sword_C, AnimGraphNode_PhyCloth) == 0x0006A0, "Member 'UABP_Base_Sword_C::AnimGraphNode_PhyCloth' has a wrong offset!");
static_assert(offsetof(UABP_Base_Sword_C, AnimGraphNode_ComponentToLocalSpace) == 0x000AF0, "Member 'UABP_Base_Sword_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_Base_Sword_C, AnimGraphNode_LocalToComponentSpace) == 0x000B10, "Member 'UABP_Base_Sword_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_Base_Sword_C, AnimGraphNode_LocalRefPose) == 0x000B30, "Member 'UABP_Base_Sword_C::AnimGraphNode_LocalRefPose' has a wrong offset!");

}

