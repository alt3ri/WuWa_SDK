#pragma once
// Package: BP_KuroSkeletalMeshDestructibleActor

#include "Basic.hpp"

#include "KuroRenderingRuntimeBPPlugin_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C
// 0x0068 (0x0348 - 0x02E0)
class ABP_KuroSkeletalMeshDestructibleActor_C final : public AKuroDestructibleActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   ProxyMesh;                                         // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPoseableMeshComponent*                 PoseableMesh;                                      // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DO_NOT_MODIFY_ME;                                  // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         DamageRadius;                                      // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OriginOffset;                                      // 0x030C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDebug;                                           // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_319[0x3];                                      // 0x0319(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Impulse;                                           // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HurtOrigin;                                        // 0x0320(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCollisionProfileName                  CollisionProfileName;                              // 0x032C(0x000C)(Edit, BlueprintVisible, NoDestructor)
	struct FCollisionProfileName                  TriggerCollisionProfileName;                       // 0x0338(0x000C)(Edit, BlueprintVisible, NoDestructor)

public:
	void ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor(int32 EntryPoint);
	void PlayDestruction(const struct FVector& HurtDirection, const struct FVector& HurtOrigin_0, float Impulse_0, bool IsZeroImpulse);
	void ReceiveBeginPlay();
	void OnDestructibleInit();
	void UserConstructionScript();
	void SetStaticMeshChunkListVisiblity(bool visiblity);
	void SetStaticMeshChunkListPhysicsSimulation(bool enablePhysicsSimulation);
	void UpdateProxyMesh();
	void PreviewFullDestructible();
	void ShowStaticMeshList();
	void HideStaticMeshList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_KuroSkeletalMeshDestructibleActor_C">();
	}
	static class ABP_KuroSkeletalMeshDestructibleActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_KuroSkeletalMeshDestructibleActor_C>();
	}
};
static_assert(alignof(ABP_KuroSkeletalMeshDestructibleActor_C) == 0x000008, "Wrong alignment on ABP_KuroSkeletalMeshDestructibleActor_C");
static_assert(sizeof(ABP_KuroSkeletalMeshDestructibleActor_C) == 0x000348, "Wrong size on ABP_KuroSkeletalMeshDestructibleActor_C");
static_assert(offsetof(ABP_KuroSkeletalMeshDestructibleActor_C, UberGraphFrame) == 0x0002E0, "Member 'ABP_KuroSkeletalMeshDestructibleActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_KuroSkeletalMeshDestructibleActor_C, ProxyMesh) == 0x0002E8, "Member 'ABP_KuroSkeletalMeshDestructibleActor_C::ProxyMesh' has a wrong offset!");
static_assert(offsetof(ABP_KuroSkeletalMeshDestructibleActor_C, Scene) == 0x0002F0, "Member 'ABP_KuroSkeletalMeshDestructibleActor_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_KuroSkeletalMeshDestructibleActor_C, PoseableMesh) == 0x0002F8, "Member 'ABP_KuroSkeletalMeshDestructibleActor_C::PoseableMesh' has a wrong offset!");
static_assert(offsetof(ABP_KuroSkeletalMeshDestructibleActor_C, DO_NOT_MODIFY_ME) == 0x000300, "Member 'ABP_KuroSkeletalMeshDestructibleActor_C::DO_NOT_MODIFY_ME' has a wrong offset!");
static_assert(offsetof(ABP_KuroSkeletalMeshDestructibleActor_C, DamageRadius) == 0x000308, "Member 'ABP_KuroSkeletalMeshDestructibleActor_C::DamageRadius' has a wrong offset!");
static_assert(offsetof(ABP_KuroSkeletalMeshDestructibleActor_C, OriginOffset) == 0x00030C, "Member 'ABP_KuroSkeletalMeshDestructibleActor_C::OriginOffset' has a wrong offset!");
static_assert(offsetof(ABP_KuroSkeletalMeshDestructibleActor_C, IsDebug) == 0x000318, "Member 'ABP_KuroSkeletalMeshDestructibleActor_C::IsDebug' has a wrong offset!");
static_assert(offsetof(ABP_KuroSkeletalMeshDestructibleActor_C, Impulse) == 0x00031C, "Member 'ABP_KuroSkeletalMeshDestructibleActor_C::Impulse' has a wrong offset!");
static_assert(offsetof(ABP_KuroSkeletalMeshDestructibleActor_C, HurtOrigin) == 0x000320, "Member 'ABP_KuroSkeletalMeshDestructibleActor_C::HurtOrigin' has a wrong offset!");
static_assert(offsetof(ABP_KuroSkeletalMeshDestructibleActor_C, CollisionProfileName) == 0x00032C, "Member 'ABP_KuroSkeletalMeshDestructibleActor_C::CollisionProfileName' has a wrong offset!");
static_assert(offsetof(ABP_KuroSkeletalMeshDestructibleActor_C, TriggerCollisionProfileName) == 0x000338, "Member 'ABP_KuroSkeletalMeshDestructibleActor_C::TriggerCollisionProfileName' has a wrong offset!");

}

