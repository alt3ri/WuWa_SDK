#pragma once
// Package: AIC_AICommon

#include "Basic.hpp"

#include "AIC_AICommon_classes.hpp"
#include "AIC_AICommon_parameters.hpp"


namespace SDK
{

// Function AIC_AICommon.AIC_AICommon_C.ExecuteUbergraph_AIC_AICommon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_AICommon_C::ExecuteUbergraph_AIC_AICommon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "ExecuteUbergraph_AIC_AICommon");

	Params::AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_AICommon.AIC_AICommon_C.保底传送回调
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bContent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAIC_AICommon_C::保底传送回调(bool bContent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "保底传送回调");

	Params::AIC_AICommon_C_保底传送回调 Parms{};

	Parms.bContent = bContent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_AICommon.AIC_AICommon_C.区域监听事件
// (BlueprintCallable, BlueprintEvent)

void AAIC_AICommon_C::区域监听事件()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "区域监听事件");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_AICommon.AIC_AICommon_C.入战监听
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bContent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAIC_AICommon_C::入战监听(bool bContent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "入战监听");

	Params::AIC_AICommon_C_入战监听 Parms{};

	Parms.bContent = bContent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_AICommon.AIC_AICommon_C.AicTriggerEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Name_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_AICommon_C::AicTriggerEvent(class FName Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "AicTriggerEvent");

	Params::AIC_AICommon_C_AicTriggerEvent Parms{};

	Parms.Name_0 = Name_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_AICommon.AIC_AICommon_C.仇恨外受击
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   AddActor                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class AActor*>                   RemoveActor                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                           RemoveActorIds                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_AICommon_C::仇恨外受击(const TArray<class AActor*>& AddActor, const TArray<class AActor*>& RemoveActor, const TArray<int32>& RemoveActorIds, int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "仇恨外受击");

	Params::AIC_AICommon_C_仇恨外受击 Parms{};

	Parms.AddActor = std::move(AddActor);
	Parms.RemoveActor = std::move(RemoveActor);
	Parms.RemoveActorIds = std::move(RemoveActorIds);
	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_AICommon.AIC_AICommon_C.感知监听
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   AddActor                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class AActor*>                   RemoveActor                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                           RemoveActorIds                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_AICommon_C::感知监听(const TArray<class AActor*>& AddActor, const TArray<class AActor*>& RemoveActor, const TArray<int32>& RemoveActorIds, int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "感知监听");

	Params::AIC_AICommon_C_感知监听 Parms{};

	Parms.AddActor = std::move(AddActor);
	Parms.RemoveActor = std::move(RemoveActor);
	Parms.RemoveActorIds = std::move(RemoveActorIds);
	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_AICommon.AIC_AICommon_C.仇恨监听
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   AddActor                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class AActor*>                   RemoveActor                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                           RemoveActorIds                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_AICommon_C::仇恨监听(const TArray<class AActor*>& AddActor, const TArray<class AActor*>& RemoveActor, const TArray<int32>& RemoveActorIds, int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "仇恨监听");

	Params::AIC_AICommon_C_仇恨监听 Parms{};

	Parms.AddActor = std::move(AddActor);
	Parms.RemoveActor = std::move(RemoveActor);
	Parms.RemoveActorIds = std::move(RemoveActorIds);
	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_AICommon.AIC_AICommon_C.通用战斗AI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bContent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAIC_AICommon_C::通用战斗AI(bool bContent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "通用战斗AI");

	Params::AIC_AICommon_C_通用战斗AI Parms{};

	Parms.bContent = bContent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_AICommon.AIC_AICommon_C.默认感知保底事件
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bContent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAIC_AICommon_C::默认感知保底事件(bool bContent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "默认感知保底事件");

	Params::AIC_AICommon_C_默认感知保底事件 Parms{};

	Parms.bContent = bContent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_AICommon.AIC_AICommon_C.通用行为树条件
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bContent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAIC_AICommon_C::通用行为树条件(bool bContent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "通用行为树条件");

	Params::AIC_AICommon_C_通用行为树条件 Parms{};

	Parms.bContent = bContent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_AICommon.AIC_AICommon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_AICommon_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "ReceiveTick");

	Params::AIC_AICommon_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_AICommon.AIC_AICommon_C.状态切换函数
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          角色                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECharacterState                         老状态                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECharacterState                         新状态                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    主控                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          角色返回                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECharacterState                         老状态返回                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECharacterState                         新状态返回                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    主控返回                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAIC_AICommon_C::状态切换函数(class UObject* 角色, ECharacterState 老状态, ECharacterState 新状态, bool 主控, class UObject** 角色返回, ECharacterState* 老状态返回, ECharacterState* 新状态返回, bool* 主控返回)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "状态切换函数");

	Params::AIC_AICommon_C_状态切换函数 Parms{};

	Parms.角色 = 角色;
	Parms.老状态 = 老状态;
	Parms.新状态 = 新状态;
	Parms.主控 = 主控;

	UObject::ProcessEvent(Func, &Parms);

	if (角色返回 != nullptr)
		*角色返回 = Parms.角色返回;

	if (老状态返回 != nullptr)
		*老状态返回 = Parms.老状态返回;

	if (新状态返回 != nullptr)
		*新状态返回 = Parms.新状态返回;

	if (主控返回 != nullptr)
		*主控返回 = Parms.主控返回;
}


