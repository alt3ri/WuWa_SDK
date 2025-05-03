#pragma once
// Package: AIC_AICommon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SAiConditions_structs.hpp"
#include "TsAiController_classes.hpp"
#include "Engine_structs.hpp"
#include "EAiLevelVarSource_structs.hpp"
#include "ECharacterState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIC_AICommon.AIC_AICommon_C
// 0x03B0 (0x0788 - 0x03D8)
class AAIC_AICommon_C final : public ATsAiController_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AIC_AICommon_C;                     // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ATsBaseCharacter_C*                     怪物自身对象;                                      // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          出生位置;                                          // 0x03E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSAiConditions                         行为树运行前置条件;                                // 0x0400(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         默认感知保底;                                      // 0x04B8(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         战斗行为树前置;                                    // 0x0570(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AActor*>                         仇恨添加对象数组;                                  // 0x0628(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         仇恨删除对象数组;                                  // 0x0638(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         当前仇恨列表数量;                                  // 0x0648(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64C[0x4];                                      // 0x064C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         感知添加对象数组;                                  // 0x0650(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         感知删除对象数组;                                  // 0x0660(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         当前感知列表数量;                                  // 0x0670(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_674[0x4];                                      // 0x0674(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         仇恨外感知添加;                                    // 0x0678(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         仇恨外感知删除;                                    // 0x0688(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         仇恨外对象数组;                                    // 0x0698(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         怪物类型;                                          // 0x069C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSAiConditions                         入战监听1;                                         // 0x06A0(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AActor*>                         区域监听对象数组;                                  // 0x0758(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                 当前仇恨对象;                                      // 0x0768(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKuroRegionDetectComponent*             区域监听;                                          // 0x0770(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   碰撞通道名;                                        // 0x0778(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AIC_AICommon(int32 EntryPoint);
	void 保底传送回调(bool bContent);
	void 区域监听事件();
	void 入战监听(bool bContent);
	void AicTriggerEvent(class FName Name_0);
	void 仇恨外受击(const TArray<class AActor*>& AddActor, const TArray<class AActor*>& RemoveActor, const TArray<int32>& RemoveActorIds, int32 Num);
	void 感知监听(const TArray<class AActor*>& AddActor, const TArray<class AActor*>& RemoveActor, const TArray<int32>& RemoveActorIds, int32 Num);
	void 仇恨监听(const TArray<class AActor*>& AddActor, const TArray<class AActor*>& RemoveActor, const TArray<int32>& RemoveActorIds, int32 Num);
	void 通用战斗AI(bool bContent);
	void 默认感知保底事件(bool bContent);
	void 通用行为树条件(bool bContent);
	void ReceiveTick(float DeltaSeconds);
	void 状态切换函数(class UObject* 角色, ECharacterState 老状态, ECharacterState 新状态, bool 主控, class UObject** 角色返回, ECharacterState* 老状态返回, ECharacterState* 新状态返回, bool* 主控返回);
	void 感知到仇恨目标();
	void 设置区域监听对象();
	void 区域(const TDelegate<void()>& 换人监听);
	void 区域监听事件函数(const class FString& 区域名称, const TDelegate<void(bool IsInRegion, class AActor* Target)>& 事件);
	void 角色怪射线检测(bool* 可以钩锁);
	void 通用关卡变量切换监听(EAiLevelVarSource 关卡变量监听类型, const class FString& 关卡变量名称, int32 关卡副本行为树id, const TDelegate<void(bool bContent)>& 事件);
	void OnStart();
	void 状态切换时(ECharacterState oldState, ECharacterState newState, bool isAutonomousProxy);
	void 获取控制权时();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIC_AICommon_C">();
	}
	static class AAIC_AICommon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIC_AICommon_C>();
	}
};
static_assert(alignof(AAIC_AICommon_C) == 0x000008, "Wrong alignment on AAIC_AICommon_C");
static_assert(sizeof(AAIC_AICommon_C) == 0x000788, "Wrong size on AAIC_AICommon_C");
static_assert(offsetof(AAIC_AICommon_C, UberGraphFrame_AIC_AICommon_C) == 0x0003D8, "Member 'AAIC_AICommon_C::UberGraphFrame_AIC_AICommon_C' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 怪物自身对象) == 0x0003E0, "Member 'AAIC_AICommon_C::怪物自身对象' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 出生位置) == 0x0003E8, "Member 'AAIC_AICommon_C::出生位置' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 行为树运行前置条件) == 0x000400, "Member 'AAIC_AICommon_C::行为树运行前置条件' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 默认感知保底) == 0x0004B8, "Member 'AAIC_AICommon_C::默认感知保底' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 战斗行为树前置) == 0x000570, "Member 'AAIC_AICommon_C::战斗行为树前置' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 仇恨添加对象数组) == 0x000628, "Member 'AAIC_AICommon_C::仇恨添加对象数组' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 仇恨删除对象数组) == 0x000638, "Member 'AAIC_AICommon_C::仇恨删除对象数组' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 当前仇恨列表数量) == 0x000648, "Member 'AAIC_AICommon_C::当前仇恨列表数量' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 感知添加对象数组) == 0x000650, "Member 'AAIC_AICommon_C::感知添加对象数组' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 感知删除对象数组) == 0x000660, "Member 'AAIC_AICommon_C::感知删除对象数组' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 当前感知列表数量) == 0x000670, "Member 'AAIC_AICommon_C::当前感知列表数量' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 仇恨外感知添加) == 0x000678, "Member 'AAIC_AICommon_C::仇恨外感知添加' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 仇恨外感知删除) == 0x000688, "Member 'AAIC_AICommon_C::仇恨外感知删除' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 仇恨外对象数组) == 0x000698, "Member 'AAIC_AICommon_C::仇恨外对象数组' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 怪物类型) == 0x00069C, "Member 'AAIC_AICommon_C::怪物类型' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 入战监听1) == 0x0006A0, "Member 'AAIC_AICommon_C::入战监听1' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 区域监听对象数组) == 0x000758, "Member 'AAIC_AICommon_C::区域监听对象数组' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 当前仇恨对象) == 0x000768, "Member 'AAIC_AICommon_C::当前仇恨对象' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 区域监听) == 0x000770, "Member 'AAIC_AICommon_C::区域监听' has a wrong offset!");
static_assert(offsetof(AAIC_AICommon_C, 碰撞通道名) == 0x000778, "Member 'AAIC_AICommon_C::碰撞通道名' has a wrong offset!");

}

