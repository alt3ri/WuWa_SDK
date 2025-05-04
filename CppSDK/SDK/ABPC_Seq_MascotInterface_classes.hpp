#pragma once
// Package: ABPC_Seq_MascotInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ABPC_Seq_MascotInterface.ABPC_Seq_MascotInterface_C
// 0x0000 (0x0030 - 0x0030)
class IABPC_Seq_MascotInterface_C final : public IInterface
{
public:
	void GetAddSpineValue(struct FRotator* AddSpine);
	void GetAddSpineHeadValue(struct FRotator* AddSpineHead);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABPC_Seq_MascotInterface_C">();
	}
	static class IABPC_Seq_MascotInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IABPC_Seq_MascotInterface_C>();
	}
};
static_assert(alignof(IABPC_Seq_MascotInterface_C) == 0x000008, "Wrong alignment on IABPC_Seq_MascotInterface_C");
static_assert(sizeof(IABPC_Seq_MascotInterface_C) == 0x000030, "Wrong size on IABPC_Seq_MascotInterface_C");

}

