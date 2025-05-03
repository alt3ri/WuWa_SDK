#pragma once
// Package: BP_KuroMasterSeqEvent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SpineThingsInfo_structs.hpp"


namespace SDK::Params
{

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.ExecuteUbergraph_BP_KuroMasterSeqEvent
// 0x0028 (0x0028 - 0x0000)
struct BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ScreenEffectSystem_C*               CallFunc_GetScreenEffectSystem_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Variable;                                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent) == 0x000008, "Wrong alignment on BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent) == 0x000028, "Wrong size on BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent, EntryPoint) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent, CallFunc_GetScreenEffectSystem_ReturnValue) == 0x000010, "Member 'BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent::CallFunc_GetScreenEffectSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent, CallFunc_Subtract_IntInt_ReturnValue) == 0x00001C, "Member 'BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent, ___int_Variable) == 0x000020, "Member 'BP_KuroMasterSeqEvent_C_ExecuteUbergraph_BP_KuroMasterSeqEvent::___int_Variable' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_KuroMasterSeqEvent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_KuroMasterSeqEvent_C_ReceiveTick");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_ReceiveTick) == 0x000004, "Wrong size on BP_KuroMasterSeqEvent_C_ReceiveTick");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.主触发切镜
// 0x0010 (0x0010 - 0x0000)
struct BP_KuroMasterSeqEvent_C_主触发切镜 final
{
public:
	bool                                          shouldBlend;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         blendTime;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EViewTargetBlendFunction                      blendFunction;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         blendExp;                                          // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_主触发切镜) == 0x000004, "Wrong alignment on BP_KuroMasterSeqEvent_C_主触发切镜");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_主触发切镜) == 0x000010, "Wrong size on BP_KuroMasterSeqEvent_C_主触发切镜");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_主触发切镜, shouldBlend) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_主触发切镜::shouldBlend' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_主触发切镜, blendTime) == 0x000004, "Member 'BP_KuroMasterSeqEvent_C_主触发切镜::blendTime' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_主触发切镜, blendFunction) == 0x000008, "Member 'BP_KuroMasterSeqEvent_C_主触发切镜::blendFunction' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_主触发切镜, blendExp) == 0x00000C, "Member 'BP_KuroMasterSeqEvent_C_主触发切镜::blendExp' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.调整镜头裁剪距离
// 0x0028 (0x0028 - 0x0000)
struct BP_KuroMasterSeqEvent_C_调整镜头裁剪距离 final
{
public:
	int32                                         NearClip;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_调整镜头裁剪距离) == 0x000008, "Wrong alignment on BP_KuroMasterSeqEvent_C_调整镜头裁剪距离");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_调整镜头裁剪距离) == 0x000028, "Wrong size on BP_KuroMasterSeqEvent_C_调整镜头裁剪距离");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_调整镜头裁剪距离, NearClip) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_调整镜头裁剪距离::NearClip' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_调整镜头裁剪距离, CallFunc_Clamp_ReturnValue) == 0x000004, "Member 'BP_KuroMasterSeqEvent_C_调整镜头裁剪距离::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_调整镜头裁剪距离, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'BP_KuroMasterSeqEvent_C_调整镜头裁剪距离::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_调整镜头裁剪距离, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'BP_KuroMasterSeqEvent_C_调整镜头裁剪距离::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.开关人物飘带
// 0x0001 (0x0001 - 0x0000)
struct BP_KuroMasterSeqEvent_C_开关人物飘带 final
{
public:
	bool                                          enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_开关人物飘带) == 0x000001, "Wrong alignment on BP_KuroMasterSeqEvent_C_开关人物飘带");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_开关人物飘带) == 0x000001, "Wrong size on BP_KuroMasterSeqEvent_C_开关人物飘带");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_开关人物飘带, enable) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_开关人物飘带::enable' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.执行流程行为
// 0x0010 (0x0010 - 0x0000)
struct BP_KuroMasterSeqEvent_C_执行流程行为 final
{
public:
	class FString                                 key;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_执行流程行为) == 0x000008, "Wrong alignment on BP_KuroMasterSeqEvent_C_执行流程行为");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_执行流程行为) == 0x000010, "Wrong size on BP_KuroMasterSeqEvent_C_执行流程行为");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_执行流程行为, key) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_执行流程行为::key' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.开始叠化
