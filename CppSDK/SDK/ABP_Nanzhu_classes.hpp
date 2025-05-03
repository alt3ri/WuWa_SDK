#pragma once
// Package: ABP_Nanzhu

#include "Basic.hpp"

#include "ABP_BaseRole_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Nanzhu.ABP_Nanzhu_C
// 0x0000 (0x21970 - 0x21970)
class UABP_Nanzhu_C final : public UABP_BaseRole_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Nanzhu_C">();
	}
	static class UABP_Nanzhu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Nanzhu_C>();
	}
};
static_assert(alignof(UABP_Nanzhu_C) == 0x000010, "Wrong alignment on UABP_Nanzhu_C");
static_assert(sizeof(UABP_Nanzhu_C) == 0x021970, "Wrong size on UABP_Nanzhu_C");

}

