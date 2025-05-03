#pragma once
// Package: BP_UiCameraAnimation

#include "Basic.hpp"

#include "BP_UiCameraAnimation_classes.hpp"


namespace SDK
{

// Function BP_UiCameraAnimation.BP_UiCameraAnimation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UiCameraAnimation_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UiCameraAnimation_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

