#pragma once
// Package: BP_KuroCheatManager

#include "Basic.hpp"

#include "BP_KuroCheatManager_classes.hpp"
#include "BP_KuroCheatManager_parameters.hpp"


namespace SDK
{

// Function BP_KuroCheatManager.BP_KuroCheatManager_C.强化或还原角色
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    是否需要强化                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_KuroCheatManager_C::强化或还原角色(bool 是否需要强化)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroCheatManager_C", "强化或还原角色");

	Params::BP_KuroCheatManager_C_强化或还原角色 Parms{};

	Parms.是否需要强化 = 是否需要强化;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroCheatManager.BP_KuroCheatManager_C.TouchDebug
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_KuroCheatManager_C::TouchDebug()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroCheatManager_C", "TouchDebug");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KuroCheatManager.BP_KuroCheatManager_C.PrintTimeScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_KuroCheatManager_C::PrintTimeScale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroCheatManager_C", "PrintTimeScale");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KuroCheatManager.BP_KuroCheatManager_C.UpdateFunctionKey
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_KuroCheatManager_C::UpdateFunctionKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroCheatManager_C", "UpdateFunctionKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KuroCheatManager.BP_KuroCheatManager_C.作弊指令
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             输入按键_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    按下_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_KuroCheatManager_C::作弊指令(const struct FKey& 输入按键_0, bool 按下_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroCheatManager_C", "作弊指令");

	Params::BP_KuroCheatManager_C_作弊指令 Parms{};

	Parms.输入按键_0 = std::move(输入按键_0);
	Parms.按下_0 = 按下_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KuroCheatManager.BP_KuroCheatManager_C.ReceiveInitCheatManager
// (Event, Public, BlueprintEvent)

void UBP_KuroCheatManager_C::ReceiveInitCheatManager()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroCheatManager_C", "ReceiveInitCheatManager");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KuroCheatManager.BP_KuroCheatManager_C.ExecuteUbergraph_BP_KuroCheatManager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_KuroCheatManager_C::ExecuteUbergraph_BP_KuroCheatManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KuroCheatManager_C", "ExecuteUbergraph_BP_KuroCheatManager");

	Params::BP_KuroCheatManager_C_ExecuteUbergraph_BP_KuroCheatManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

