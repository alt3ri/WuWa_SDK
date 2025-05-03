#pragma once
// Package: BPI_Animation

#include "Basic.hpp"

#include "BPI_Animation_classes.hpp"
#include "BPI_Animation_parameters.hpp"


namespace SDK
{

// Function BPI_Animation.BPI_Animation_C.InterfaceJumpPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Speed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Animation_C::InterfaceJumpPressed(float* Speed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Animation_C", "InterfaceJumpPressed");

	Params::BPI_Animation_C_InterfaceJumpPressed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Speed != nullptr)
		*Speed = Parms.Speed;
}


// Function BPI_Animation.BPI_Animation_C.ClimbDash
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_Animation_C::ClimbDash()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Animation_C", "ClimbDash");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_Animation.BPI_Animation_C.InterfaceSimulateJump
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Speed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Animation_C::InterfaceSimulateJump(float Speed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Animation_C", "InterfaceSimulateJump");

	Params::BPI_Animation_C_InterfaceSimulateJump Parms{};

	Parms.Speed = Speed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_Animation.BPI_Animation_C.InterfaceFixHookDirect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Animation_C::InterfaceFixHookDirect(const struct FVector& Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Animation_C", "InterfaceFixHookDirect");

	Params::BPI_Animation_C_InterfaceFixHookDirect Parms{};

	Parms.Offset = std::move(Offset);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_Animation.BPI_Animation_C.InterfaceManipulateInteractDirection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   角度                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Animation_C::InterfaceManipulateInteractDirection(float 角度)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Animation_C", "InterfaceManipulateInteractDirection");

	Params::BPI_Animation_C_InterfaceManipulateInteractDirection Parms{};

	Parms.角度 = 角度;

	UObject::ProcessEvent(Func, &Parms);
}

}

