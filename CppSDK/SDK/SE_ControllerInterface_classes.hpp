#pragma once
// Package: SE_ControllerInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SE_ControllerInterface.SE_ControllerInterface_C
// 0x0000 (0x0030 - 0x0030)
class ISE_ControllerInterface_C final : public IInterface
{
public:
	void Start(float time);
	void Loop(float time);
	void End(float time);
	void ApplyAlpha(float alpha);
	void ApplyVisibility(bool visibility);
	void BeforeStart();
	void ApplyEnvironmentFactor(float EnvironmentFactor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SE_ControllerInterface_C">();
	}
	static class ISE_ControllerInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ISE_ControllerInterface_C>();
	}
};
static_assert(alignof(ISE_ControllerInterface_C) == 0x000008, "Wrong alignment on ISE_ControllerInterface_C");
static_assert(sizeof(ISE_ControllerInterface_C) == 0x000030, "Wrong size on ISE_ControllerInterface_C");

}

