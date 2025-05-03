#pragma once
// Package: KFC_AICommon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ECamp_structs.hpp"
#include "ERelation_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass KFC_AICommon.KFC_AICommon_C
// 0x0000 (0x0030 - 0x0030)
class UKFC_AICommon_C final : public UBlueprintFunctionLibrary
{
public:
	static void 获取自身距离目标角度(class AActor* 目标角色, class AActor* 原点角色, class UObject* __WorldContext, float* 返回角度);
	static void 目标距离计算(class AActor* AI对象, class AActor* 目标对象, class UObject* __WorldContext, float* 到目标的距离, bool* 返回是否超过目标);
	static void 更新动画属性_性能消耗大仅限进行测试开发_(class ACharacter* As_Base_Character, class UObject* __WorldContext, struct FVector* 速度向量, struct FVector* 加速度, struct FVector* 移动输入向量, bool* 是否正在移动, bool* 是否有移动输入, float* 速度, float* 瞄准旋转速率, EMovementMode* 移动模式);
	static void 播放特写镜头动画(class FName 剧情ID, class UDataTable* 剧情资源表, TArray<class AActor*>& 演员Actor数组, TArray<class FName>& 演员身份数组, class UObject* __WorldContext);
	static void 游荡强制转向结束(class ATsBaseCharacter_C* BaseCharacter, class UObject* __WorldContext, bool* 结束自动朝向);
	static void 导航强制转向开始(class ATsBaseCharacter_C* 自身base对象, float 旋转速度, const struct FVector& 导航坐标, class UObject* __WorldContext, bool* 导航强制转向中);
	static void 停止移动(class ATsBaseCharacter_C* Character, class UObject* __WorldContext);
	static void 游荡强制转向开始(class ATsBaseCharacter_C* 自身Character, float 旋转速度, class ATsBaseCharacter_C* 仇恨对象, class UObject* __WorldContext, bool* 自动朝向开始);
	static void 设置黑板Int(class ATsBaseCharacter_C* 角色, const class FString& Key, int32 值, class UObject* __WorldContext);
	static void 获取黑板_Int(class ABaseCharacter* 角色, const class FString& Key, class UObject* __WorldContext, int32* 值);
	static void 获取自身距离坐标角度(const struct FVectorDouble& 目标坐标, class AActor* 原点角色, class UObject* __WorldContext, float* 返回角度);
	static void 使用技能关卡封装(bool 外部方向输入清0, class ATsBaseCharacter_C* 自身Character, class FName 技能随机结果, class AActor* 技能目标, class UObject* __WorldContext);
	static void 获取自身距离目标角度2D(class AActor* 目标角色, class AActor* 原点角色, class UObject* __WorldContext, float* 返回角度);
	static void 忽略_Z(const struct FVector& InVec, class UObject* __WorldContext, struct FVector* OutVec);
	static void 阵营判断(ECamp 自身阵营, ECamp 目标阵营, class UDataTable* 阵营关系数据, class UObject* __WorldContext, ERelation* 关系, int32* 关系整数);
	static void GetPathToTarget(const struct FVector& InEndPos, const struct FVector& InStartPos, class UObject* __WorldContext, TArray<struct FVector>* OutPathpoint);
	static void 在原点左边(const struct FVectorDouble& 原点, const struct FVectorDouble& 目标点, const struct FVectorDouble& 原点朝向的点, class UObject* __WorldContext, bool* 在原点左边_0);
	static void Get_Pos_in_Path(TArray<struct FSPointsRow>& InRow, bool bXDir, bool bYDir, class UObject* __WorldContext, TArray<struct FVector>* OutPoints);
	static void 忽略胶囊体距离(class ATsBaseCharacter_C* 比较对象1, class ATsBaseCharacter_C* 比较对象2, class UObject* __WorldContext, float* 距离);
	static void 怪物通用(class UObject* __WorldContext);
	static void 高度差计算(class ATsBaseCharacter_C* 原点目标, class ATsBaseCharacter_C* 比较目标, class UObject* __WorldContext, float* 高度差);
	static void 导航强制转向结束(class UObject* __WorldContext, bool* 导航强制转向中);
	static void 距离中值(float 最大距离, float 最小距离, class UObject* __WorldContext, float* 距离中值_0);
	static void 向量偏转角度长度仰角的坐标(float 长度, float 旋转, float 仰角, const struct FVectorDouble& 原点, const struct FVectorDouble& 目标点, bool ThreeD旋转, class UObject* __WorldContext, struct FVectorDouble* 坐标点);
	static void 传送坐标可靠性判断(const struct FVectorDouble& 起始坐标, const struct FVectorDouble& 被验证坐标, class ATsBaseCharacter_C* 自身, class UObject* __WorldContext, bool* 坐标点可靠, struct FVectorDouble* 可靠坐标, float* 返回坐标距离目标距离);
	static void 设置黑板Long(class ATsBaseCharacter_C* 角色, const class FString& Key, int64 值, class UObject* __WorldContext);
	static void 获取黑板Long(class ATsBaseCharacter_C* 角色, const class FString& Key, class UObject* __WorldContext, int64* 值);
	static void 获取黑板EntityId(class ATsBaseCharacter_C* 角色, const class FString& Key, class UObject* __WorldContext, int32* 值);
	static void 设置黑板EntityId(class ATsBaseCharacter_C* 角色, const class FString& Key, int32 值, class UObject* __WorldContext);
	static void 开启交互事件(int32 交互事件ID, class UObject* __WorldContext);
	static void 创建_CD计时器回调(class AAIC_AICommon_C* AIC自身对象, int32 cd_Id, const TDelegate<void(bool bContent)> 事件, class UObject* __WorldContext);
	static void 抛物线位移函数(float 激发时长, float 激发力度, float 发射角度, class UObject* __WorldContext, float* 返回高度, float* 返回位置, float* 高度速度, float* 距离速度);
	static void 获取自身对于目标仰角(class ACharacter* 目标对象, class ACharacter* 原点对象, bool 忽略胶囊体, class UObject* __WorldContext, float* 返回角度);
	static void 获取_Base属性值(class ATsBaseCharacter_C* 目标, int32 属性id, class UObject* __WorldContext, float* 属性值);
	static void 获取Current属性值(class ABaseCharacter* 目标, int32 属性id, class UObject* __WorldContext, float* 属性值);
	static void 忽略_Z_Double(const struct FVectorDouble& InVec, class UObject* __WorldContext, struct FVectorDouble* OutVec);
	static void 获取黑板坐标(class ATsBaseCharacter_C* 角色, const class FString& Key, class UObject* __WorldContext, struct FVectorDouble* 位置);

