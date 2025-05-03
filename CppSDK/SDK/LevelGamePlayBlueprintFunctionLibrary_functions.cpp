#pragma once
// Package: LevelGamePlayBlueprintFunctionLibrary

#include "Basic.hpp"

#include "LevelGamePlayBlueprintFunctionLibrary_classes.hpp"
#include "LevelGamePlayBlueprintFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function LevelGamePlayBlueprintFunctionLibrary.LevelGamePlayBlueprintFunctionLibrary_C.ClearAllScanEffects
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelGamePlayBlueprintFunctionLibrary_C::ClearAllScanEffects(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelGamePlayBlueprintFunctionLibrary_C", "ClearAllScanEffects");

	Params::LevelGamePlayBlueprintFunctionLibrary_C_ClearAllScanEffects Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelGamePlayBlueprintFunctionLibrary.LevelGamePlayBlueprintFunctionLibrary_C.SceneInteractionBind
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FString                           seqName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash)
// class FString                           eventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelGamePlayBlueprintFunctionLibrary_C::SceneInteractionBind(class AActor* actor, const class FString& seqName, const class FString& eventName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelGamePlayBlueprintFunctionLibrary_C", "SceneInteractionBind");

	Params::LevelGamePlayBlueprintFunctionLibrary_C_SceneInteractionBind Parms{};

	Parms.actor = actor;
	Parms.seqName = std::move(seqName);
	Parms.eventName = std::move(eventName);
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LevelGamePlayBlueprintFunctionLibrary.LevelGamePlayBlueprintFunctionLibrary_C.GetScanMaxDistance
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ULevelGamePlayBlueprintFunctionLibrary_C::GetScanMaxDistance(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelGamePlayBlueprintFunctionLibrary_C", "GetScanMaxDistance");

	Params::LevelGamePlayBlueprintFunctionLibrary_C_GetScanMaxDistance Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LevelGamePlayBlueprintFunctionLibrary.LevelGamePlayBlueprintFunctionLibrary_C.GetScanInteractionEffectMaxDistance
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ULevelGamePlayBlueprintFunctionLibrary_C::GetScanInteractionEffectMaxDistance(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelGamePlayBlueprintFunctionLibrary_C", "GetScanInteractionEffectMaxDistance");

	Params::LevelGamePlayBlueprintFunctionLibrary_C_GetScanInteractionEffectMaxDistance Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LevelGamePlayBlueprintFunctionLibrary.LevelGamePlayBlueprintFunctionLibrary_C.ApplyScanEffect
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           inActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULevelGamePlayBlueprintFunctionLibrary_C::ApplyScanEffect(class AActor* inActor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LevelGamePlayBlueprintFunctionLibrary_C", "ApplyScanEffect");

	Params::LevelGamePlayBlueprintFunctionLibrary_C_ApplyScanEffect Parms{};

	Parms.inActor = inActor;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

