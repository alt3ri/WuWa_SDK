#pragma once
// Package: BPL_BulletPreview

#include "Basic.hpp"

#include "BPL_BulletPreview_classes.hpp"
#include "BPL_BulletPreview_parameters.hpp"


namespace SDK
{

// Function BPL_BulletPreview.BPL_BulletPreview_C.ShowBulletPreview
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           子弹表路径                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FName                             子弹ID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           拥有者                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           meshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_BulletPreview_C::ShowBulletPreview(const class FString& 子弹表路径, class FName 子弹ID, class AActor* 拥有者, class USkeletalMeshComponent* meshComp, class UObject* __WorldContext, class AActor** Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_BulletPreview_C", "ShowBulletPreview");

	Params::BPL_BulletPreview_C_ShowBulletPreview Parms{};

	Parms.子弹表路径 = std::move(子弹表路径);
	Parms.子弹ID = 子弹ID;
	Parms.拥有者 = 拥有者;
	Parms.meshComp = meshComp;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}

}

