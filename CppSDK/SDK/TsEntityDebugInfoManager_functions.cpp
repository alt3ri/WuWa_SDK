#pragma once
// Package: TsEntityDebugInfoManager

#include "Basic.hpp"

#include "TsEntityDebugInfoManager_classes.hpp"
#include "TsEntityDebugInfoManager_parameters.hpp"


namespace SDK
{

// Function TsEntityDebugInfoManager.TsEntityDebugInfoManager_C.GetInteractionDebugInfos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   entityId1                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UTsEntityDebugInfoManager_C::GetInteractionDebugInfos(int32 entityId1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsEntityDebugInfoManager_C", "GetInteractionDebugInfos");

	Params::TsEntityDebugInfoManager_C_GetInteractionDebugInfos Parms{};

	Parms.entityId1 = entityId1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TsEntityDebugInfoManager.TsEntityDebugInfoManager_C.GetDebugEntityNameList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class FString> UTsEntityDebugInfoManager_C::GetDebugEntityNameList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsEntityDebugInfoManager_C", "GetDebugEntityNameList");

	Params::TsEntityDebugInfoManager_C_GetDebugEntityNameList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TsEntityDebugInfoManager.TsEntityDebugInfoManager_C.GetDebugEntityName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   entityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UTsEntityDebugInfoManager_C::GetDebugEntityName(int32 entityId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsEntityDebugInfoManager_C", "GetDebugEntityName");

	Params::TsEntityDebugInfoManager_C_GetDebugEntityName Parms{};

	Parms.entityId = entityId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TsEntityDebugInfoManager.TsEntityDebugInfoManager_C.GetEntityCommonTagDebugString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   entityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UTsEntityDebugInfoManager_C::GetEntityCommonTagDebugString(int32 entityId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsEntityDebugInfoManager_C", "GetEntityCommonTagDebugString");

	Params::TsEntityDebugInfoManager_C_GetEntityCommonTagDebugString Parms{};

	Parms.entityId = entityId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TsEntityDebugInfoManager.TsEntityDebugInfoManager_C.GetEntityPbDataId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   entityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UTsEntityDebugInfoManager_C::GetEntityPbDataId(int32 entityId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsEntityDebugInfoManager_C", "GetEntityPbDataId");

	Params::TsEntityDebugInfoManager_C_GetEntityPbDataId Parms{};

	Parms.entityId = entityId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TsEntityDebugInfoManager.TsEntityDebugInfoManager_C.GetSelectedEntityId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           label                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UTsEntityDebugInfoManager_C::GetSelectedEntityId(const class FString& label)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsEntityDebugInfoManager_C", "GetSelectedEntityId");

	Params::TsEntityDebugInfoManager_C_GetSelectedEntityId Parms{};

	Parms.label = std::move(label);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TsEntityDebugInfoManager.TsEntityDebugInfoManager_C.GetDebugBaseInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   entityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UTsEntityDebugInfoManager_C::GetDebugBaseInfo(int32 entityId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsEntityDebugInfoManager_C", "GetDebugBaseInfo");

	Params::TsEntityDebugInfoManager_C_GetDebugBaseInfo Parms{};

	Parms.entityId = entityId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TsEntityDebugInfoManager.TsEntityDebugInfoManager_C.GetDebugEntityActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   entityId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AActor* UTsEntityDebugInfoManager_C::GetDebugEntityActor(int32 entityId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsEntityDebugInfoManager_C", "GetDebugEntityActor");

	Params::TsEntityDebugInfoManager_C_GetDebugEntityActor Parms{};

	Parms.entityId = entityId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

