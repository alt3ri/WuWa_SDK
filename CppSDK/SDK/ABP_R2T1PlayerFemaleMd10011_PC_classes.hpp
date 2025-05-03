#pragma once
// Package: ABP_R2T1PlayerFemaleMd10011_PC

#include "Basic.hpp"

#include "KuroAnim_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "KawaiiPhysics_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_R2T1PlayerFemaleMd10011_PC.ABP_R2T1PlayerFemaleMd10011_PC_C
// 0x1D90 (0x23F0 - 0x0660)
class UABP_R2T1PlayerFemaleMd10011_PC_C final : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0660(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0668(0x0038)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x06A0(0x0138)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x07D8(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x07F8(0x0020)()
	uint8                                         Pad_818[0x8];                                      // 0x0818(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_MountBuffer                  AnimGraphNode_MountBuffer;                         // 0x0820(0x01E0)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_8;                // 0x0A00(0x02A0)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_7;                // 0x0CA0(0x02A0)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_6;                // 0x0F40(0x02A0)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_5;                // 0x11E0(0x02A0)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_4;                // 0x1480(0x02A0)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_3;                // 0x1720(0x02A0)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_2;                // 0x19C0(0x02A0)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup_1;                // 0x1C60(0x02A0)()
	struct FAnimNode_KawaiiPhysicsGroup           AnimGraphNode_KawaiiPhysicsGroup;                  // 0x1F00(0x02A0)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x21A0(0x0038)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph_1;                   // 0x21D8(0x00A8)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x2280(0x00C0)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph;                     // 0x2340(0x00A8)()
	bool                                          PhysicsClothSimulateEnable;                        // 0x23E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23E9[0x3];                                     // 0x23E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PhysicsClothSimulateScale;                         // 0x23EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ABP_R2T1PlayerFemaleMd10011_PC(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void UpdatePhysicsClothSimulateEnable(float DeltaTIme);
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void PhyCloth(const struct FPoseLink& InPose, struct FPoseLink* PhyCloth_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_R2T1PlayerFemaleMd10011_PC_C">();
	}
	static class UABP_R2T1PlayerFemaleMd10011_PC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_R2T1PlayerFemaleMd10011_PC_C>();
	}
};
static_assert(alignof(UABP_R2T1PlayerFemaleMd10011_PC_C) == 0x000010, "Wrong alignment on UABP_R2T1PlayerFemaleMd10011_PC_C");
static_assert(sizeof(UABP_R2T1PlayerFemaleMd10011_PC_C) == 0x0023F0, "Wrong size on UABP_R2T1PlayerFemaleMd10011_PC_C");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, UberGraphFrame) == 0x000660, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, AnimGraphNode_Root_1) == 0x000668, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, AnimGraphNode_LinkedInputPose) == 0x0006A0, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, AnimGraphNode_LocalToComponentSpace) == 0x0007D8, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, AnimGraphNode_ComponentToLocalSpace) == 0x0007F8, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, AnimGraphNode_MountBuffer) == 0x000820, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::AnimGraphNode_MountBuffer' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_8) == 0x000A00, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_8' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_7) == 0x000CA0, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_7' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_6) == 0x000F40, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_6' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_5) == 0x0011E0, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_5' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_4) == 0x001480, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_4' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_3) == 0x001720, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_3' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_2) == 0x0019C0, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_2' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup_1) == 0x001C60, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup_1' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, AnimGraphNode_KawaiiPhysicsGroup) == 0x001F00, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::AnimGraphNode_KawaiiPhysicsGroup' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, AnimGraphNode_Root) == 0x0021A0, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, AnimGraphNode_LinkedAnimGraph_1) == 0x0021D8, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::AnimGraphNode_LinkedAnimGraph_1' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, AnimGraphNode_LinkedAnimLayer) == 0x002280, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::AnimGraphNode_LinkedAnimLayer' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, AnimGraphNode_LinkedAnimGraph) == 0x002340, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::AnimGraphNode_LinkedAnimGraph' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, PhysicsClothSimulateEnable) == 0x0023E8, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::PhysicsClothSimulateEnable' has a wrong offset!");
static_assert(offsetof(UABP_R2T1PlayerFemaleMd10011_PC_C, PhysicsClothSimulateScale) == 0x0023EC, "Member 'UABP_R2T1PlayerFemaleMd10011_PC_C::PhysicsClothSimulateScale' has a wrong offset!");

}

