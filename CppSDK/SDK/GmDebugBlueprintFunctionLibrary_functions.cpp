#pragma once
// Package: GmDebugBlueprintFunctionLibrary

#include "Basic.hpp"

#include "GmDebugBlueprintFunctionLibrary_classes.hpp"
#include "GmDebugBlueprintFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsTestLifePoint
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   p11                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   p2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   p3                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   p4                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   p5                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   p6                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGmDebugBlueprintFunctionLibrary_C::TsTestLifePoint(float p11, float p2, float p3, float p4, float p5, float p6, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsTestLifePoint");

	Params::GmDebugBlueprintFunctionLibrary_C_TsTestLifePoint Parms{};

	Parms.p11 = p11;
	Parms.p2 = p2;
	Parms.p3 = p3;
	Parms.p4 = p4;
	Parms.p5 = p5;
	Parms.p6 = p6;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsGmLoadFightDt
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   entityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGmDebugBlueprintFunctionLibrary_C::TsGmLoadFightDt(int32 entityId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsGmLoadFightDt");

	Params::GmDebugBlueprintFunctionLibrary_C_TsGmLoadFightDt Parms{};

	Parms.entityId = entityId;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsSetAoeDestroyEnemyRange
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   aoeDestroyEnemyRange                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGmDebugBlueprintFunctionLibrary_C::TsSetAoeDestroyEnemyRange(float aoeDestroyEnemyRange, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsSetAoeDestroyEnemyRange");

	Params::GmDebugBlueprintFunctionLibrary_C_TsSetAoeDestroyEnemyRange Parms{};

	Parms.aoeDestroyEnemyRange = aoeDestroyEnemyRange;
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


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsSetAoeDestroyEnemyActivated
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    aoeDestroyEnemyActivated                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGmDebugBlueprintFunctionLibrary_C::TsSetAoeDestroyEnemyActivated(bool aoeDestroyEnemyActivated, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsSetAoeDestroyEnemyActivated");

	Params::GmDebugBlueprintFunctionLibrary_C_TsSetAoeDestroyEnemyActivated Parms{};

	Parms.aoeDestroyEnemyActivated = aoeDestroyEnemyActivated;
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


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsCheatInputRequest
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGmDebugBlueprintFunctionLibrary_C::TsCheatInputRequest(int32 type, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsCheatInputRequest");

	Params::GmDebugBlueprintFunctionLibrary_C_TsCheatInputRequest Parms{};

	Parms.type = type;
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


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsGmStartGameCommandService
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   port                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGmDebugBlueprintFunctionLibrary_C::TsGmStartGameCommandService(int32 port, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsGmStartGameCommandService");

	Params::GmDebugBlueprintFunctionLibrary_C_TsGmStartGameCommandService Parms{};

	Parms.port = port;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
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


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsGmShowEntityViewByPbDataId
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   pbDataId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGmDebugBlueprintFunctionLibrary_C::TsGmShowEntityViewByPbDataId(int32 pbDataId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsGmShowEntityViewByPbDataId");

	Params::GmDebugBlueprintFunctionLibrary_C_TsGmShowEntityViewByPbDataId Parms{};

	Parms.pbDataId = pbDataId;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsGmGetEntityPbDataIdByChildActor
// (Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           childActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UGmDebugBlueprintFunctionLibrary_C::TsGmGetEntityPbDataIdByChildActor(class AActor* childActor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsGmGetEntityPbDataIdByChildActor");

	Params::GmDebugBlueprintFunctionLibrary_C_TsGmGetEntityPbDataIdByChildActor Parms{};

	Parms.childActor = childActor;
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
// class AActor*                           childActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AActor* UGmDebugBlueprintFunctionLibrary_C::TsGmGetEntityActorByChildActor(class AActor* childActor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsGmGetEntityActorByChildActor");

	Params::GmDebugBlueprintFunctionLibrary_C_TsGmGetEntityActorByChildActor Parms{};

	Parms.childActor = childActor;
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
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


// Function GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C.TsRunGm
// (Native, Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           gmStr                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGmDebugBlueprintFunctionLibrary_C::TsRunGm(const class FString& gmStr, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GmDebugBlueprintFunctionLibrary_C", "TsRunGm");

	Params::GmDebugBlueprintFunctionLibrary_C_TsRunGm Parms{};

	Parms.gmStr = std::move(gmStr);
	Parms.__WorldContext = __WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