// Function AIC_AICommon.AIC_AICommon_C.感知到仇恨目标
// (Public, BlueprintCallable, BlueprintEvent)

void AAIC_AICommon_C::感知到仇恨目标()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "感知到仇恨目标");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_AICommon.AIC_AICommon_C.设置区域监听对象
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAIC_AICommon_C::设置区域监听对象()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "设置区域监听对象");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_AICommon.AIC_AICommon_C.区域
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void()>                       换人监听                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AAIC_AICommon_C::区域(const TDelegate<void()>& 换人监听)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "区域");

	Params::AIC_AICommon_C_区域 Parms{};

	Parms.换人监听 = 换人监听;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_AICommon.AIC_AICommon_C.区域监听事件函数
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           区域名称                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TDelegate<void(bool IsInRegion, class AActor* Target)>事件                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AAIC_AICommon_C::区域监听事件函数(const class FString& 区域名称, const TDelegate<void(bool IsInRegion, class AActor* Target)>& 事件)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "区域监听事件函数");

	Params::AIC_AICommon_C_区域监听事件函数 Parms{};

	Parms.区域名称 = std::move(区域名称);
	Parms.事件 = 事件;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_AICommon.AIC_AICommon_C.角色怪射线检测
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    可以钩锁                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAIC_AICommon_C::角色怪射线检测(bool* 可以钩锁)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "角色怪射线检测");

	Params::AIC_AICommon_C_角色怪射线检测 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (可以钩锁 != nullptr)
		*可以钩锁 = Parms.可以钩锁;
}


// Function AIC_AICommon.AIC_AICommon_C.通用关卡变量切换监听
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAiLevelVarSource                       关卡变量监听类型                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           关卡变量名称                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   关卡副本行为树id                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(bool bContent)>          事件                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AAIC_AICommon_C::通用关卡变量切换监听(EAiLevelVarSource 关卡变量监听类型, const class FString& 关卡变量名称, int32 关卡副本行为树id, const TDelegate<void(bool bContent)>& 事件)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "通用关卡变量切换监听");

	Params::AIC_AICommon_C_通用关卡变量切换监听 Parms{};

	Parms.关卡变量监听类型 = 关卡变量监听类型;
	Parms.关卡变量名称 = std::move(关卡变量名称);
	Parms.关卡副本行为树id = 关卡副本行为树id;
	Parms.事件 = 事件;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_AICommon.AIC_AICommon_C.OnStart
// (Public, BlueprintCallable, BlueprintEvent)

void AAIC_AICommon_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "OnStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIC_AICommon.AIC_AICommon_C.状态切换时
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterState                         oldState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECharacterState                         newState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    isAutonomousProxy                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAIC_AICommon_C::状态切换时(ECharacterState oldState, ECharacterState newState, bool isAutonomousProxy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "状态切换时");

	Params::AIC_AICommon_C_状态切换时 Parms{};

	Parms.oldState = oldState;
	Parms.newState = newState;
	Parms.isAutonomousProxy = isAutonomousProxy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIC_AICommon.AIC_AICommon_C.获取控制权时
// (Public, BlueprintCallable, BlueprintEvent)

void AAIC_AICommon_C::获取控制权时()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIC_AICommon_C", "获取控制权时");

	UObject::ProcessEvent(Func, nullptr);
}

}

