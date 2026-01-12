#pragma once
// Package: KuroGameplayInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class KuroGameplayInterface.BulletHitActorInterface
// 0x0000 (0x0030 - 0x0030)
class IBulletHitActorInterface final : public IInterface
{
public:
	void OnBulletHit(const int32 BulletEntityId, const struct FVectorDouble& HitPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BulletHitActorInterface">();
	}
	static class IBulletHitActorInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBulletHitActorInterface>();
	}
};
static_assert(alignof(IBulletHitActorInterface) == 0x000008, "Wrong alignment on IBulletHitActorInterface");
static_assert(sizeof(IBulletHitActorInterface) == 0x000030, "Wrong size on IBulletHitActorInterface");

// Class KuroGameplayInterface.GamePartitionInterface
// 0x0000 (0x0030 - 0x0030)
class IGamePartitionInterface final : public IInterface
{
public:
	int32 GetGamePartitionObjectID();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GamePartitionInterface">();
	}
	static class IGamePartitionInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGamePartitionInterface>();
	}
};
static_assert(alignof(IGamePartitionInterface) == 0x000008, "Wrong alignment on IGamePartitionInterface");
static_assert(sizeof(IGamePartitionInterface) == 0x000030, "Wrong size on IGamePartitionInterface");

}

