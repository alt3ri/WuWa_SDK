#pragma once
// Package: ABP_Nvzhu

#include "Basic.hpp"

#include "ABP_BaseRole_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Nvzhu.ABP_Nvzhu_C
// 0x0000 (0x21970 - 0x21970)
class UABP_Nvzhu_C final : public UABP_BaseRole_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Nvzhu_C">();
	}
	static class UABP_Nvzhu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Nvzhu_C>();
	}
};
static_assert(alignof(UABP_Nvzhu_C) == 0x000010, "Wrong alignment on UABP_Nvzhu_C");
static_assert(sizeof(UABP_Nvzhu_C) == 0x021970, "Wrong size on UABP_Nvzhu_C");

}

