#pragma once
// Package: BP_KuroSkeletalMeshDestructibleActor

#include "Basic.hpp"

#include "BP_KuroSkeletalMeshDestructibleActor_classes.hpp"
#include "BP_KuroSkeletalMeshDestructibleActor_parameters.hpp"


namespace SDK
{

// Function BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C.ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KuroSkeletalMeshDestructibleActor_C::ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroSkeletalMeshDestructibleActor_C", "ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor");

	Params::BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C.PlayDestruction
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                          HurtDirection                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HurtOrigin_0                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Impulse_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsZeroImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_KuroSkeletalMeshDestructibleActor_C::PlayDestruction(const struct FVector& HurtDirection, const struct FVector& HurtOrigin_0, float Impulse_0, bool IsZeroImpulse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroSkeletalMeshDestructibleActor_C", "PlayDestruction");

	Params::BP_KuroSkeletalMeshDestructibleActor_C_PlayDestruction Parms{};

	Parms.HurtDirection = std::move(HurtDirection);
	Parms.HurtOrigin_0 = std::move(HurtOrigin_0);
	Parms.Impulse_0 = Impulse_0;
	Parms.IsZeroImpulse = IsZeroImpulse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_KuroSkeletalMeshDestructibleActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroSkeletalMeshDestructibleActor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C.OnDestructibleInit
// (BlueprintCallable, BlueprintEvent)

void ABP_KuroSkeletalMeshDestructibleActor_C::OnDestructibleInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroSkeletalMeshDestructibleActor_C", "OnDestructibleInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_KuroSkeletalMeshDestructibleActor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroSkeletalMeshDestructibleActor_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C.SetStaticMeshChunkListVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    visiblity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_KuroSkeletalMeshDestructibleActor_C::SetStaticMeshChunkListVisiblity(bool visiblity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroSkeletalMeshDestructibleActor_C", "SetStaticMeshChunkListVisiblity");

	Params::BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity Parms{};

	Parms.visiblity = visiblity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C.SetStaticMeshChunkListPhysicsSimulation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    enablePhysicsSimulation                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_KuroSkeletalMeshDestructibleActor_C::SetStaticMeshChunkListPhysicsSimulation(bool enablePhysicsSimulation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroSkeletalMeshDestructibleActor_C", "SetStaticMeshChunkListPhysicsSimulation");

	Params::BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation Parms{};

	Parms.enablePhysicsSimulation = enablePhysicsSimulation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C.UpdateProxyMesh
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KuroSkeletalMeshDestructibleActor_C::UpdateProxyMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroSkeletalMeshDestructibleActor_C", "UpdateProxyMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C.PreviewFullDestructible
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KuroSkeletalMeshDestructibleActor_C::PreviewFullDestructible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroSkeletalMeshDestructibleActor_C", "PreviewFullDestructible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C.ShowStaticMeshList
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KuroSkeletalMeshDestructibleActor_C::ShowStaticMeshList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroSkeletalMeshDestructibleActor_C", "ShowStaticMeshList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C.HideStaticMeshList
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KuroSkeletalMeshDestructibleActor_C::HideStaticMeshList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroSkeletalMeshDestructibleActor_C", "HideStaticMeshList");

	UObject::ProcessEvent(Func, nullptr);
}

}

