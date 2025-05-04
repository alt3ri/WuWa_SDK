#pragma once
// Package: ABPC_Seq_MascotInterface

#include "Basic.hpp"

#include "ABPC_Seq_MascotInterface_classes.hpp"
#include "ABPC_Seq_MascotInterface_parameters.hpp"


namespace SDK
{

// Function ABPC_Seq_MascotInterface.ABPC_Seq_MascotInterface_C.GetAddSpineValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         AddSpine                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IABPC_Seq_MascotInterface_C::GetAddSpineValue(struct FRotator* AddSpine)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABPC_Seq_MascotInterface_C", "GetAddSpineValue");

	Params::ABPC_Seq_MascotInterface_C_GetAddSpineValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AddSpine != nullptr)
		*AddSpine = std::move(Parms.AddSpine);
}


// Function ABPC_Seq_MascotInterface.ABPC_Seq_MascotInterface_C.GetAddSpineHeadValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         AddSpineHead                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IABPC_Seq_MascotInterface_C::GetAddSpineHeadValue(struct FRotator* AddSpineHead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABPC_Seq_MascotInterface_C", "GetAddSpineHeadValue");

	Params::ABPC_Seq_MascotInterface_C_GetAddSpineHeadValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AddSpineHead != nullptr)
		*AddSpineHead = std::move(Parms.AddSpineHead);
}

}

