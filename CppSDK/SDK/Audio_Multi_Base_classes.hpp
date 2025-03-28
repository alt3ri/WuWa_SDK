#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Audio_Multi_Base

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Audio_Multi_Base.Audio_Multi_Base_C
// 0x0058 (0x0308 - 0x02B0)
class AAudio_Multi_Base_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UInstancedStaticMeshComponent*          ISM_____;                                          // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak;                                                // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Event;                                             // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _____P_p;                                          // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DC[0x4];                                      // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTransform>                     MultiPos;                                          // 0x02E0(0x0010)(Edit, BlueprintVisible)
	float                                         A___;                                              // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ______Plus___P_;                                   // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                P__r;                                              // 0x02F8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _________;                                         // 0x0304(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Audio_Multi_Base(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ___();
	void Ninen____p__P();
	void A_____();
	void _d___();
	void Play();
	void Stop();
	void P_J____P__(float* P_J_);
	void Sp();
	void __Minus___0(struct FVector* Minus__);
	void __A___();
	void __Minus__();
	void GamePlay();
	void Show();
	void Hide();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Audio_Multi_Base_C">();
	}
	static class AAudio_Multi_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAudio_Multi_Base_C>();
	}
};
static_assert(alignof(AAudio_Multi_Base_C) == 0x000008, "Wrong alignment on AAudio_Multi_Base_C");
static_assert(sizeof(AAudio_Multi_Base_C) == 0x000308, "Wrong size on AAudio_Multi_Base_C");
static_assert(offsetof(AAudio_Multi_Base_C, UberGraphFrame) == 0x0002B0, "Member 'AAudio_Multi_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAudio_Multi_Base_C, ISM_____) == 0x0002B8, "Member 'AAudio_Multi_Base_C::ISM_____' has a wrong offset!");
static_assert(offsetof(AAudio_Multi_Base_C, Ak) == 0x0002C0, "Member 'AAudio_Multi_Base_C::Ak' has a wrong offset!");
static_assert(offsetof(AAudio_Multi_Base_C, DefaultSceneRoot) == 0x0002C8, "Member 'AAudio_Multi_Base_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AAudio_Multi_Base_C, Event) == 0x0002D0, "Member 'AAudio_Multi_Base_C::Event' has a wrong offset!");
static_assert(offsetof(AAudio_Multi_Base_C, _____P_p) == 0x0002D8, "Member 'AAudio_Multi_Base_C::_____P_p' has a wrong offset!");
static_assert(offsetof(AAudio_Multi_Base_C, MultiPos) == 0x0002E0, "Member 'AAudio_Multi_Base_C::MultiPos' has a wrong offset!");
static_assert(offsetof(AAudio_Multi_Base_C, A___) == 0x0002F0, "Member 'AAudio_Multi_Base_C::A___' has a wrong offset!");
static_assert(offsetof(AAudio_Multi_Base_C, ______Plus___P_) == 0x0002F4, "Member 'AAudio_Multi_Base_C::______Plus___P_' has a wrong offset!");
static_assert(offsetof(AAudio_Multi_Base_C, P__r) == 0x0002F8, "Member 'AAudio_Multi_Base_C::P__r' has a wrong offset!");
static_assert(offsetof(AAudio_Multi_Base_C, _________) == 0x000304, "Member 'AAudio_Multi_Base_C::_________' has a wrong offset!");

}

