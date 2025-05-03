#pragma once
// Package: GmDebugBlueprintFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass GmDebugBlueprintFunctionLibrary.GmDebugBlueprintFunctionLibrary_C
// 0x0000 (0x0030 - 0x0030)
class UGmDebugBlueprintFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void TsTestLifePoint(float p11, float p2, float p3, float p4, float p5, float p6, class UObject* __WorldContext);
	static void TsGmLoadFightDt(int32 entityId, class UObject* __WorldContext);
	static void TsSetAoeDestroyEnemyRange(float aoeDestroyEnemyRange, class UObject* __WorldContext);
	static float TsGetAoeDestroyEnemyRange(class UObject* __WorldContext);
	static void TsSetAoeDestroyEnemyActivated(bool aoeDestroyEnemyActivated, class UObject* __WorldContext);
	static bool TsGetAoeDestroyEnemyActivated(class UObject* __WorldContext);
	static void TsCheatInputRequest(int32 type, class UObject* __WorldContext);
	static void TsGmStopGameCommandService(class UObject* __WorldContext);
	static void TsGmStartGameCommandService(int32 port, class UObject* __WorldContext);
	static void OpenWbpDebugWin(class UObject* __WorldContext);
	static bool TsGmGetIsGameCommandServiceRunning(class UObject* __WorldContext);
	static void TsGmShowEntityViewByPbDataId(int32 pbDataId, class UObject* __WorldContext);
	static float TsGmGetEntityPbDataIdByChildActor(class AActor* childActor, class UObject* __WorldContext);
	static class AActor* TsGmGetEntityActorByChildActor(class AActor* childActor, class UObject* __WorldContext);
	static bool TsGetGmIsOpen(class UObject* __WorldContext);
	static void TsRunGm(const class FString& gmStr, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GmDebugBlueprintFunctionLibrary_C">();
	}
	static class UGmDebugBlueprintFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGmDebugBlueprintFunctionLibrary_C>();
	}
};
static_assert(alignof(UGmDebugBlueprintFunctionLibrary_C) == 0x000008, "Wrong alignment on UGmDebugBlueprintFunctionLibrary_C");
static_assert(sizeof(UGmDebugBlueprintFunctionLibrary_C) == 0x000030, "Wrong size on UGmDebugBlueprintFunctionLibrary_C");

}

