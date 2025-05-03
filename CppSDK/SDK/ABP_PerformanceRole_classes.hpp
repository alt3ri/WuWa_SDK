#pragma once
// Package: ABP_PerformanceRole

#include "Basic.hpp"

#include "EPerformanceRoleState_structs.hpp"
#include "KuroAnim_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "SPerformanceRoleInfo_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_PerformanceRole.ABP_PerformanceRole_C
// 0x5E20 (0x6480 - 0x0660)
class UABP_PerformanceRole_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0660(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0668(0x0138)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x07A0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x07C0(0x0020)()
	struct FAnimNode_RBF                          AnimGraphNode_RBF;                                 // 0x07E0(0x0150)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x0930(0x0038)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0968(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_112;                // 0x09A0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_111;                // 0x09C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_110;                // 0x09F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_109;                // 0x0A18(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_108;                // 0x0A40(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_107;                // 0x0A68(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_106;                // 0x0A90(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_105;                // 0x0AB8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_104;                // 0x0AE0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_103;                // 0x0B08(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_102;                // 0x0B30(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_101;                // 0x0B58(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_100;                // 0x0B80(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_99;                 // 0x0BA8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_98;                 // 0x0BD0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_97;                 // 0x0BF8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_96;                 // 0x0C20(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_95;                 // 0x0C48(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_94;                 // 0x0C70(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_93;                 // 0x0C98(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_92;                 // 0x0CC0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_91;                 // 0x0CE8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_90;                 // 0x0D10(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_89;                 // 0x0D38(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_88;                 // 0x0D60(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_87;                 // 0x0D88(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_86;                 // 0x0DB0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_85;                 // 0x0DD8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_84;                 // 0x0E00(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_83;                 // 0x0E28(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_82;                 // 0x0E50(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_81;                 // 0x0E78(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_80;                 // 0x0EA0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_79;                 // 0x0EC8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_78;                 // 0x0EF0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_77;                 // 0x0F18(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_76;                 // 0x0F40(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_75;                 // 0x0F68(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_74;                 // 0x0F90(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_73;                 // 0x0FB8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_72;                 // 0x0FE0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_71;                 // 0x1008(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_70;                 // 0x1030(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_69;                 // 0x1058(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_68;                 // 0x1080(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_67;                 // 0x10A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_66;                 // 0x10D0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_65;                 // 0x10F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_64;                 // 0x1120(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_63;                 // 0x1148(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_62;                 // 0x1170(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_61;                 // 0x1198(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_60;                 // 0x11C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_59;                 // 0x11E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_58;                 // 0x1210(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_57;                 // 0x1238(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_34;                   // 0x1260(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_53;                      // 0x12F0(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_33;                   // 0x1328(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_52;                      // 0x13B8(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_56;                 // 0x13F0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_32;                   // 0x1418(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_51;                      // 0x14A8(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_55;                 // 0x14E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_54;                 // 0x1508(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_53;                 // 0x1530(0x0028)()
	uint8                                         Pad_1558[0x8];                                     // 0x1558(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_TransitionPoseEvaluator      AnimGraphNode_TransitionPoseEvaluator_13;          // 0x1560(0x0140)()
	struct FAnimNode_TransitionPoseEvaluator      AnimGraphNode_TransitionPoseEvaluator_12;          // 0x16A0(0x0140)()
	struct FAnimNode_StateResult                  AnimGraphNode_CustomTransitionResult_6;            // 0x17E0(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_52;                 // 0x1818(0x0028)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_5;                 // 0x1840(0x0060)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_50;                      // 0x18A0(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_31;                   // 0x18D8(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_49;                      // 0x1968(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_30;                   // 0x19A0(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_48;                      // 0x1A30(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_11;                     // 0x1A68(0x0148)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_47;                      // 0x1BB0(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_51;                 // 0x1BE8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_29;                   // 0x1C10(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_46;                      // 0x1CA0(0x0038)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x1CD8(0x0060)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_28;                   // 0x1D38(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_45;                      // 0x1DC8(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_10;                     // 0x1E00(0x0148)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_44;                      // 0x1F48(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_50;                 // 0x1F80(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_27;                   // 0x1FA8(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_43;                      // 0x2038(0x0038)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x2070(0x0060)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_26;                   // 0x20D0(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_42;                      // 0x2160(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_9;                      // 0x2198(0x0148)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_41;                      // 0x22E0(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_49;                 // 0x2318(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_25;                   // 0x2340(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_40;                      // 0x23D0(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_48;                 // 0x2408(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_47;                 // 0x2430(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_46;                 // 0x2458(0x0028)()
	struct FAnimNode_TransitionPoseEvaluator      AnimGraphNode_TransitionPoseEvaluator_11;          // 0x2480(0x0140)()
	struct FAnimNode_TransitionPoseEvaluator      AnimGraphNode_TransitionPoseEvaluator_10;          // 0x25C0(0x0140)()
	struct FAnimNode_StateResult                  AnimGraphNode_CustomTransitionResult_5;            // 0x2700(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_45;                 // 0x2738(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_39;                      // 0x2760(0x0038)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x2798(0x0060)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_24;                   // 0x27F8(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_38;                      // 0x2888(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_23;                   // 0x28C0(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_37;                      // 0x2950(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_8;                      // 0x2988(0x0148)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_36;                      // 0x2AD0(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_22;                   // 0x2B08(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_35;                      // 0x2B98(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_44;                 // 0x2BD0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_43;                 // 0x2BF8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_42;                 // 0x2C20(0x0028)()
	uint8                                         Pad_2C48[0x8];                                     // 0x2C48(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_TransitionPoseEvaluator      AnimGraphNode_TransitionPoseEvaluator_9;           // 0x2C50(0x0140)()
	struct FAnimNode_TransitionPoseEvaluator      AnimGraphNode_TransitionPoseEvaluator_8;           // 0x2D90(0x0140)()
	struct FAnimNode_StateResult                  AnimGraphNode_CustomTransitionResult_4;            // 0x2ED0(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_41;                 // 0x2F08(0x0028)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_4;                 // 0x2F30(0x0060)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_34;                      // 0x2F90(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_21;                   // 0x2FC8(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_33;                      // 0x3058(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_20;                   // 0x3090(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_32;                      // 0x3120(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_7;                      // 0x3158(0x0148)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_31;                      // 0x32A0(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_40;                 // 0x32D8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_39;                 // 0x3300(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_38;                 // 0x3328(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_37;                 // 0x3350(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_36;                 // 0x3378(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_35;                 // 0x33A0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_34;                 // 0x33C8(0x0028)()
	struct FAnimNode_TransitionPoseEvaluator      AnimGraphNode_TransitionPoseEvaluator_7;           // 0x33F0(0x0140)()
	struct FAnimNode_TransitionPoseEvaluator      AnimGraphNode_TransitionPoseEvaluator_6;           // 0x3530(0x0140)()
	struct FAnimNode_StateResult                  AnimGraphNode_CustomTransitionResult_3;            // 0x3670(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_33;                 // 0x36A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_32;                 // 0x36D0(0x0028)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_3;                 // 0x36F8(0x0060)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_30;                      // 0x3758(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_19;                   // 0x3790(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_29;                      // 0x3820(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_18;                   // 0x3858(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_28;                      // 0x38E8(0x0038)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_27;                      // 0x3920(0x0038)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_26;                      // 0x3958(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_6;                      // 0x3990(0x0148)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_25;                      // 0x3AD8(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_31;                 // 0x3B10(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_17;                   // 0x3B38(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_24;                      // 0x3BC8(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_30;                 // 0x3C00(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_29;                 // 0x3C28(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_28;                 // 0x3C50(0x0028)()
	uint8                                         Pad_3C78[0x8];                                     // 0x3C78(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_TransitionPoseEvaluator      AnimGraphNode_TransitionPoseEvaluator_5;           // 0x3C80(0x0140)()
	struct FAnimNode_TransitionPoseEvaluator      AnimGraphNode_TransitionPoseEvaluator_4;           // 0x3DC0(0x0140)()
	struct FAnimNode_StateResult                  AnimGraphNode_CustomTransitionResult_2;            // 0x3F00(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_27;                 // 0x3F38(0x0028)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_2;                 // 0x3F60(0x0060)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_23;                      // 0x3FC0(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_16;                   // 0x3FF8(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_22;                      // 0x4088(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_15;                   // 0x40C0(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_21;                      // 0x4150(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_5;                      // 0x4188(0x0148)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_20;                      // 0x42D0(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_26;                 // 0x4308(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_14;                   // 0x4330(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_19;                      // 0x43C0(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_25;                 // 0x43F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_24;                 // 0x4420(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_23;                 // 0x4448(0x0028)()
	struct FAnimNode_TransitionPoseEvaluator      AnimGraphNode_TransitionPoseEvaluator_3;           // 0x4470(0x0140)()
	struct FAnimNode_TransitionPoseEvaluator      AnimGraphNode_TransitionPoseEvaluator_2;           // 0x45B0(0x0140)()
	struct FAnimNode_StateResult                  AnimGraphNode_CustomTransitionResult_1;            // 0x46F0(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_22;                 // 0x4728(0x0028)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_1;                 // 0x4750(0x0060)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_18;                      // 0x47B0(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_13;                   // 0x47E8(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_17;                      // 0x4878(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_12;                   // 0x48B0(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_16;                      // 0x4940(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_4;                      // 0x4978(0x0148)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_15;                      // 0x4AC0(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_21;                 // 0x4AF8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;                   // 0x4B20(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_14;                      // 0x4BB0(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_20;                 // 0x4BE8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_19;                 // 0x4C10(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_18;                 // 0x4C38(0x0028)()
	struct FAnimNode_TransitionPoseEvaluator      AnimGraphNode_TransitionPoseEvaluator_1;           // 0x4C60(0x0140)()
	struct FAnimNode_TransitionPoseEvaluator      AnimGraphNode_TransitionPoseEvaluator;             // 0x4DA0(0x0140)()
	struct FAnimNode_StateResult                  AnimGraphNode_CustomTransitionResult;              // 0x4EE0(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_17;                 // 0x4F18(0x0028)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;                   // 0x4F40(0x0060)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_13;                      // 0x4FA0(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x4FD8(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_12;                      // 0x5068(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x50A0(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_11;                      // 0x5130(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_3;                      // 0x5168(0x0148)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_10;                      // 0x52B0(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_16;                 // 0x52E8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x5310(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_9;                       // 0x53A0(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x53D8(0x0148)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_15;                 // 0x5520(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_14;                 // 0x5548(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x5570(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x5598(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x55C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x55E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x5610(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x5638(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x5660(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x5688(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x56B0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x56D8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x5700(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_8;                       // 0x5790(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x57C8(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x5858(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x5890(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x5920(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x5958(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x5980(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x5A10(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x5A48(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x5A70(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x5B00(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x5B38(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x5BC8(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x5C00(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x5C90(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x5CC8(0x0148)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x5E10(0x00B0)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x5EC0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x5EE8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x5F10(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x5FA0(0x0038)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x5FD8(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x6010(0x0148)()
	struct FAnimNode_CombineCurves                AnimGraphNode_CombineCurves;                       // 0x6158(0x0060)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x61B8(0x0038)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_1;                   // 0x61F0(0x00C0)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x62B0(0x00C0)()
	EPerformanceRoleState                         StateInternal;                                     // 0x6370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          reLoop;                                            // 0x6371(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bForceChange;                                      // 0x6372(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6373[0x1];                                     // 0x6373(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Delta_Time_X;                                      // 0x6374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeadAlpha;                                         // 0x6378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_637C[0x4];                                     // 0x637C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnEffectBegin;                                     // 0x6380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnEffectEnd;                                       // 0x6390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         PerformDelay;                                      // 0x63A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurPerformTime;                                    // 0x63A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bForceChange_Perform;                              // 0x63A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63A9[0x3];                                     // 0x63A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CacheViewportSize;                                 // 0x63AC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LookAtWorld_Position;                              // 0x63B4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Mesh;                                              // 0x63C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LookAtDirection;                                   // 0x63C8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCreateRoleState;                                 // 0x63D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63D5[0x3];                                     // 0x63D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CreateRoleStartLocation;                           // 0x63D8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CreateRoleEndLocation;                             // 0x63E4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CreateRoleMoveAllTime;                             // 0x63F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63F4[0x4];                                     // 0x63F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsUiSceneRoleActor_C*                  Actor;                                             // 0x63F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CreateRoleMoveCurrentTime;                         // 0x6400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CreateRoleStartRotation;                           // 0x6404(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                CreateRoleEndLocationOffset;                       // 0x6410(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CreateRoleEndRotation;                             // 0x641C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               CreateRoleEndRotationOffset;                       // 0x6428(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         CreateRoleMovePlayRate;                            // 0x6434(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasInitCreateRoleInfo;                             // 0x6438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          isLooping;                                         // 0x6439(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bInitCreateRoleInfo;                               // 0x643A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InSkillRotate;                                     // 0x643B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InSkillEndRotate;                                  // 0x643C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TempRotate;                                        // 0x643D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_643E[0x2];                                     // 0x643E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSPerformanceRoleInfo                  PerformanceRoleInfo;                               // 0x6440(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlinkAlpha;                                        // 0x6448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InBlinking;                                        // 0x644C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_644D[0x3];                                     // 0x644D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BlinkEndTime;                                      // 0x6450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         眨眼动画时长;                                      // 0x6454(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         此轮眨眼动画总时长;                                // 0x6458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_645C[0x4];                                     // 0x645C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EPerformanceRoleState>                 SameStateArray01;                                  // 0x6460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          False;                                             // 0x6470(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DirectEnterLoop;                                   // 0x6471(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EPerformanceRoleState                         CurrentState;                                      // 0x6472(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          reLoopFromLoopToStart;                             // 0x6473(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ABP_PerformanceRole(int32 EntryPoint);
	void AnimNotify_LeaveCommonNotify();
	void AnimNotify_EnterDocument();
	void AnimNotify_EnterDocumentVoice();
	void AnimNotify_EnterDocumentAction();
	void AnimNotify_EnterIdle();
	void AnimNotify_EnterWeapon();
	void AnimNotify_EnterChip();
	void AnimNotify_EnterRoleElement();
	void AnimNotify_EnterRoleElementStand();
	void AnimNotify_EnterResonce();
	void AnimNotify_EnterRoleBreach();
	void AnimNotify_EnterAttribute();
	void AnimNotify_EnterSkill();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_ED21A98E48FA85555EA0D4A7C2A13D4F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_1B4EAA5848C16EDBEFB00FB24D38B27F();
	void AnimNotify_SkillEndBegin();
	void AnimNotify_LeaveLoop();
	void AnimNotify_EnterLoop();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_BC9EBC4944D2E109BC5CAA94C70EB8BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_F6F9F8DC40D588C967DF2B9A41C97C25();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_83BA3C6F46EB8037E9C60BB9BDA31608();
	void BlueprintInitializeAnimation();
	void AnimNotify_EnterPerformIdle();
	void AnimNotify_LeaveOneLoopAction();
	void AnimNotify_EnterCommonNotify();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_D7436D7443A480F5FAF15A882087F30F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_2964307E48D5040F742A49B35F13F408();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_41DFE03F48C3833355C616B28AAF5009();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_E88CAB8D428F886DE51EB5A9BE372770();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_2C2EF99049E4EE2383BBD8B2786A4567();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_BB9DF0D54320499047A5319654D5DC2E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_05AA19EC4BA5688F5DC376ABA8F556E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_9C35D5CF4052F823573EDCA339C5BC95();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_A59B1C3E413B4FF0E0A40C8A4E1608A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_3544AA1645E0CF5C1B631BBF34548087();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_3A2D0019410882106E3D5AA8D6F2C19E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_7B44C6194963AAC6D793758E0821AA37();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_3BAA36394ACE885F5D49E6B207A23E6C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_BC16130F44311D0DCB5B3590AECBE007();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_81008DE54870516BAB6E5E90973EF5C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_87A017DC465C0B783BDB8793686B2399();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_3921814044F2A49574F5B4B48102EC67();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_FA89A36640926C129757FAA49AF6A81A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_DEAF3D294066272ACE060C9862C527BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_252C9B604DA355A186FC139923D59B56();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_B66CA673436FECF98D604D97A2B6C06A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_7331EF0C4FCC8260EC07C4B64D3B1D31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_2A9BD4814CE11A56D9F8B5AD28BCDB54();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_B16644EE4359CE65D1A16BA8DE0E6A01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_7EAEA40441EE79176E27DFA6B4F9FFC5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_0EDB639B401750A5D4E478B1823AE6FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_3D8EDC0949A468E4288C94B5166CDF2E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_FAF7A35C48527E1EA6A4AAB20EA2F436();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_C03E217044F8BF62D9BDACB1542C2794();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_24C99C61467D0205D123EC9AF5E06C23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_3FE8E3C646A416753DEE2AA221F25FA6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_481747314088EF8A503B2B82F47812FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_30B0B6454BB641F81FA89F95CA2E7A79();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_56C6ACAC4E6FDEC24A16658E3730D394();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_942EF62C4B629FF8B62DE58BA4978BE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_D4C08C6346453FFFCC8A24BBA1C4CA70();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_9DF1923C49FACD33DB7996B4F88AA35F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_9B9A0DA843AEF6FCA8E554BC94E139A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_04D89DC14225578F83587E82FEB8F549();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_5BC208AA421FCBC084C7A7B465D64E0E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_D841EEBF4C3AAEE4FA4E22A41EEED9B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_5D88DA9A4E6CB0EE56C4F48CD32B926A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_EF7B72AA40DDC31C385F22A6D2312B57();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_3DADD4CD489C57336548428E9B1B930E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_2FC853114BF83C19B08BFA8A8E704810();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_A0B917284B95FD2DCEAED29BE0D5525E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_DB55A1AE4A9423A5C47525A74E58BEB7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_4AEEB993432FEF9CF04A43AFC809B4FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_73AE160147ADB36045B8D9A31DC6AF15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_CC733D604E95BE7D9DFA349B1A5B704D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_52B4B2CB407931033523C9A14696E52E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_0F4FD3374213D4A81960F6A629673AFD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_83C90D9A461EF15044A8378A68A6F1E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_1076956541FC74BF7A3047BF3518CA89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_C60CCB8046FAB6F0C07D51B6B238E4BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PerformanceRole_AnimGraphNode_TransitionResult_7A87E8194AFB02D1564F408592A3BAE7();
	void SetState(EPerformanceRoleState State, bool reLoop_0, bool reLoopFromLoopToStart_0, bool WaitLaseStateEnd);
	float GetHeadApha();
	void UpdateHeadRotator();
	void SyncAnimInstance(class UABP_PerformanceRole_C* SourceAnimInstance);
	void SetPerformDelay(float PerformTime);
	void UpdatePerfromTime();
	void UpdateLookAtRotation();
	void DebugLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& LineColor);
	void UpdateCreateRoleLocation();
	void ClearCreateRoleState();
	void GetIsLooping(bool* isLooping_0);
	void SkillRotate();
	void UpdateBlinkInfo();
	bool Is_Same_State(EPerformanceRoleState NewState, const EPerformanceRoleState& StateInternal_0);
	void Set_Current_State(EPerformanceRoleState state);
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BasePose(struct FPoseLink* BasePose_0);
	void PostProcessPose(const struct FPoseLink& InPose, struct FPoseLink* PostProcessPose_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_PerformanceRole_C">();
	}
	static class UABP_PerformanceRole_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_PerformanceRole_C>();
	}
};
static_assert(alignof(UABP_PerformanceRole_C) == 0x000010, "Wrong alignment on UABP_PerformanceRole_C");
static_assert(sizeof(UABP_PerformanceRole_C) == 0x006480, "Wrong size on UABP_PerformanceRole_C");
static_assert(offsetof(UABP_PerformanceRole_C, UberGraphFrame) == 0x000660, "Member 'UABP_PerformanceRole_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_LinkedInputPose) == 0x000668, "Member 'UABP_PerformanceRole_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_LocalToComponentSpace) == 0x0007A0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_ComponentToLocalSpace) == 0x0007C0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_RBF) == 0x0007E0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_RBF' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_Root_2) == 0x000930, "Member 'UABP_PerformanceRole_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_Root_1) == 0x000968, "Member 'UABP_PerformanceRole_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_112) == 0x0009A0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_112' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_111) == 0x0009C8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_111' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_110) == 0x0009F0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_110' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_109) == 0x000A18, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_109' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_108) == 0x000A40, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_108' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_107) == 0x000A68, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_107' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_106) == 0x000A90, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_106' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_105) == 0x000AB8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_105' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_104) == 0x000AE0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_104' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_103) == 0x000B08, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_103' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_102) == 0x000B30, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_102' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_101) == 0x000B58, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_101' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_100) == 0x000B80, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_100' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_99) == 0x000BA8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_99' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_98) == 0x000BD0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_98' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_97) == 0x000BF8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_97' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_96) == 0x000C20, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_96' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_95) == 0x000C48, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_95' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_94) == 0x000C70, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_94' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_93) == 0x000C98, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_93' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_92) == 0x000CC0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_92' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_91) == 0x000CE8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_91' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_90) == 0x000D10, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_90' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_89) == 0x000D38, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_89' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_88) == 0x000D60, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_88' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_87) == 0x000D88, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_87' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_86) == 0x000DB0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_86' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_85) == 0x000DD8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_85' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_84) == 0x000E00, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_84' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_83) == 0x000E28, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_83' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_82) == 0x000E50, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_82' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_81) == 0x000E78, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_81' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_80) == 0x000EA0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_80' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_79) == 0x000EC8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_79' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_78) == 0x000EF0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_78' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_77) == 0x000F18, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_77' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_76) == 0x000F40, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_76' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_75) == 0x000F68, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_75' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_74) == 0x000F90, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_74' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_73) == 0x000FB8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_73' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_72) == 0x000FE0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_72' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_71) == 0x001008, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_71' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_70) == 0x001030, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_70' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_69) == 0x001058, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_69' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_68) == 0x001080, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_68' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_67) == 0x0010A8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_67' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_66) == 0x0010D0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_66' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_65) == 0x0010F8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_65' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_64) == 0x001120, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_64' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_63) == 0x001148, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_63' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_62) == 0x001170, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_62' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_61) == 0x001198, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_61' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_60) == 0x0011C0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_60' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_59) == 0x0011E8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_59' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_58) == 0x001210, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_58' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_57) == 0x001238, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_57' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_34) == 0x001260, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_34' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_53) == 0x0012F0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_53' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_33) == 0x001328, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_33' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_52) == 0x0013B8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_52' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_56) == 0x0013F0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_56' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_32) == 0x001418, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_32' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_51) == 0x0014A8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_51' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_55) == 0x0014E0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_55' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_54) == 0x001508, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_54' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_53) == 0x001530, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_53' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionPoseEvaluator_13) == 0x001560, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionPoseEvaluator_13' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionPoseEvaluator_12) == 0x0016A0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionPoseEvaluator_12' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_CustomTransitionResult_6) == 0x0017E0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_CustomTransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_52) == 0x001818, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_52' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequenceEvaluator_5) == 0x001840, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequenceEvaluator_5' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_50) == 0x0018A0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_50' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_31) == 0x0018D8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_31' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_49) == 0x001968, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_49' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_30) == 0x0019A0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_30' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_48) == 0x001A30, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_48' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateMachine_11) == 0x001A68, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateMachine_11' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_47) == 0x001BB0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_47' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_51) == 0x001BE8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_51' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_29) == 0x001C10, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_29' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_46) == 0x001CA0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_46' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_Slot_2) == 0x001CD8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_28) == 0x001D38, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_28' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_45) == 0x001DC8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_45' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateMachine_10) == 0x001E00, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateMachine_10' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_44) == 0x001F48, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_44' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_50) == 0x001F80, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_50' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_27) == 0x001FA8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_27' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_43) == 0x002038, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_43' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_Slot_1) == 0x002070, "Member 'UABP_PerformanceRole_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_26) == 0x0020D0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_26' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_42) == 0x002160, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_42' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateMachine_9) == 0x002198, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateMachine_9' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_41) == 0x0022E0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_41' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_49) == 0x002318, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_49' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_25) == 0x002340, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_25' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_40) == 0x0023D0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_40' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_48) == 0x002408, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_48' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_47) == 0x002430, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_47' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_46) == 0x002458, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_46' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionPoseEvaluator_11) == 0x002480, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionPoseEvaluator_11' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionPoseEvaluator_10) == 0x0025C0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionPoseEvaluator_10' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_CustomTransitionResult_5) == 0x002700, "Member 'UABP_PerformanceRole_C::AnimGraphNode_CustomTransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_45) == 0x002738, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_45' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_39) == 0x002760, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_39' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_Slot) == 0x002798, "Member 'UABP_PerformanceRole_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_24) == 0x0027F8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_24' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_38) == 0x002888, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_38' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_23) == 0x0028C0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_23' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_37) == 0x002950, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_37' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateMachine_8) == 0x002988, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateMachine_8' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_36) == 0x002AD0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_36' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_22) == 0x002B08, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_22' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_35) == 0x002B98, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_35' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_44) == 0x002BD0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_44' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_43) == 0x002BF8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_43' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_42) == 0x002C20, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_42' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionPoseEvaluator_9) == 0x002C50, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionPoseEvaluator_9' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionPoseEvaluator_8) == 0x002D90, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionPoseEvaluator_8' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_CustomTransitionResult_4) == 0x002ED0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_CustomTransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_41) == 0x002F08, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_41' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequenceEvaluator_4) == 0x002F30, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequenceEvaluator_4' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_34) == 0x002F90, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_34' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_21) == 0x002FC8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_21' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_33) == 0x003058, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_33' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_20) == 0x003090, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_20' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_32) == 0x003120, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_32' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateMachine_7) == 0x003158, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateMachine_7' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_31) == 0x0032A0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_31' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_40) == 0x0032D8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_40' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_39) == 0x003300, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_39' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_38) == 0x003328, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_38' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_37) == 0x003350, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_37' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_36) == 0x003378, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_36' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_35) == 0x0033A0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_35' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_34) == 0x0033C8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_34' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionPoseEvaluator_7) == 0x0033F0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionPoseEvaluator_7' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionPoseEvaluator_6) == 0x003530, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionPoseEvaluator_6' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_CustomTransitionResult_3) == 0x003670, "Member 'UABP_PerformanceRole_C::AnimGraphNode_CustomTransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_33) == 0x0036A8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_33' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_32) == 0x0036D0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_32' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequenceEvaluator_3) == 0x0036F8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequenceEvaluator_3' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_30) == 0x003758, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_30' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_19) == 0x003790, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_19' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_29) == 0x003820, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_29' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_18) == 0x003858, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_18' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_28) == 0x0038E8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_28' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_27) == 0x003920, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_27' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_26) == 0x003958, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_26' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateMachine_6) == 0x003990, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateMachine_6' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_25) == 0x003AD8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_25' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_31) == 0x003B10, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_31' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_17) == 0x003B38, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_17' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_24) == 0x003BC8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_24' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_30) == 0x003C00, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_30' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_29) == 0x003C28, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_29' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_28) == 0x003C50, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_28' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionPoseEvaluator_5) == 0x003C80, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionPoseEvaluator_5' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionPoseEvaluator_4) == 0x003DC0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionPoseEvaluator_4' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_CustomTransitionResult_2) == 0x003F00, "Member 'UABP_PerformanceRole_C::AnimGraphNode_CustomTransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_27) == 0x003F38, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_27' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequenceEvaluator_2) == 0x003F60, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequenceEvaluator_2' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_23) == 0x003FC0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_23' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_16) == 0x003FF8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_16' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_22) == 0x004088, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_22' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_15) == 0x0040C0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_15' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_21) == 0x004150, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_21' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateMachine_5) == 0x004188, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateMachine_5' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_20) == 0x0042D0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_20' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_26) == 0x004308, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_26' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_14) == 0x004330, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_14' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_19) == 0x0043C0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_19' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_25) == 0x0043F8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_25' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_24) == 0x004420, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_24' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_23) == 0x004448, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_23' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionPoseEvaluator_3) == 0x004470, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionPoseEvaluator_3' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionPoseEvaluator_2) == 0x0045B0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionPoseEvaluator_2' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_CustomTransitionResult_1) == 0x0046F0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_CustomTransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_22) == 0x004728, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_22' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequenceEvaluator_1) == 0x004750, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequenceEvaluator_1' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_18) == 0x0047B0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_18' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_13) == 0x0047E8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_13' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_17) == 0x004878, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_17' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_12) == 0x0048B0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_12' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_16) == 0x004940, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_16' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateMachine_4) == 0x004978, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateMachine_4' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_15) == 0x004AC0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_15' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_21) == 0x004AF8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_21' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_11) == 0x004B20, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_11' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_14) == 0x004BB0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_14' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_20) == 0x004BE8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_20' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_19) == 0x004C10, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_19' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_18) == 0x004C38, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_18' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionPoseEvaluator_1) == 0x004C60, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionPoseEvaluator_1' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionPoseEvaluator) == 0x004DA0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionPoseEvaluator' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_CustomTransitionResult) == 0x004EE0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_CustomTransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_17) == 0x004F18, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_17' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequenceEvaluator) == 0x004F40, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_13) == 0x004FA0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_13' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_10) == 0x004FD8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_12) == 0x005068, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_12' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_9) == 0x0050A0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_11) == 0x005130, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_11' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateMachine_3) == 0x005168, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateMachine_3' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_10) == 0x0052B0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_10' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_16) == 0x0052E8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_16' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_8) == 0x005310, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_9) == 0x0053A0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_9' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateMachine_2) == 0x0053D8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_15) == 0x005520, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_15' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_14) == 0x005548, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_14' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_13) == 0x005570, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_12) == 0x005598, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_11) == 0x0055C0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_10) == 0x0055E8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_9) == 0x005610, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_8) == 0x005638, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_7) == 0x005660, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_6) == 0x005688, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_5) == 0x0056B0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_4) == 0x0056D8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_7) == 0x005700, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_8) == 0x005790, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_8' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_6) == 0x0057C8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_7) == 0x005858, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_5) == 0x005890, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_6) == 0x005920, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_3) == 0x005958, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_4) == 0x005980, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_5) == 0x005A10, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_2) == 0x005A48, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_3) == 0x005A70, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_4) == 0x005B00, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_2) == 0x005B38, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_3) == 0x005BC8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer_1) == 0x005C00, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_2) == 0x005C90, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateMachine_1) == 0x005CC8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_BlendListByBool) == 0x005E10, "Member 'UABP_PerformanceRole_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult_1) == 0x005EC0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_TransitionResult) == 0x005EE8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_SequencePlayer) == 0x005F10, "Member 'UABP_PerformanceRole_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult_1) == 0x005FA0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateResult) == 0x005FD8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_StateMachine) == 0x006010, "Member 'UABP_PerformanceRole_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_CombineCurves) == 0x006158, "Member 'UABP_PerformanceRole_C::AnimGraphNode_CombineCurves' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_Root) == 0x0061B8, "Member 'UABP_PerformanceRole_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_LinkedAnimLayer_1) == 0x0061F0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_LinkedAnimLayer_1' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, AnimGraphNode_LinkedAnimLayer) == 0x0062B0, "Member 'UABP_PerformanceRole_C::AnimGraphNode_LinkedAnimLayer' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, StateInternal) == 0x006370, "Member 'UABP_PerformanceRole_C::StateInternal' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, reLoop) == 0x006371, "Member 'UABP_PerformanceRole_C::reLoop' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, bForceChange) == 0x006372, "Member 'UABP_PerformanceRole_C::bForceChange' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, Delta_Time_X) == 0x006374, "Member 'UABP_PerformanceRole_C::Delta_Time_X' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, HeadAlpha) == 0x006378, "Member 'UABP_PerformanceRole_C::HeadAlpha' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, OnEffectBegin) == 0x006380, "Member 'UABP_PerformanceRole_C::OnEffectBegin' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, OnEffectEnd) == 0x006390, "Member 'UABP_PerformanceRole_C::OnEffectEnd' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, PerformDelay) == 0x0063A0, "Member 'UABP_PerformanceRole_C::PerformDelay' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, CurPerformTime) == 0x0063A4, "Member 'UABP_PerformanceRole_C::CurPerformTime' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, bForceChange_Perform) == 0x0063A8, "Member 'UABP_PerformanceRole_C::bForceChange_Perform' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, CacheViewportSize) == 0x0063AC, "Member 'UABP_PerformanceRole_C::CacheViewportSize' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, LookAtWorld_Position) == 0x0063B4, "Member 'UABP_PerformanceRole_C::LookAtWorld_Position' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, Mesh) == 0x0063C0, "Member 'UABP_PerformanceRole_C::Mesh' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, LookAtDirection) == 0x0063C8, "Member 'UABP_PerformanceRole_C::LookAtDirection' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, IsCreateRoleState) == 0x0063D4, "Member 'UABP_PerformanceRole_C::IsCreateRoleState' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, CreateRoleStartLocation) == 0x0063D8, "Member 'UABP_PerformanceRole_C::CreateRoleStartLocation' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, CreateRoleEndLocation) == 0x0063E4, "Member 'UABP_PerformanceRole_C::CreateRoleEndLocation' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, CreateRoleMoveAllTime) == 0x0063F0, "Member 'UABP_PerformanceRole_C::CreateRoleMoveAllTime' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, Actor) == 0x0063F8, "Member 'UABP_PerformanceRole_C::Actor' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, CreateRoleMoveCurrentTime) == 0x006400, "Member 'UABP_PerformanceRole_C::CreateRoleMoveCurrentTime' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, CreateRoleStartRotation) == 0x006404, "Member 'UABP_PerformanceRole_C::CreateRoleStartRotation' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, CreateRoleEndLocationOffset) == 0x006410, "Member 'UABP_PerformanceRole_C::CreateRoleEndLocationOffset' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, CreateRoleEndRotation) == 0x00641C, "Member 'UABP_PerformanceRole_C::CreateRoleEndRotation' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, CreateRoleEndRotationOffset) == 0x006428, "Member 'UABP_PerformanceRole_C::CreateRoleEndRotationOffset' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, CreateRoleMovePlayRate) == 0x006434, "Member 'UABP_PerformanceRole_C::CreateRoleMovePlayRate' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, HasInitCreateRoleInfo) == 0x006438, "Member 'UABP_PerformanceRole_C::HasInitCreateRoleInfo' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, isLooping) == 0x006439, "Member 'UABP_PerformanceRole_C::isLooping' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, bInitCreateRoleInfo) == 0x00643A, "Member 'UABP_PerformanceRole_C::bInitCreateRoleInfo' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, InSkillRotate) == 0x00643B, "Member 'UABP_PerformanceRole_C::InSkillRotate' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, InSkillEndRotate) == 0x00643C, "Member 'UABP_PerformanceRole_C::InSkillEndRotate' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, TempRotate) == 0x00643D, "Member 'UABP_PerformanceRole_C::TempRotate' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, PerformanceRoleInfo) == 0x006440, "Member 'UABP_PerformanceRole_C::PerformanceRoleInfo' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, BlinkAlpha) == 0x006448, "Member 'UABP_PerformanceRole_C::BlinkAlpha' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, InBlinking) == 0x00644C, "Member 'UABP_PerformanceRole_C::InBlinking' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, BlinkEndTime) == 0x006450, "Member 'UABP_PerformanceRole_C::BlinkEndTime' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, 眨眼动画时长) == 0x006454, "Member 'UABP_PerformanceRole_C::眨眼动画时长' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, 此轮眨眼动画总时长) == 0x006458, "Member 'UABP_PerformanceRole_C::此轮眨眼动画总时长' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, SameStateArray01) == 0x006460, "Member 'UABP_PerformanceRole_C::SameStateArray01' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, False) == 0x006470, "Member 'UABP_PerformanceRole_C::False' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, DirectEnterLoop) == 0x006471, "Member 'UABP_PerformanceRole_C::DirectEnterLoop' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, CurrentState) == 0x006472, "Member 'UABP_PerformanceRole_C::CurrentState' has a wrong offset!");
static_assert(offsetof(UABP_PerformanceRole_C, reLoopFromLoopToStart) == 0x006473, "Member 'UABP_PerformanceRole_C::reLoopFromLoopToStart' has a wrong offset!");

}

