#pragma once
// Package: BPI_SceneBp

#include "Basic.hpp"

#include "BPI_SceneBp_classes.hpp"
#include "BPI_SceneBp_parameters.hpp"


namespace SDK
{

// Function BPI_SceneBp.BPI_SceneBp_C.TickOutside
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_SceneBp_C::TickOutside()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SceneBp_C", "TickOutside");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_SceneBp.BPI_SceneBp_C.Start
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_SceneBp_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SceneBp_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_SceneBp.BPI_SceneBp_C.Stop
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_SceneBp_C::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SceneBp_C", "Stop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_SceneBp.BPI_SceneBp_C.Pause
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_SceneBp_C::Pause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SceneBp_C", "Pause");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_SceneBp.BPI_SceneBp_C.Resume
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_SceneBp_C::Resume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SceneBp_C", "Resume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_SceneBp.BPI_SceneBp_C.GetAoiRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                                   ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_SceneBp_C::GetAoiRange(int32* ret) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SceneBp_C", "GetAoiRange");

	Params::BPI_SceneBp_C_GetAoiRange Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ret != nullptr)
		*ret = Parms.ret;
}

}

