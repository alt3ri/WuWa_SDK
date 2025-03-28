#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GmDebugBlueprintFunctionLibrary

#include "Basic.hpp"

#include "GmDebugBlueprintFunctionLibrary_classes.hpp"
#include "GmDebugBlueprintFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsRunGm
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GmStr                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGmDebugBlueprintFunctionLibrary_C::TsRunGm(const class FString& GmStr, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsRunGm");

	Params::GmDebugBlueprintFunctionLibrary_C_TsRunGm Parms{};

	Parms.GmStr = std::move(GmStr);
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsGetGmIsOpen
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGmDebugBlueprintFunctionLibrary_C::TsGetGmIsOpen(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsGetGmIsOpen");

	Params::GmDebugBlueprintFunctionLibrary_C_TsGetGmIsOpen Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsGmGetEntityActorByChildActor
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ChildActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AActor* UGmDebugBlueprintFunctionLibrary_C::TsGmGetEntityActorByChildActor(class AActor* ChildActor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsGmGetEntityActorByChildActor");

	Params::GmDebugBlueprintFunctionLibrary_C_TsGmGetEntityActorByChildActor Parms{};

	Parms.ChildActor = ChildActor;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsGmGetEntityPbDataIdByChildActor
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ChildActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UGmDebugBlueprintFunctionLibrary_C::TsGmGetEntityPbDataIdByChildActor(class AActor* ChildActor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsGmGetEntityPbDataIdByChildActor");

	Params::GmDebugBlueprintFunctionLibrary_C_TsGmGetEntityPbDataIdByChildActor Parms{};

	Parms.ChildActor = ChildActor;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsGmShowEntityViewByPbDataId
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PbDataId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGmDebugBlueprintFunctionLibrary_C::TsGmShowEntityViewByPbDataId(int32 PbDataId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsGmShowEntityViewByPbDataId");

	Params::GmDebugBlueprintFunctionLibrary_C_TsGmShowEntityViewByPbDataId Parms{};

	Parms.PbDataId = PbDataId;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsGmGetIsGameCommandServiceRunning
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGmDebugBlueprintFunctionLibrary_C::TsGmGetIsGameCommandServiceRunning(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsGmGetIsGameCommandServiceRunning");

	Params::GmDebugBlueprintFunctionLibrary_C_TsGmGetIsGameCommandServiceRunning Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.OpenWbpDebugWin
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGmDebugBlueprintFunctionLibrary_C::OpenWbpDebugWin(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "OpenWbpDebugWin");

	Params::GmDebugBlueprintFunctionLibrary_C_OpenWbpDebugWin Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsGmStartGameCommandService
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Port                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGmDebugBlueprintFunctionLibrary_C::TsGmStartGameCommandService(int32 Port, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsGmStartGameCommandService");

	Params::GmDebugBlueprintFunctionLibrary_C_TsGmStartGameCommandService Parms{};

	Parms.Port = Port;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsGmStopGameCommandService
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGmDebugBlueprintFunctionLibrary_C::TsGmStopGameCommandService(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsGmStopGameCommandService");

	Params::GmDebugBlueprintFunctionLibrary_C_TsGmStopGameCommandService Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsCheatInputRequest
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGmDebugBlueprintFunctionLibrary_C::TsCheatInputRequest(int32 Type, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsCheatInputRequest");

	Params::GmDebugBlueprintFunctionLibrary_C_TsCheatInputRequest Parms{};

	Parms.Type = Type;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsGetAoeDestroyEnemyActivated
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGmDebugBlueprintFunctionLibrary_C::TsGetAoeDestroyEnemyActivated(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsGetAoeDestroyEnemyActivated");

	Params::GmDebugBlueprintFunctionLibrary_C_TsGetAoeDestroyEnemyActivated Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsSetAoeDestroyEnemyActivated
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    AoeDestroyEnemyActivated                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGmDebugBlueprintFunctionLibrary_C::TsSetAoeDestroyEnemyActivated(bool AoeDestroyEnemyActivated, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsSetAoeDestroyEnemyActivated");

	Params::GmDebugBlueprintFunctionLibrary_C_TsSetAoeDestroyEnemyActivated Parms{};

	Parms.AoeDestroyEnemyActivated = AoeDestroyEnemyActivated;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsGetAoeDestroyEnemyRange
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UGmDebugBlueprintFunctionLibrary_C::TsGetAoeDestroyEnemyRange(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsGetAoeDestroyEnemyRange");

	Params::GmDebugBlueprintFunctionLibrary_C_TsGetAoeDestroyEnemyRange Parms{};

	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsSetAoeDestroyEnemyRange
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   AoeDestroyEnemyRange                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGmDebugBlueprintFunctionLibrary_C::TsSetAoeDestroyEnemyRange(float AoeDestroyEnemyRange, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsSetAoeDestroyEnemyRange");

	Params::GmDebugBlueprintFunctionLibrary_C_TsSetAoeDestroyEnemyRange Parms{};

	Parms.AoeDestroyEnemyRange = AoeDestroyEnemyRange;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsGmLoadFightDt
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EntityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGmDebugBlueprintFunctionLibrary_C::TsGmLoadFightDt(int32 EntityId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsGmLoadFightDt");

	Params::GmDebugBlueprintFunctionLibrary_C_TsGmLoadFightDt Parms{};

	Parms.EntityId = EntityId;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsTestLifePoint
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   P11                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   P2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   P3                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   P4                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   P5                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   P6                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGmDebugBlueprintFunctionLibrary_C::TsTestLifePoint(float P11, float P2, float P3, float P4, float P5, float P6, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsTestLifePoint");

	Params::GmDebugBlueprintFunctionLibrary_C_TsTestLifePoint Parms{};

	Parms.P11 = P11;
	Parms.P2 = P2;
	Parms.P3 = P3;
	Parms.P4 = P4;
	Parms.P5 = P5;
	Parms.P6 = P6;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

