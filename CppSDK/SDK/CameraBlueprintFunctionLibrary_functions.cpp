#pragma once
// Package: CameraBlueprintFunctionLibrary

#include "Basic.hpp"

#include "CameraBlueprintFunctionLibrary_classes.hpp"
#include "CameraBlueprintFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.OnPossess
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::OnPossess(class APawn* pawn, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "OnPossess");

	Params::CameraBlueprintFunctionLibrary_C_OnPossess Parms{};

	Parms.pawn = pawn;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.GetCameraMode
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECustomCameraMode                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ECustomCameraMode UCameraBlueprintFunctionLibrary_C::GetCameraMode(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "GetCameraMode");

	Params::CameraBlueprintFunctionLibrary_C_GetCameraMode Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SetCameraRotation
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         rotator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SetCameraRotation(const struct FRotator& rotator, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SetCameraRotation");

	Params::CameraBlueprintFunctionLibrary_C_SetCameraRotation Parms{};

	Parms.rotator = std::move(rotator);
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.GetTargetSocketLocation
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVectorDouble                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVectorDouble UCameraBlueprintFunctionLibrary_C::GetTargetSocketLocation(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "GetTargetSocketLocation");

	Params::CameraBlueprintFunctionLibrary_C_GetTargetSocketLocation Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SetWidgetCameraBlendParams
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   blendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// EViewTargetBlendFunction                blendFunction                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   blendExp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    blendLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    isRelativeLocation                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    overrideLocation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          newLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    blendRotation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    isRelativeRotation                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    overrideRotation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                         newRotation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SetWidgetCameraBlendParams(float blendTime, EViewTargetBlendFunction blendFunction, float blendExp, bool blendLocation, bool isRelativeLocation, bool overrideLocation, const struct FVector& newLocation, bool blendRotation, bool isRelativeRotation, bool overrideRotation, const struct FRotator& newRotation, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SetWidgetCameraBlendParams");

	Params::CameraBlueprintFunctionLibrary_C_SetWidgetCameraBlendParams Parms{};

	Parms.blendTime = blendTime;
	Parms.blendFunction = blendFunction;
	Parms.blendExp = blendExp;
	Parms.blendLocation = blendLocation;
	Parms.isRelativeLocation = isRelativeLocation;
	Parms.overrideLocation = overrideLocation;
	Parms.newLocation = std::move(newLocation);
	Parms.blendRotation = blendRotation;
	Parms.isRelativeRotation = isRelativeRotation;
	Parms.overrideRotation = overrideRotation;
	Parms.newRotation = std::move(newRotation);
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.GetFightCameraLocation
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVectorDouble                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVectorDouble UCameraBlueprintFunctionLibrary_C::GetFightCameraLocation(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "GetFightCameraLocation");

	Params::CameraBlueprintFunctionLibrary_C_GetFightCameraLocation Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SetFightCameraFollow
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    follow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SetFightCameraFollow(bool follow, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SetFightCameraFollow");

	Params::CameraBlueprintFunctionLibrary_C_SetFightCameraFollow Parms{};

	Parms.follow = follow;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.ResetFightCameraPitchAndArmLength
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::ResetFightCameraPitchAndArmLength(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "ResetFightCameraPitchAndArmLength");

	Params::CameraBlueprintFunctionLibrary_C_ResetFightCameraPitchAndArmLength Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.EnterCameraExplore
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          lookAt1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          lookAt2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   prepTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   fadeDistance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   armLengthMin                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   armLengthMax                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::EnterCameraExplore(int32 id, const struct FVector& lookAt1, const struct FVector& lookAt2, float prepTime, float fadeDistance, float armLengthMin, float armLengthMax, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "EnterCameraExplore");

	Params::CameraBlueprintFunctionLibrary_C_EnterCameraExplore Parms{};

	Parms.id = id;
	Parms.lookAt1 = std::move(lookAt1);
	Parms.lookAt2 = std::move(lookAt2);
	Parms.prepTime = prepTime;
	Parms.fadeDistance = fadeDistance;
	Parms.armLengthMin = armLengthMin;
	Parms.armLengthMax = armLengthMax;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.ExitCameraExplore
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::ExitCameraExplore(int32 id, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "ExitCameraExplore");

	Params::CameraBlueprintFunctionLibrary_C_ExitCameraExplore Parms{};

	Parms.id = id;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.EnterSequenceDialogue
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::EnterSequenceDialogue(class AActor* target, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "EnterSequenceDialogue");

	Params::CameraBlueprintFunctionLibrary_C_EnterSequenceDialogue Parms{};

	Parms.target = target;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.ExitSequenceDialogue
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::ExitSequenceDialogue(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "ExitSequenceDialogue");

	Params::CameraBlueprintFunctionLibrary_C_ExitSequenceDialogue Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.EnterCameraMode
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECustomCameraMode                       cameraMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   blendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EViewTargetBlendFunction                blendFunction                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   blendExp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::EnterCameraMode(ECustomCameraMode cameraMode, float blendTime, EViewTargetBlendFunction blendFunction, float blendExp, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "EnterCameraMode");

	Params::CameraBlueprintFunctionLibrary_C_EnterCameraMode Parms{};

	Parms.cameraMode = cameraMode;
	Parms.blendTime = blendTime;
	Parms.blendFunction = blendFunction;
	Parms.blendExp = blendExp;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.ExitCameraMode
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECustomCameraMode                       cameraMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   blendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EViewTargetBlendFunction                blendFunction                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   blendExp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::ExitCameraMode(ECustomCameraMode cameraMode, float blendTime, EViewTargetBlendFunction blendFunction, float blendExp, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "ExitCameraMode");

	Params::CameraBlueprintFunctionLibrary_C_ExitCameraMode Parms{};

	Parms.cameraMode = cameraMode;
	Parms.blendTime = blendTime;
	Parms.blendFunction = blendFunction;
	Parms.blendExp = blendExp;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.ReloadCameraConfig
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::ReloadCameraConfig(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "ReloadCameraConfig");

	Params::CameraBlueprintFunctionLibrary_C_ReloadCameraConfig Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.GetFightCameraActor
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACameraActor*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ACameraActor* UCameraBlueprintFunctionLibrary_C::GetFightCameraActor(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "GetFightCameraActor");

	Params::CameraBlueprintFunctionLibrary_C_GetFightCameraActor Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.PlayCameraOrbital
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*                   levelSequence                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          startLocation1                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          endLocation1                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   blendInTime1                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   blendOutTime1                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::PlayCameraOrbital(class ULevelSequence* levelSequence, const struct FVector& startLocation1, const struct FVector& endLocation1, float blendInTime1, float blendOutTime1, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "PlayCameraOrbital");

	Params::CameraBlueprintFunctionLibrary_C_PlayCameraOrbital Parms{};

	Parms.levelSequence = levelSequence;
	Parms.startLocation1 = std::move(startLocation1);
	Parms.endLocation1 = std::move(endLocation1);
	Parms.blendInTime1 = blendInTime1;
	Parms.blendOutTime1 = blendOutTime1;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.StopCameraOrbital
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::StopCameraOrbital(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "StopCameraOrbital");

	Params::CameraBlueprintFunctionLibrary_C_StopCameraOrbital Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.IsRoleOnCameraRight
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UCameraBlueprintFunctionLibrary_C::IsRoleOnCameraRight(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "IsRoleOnCameraRight");

	Params::CameraBlueprintFunctionLibrary_C_IsRoleOnCameraRight Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SetAimAssistMode
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAimAssistMode                          mode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SetAimAssistMode(EAimAssistMode mode, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SetAimAssistMode");

	Params::CameraBlueprintFunctionLibrary_C_SetAimAssistMode Parms{};

	Parms.mode = mode;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.GetIsCameraTargetInScreen
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper)

bool UCameraBlueprintFunctionLibrary_C::GetIsCameraTargetInScreen(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "GetIsCameraTargetInScreen");

	Params::CameraBlueprintFunctionLibrary_C_GetIsCameraTargetInScreen Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.ExitSpecialGameplayCamera
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::ExitSpecialGameplayCamera(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "ExitSpecialGameplayCamera");

	Params::CameraBlueprintFunctionLibrary_C_ExitSpecialGameplayCamera Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.ApplyCameraModify
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                                   duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   blendInTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   blendOutTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   breakBlendOutTime                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSCameraModifier_Settings        cameraModifySettings                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UAnimMontage*                     montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBaseCurve                      blendInCurve                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBaseCurve                      blendOutCurve                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           cameraAttachSocket                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   entityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECameraAnsEffectiveClientType           cameraEffectiveClientType                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSCameraModifier_Condition>cameraModifierContions                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::ApplyCameraModify(const struct FGameplayTag& tag, float duration, float blendInTime, float blendOutTime, float breakBlendOutTime, const struct FSCameraModifier_Settings& cameraModifySettings, class UAnimMontage* montage, const struct FSBaseCurve& blendInCurve, const struct FSBaseCurve& blendOutCurve, const class FString& cameraAttachSocket, int32 entityId, ECameraAnsEffectiveClientType cameraEffectiveClientType, TArray<struct FSCameraModifier_Condition>& cameraModifierContions, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "ApplyCameraModify");

	Params::CameraBlueprintFunctionLibrary_C_ApplyCameraModify Parms{};

	Parms.tag = std::move(tag);
	Parms.duration = duration;
	Parms.blendInTime = blendInTime;
	Parms.blendOutTime = blendOutTime;
	Parms.breakBlendOutTime = breakBlendOutTime;
	Parms.cameraModifySettings = std::move(cameraModifySettings);
	Parms.montage = montage;
	Parms.blendInCurve = std::move(blendInCurve);
	Parms.blendOutCurve = std::move(blendOutCurve);
	Parms.cameraAttachSocket = std::move(cameraAttachSocket);
	Parms.entityId = entityId;
	Parms.cameraEffectiveClientType = cameraEffectiveClientType;
	Parms.cameraModifierContions = std::move(cameraModifierContions);
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	cameraModifierContions = std::move(Parms.cameraModifierContions);
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.GetSequenceCameraActor
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALevelSequenceActor*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ALevelSequenceActor* UCameraBlueprintFunctionLibrary_C::GetSequenceCameraActor(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "GetSequenceCameraActor");

	Params::CameraBlueprintFunctionLibrary_C_GetSequenceCameraActor Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.GetWidgetCameraActor
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACameraActor*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ACameraActor* UCameraBlueprintFunctionLibrary_C::GetWidgetCameraActor(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "GetWidgetCameraActor");

	Params::CameraBlueprintFunctionLibrary_C_GetWidgetCameraActor Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.EnterSpecialGameplayCamera
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   gameplayId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACameraActor*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ACameraActor* UCameraBlueprintFunctionLibrary_C::EnterSpecialGameplayCamera(int32 gameplayId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "EnterSpecialGameplayCamera");

	Params::CameraBlueprintFunctionLibrary_C_EnterSpecialGameplayCamera Parms{};

	Parms.gameplayId = gameplayId;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.ExitSpecialGameplayCamera2
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::ExitSpecialGameplayCamera2(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "ExitSpecialGameplayCamera2");

	Params::CameraBlueprintFunctionLibrary_C_ExitSpecialGameplayCamera2 Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.PlayCameraSequence
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESequenceCameraAnsEffectiveClientType   生效客户端                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   entityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSSequenceCamera_Settings        settings                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    resetLockOnCamera                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                         additiveRotation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           cameraAttachSocket                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           cameraDetectSocket                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FVector                          extraSphereLocation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   extraDetectSphereRadius                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    isShowExtraSphere                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    isIgnoreCharacterCollision                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    disableMovementInput                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    disableLookAtInput                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    disableMotionBlur                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UCameraBlueprintFunctionLibrary_C::PlayCameraSequence(ESequenceCameraAnsEffectiveClientType 生效客户端, int32 entityId, const struct FSSequenceCamera_Settings& settings, bool resetLockOnCamera, const struct FRotator& additiveRotation, const class FString& cameraAttachSocket, const class FString& cameraDetectSocket, const struct FVector& extraSphereLocation, float extraDetectSphereRadius, bool isShowExtraSphere, bool isIgnoreCharacterCollision, bool disableMovementInput, bool disableLookAtInput, bool disableMotionBlur, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "PlayCameraSequence");

	Params::CameraBlueprintFunctionLibrary_C_PlayCameraSequence Parms{};

	Parms.生效客户端 = 生效客户端;
	Parms.entityId = entityId;
	Parms.settings = std::move(settings);
	Parms.resetLockOnCamera = resetLockOnCamera;
	Parms.additiveRotation = std::move(additiveRotation);
	Parms.cameraAttachSocket = std::move(cameraAttachSocket);
	Parms.cameraDetectSocket = std::move(cameraDetectSocket);
	Parms.extraSphereLocation = std::move(extraSphereLocation);
	Parms.extraDetectSphereRadius = extraDetectSphereRadius;
	Parms.isShowExtraSphere = isShowExtraSphere;
	Parms.isIgnoreCharacterCollision = isIgnoreCharacterCollision;
	Parms.disableMovementInput = disableMovementInput;
	Parms.disableLookAtInput = disableLookAtInput;
	Parms.disableMotionBlur = disableMotionBlur;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.IsTargetSocketLocationValid
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UCameraBlueprintFunctionLibrary_C::IsTargetSocketLocationValid(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "IsTargetSocketLocationValid");

	Params::CameraBlueprintFunctionLibrary_C_IsTargetSocketLocationValid Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.GetFightCameraRotation
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FRotator UCameraBlueprintFunctionLibrary_C::GetFightCameraRotation(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "GetFightCameraRotation");

	Params::CameraBlueprintFunctionLibrary_C_GetFightCameraRotation Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SetAimAssistModeByKey
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// EAimAssistMode                          mode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SetAimAssistModeByKey(const class FString& key, EAimAssistMode mode, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SetAimAssistModeByKey");

	Params::CameraBlueprintFunctionLibrary_C_SetAimAssistModeByKey Parms{};

	Parms.key = std::move(key);
	Parms.mode = mode;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.ClearAimAssistModeByKey
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::ClearAimAssistModeByKey(const class FString& key, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "ClearAimAssistModeByKey");

	Params::CameraBlueprintFunctionLibrary_C_ClearAimAssistModeByKey Parms{};

	Parms.key = std::move(key);
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SetCameraDebugToolEnabled
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    inEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SetCameraDebugToolEnabled(bool inEnable, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SetCameraDebugToolEnabled");

	Params::CameraBlueprintFunctionLibrary_C_SetCameraDebugToolEnabled Parms{};

	Parms.inEnable = inEnable;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SwitchCameraDebugToolDrawCameraCollision
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SwitchCameraDebugToolDrawCameraCollision(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SwitchCameraDebugToolDrawCameraCollision");

	Params::CameraBlueprintFunctionLibrary_C_SwitchCameraDebugToolDrawCameraCollision Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SwitchCameraDebugToolDrawSpringArm
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SwitchCameraDebugToolDrawSpringArm(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SwitchCameraDebugToolDrawSpringArm");

	Params::CameraBlueprintFunctionLibrary_C_SwitchCameraDebugToolDrawSpringArm Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SwitchCameraDebugToolDrawFocusTargetLine
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SwitchCameraDebugToolDrawFocusTargetLine(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SwitchCameraDebugToolDrawFocusTargetLine");

	Params::CameraBlueprintFunctionLibrary_C_SwitchCameraDebugToolDrawFocusTargetLine Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SwitchCameraDebugToolDrawSpringArmEdgeRange
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SwitchCameraDebugToolDrawSpringArmEdgeRange(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SwitchCameraDebugToolDrawSpringArmEdgeRange");

	Params::CameraBlueprintFunctionLibrary_C_SwitchCameraDebugToolDrawSpringArmEdgeRange Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SwitchCameraDebugToolDrawLockCameraMoveLine
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SwitchCameraDebugToolDrawLockCameraMoveLine(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SwitchCameraDebugToolDrawLockCameraMoveLine");

	Params::CameraBlueprintFunctionLibrary_C_SwitchCameraDebugToolDrawLockCameraMoveLine Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SwitchCameraDebugToolDrawSettlementCamera
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SwitchCameraDebugToolDrawSettlementCamera(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SwitchCameraDebugToolDrawSettlementCamera");

	Params::CameraBlueprintFunctionLibrary_C_SwitchCameraDebugToolDrawSettlementCamera Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.GetDebugDesiredCameraProps
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class FString>      ReturnValue                                            (Parm, OutParm, ReturnParm)

TMap<class FString, class FString> UCameraBlueprintFunctionLibrary_C::GetDebugDesiredCameraProps(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "GetDebugDesiredCameraProps");

	Params::CameraBlueprintFunctionLibrary_C_GetDebugDesiredCameraProps Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.GetSubCameraModifications
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSCameraDebugTool_SubCameraModification>ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<struct FSCameraDebugTool_SubCameraModification> UCameraBlueprintFunctionLibrary_C::GetSubCameraModifications(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "GetSubCameraModifications");

	Params::CameraBlueprintFunctionLibrary_C_GetSubCameraModifications Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.GetControllerModifications
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSCameraDebugTool_ControllerModification>ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<struct FSCameraDebugTool_ControllerModification> UCameraBlueprintFunctionLibrary_C::GetControllerModifications(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "GetControllerModifications");

	Params::CameraBlueprintFunctionLibrary_C_GetControllerModifications Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.GetCamereModeInfo
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSCameraDebugTool_CameraModeInfo ReturnValue                                            (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

struct FSCameraDebugTool_CameraModeInfo UCameraBlueprintFunctionLibrary_C::GetCamereModeInfo(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "GetCamereModeInfo");

	Params::CameraBlueprintFunctionLibrary_C_GetCamereModeInfo Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.PlaySettlementCamera
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::PlaySettlementCamera(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "PlaySettlementCamera");

	Params::CameraBlueprintFunctionLibrary_C_PlaySettlementCamera Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SetSequenceCameraCollisionState
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SetSequenceCameraCollisionState(bool bEnable, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SetSequenceCameraCollisionState");

	Params::CameraBlueprintFunctionLibrary_C_SetSequenceCameraCollisionState Parms{};

	Parms.bEnable = bEnable;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SwitchCameraDebugToolDrawCameraZone
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SwitchCameraDebugToolDrawCameraZone(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SwitchCameraDebugToolDrawCameraZone");

	Params::CameraBlueprintFunctionLibrary_C_SwitchCameraDebugToolDrawCameraZone Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SetXRayState
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    isEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SetXRayState(bool isEnable, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SetXRayState");

	Params::CameraBlueprintFunctionLibrary_C_SetXRayState Parms{};

	Parms.isEnable = isEnable;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SetUiCameraDebugToolEnabled
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SetUiCameraDebugToolEnabled(bool enabled, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SetUiCameraDebugToolEnabled");

	Params::CameraBlueprintFunctionLibrary_C_SetUiCameraDebugToolEnabled Parms{};

	Parms.enabled = enabled;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SwitchUiCameraDtSync
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SwitchUiCameraDtSync(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SwitchUiCameraDtSync");

	Params::CameraBlueprintFunctionLibrary_C_SwitchUiCameraDtSync Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.GetDebugToolUiCameraProps
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class FString>      ReturnValue                                            (Parm, OutParm, ReturnParm)

TMap<class FString, class FString> UCameraBlueprintFunctionLibrary_C::GetDebugToolUiCameraProps(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "GetDebugToolUiCameraProps");

	Params::CameraBlueprintFunctionLibrary_C_GetDebugToolUiCameraProps Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SwitchUiCameraArmLengthSync
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SwitchUiCameraArmLengthSync(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SwitchUiCameraArmLengthSync");

	Params::CameraBlueprintFunctionLibrary_C_SwitchUiCameraArmLengthSync Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.OnDebugToolUiCameraArmLengthInputChanged
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           armLengthStr                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::OnDebugToolUiCameraArmLengthInputChanged(const class FString& armLengthStr, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "OnDebugToolUiCameraArmLengthInputChanged");

	Params::CameraBlueprintFunctionLibrary_C_OnDebugToolUiCameraArmLengthInputChanged Parms{};

	Parms.armLengthStr = std::move(armLengthStr);
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SetCameraGravityMode
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECameraGravityMode                      gravityMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVectorDouble                    gravityDirect                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SetCameraGravityMode(ECameraGravityMode gravityMode, const struct FVectorDouble& gravityDirect, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SetCameraGravityMode");

	Params::CameraBlueprintFunctionLibrary_C_SetCameraGravityMode Parms{};

	Parms.gravityMode = gravityMode;
	Parms.gravityDirect = std::move(gravityDirect);
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.GetCameraGravityMode
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECameraGravityMode                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ECameraGravityMode UCameraBlueprintFunctionLibrary_C::GetCameraGravityMode(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "GetCameraGravityMode");

	Params::CameraBlueprintFunctionLibrary_C_GetCameraGravityMode Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.GetCameraGravityDirect
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVectorDouble                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVectorDouble UCameraBlueprintFunctionLibrary_C::GetCameraGravityDirect(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "GetCameraGravityDirect");

	Params::CameraBlueprintFunctionLibrary_C_GetCameraGravityDirect Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.GetCameraGravityUp
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVectorDouble                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVectorDouble UCameraBlueprintFunctionLibrary_C::GetCameraGravityUp(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "GetCameraGravityUp");

	Params::CameraBlueprintFunctionLibrary_C_GetCameraGravityUp Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.GetCameraRotationInGravity
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FRotator UCameraBlueprintFunctionLibrary_C::GetCameraRotationInGravity(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "GetCameraRotationInGravity");

	Params::CameraBlueprintFunctionLibrary_C_GetCameraRotationInGravity Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.GetPlayerLocationInGravity
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVectorDouble                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVectorDouble UCameraBlueprintFunctionLibrary_C::GetPlayerLocationInGravity(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "GetPlayerLocationInGravity");

	Params::CameraBlueprintFunctionLibrary_C_GetPlayerLocationInGravity Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.GetPlayerRotatorInGravity
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FRotator UCameraBlueprintFunctionLibrary_C::GetPlayerRotatorInGravity(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "GetPlayerRotatorInGravity");

	Params::CameraBlueprintFunctionLibrary_C_GetPlayerRotatorInGravity Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraBlueprintFunctionLibrary.CameraBlueprintFunctionLibrary_C.SwitchCameraDebugRotatorEnabled
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBlueprintFunctionLibrary_C::SwitchCameraDebugRotatorEnabled(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CameraBlueprintFunctionLibrary_C", "SwitchCameraDebugRotatorEnabled");

	Params::CameraBlueprintFunctionLibrary_C_SwitchCameraDebugRotatorEnabled Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

