#pragma once
// Package: BPI_Animation

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_Animation.BPI_Animation_C
// 0x0000 (0x0030 - 0x0030)
class IBPI_Animation_C final : public IInterface
{
public:
	void InterfaceJumpPressed(float* Speed);
	void ClimbDash();
	void InterfaceSimulateJump(float Speed);
	void InterfaceFixHookDirect(const struct FVector& Offset);
	void InterfaceManipulateInteractDirection(float 角度);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_Animation_C">();
	}
	static class IBPI_Animation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_Animation_C>();
	}
};
static_assert(alignof(IBPI_Animation_C) == 0x000008, "Wrong alignment on IBPI_Animation_C");
static_assert(sizeof(IBPI_Animation_C) == 0x000030, "Wrong size on IBPI_Animation_C");

}