// 0x0001 (0x0001 - 0x0000)
struct BP_KuroMasterSeqEvent_C_开始叠化 final
{
public:
	bool                                          CallFunc_IsGame_ReturnValue;                       // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_开始叠化) == 0x000001, "Wrong alignment on BP_KuroMasterSeqEvent_C_开始叠化");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_开始叠化) == 0x000001, "Wrong size on BP_KuroMasterSeqEvent_C_开始叠化");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_开始叠化, CallFunc_IsGame_ReturnValue) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_开始叠化::CallFunc_IsGame_ReturnValue' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.打开章节提示
// 0x0008 (0x0008 - 0x0000)
struct BP_KuroMasterSeqEvent_C_打开章节提示 final
{
public:
	int32                                         ChapterState;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ChapterId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_打开章节提示) == 0x000004, "Wrong alignment on BP_KuroMasterSeqEvent_C_打开章节提示");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_打开章节提示) == 0x000008, "Wrong size on BP_KuroMasterSeqEvent_C_打开章节提示");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_打开章节提示, ChapterState) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_打开章节提示::ChapterState' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_打开章节提示, ChapterId) == 0x000004, "Member 'BP_KuroMasterSeqEvent_C_打开章节提示::ChapterId' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.展示游戏Logo
// 0x0004 (0x0004 - 0x0000)
struct BP_KuroMasterSeqEvent_C_展示游戏Logo final
{
public:
	float                                         time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_展示游戏Logo) == 0x000004, "Wrong alignment on BP_KuroMasterSeqEvent_C_展示游戏Logo");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_展示游戏Logo) == 0x000004, "Wrong size on BP_KuroMasterSeqEvent_C_展示游戏Logo");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_展示游戏Logo, time) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_展示游戏Logo::time' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.显示预览图
// 0x0048 (0x0048 - 0x0000)
struct BP_KuroMasterSeqEvent_C_显示预览图 final
{
public:
	class FString                                 MaleAssetPath;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 FemaleAssetPath;                                   // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 maleSpineName;                                     // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 femaleSpineName;                                   // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          needLoop;                                          // 0x0040(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_显示预览图) == 0x000008, "Wrong alignment on BP_KuroMasterSeqEvent_C_显示预览图");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_显示预览图) == 0x000048, "Wrong size on BP_KuroMasterSeqEvent_C_显示预览图");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_显示预览图, MaleAssetPath) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_显示预览图::MaleAssetPath' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_显示预览图, FemaleAssetPath) == 0x000010, "Member 'BP_KuroMasterSeqEvent_C_显示预览图::FemaleAssetPath' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_显示预览图, maleSpineName) == 0x000020, "Member 'BP_KuroMasterSeqEvent_C_显示预览图::maleSpineName' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_显示预览图, femaleSpineName) == 0x000030, "Member 'BP_KuroMasterSeqEvent_C_显示预览图::femaleSpineName' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_显示预览图, needLoop) == 0x000040, "Member 'BP_KuroMasterSeqEvent_C_显示预览图::needLoop' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.显示预览图(数组)
// 0x0040 (0x0040 - 0x0000)
struct BP_KuroMasterSeqEvent_C_显示预览图_数组_ final
{
public:
	class FString                                 MaleAssetPath;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 FemaleAssetPath;                                   // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSpineThingsInfo>               maleSpineArray;                                    // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FSpineThingsInfo>               femaleSpineArray;                                  // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_显示预览图_数组_) == 0x000008, "Wrong alignment on BP_KuroMasterSeqEvent_C_显示预览图_数组_");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_显示预览图_数组_) == 0x000040, "Wrong size on BP_KuroMasterSeqEvent_C_显示预览图_数组_");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_显示预览图_数组_, MaleAssetPath) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_显示预览图_数组_::MaleAssetPath' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_显示预览图_数组_, FemaleAssetPath) == 0x000010, "Member 'BP_KuroMasterSeqEvent_C_显示预览图_数组_::FemaleAssetPath' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_显示预览图_数组_, maleSpineArray) == 0x000020, "Member 'BP_KuroMasterSeqEvent_C_显示预览图_数组_::maleSpineArray' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_显示预览图_数组_, femaleSpineArray) == 0x000030, "Member 'BP_KuroMasterSeqEvent_C_显示预览图_数组_::femaleSpineArray' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.播放预览图动画
// 0x0010 (0x0010 - 0x0000)
struct BP_KuroMasterSeqEvent_C_播放预览图动画 final
{
public:
	class FString                                 seqName;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_播放预览图动画) == 0x000008, "Wrong alignment on BP_KuroMasterSeqEvent_C_播放预览图动画");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_播放预览图动画) == 0x000010, "Wrong size on BP_KuroMasterSeqEvent_C_播放预览图动画");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_播放预览图动画, seqName) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_播放预览图动画::seqName' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.执行实体帧事件
