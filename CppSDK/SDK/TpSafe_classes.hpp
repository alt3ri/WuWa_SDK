#pragma once
// Package: TpSafe

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class TpSafe.TpSafeSetting
// 0x0008 (0x0038 - 0x0030)
class UTpSafeSetting final : public UObject
{
public:
	bool                                          Enable;                                            // 0x0030(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TpSafeSetting">();
	}
	static class UTpSafeSetting* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTpSafeSetting>();
	}
};
static_assert(alignof(UTpSafeSetting) == 0x000008, "Wrong alignment on UTpSafeSetting");
static_assert(sizeof(UTpSafeSetting) == 0x000038, "Wrong size on UTpSafeSetting");
static_assert(offsetof(UTpSafeSetting, Enable) == 0x000030, "Member 'UTpSafeSetting::Enable' has a wrong offset!");

}