	void 怪物通用转向(const struct FRotator& 目标旋转体, float TargetInterpSpeed_Const_, float ActorInterpSpeed_Smooth_, class ATsBaseCharacter_C* 旋转对象, class UObject* __WorldContext);
	bool 是否需要移动(class ATsBaseCharacter_C* BaseCharacter, bool 是否正在移动, bool 是否有移动输入, class UObject* __WorldContext);
	class UKuroBooleanEventBinder* 创建AIC监听(class UObject* AIC自身对象, const TDelegate<void(bool bContent)>& Event, class UObject* __WorldContext);
	class UKuroPerceptionEventBinder* 创建仇恨感知监听(class UObject* AIC自身对象, const TDelegate<void(const TArray<class AActor*>& AddActor, const TArray<class AActor*>& RemoveActor, const TArray<int32>& RemoveActorIds, int32 Num)>& Event1, class UObject* __WorldContext);
	class UKuroActorEventBinder* 创建物件破坏监听(class UObject* AIC自身对象, const TDelegate<void(class AActor* Actor, bool bContent)>& Event, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KFC_AICommon_C">();
	}
	static class UKFC_AICommon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKFC_AICommon_C>();
	}
};
static_assert(alignof(UKFC_AICommon_C) == 0x000008, "Wrong alignment on UKFC_AICommon_C");
static_assert(sizeof(UKFC_AICommon_C) == 0x000030, "Wrong size on UKFC_AICommon_C");

}

