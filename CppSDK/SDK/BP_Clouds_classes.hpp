#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Clouds

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"
#include "E_Cloud_Presents_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Clouds.BP_Clouds_C
// 0x00B0 (0x0370 - 0x02C0)
class ABP_Clouds_C final : public AKuroCloudsActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   Cloud02;                                           // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Cloud01;                                           // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	E_Cloud_Presents                              SM______9_;                                        // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E1[0x7];                                      // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPD_CloudPreset_C*                      CloudData;                                         // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Counting;                                          // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_Cloud_Presents                              ___e___;                                           // 0x02F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F2[0x6];                                      // 0x02F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UPD_CloudPrefab_C>       CloudAsset;                                        // 0x02F8(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<int32>                                 SortNumber;                                        // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPD_CloudPrefab_C*                      As_PD_Cloud_Prefab;                                // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          CachedAudioEvent2D;                                // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSkyOcean;                                        // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_349[0x7];                                      // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          SkyOceanAudio;                                     // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Override_Cloud_Rotation;                           // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_359[0x3];                                      // 0x0359(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Cloud_Speed;                                       // 0x035C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cloud_Offset;                                      // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsReversed_;                                       // 0x0364(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_365[0x3];                                      // 0x0365(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReversedZHeightBias;                               // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKuroFeatureLevel                             FeatureLevel;                                      // 0x036C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Clouds(int32 EntryPoint);
	void LoadAndSwitch(TSoftObjectPtr<class UObject> Asset, float ChangeSpeed, bool IsInEditor, bool IsAudio);
	void Switch_Clouds(E_Cloud_Presents CloudPresents, float ChangeSpeed, bool IsInEditor, bool bOverrideCloudRotation, float CloudSpeed, float CloudOffset);
	void ChangeCloud();
	void EditorTick(float DeltaSeconds);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnLoaded_63FE5E2B437AFAD504FBCAB26242EB8A(class UObject* Loaded);
	void UserConstructionScript();
	void Zero1__();
	void Zero2W__a();
	void Zero3_IK_();
	void Zero1_ULb();
	void Zero2______();
	void Zero3___01();
	void SwitchCloudsSub(class UPD_CloudPrefab_C* CloudPresents, float ChangeSpeed);
	void Hidden_Old();
	void Zero4Minus__0();
	void SetCloudParameters(class UPD_CloudPrefab_C* CloudPrefeb, class UChildActorComponent* CloudActorComponent, float ChangeSpeed, int32 TransSortNumber);
	void __K___();
	void Zero4___02();
	void Zero5___03();
	void Zero6___04();
	void Zero7___05();
	void Zero8___01();
	void Zero9_n__();
	void Zero104__a();
	void Zero11___a();
	void Zero12_Z_a();
	void Zero13X_q_a();
	void Zero5___();
	void Zero6X_q();
	void Get_GIParams(float CurTime);
	void Zero7_w__B();
	void Zero8_w__B();
	void Zero14_w__Z();
	void Zero15____01();
	void Zero16____02();
	void Zero17____03();
	void Zero18____04();
	void Zero19____05();
	void Zero20_w____4();
	void Zero1___PT();
	void Zero2___sW_0();
	void Zero1___J_();
	void Zero2____w_8___M();
	void Zero3____w_8____();
	void Zero4____B();
	void ___D____();
	void S____D____();
	void _______();
	void ___();
	void __J____();
	void _w_();
	void ___T4();
	void W___Z();
	void ______();
	void Nine____();
	void CloudMainParamsUpdate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Clouds_C">();
	}
	static class ABP_Clouds_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Clouds_C>();
	}
};
static_assert(alignof(ABP_Clouds_C) == 0x000008, "Wrong alignment on ABP_Clouds_C");
static_assert(sizeof(ABP_Clouds_C) == 0x000370, "Wrong size on ABP_Clouds_C");
static_assert(offsetof(ABP_Clouds_C, UberGraphFrame) == 0x0002C0, "Member 'ABP_Clouds_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, Cloud02) == 0x0002C8, "Member 'ABP_Clouds_C::Cloud02' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, Cloud01) == 0x0002D0, "Member 'ABP_Clouds_C::Cloud01' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, DefaultSceneRoot) == 0x0002D8, "Member 'ABP_Clouds_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, SM______9_) == 0x0002E0, "Member 'ABP_Clouds_C::SM______9_' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, CloudData) == 0x0002E8, "Member 'ABP_Clouds_C::CloudData' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, Counting) == 0x0002F0, "Member 'ABP_Clouds_C::Counting' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, ___e___) == 0x0002F1, "Member 'ABP_Clouds_C::___e___' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, CloudAsset) == 0x0002F8, "Member 'ABP_Clouds_C::CloudAsset' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, SortNumber) == 0x000328, "Member 'ABP_Clouds_C::SortNumber' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, As_PD_Cloud_Prefab) == 0x000338, "Member 'ABP_Clouds_C::As_PD_Cloud_Prefab' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, CachedAudioEvent2D) == 0x000340, "Member 'ABP_Clouds_C::CachedAudioEvent2D' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, IsSkyOcean) == 0x000348, "Member 'ABP_Clouds_C::IsSkyOcean' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, SkyOceanAudio) == 0x000350, "Member 'ABP_Clouds_C::SkyOceanAudio' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, Override_Cloud_Rotation) == 0x000358, "Member 'ABP_Clouds_C::Override_Cloud_Rotation' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, Cloud_Speed) == 0x00035C, "Member 'ABP_Clouds_C::Cloud_Speed' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, Cloud_Offset) == 0x000360, "Member 'ABP_Clouds_C::Cloud_Offset' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, IsReversed_) == 0x000364, "Member 'ABP_Clouds_C::IsReversed_' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, ReversedZHeightBias) == 0x000368, "Member 'ABP_Clouds_C::ReversedZHeightBias' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, FeatureLevel) == 0x00036C, "Member 'ABP_Clouds_C::FeatureLevel' has a wrong offset!");

}

