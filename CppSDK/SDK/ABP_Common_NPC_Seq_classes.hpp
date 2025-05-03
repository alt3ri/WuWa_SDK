#pragma once
// Package: ABP_Common_NPC_Seq

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "KuroAnim_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Common_NPC_Seq.ABP_Common_NPC_Seq_C
// 0x1080 (0x16E0 - 0x0660)
class UABP_Common_NPC_Seq_C final : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0660(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0668(0x0038)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x06A0(0x0138)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x07D8(0x0060)()
	struct FAnimNode_CurveSource                  AnimGraphNode_CurveSource;                         // 0x0838(0x0040)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0878(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_9;                        // 0x0898(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_8;                        // 0x09C0(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_7;                        // 0x0AE8(0x0128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0C10(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x0C30(0x0060)()
	struct FAnimNode_CurveFix                     AnimGraphNode_CurveFix;                            // 0x0C90(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0CC0(0x0060)()
	struct FAnimNode_CombineCurves                AnimGraphNode_CombineCurves_1;                     // 0x0D20(0x0060)()
	struct FAnimNode_CombineCurves                AnimGraphNode_CombineCurves;                       // 0x0D80(0x0060)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_6;                        // 0x0DE0(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_5;                        // 0x0F08(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x1030(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x1158(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x1280(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x13A8(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x14D0(0x0128)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x15F8(0x0060)()
	struct FRotator                               Add_Bip_001Head;                                   // 0x1658(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Add_Bip_001Neck;                                   // 0x1664(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Add_Bip_001Spine_2;                                // 0x1670(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         MouthAlpha;                                        // 0x167C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               AddBip001LClavicle;                                // 0x1680(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               AddBip001LUpperArm;                                // 0x168C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               AddBip001LForearm;                                 // 0x1698(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               AddBip001RClavicle;                                // 0x16A4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               AddBip001RUpperArm;                                // 0x16B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               AddBip001RForearm;                                 // 0x16BC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Add_Bip_001Spine_1;                                // 0x16C8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_Common_NPC_Seq(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Common_NPC_Seq_C">();
	}
	static class UABP_Common_NPC_Seq_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Common_NPC_Seq_C>();
	}
};
static_assert(alignof(UABP_Common_NPC_Seq_C) == 0x000010, "Wrong alignment on UABP_Common_NPC_Seq_C");
static_assert(sizeof(UABP_Common_NPC_Seq_C) == 0x0016E0, "Wrong size on UABP_Common_NPC_Seq_C");
static_assert(offsetof(UABP_Common_NPC_Seq_C, UberGraphFrame) == 0x000660, "Member 'UABP_Common_NPC_Seq_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_Root) == 0x000668, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_LinkedInputPose) == 0x0006A0, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_Slot_3) == 0x0007D8, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_Slot_3' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_CurveSource) == 0x000838, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_CurveSource' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_LocalToComponentSpace) == 0x000878, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_ModifyBone_9) == 0x000898, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_ModifyBone_9' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_ModifyBone_8) == 0x0009C0, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_ModifyBone_8' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_ModifyBone_7) == 0x000AE8, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_ModifyBone_7' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_ComponentToLocalSpace) == 0x000C10, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_Slot_2) == 0x000C30, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_CurveFix) == 0x000C90, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_CurveFix' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_Slot_1) == 0x000CC0, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_CombineCurves_1) == 0x000D20, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_CombineCurves_1' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_CombineCurves) == 0x000D80, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_CombineCurves' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_ModifyBone_6) == 0x000DE0, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_ModifyBone_6' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_ModifyBone_5) == 0x000F08, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_ModifyBone_5' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_ModifyBone_4) == 0x001030, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_ModifyBone_3) == 0x001158, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_ModifyBone_2) == 0x001280, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_ModifyBone_1) == 0x0013A8, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_ModifyBone) == 0x0014D0, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AnimGraphNode_Slot) == 0x0015F8, "Member 'UABP_Common_NPC_Seq_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, Add_Bip_001Head) == 0x001658, "Member 'UABP_Common_NPC_Seq_C::Add_Bip_001Head' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, Add_Bip_001Neck) == 0x001664, "Member 'UABP_Common_NPC_Seq_C::Add_Bip_001Neck' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, Add_Bip_001Spine_2) == 0x001670, "Member 'UABP_Common_NPC_Seq_C::Add_Bip_001Spine_2' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, MouthAlpha) == 0x00167C, "Member 'UABP_Common_NPC_Seq_C::MouthAlpha' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AddBip001LClavicle) == 0x001680, "Member 'UABP_Common_NPC_Seq_C::AddBip001LClavicle' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AddBip001LUpperArm) == 0x00168C, "Member 'UABP_Common_NPC_Seq_C::AddBip001LUpperArm' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AddBip001LForearm) == 0x001698, "Member 'UABP_Common_NPC_Seq_C::AddBip001LForearm' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AddBip001RClavicle) == 0x0016A4, "Member 'UABP_Common_NPC_Seq_C::AddBip001RClavicle' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AddBip001RUpperArm) == 0x0016B0, "Member 'UABP_Common_NPC_Seq_C::AddBip001RUpperArm' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, AddBip001RForearm) == 0x0016BC, "Member 'UABP_Common_NPC_Seq_C::AddBip001RForearm' has a wrong offset!");
static_assert(offsetof(UABP_Common_NPC_Seq_C, Add_Bip_001Spine_1) == 0x0016C8, "Member 'UABP_Common_NPC_Seq_C::Add_Bip_001Spine_1' has a wrong offset!");

}

