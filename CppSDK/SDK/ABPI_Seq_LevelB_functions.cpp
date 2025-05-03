#pragma once
// Package: ABPI_Seq_LevelB

#include "Basic.hpp"

#include "ABPI_Seq_LevelB_classes.hpp"


namespace SDK
{

// Function ABPI_Seq_LevelB.ABPI_Seq_LevelB_C.OnJumpFrame
// (Public, BlueprintCallable, BlueprintEvent)

void IABPI_Seq_LevelB_C::OnJumpFrame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABPI_Seq_LevelB_C", "OnJumpFrame");

	UObject::ProcessEvent(Func, nullptr);
}

}

