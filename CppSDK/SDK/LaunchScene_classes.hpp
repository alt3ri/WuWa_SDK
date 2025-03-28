#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LaunchScene

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LaunchScene.LaunchScene_C
// 0x0008 (0x02C0 - 0x02B8)
class ALaunchScene_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_LaunchScene(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LaunchScene_C">();
	}
	static class ALaunchScene_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALaunchScene_C>();
	}
};
static_assert(alignof(ALaunchScene_C) == 0x000008, "Wrong alignment on ALaunchScene_C");
static_assert(sizeof(ALaunchScene_C) == 0x0002C0, "Wrong size on ALaunchScene_C");
static_assert(offsetof(ALaunchScene_C, UberGraphFrame) == 0x0002B8, "Member 'ALaunchScene_C::UberGraphFrame' has a wrong offset!");

}

