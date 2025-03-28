#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GlobalGI_LaunchScene

#include "Basic.hpp"

#include "BP_GlobalGI_LaunchScene_classes.hpp"
#include "BP_GlobalGI_LaunchScene_parameters.hpp"


namespace SDK
{

// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.ExecuteUbergraph_BP_GlobalGI_LaunchScene
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalGI_LaunchScene_C::ExecuteUbergraph_BP_GlobalGI_LaunchScene(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "ExecuteUbergraph_BP_GlobalGI_LaunchScene");

	Params::BP_GlobalGI_LaunchScene_C_ExecuteUbergraph_BP_GlobalGI_LaunchScene Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.OnKuroEndUiScene
// (Event, Public, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::OnKuroEndUiScene()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "OnKuroEndUiScene");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.OnKuroStartUiScene
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                           InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class ULevel*                           InUILevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalGI_LaunchScene_C::OnKuroStartUiScene(const class FString& InName, class ULevel* InUILevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "OnKuroStartUiScene");

	Params::BP_GlobalGI_LaunchScene_C_OnKuroStartUiScene Parms{};

	Parms.InName = std::move(InName);
	Parms.InUILevel = InUILevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.OnKuroSetRuntimeTime
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   CurrentTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalGI_LaunchScene_C::OnKuroSetRuntimeTime(float CurrentTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "OnKuroSetRuntimeTime");

	Params::BP_GlobalGI_LaunchScene_C_OnKuroSetRuntimeTime Parms{};

	Parms.CurrentTime = CurrentTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.OnKuroTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   Param_DeltaTime                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalGI_LaunchScene_C::OnKuroTick(float Param_DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "OnKuroTick");

	Params::BP_GlobalGI_LaunchScene_C_OnKuroTick Parms{};

	Parms.Param_DeltaTime = Param_DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.OnKuroTickEditor
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   Param_DeltaTime                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalGI_LaunchScene_C::OnKuroTickEditor(float Param_DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "OnKuroTickEditor");

	Params::BP_GlobalGI_LaunchScene_C_OnKuroTickEditor Parms{};

	Parms.Param_DeltaTime = Param_DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.UpdateGIData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SkipLerpData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GlobalGI_LaunchScene_C::UpdateGIData(bool SkipLerpData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "UpdateGIData");

	Params::BP_GlobalGI_LaunchScene_C_UpdateGIData Parms{};