// 0x0018 (0x0018 - 0x0000)
struct BP_KuroMasterSeqEvent_C_执行实体帧事件 final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         EntityId;                                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_执行实体帧事件) == 0x000008, "Wrong alignment on BP_KuroMasterSeqEvent_C_执行实体帧事件");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_执行实体帧事件) == 0x000018, "Wrong size on BP_KuroMasterSeqEvent_C_执行实体帧事件");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_执行实体帧事件, Key) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_执行实体帧事件::Key' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_执行实体帧事件, EntityId) == 0x000010, "Member 'BP_KuroMasterSeqEvent_C_执行实体帧事件::EntityId' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.播放Spine动画
// 0x0018 (0x0018 - 0x0000)
struct BP_KuroMasterSeqEvent_C_播放Spine动画 final
{
public:
	class FString                                 SpineName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          needLoop;                                          // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_播放Spine动画) == 0x000008, "Wrong alignment on BP_KuroMasterSeqEvent_C_播放Spine动画");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_播放Spine动画) == 0x000018, "Wrong size on BP_KuroMasterSeqEvent_C_播放Spine动画");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_播放Spine动画, SpineName) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_播放Spine动画::SpineName' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_播放Spine动画, needLoop) == 0x000010, "Member 'BP_KuroMasterSeqEvent_C_播放Spine动画::needLoop' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.播放Spine动画(性别)
// 0x0028 (0x0028 - 0x0000)
struct BP_KuroMasterSeqEvent_C_播放Spine动画_性别_ final
{
public:
	class FString                                 maleSpineName1;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 femaleSpineName1;                                  // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          needLoop;                                          // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_播放Spine动画_性别_) == 0x000008, "Wrong alignment on BP_KuroMasterSeqEvent_C_播放Spine动画_性别_");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_播放Spine动画_性别_) == 0x000028, "Wrong size on BP_KuroMasterSeqEvent_C_播放Spine动画_性别_");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_播放Spine动画_性别_, maleSpineName1) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_播放Spine动画_性别_::maleSpineName1' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_播放Spine动画_性别_, femaleSpineName1) == 0x000010, "Member 'BP_KuroMasterSeqEvent_C_播放Spine动画_性别_::femaleSpineName1' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_播放Spine动画_性别_, needLoop) == 0x000020, "Member 'BP_KuroMasterSeqEvent_C_播放Spine动画_性别_::needLoop' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.播放Spine动画(数组)
// 0x0020 (0x0020 - 0x0000)
struct BP_KuroMasterSeqEvent_C_播放Spine动画_数组_ final
{
public:
	TArray<struct FSpineThingsInfo>               maleSpineArray;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FSpineThingsInfo>               femaleSpineArray;                                  // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_播放Spine动画_数组_) == 0x000008, "Wrong alignment on BP_KuroMasterSeqEvent_C_播放Spine动画_数组_");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_播放Spine动画_数组_) == 0x000020, "Wrong size on BP_KuroMasterSeqEvent_C_播放Spine动画_数组_");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_播放Spine动画_数组_, maleSpineArray) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_播放Spine动画_数组_::maleSpineArray' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_播放Spine动画_数组_, femaleSpineArray) == 0x000010, "Member 'BP_KuroMasterSeqEvent_C_播放Spine动画_数组_::femaleSpineArray' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.关闭Spine动画
// 0x0010 (0x0010 - 0x0000)
struct BP_KuroMasterSeqEvent_C_关闭Spine动画 final
{
public:
	class FString                                 spineName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_关闭Spine动画) == 0x000008, "Wrong alignment on BP_KuroMasterSeqEvent_C_关闭Spine动画");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_关闭Spine动画) == 0x000010, "Wrong size on BP_KuroMasterSeqEvent_C_关闭Spine动画");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_关闭Spine动画, spineName) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_关闭Spine动画::spineName' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.关闭Spine动画(数组)
// 0x0010 (0x0010 - 0x0000)
struct BP_KuroMasterSeqEvent_C_关闭Spine动画_数组_ final
{
public:
	TArray<class FString>                         spineArray;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_关闭Spine动画_数组_) == 0x000008, "Wrong alignment on BP_KuroMasterSeqEvent_C_关闭Spine动画_数组_");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_关闭Spine动画_数组_) == 0x000010, "Wrong size on BP_KuroMasterSeqEvent_C_关闭Spine动画_数组_");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_关闭Spine动画_数组_, spineArray) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_关闭Spine动画_数组_::spineArray' has a wrong offset!");

// Function BP_KuroMasterSeqEvent.BP_KuroMasterSeqEvent_C.背景Icon
// 0x0010 (0x0010 - 0x0000)
struct BP_KuroMasterSeqEvent_C_背景Icon final
{
public:
	bool                                          显示;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Icon;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroMasterSeqEvent_C_背景Icon) == 0x000008, "Wrong alignment on BP_KuroMasterSeqEvent_C_背景Icon");
static_assert(sizeof(BP_KuroMasterSeqEvent_C_背景Icon) == 0x000010, "Wrong size on BP_KuroMasterSeqEvent_C_背景Icon");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_背景Icon, 显示) == 0x000000, "Member 'BP_KuroMasterSeqEvent_C_背景Icon::显示' has a wrong offset!");
static_assert(offsetof(BP_KuroMasterSeqEvent_C_背景Icon, Icon) == 0x000008, "Member 'BP_KuroMasterSeqEvent_C_背景Icon::Icon' has a wrong offset!");

}

