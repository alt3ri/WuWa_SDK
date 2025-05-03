#pragma once
// Package: ABP_BaseRole_Seq_V2

#include "Basic.hpp"

#include "KuroAnim_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_BaseRole_Seq_V2.ABP_BaseRole_Seq_V2_C
// 0x1DF0 (0x2450 - 0x0660)
class UABP_BaseRole_Seq_V2_C final : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0660(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_4;                              // 0x0668(0x0038)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;                   // 0x06A0(0x0138)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x07D8(0x0020)()
	uint8                                         Pad_7F8[0x8];                                      // 0x07F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RBF                          AnimGraphNode_RBF;                                 // 0x0800(0x0150)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x0950(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_3;                              // 0x0970(0x0038)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x09A8(0x0138)()
	struct FAnimNode_CurveSource                  AnimGraphNode_CurveSource;                         // 0x0AE0(0x0040)()
	struct FAnimNode_CurveFix                     AnimGraphNode_CurveFix;                            // 0x0B20(0x0030)()
	struct FAnimNode_CombineCurves                AnimGraphNode_CombineCurves_1;                     // 0x0B50(0x0060)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_4;                              // 0x0BB0(0x0060)()
	struct FAnimNode_CombineCurves                AnimGraphNode_CombineCurves;                       // 0x0C10(0x0060)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0C70(0x00B0)()
	struct FAnimNode_PoseSnapshot                 AnimGraphNode_PoseSnapshot;                        // 0x0D20(0x00B0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x0DD0(0x0060)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x0E30(0x0038)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x0E68(0x0060)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0EC8(0x0060)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x0F28(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0FF0(0x0090)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x1080(0x0060)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x10E0(0x0038)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x1118(0x0138)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_9;                        // 0x1250(0x0128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1378(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1398(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_8;                        // 0x13B8(0x0128)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x14E0(0x01A8)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_7;                        // 0x1688(0x0128)()
	struct FAnimNode_MorphTargetModifier          AnimGraphNode_MorphTargetModifier;                 // 0x17B0(0x0060)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_6;                        // 0x1810(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_5;                        // 0x1938(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x1A60(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x1B88(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x1CB0(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x1DD8(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x1F00(0x0128)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x2028(0x0038)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_3;                   // 0x2060(0x00C0)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_2;                   // 0x2120(0x00C0)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_1;                   // 0x21E0(0x00C0)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x22A0(0x00C0)()
	struct FVector2D                              LookXY;                                            // 0x2360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               LookFixHead;                                       // 0x2368(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               LookFixNeck;                                       // 0x2374(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Enable_AimOffset;                                  // 0x2380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2381[0x3];                                     // 0x2381(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               LookFixSpine;                                      // 0x2384(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAimOffsetBlendSpace*                   AimOffset;                                         // 0x2390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable_Stand;                                      // 0x2398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2399[0x7];                                     // 0x2399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      Stand;                                             // 0x23A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableSwitchPose;                                  // 0x23A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23A9[0x7];                                     // 0x23A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPoseSnapshot                          CachePose;                                         // 0x23B0(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         SwitchPoseTime;                                    // 0x23F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Add_Bip_001LClavicle;                              // 0x23F4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Add_Bip_001LUpper_Arm;                             // 0x2400(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Add_Bip_001LForearm;                               // 0x240C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Add_Bip_001RClavicle;                              // 0x2418(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Add_Bip_001RUpper_Arm;                             // 0x2424(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Add_Bip_001RForearm;                               // 0x2430(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Add_Bip_001Spine_1;                                // 0x243C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ABP_BaseRole_Seq_V2(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void 计算层(const struct FPoseLink& InPose_0, struct FPoseLink* 计算层_0);
	void 肢体层(struct FPoseLink* 肢体层_0);
	void 面部层(const struct FPoseLink& InPose, struct FPoseLink* 面部层_0);
	void 修型层(const struct FPoseLink& InPose_0, struct FPoseLink* 修型层_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_BaseRole_Seq_V2_C">();
	}
	static class UABP_BaseRole_Seq_V2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_BaseRole_Seq_V2_C>();
	}
};
static_assert(alignof(UABP_BaseRole_Seq_V2_C) == 0x000010, "Wrong alignment on UABP_BaseRole_Seq_V2_C");
static_assert(sizeof(UABP_BaseRole_Seq_V2_C) == 0x002450, "Wrong size on UABP_BaseRole_Seq_V2_C");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, UberGraphFrame) == 0x000660, "Member 'UABP_BaseRole_Seq_V2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_Root_4) == 0x000668, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_Root_4' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_LinkedInputPose_2) == 0x0006A0, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_LinkedInputPose_2' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x0007D8, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_RBF) == 0x000800, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_RBF' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_LocalToComponentSpace_1) == 0x000950, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_Root_3) == 0x000970, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_Root_3' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_LinkedInputPose_1) == 0x0009A8, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_CurveSource) == 0x000AE0, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_CurveSource' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_CurveFix) == 0x000B20, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_CurveFix' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_CombineCurves_1) == 0x000B50, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_CombineCurves_1' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_Slot_4) == 0x000BB0, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_Slot_4' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_CombineCurves) == 0x000C10, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_CombineCurves' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_BlendListByBool) == 0x000C70, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_PoseSnapshot) == 0x000D20, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_PoseSnapshot' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_Slot_3) == 0x000DD0, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_Slot_3' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_Root_2) == 0x000E30, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_Slot_2) == 0x000E68, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_Slot_1) == 0x000EC8, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_TwoWayBlend) == 0x000F28, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_SequencePlayer) == 0x000FF0, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_Slot) == 0x001080, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_Root_1) == 0x0010E0, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_LinkedInputPose) == 0x001118, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_ModifyBone_9) == 0x001250, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_ModifyBone_9' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_LocalToComponentSpace) == 0x001378, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_ComponentToLocalSpace) == 0x001398, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_ModifyBone_8) == 0x0013B8, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_ModifyBone_8' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x0014E0, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_ModifyBone_7) == 0x001688, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_ModifyBone_7' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_MorphTargetModifier) == 0x0017B0, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_MorphTargetModifier' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_ModifyBone_6) == 0x001810, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_ModifyBone_6' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_ModifyBone_5) == 0x001938, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_ModifyBone_5' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_ModifyBone_4) == 0x001A60, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_ModifyBone_3) == 0x001B88, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_ModifyBone_2) == 0x001CB0, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_ModifyBone_1) == 0x001DD8, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_ModifyBone) == 0x001F00, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_Root) == 0x002028, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_LinkedAnimLayer_3) == 0x002060, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_LinkedAnimLayer_3' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_LinkedAnimLayer_2) == 0x002120, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_LinkedAnimLayer_2' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_LinkedAnimLayer_1) == 0x0021E0, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_LinkedAnimLayer_1' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AnimGraphNode_LinkedAnimLayer) == 0x0022A0, "Member 'UABP_BaseRole_Seq_V2_C::AnimGraphNode_LinkedAnimLayer' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, LookXY) == 0x002360, "Member 'UABP_BaseRole_Seq_V2_C::LookXY' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, LookFixHead) == 0x002368, "Member 'UABP_BaseRole_Seq_V2_C::LookFixHead' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, LookFixNeck) == 0x002374, "Member 'UABP_BaseRole_Seq_V2_C::LookFixNeck' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, Enable_AimOffset) == 0x002380, "Member 'UABP_BaseRole_Seq_V2_C::Enable_AimOffset' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, LookFixSpine) == 0x002384, "Member 'UABP_BaseRole_Seq_V2_C::LookFixSpine' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, AimOffset) == 0x002390, "Member 'UABP_BaseRole_Seq_V2_C::AimOffset' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, Enable_Stand) == 0x002398, "Member 'UABP_BaseRole_Seq_V2_C::Enable_Stand' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, Stand) == 0x0023A0, "Member 'UABP_BaseRole_Seq_V2_C::Stand' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, EnableSwitchPose) == 0x0023A8, "Member 'UABP_BaseRole_Seq_V2_C::EnableSwitchPose' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, CachePose) == 0x0023B0, "Member 'UABP_BaseRole_Seq_V2_C::CachePose' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, SwitchPoseTime) == 0x0023F0, "Member 'UABP_BaseRole_Seq_V2_C::SwitchPoseTime' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, Add_Bip_001LClavicle) == 0x0023F4, "Member 'UABP_BaseRole_Seq_V2_C::Add_Bip_001LClavicle' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, Add_Bip_001LUpper_Arm) == 0x002400, "Member 'UABP_BaseRole_Seq_V2_C::Add_Bip_001LUpper_Arm' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, Add_Bip_001LForearm) == 0x00240C, "Member 'UABP_BaseRole_Seq_V2_C::Add_Bip_001LForearm' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, Add_Bip_001RClavicle) == 0x002418, "Member 'UABP_BaseRole_Seq_V2_C::Add_Bip_001RClavicle' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, Add_Bip_001RUpper_Arm) == 0x002424, "Member 'UABP_BaseRole_Seq_V2_C::Add_Bip_001RUpper_Arm' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, Add_Bip_001RForearm) == 0x002430, "Member 'UABP_BaseRole_Seq_V2_C::Add_Bip_001RForearm' has a wrong offset!");
static_assert(offsetof(UABP_BaseRole_Seq_V2_C, Add_Bip_001Spine_1) == 0x00243C, "Member 'UABP_BaseRole_Seq_V2_C::Add_Bip_001Spine_1' has a wrong offset!");

}