	Parms.SkipLerpData = SkipLerpData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.Update Fog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::Update_Fog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "Update Fog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.Update Env
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::Update_Env()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "Update Env");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.Is Day
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GlobalGI_LaunchScene_C::Is_Day(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "Is Day");

	Params::BP_GlobalGI_LaunchScene_C_Is_Day Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.InitMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::InitMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "InitMaterials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.Get Light Direction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          SunLight                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NightLight                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalGI_LaunchScene_C::Get_Light_Direction(struct FVector* SunLight, struct FVector* NightLight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "Get Light Direction");

	Params::BP_GlobalGI_LaunchScene_C_Get_Light_Direction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SunLight != nullptr)
		*SunLight = std::move(Parms.SunLight);

	if (NightLight != nullptr)
		*NightLight = std::move(Parms.NightLight);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.Get Light Rotator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         SunLight                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                         NightLight                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GlobalGI_LaunchScene_C::Get_Light_Rotator(struct FRotator* SunLight, struct FRotator* NightLight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "Get Light Rotator");

	Params::BP_GlobalGI_LaunchScene_C_Get_Light_Rotator Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SunLight != nullptr)
		*SunLight = std::move(Parms.SunLight);

	if (NightLight != nullptr)
		*NightLight = std::move(Parms.NightLight);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.InitGICompoemnt
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::InitGICompoemnt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "InitGICompoemnt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.Get Scene Light Direction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          LightDir                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalGI_LaunchScene_C::Get_Scene_Light_Direction(struct FVector* LightDir)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "Get Scene Light Direction");

	Params::BP_GlobalGI_LaunchScene_C_Get_Scene_Light_Direction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LightDir != nullptr)
		*LightDir = std::move(Parms.LightDir);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.Get Scene Light Rotator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         SunLight                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                         NightLight                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GlobalGI_LaunchScene_C::Get_Scene_Light_Rotator(struct FRotator* SunLight, struct FRotator* NightLight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "Get Scene Light Rotator");

	Params::BP_GlobalGI_LaunchScene_C_Get_Scene_Light_Rotator Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SunLight != nullptr)
		*SunLight = std::move(Parms.SunLight);

	if (NightLight != nullptr)
		*NightLight = std::move(Parms.NightLight);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.CalculateLightDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Vertical                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Horizontal                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GlobalGI_LaunchScene_C::CalculateLightDirection(float Vertical, float Horizontal, float Time, struct FRotator* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "CalculateLightDirection");

	Params::BP_GlobalGI_LaunchScene_C_CalculateLightDirection Parms{};

	Parms.Vertical = Vertical;
	Parms.Horizontal = Horizontal;
	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.CalulateLightDirectionWithLimit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   V                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   H                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GlobalGI_LaunchScene_C::CalulateLightDirectionWithLimit(float V, float H, float Time, struct FRotator* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "CalulateLightDirectionWithLimit");

	Params::BP_GlobalGI_LaunchScene_C_CalulateLightDirectionWithLimit Parms{};

	Parms.V = V;
	Parms.H = H;
	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.InitFeature
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::InitFeature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "InitFeature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.GetViewLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          WorldPosition                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Suc                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GlobalGI_LaunchScene_C::GetViewLocation(struct FVector* WorldPosition, bool* Suc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "GetViewLocation");

	Params::BP_GlobalGI_LaunchScene_C_GetViewLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (WorldPosition != nullptr)
		*WorldPosition = std::move(Parms.WorldPosition);

	if (Suc != nullptr)
		*Suc = Parms.Suc;
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.UpdateTime
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::UpdateTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "UpdateTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.UpdateMainLight
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::UpdateMainLight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "UpdateMainLight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.Update Main Light Direction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::Update_Main_Light_Direction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "Update Main Light Direction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.GetLightDirectionFromVH
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Vertical                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Horizontal                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GlobalGI_LaunchScene_C::GetLightDirectionFromVH(float Vertical, float Horizontal, struct FRotator* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "GetLightDirectionFromVH");

	Params::BP_GlobalGI_LaunchScene_C_GetLightDirectionFromVH Parms{};

	Parms.Vertical = Vertical;
	Parms.Horizontal = Horizontal;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.SetUIComponentsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GlobalGI_LaunchScene_C::SetUIComponentsVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "SetUIComponentsVisibility");

	Params::BP_GlobalGI_LaunchScene_C_SetUIComponentsVisibility Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.Set All Components States
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GlobalGI_LaunchScene_C::Set_All_Components_States(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "Set All Components States");

	Params::BP_GlobalGI_LaunchScene_C_Set_All_Components_States Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.InitGI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::InitGI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "InitGI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.UpdateSkyDome
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::UpdateSkyDome()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "UpdateSkyDome");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.Get Total TOD Time Elapsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Time                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalGI_LaunchScene_C::Get_Total_TOD_Time_Elapsed(float* Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "Get Total TOD Time Elapsed");

	Params::BP_GlobalGI_LaunchScene_C_Get_Total_TOD_Time_Elapsed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.GetSkyDomeActor
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_GlobalGI_LaunchScene_C::GetSkyDomeActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "GetSkyDomeActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.h
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::_h()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "h");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.-H
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::MinusH()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "-H");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.�
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::___0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "�");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.�0Z
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::__0_Z()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "�0Z");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.Z0h
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::_Z0_h()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "Z0h");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.Z
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::_Z()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "Z");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.UpdateDayNightDataLayer
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::UpdateDayNightDataLayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "UpdateDayNightDataLayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.��
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::__()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "��");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.
H
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::_H_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "
H");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.H
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::_H()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "H");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.3�
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::Three_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "3�");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.GetTrulyTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   CurTime                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalGI_LaunchScene_C::GetTrulyTime(float* CurTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "GetTrulyTime");

	Params::BP_GlobalGI_LaunchScene_C_GetTrulyTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurTime != nullptr)
		*CurTime = Parms.CurTime;
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.UpdateMisc
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::UpdateMisc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "UpdateMisc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.GetSkyboxDMI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         DMIRet                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalGI_LaunchScene_C::GetSkyboxDMI(class UMaterialInstanceDynamic** DMIRet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "GetSkyboxDMI");

	Params::BP_GlobalGI_LaunchScene_C_GetSkyboxDMI Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DMIRet != nullptr)
		*DMIRet = Parms.DMIRet;
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.EulerToForward
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Pitch                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Yaw                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_GlobalGI_LaunchScene_C::EulerToForward(float Pitch, float Yaw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "EulerToForward");

	Params::BP_GlobalGI_LaunchScene_C_EulerToForward Parms{};

	Parms.Pitch = Pitch;
	Parms.Yaw = Yaw;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.Clamp Luminance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Min                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor ABP_GlobalGI_LaunchScene_C::Clamp_Luminance(const struct FLinearColor& InColor, float Min, float Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "Clamp Luminance");

	Params::BP_GlobalGI_LaunchScene_C_Clamp_Luminance Parms{};

	Parms.InColor = std::move(InColor);
	Parms.Min = Min;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.GetTODCharacterLighting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     MainLight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MainLightIntensity                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Param_SkyLight                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SkyLightIntensity                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     FrontSideLight                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     BackSideLight                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalGI_LaunchScene_C::GetTODCharacterLighting(const struct FLinearColor& MainLight, float MainLightIntensity, const struct FLinearColor& Param_SkyLight, float SkyLightIntensity, struct FLinearColor* FrontSideLight, struct FLinearColor* BackSideLight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "GetTODCharacterLighting");

	Params::BP_GlobalGI_LaunchScene_C_GetTODCharacterLighting Parms{};

	Parms.MainLight = std::move(MainLight);
	Parms.MainLightIntensity = MainLightIntensity;
	Parms.Param_SkyLight = std::move(Param_SkyLight);
	Parms.SkyLightIntensity = SkyLightIntensity;

	UObject::ProcessEvent(Func, &Parms);

	if (FrontSideLight != nullptr)
		*FrontSideLight = std::move(Parms.FrontSideLight);

	if (BackSideLight != nullptr)
		*BackSideLight = std::move(Parms.BackSideLight);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.UpdateCloudCard
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKuroCloudCardSetting            CloudCardSetting                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_GlobalGI_LaunchScene_C::UpdateCloudCard(struct FKuroCloudCardSetting& CloudCardSetting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "UpdateCloudCard");

	Params::BP_GlobalGI_LaunchScene_C_UpdateCloudCard Parms{};

	Parms.CloudCardSetting = std::move(CloudCardSetting);

	UObject::ProcessEvent(Func, &Parms);

	CloudCardSetting = std::move(Parms.CloudCardSetting);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.UpdateEditor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::UpdateEditor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "UpdateEditor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.On Global GITick
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::On_Global_GITick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "On Global GITick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.Update Big World
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::Update_Big_World()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "Update Big World");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalGI_LaunchScene.BP_GlobalGI_LaunchScene_C.Update Dynamic Clouds
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalGI_LaunchScene_C::Update_Dynamic_Clouds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalGI_LaunchScene_C", "Update Dynamic Clouds");

	UObject::ProcessEvent(Func, nullptr);
}

}

