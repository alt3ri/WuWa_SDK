#pragma once
// Package: BP_Nvzhu

#include "Basic.hpp"

#include "BP_Nvzhu_classes.hpp"
#include "BP_Nvzhu_parameters.hpp"


namespace SDK
{

// Function BP_Nvzhu.BP_Nvzhu_C.FightCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    isInAir                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Nvzhu_C::FightCommand(bool isInAir)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Nvzhu_C", "FightCommand");

	Params::BP_Nvzhu_C_FightCommand Parms{};

	Parms.isInAir = isInAir;

	UObject::ProcessEvent(Func, &Parms);
}

}

