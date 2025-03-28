#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FightManager

#include "Basic.hpp"

#include "ECamp_structs.hpp"
#include "BP_ManagerBase_classes.hpp"
#include "Engine_structs.hpp"
#include "ERelation_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FightManager.BP_FightManager_C
// 0x01A8 (0x01F0 - 0x0048)
class UBP_FightManager_C final : public UBP_ManagerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0048(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_ActorManager_C*                     _r__h;                                             // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _____;                                             // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             ____;                                              // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             _____0;                                            // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Four_a__;                                          // 0x0080(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             _____1;                                            // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UDataTable*                             Five_s_pn;                                         // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ___r____;                                          // 0x00A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<int32, class UObject*>                   BPaip_;                                            // 0x00B8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UObject*>                        Stari4_BPAIp_;                                     // 0x0108(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          _o____;                                            // 0x0118(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, class ATsBaseCharacter_C*> Debug__a__;                                        // 0x0120(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             __Debug_FightAttribute;                            // 0x0170(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             _dDebug_FightAttribute;                            // 0x0180(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<int32, int32>                            _MStarip_;                                         // 0x0190(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UDataTable*                             ______h;                                           // 0x01E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __Mp_;                                             // 0x01E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ______DelegateSignature_1(class ATsBaseCharacter_C* Param____);
	void ______DelegateSignature_0(class ATsBaseCharacter_C* Param____);
	void ______DelegateSignature(class ATsBaseCharacter_C* Param____);
	void Four_a____DelegateSignature(class ATsBaseCharacter_C* Param____);
	void ___r______DelegateSignature();
	void __Debug_FightAttribute__DelegateSignature(const class FString& Option);
	void _dDebug_FightAttribute__DelegateSignature(const class FString& Option);
	void ExecuteUbergraph_BP_FightManager(int32 EntryPoint);
	void S5______();
	void Tick(float DeltaSeconds);
	void Func______();
	void ___(class UBP_MainGameInstance_C* Param_Eight___);
	void Five___(ECamp __5_, ECamp __5__0, ERelation* S_, int32* S_tp);
	void ____NPC();
	void ______Actor();
	void __BPai(class UObject* BPAI_a);
	void __Debug__a(const class ATsBaseCharacter_C*& baseChar);
	void _dDebug__a(const class ATsBaseCharacter_C*& baseChar);
	void _M_6(TArray<class UObject*>& Starip_);
	void ________(int32 ID, struct FSHitMapping* Param_____, bool* __0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FightManager_C">();
	}
	static class UBP_FightManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FightManager_C>();
	}
};
static_assert(alignof(UBP_FightManager_C) == 0x000008, "Wrong alignment on UBP_FightManager_C");
static_assert(sizeof(UBP_FightManager_C) == 0x0001F0, "Wrong size on UBP_FightManager_C");
static_assert(offsetof(UBP_FightManager_C, UberGraphFrame) == 0x000048, "Member 'UBP_FightManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FightManager_C, _r__h) == 0x000050, "Member 'UBP_FightManager_C::_r__h' has a wrong offset!");
static_assert(offsetof(UBP_FightManager_C, _____) == 0x000058, "Member 'UBP_FightManager_C::_____' has a wrong offset!");
static_assert(offsetof(UBP_FightManager_C, ____) == 0x000060, "Member 'UBP_FightManager_C::____' has a wrong offset!");
static_assert(offsetof(UBP_FightManager_C, _____0) == 0x000070, "Member 'UBP_FightManager_C::_____0' has a wrong offset!");
static_assert(offsetof(UBP_FightManager_C, Four_a__) == 0x000080, "Member 'UBP_FightManager_C::Four_a__' has a wrong offset!");
static_assert(offsetof(UBP_FightManager_C, _____1) == 0x000090, "Member 'UBP_FightManager_C::_____1' has a wrong offset!");
static_assert(offsetof(UBP_FightManager_C, Five_s_pn) == 0x0000A0, "Member 'UBP_FightManager_C::Five_s_pn' has a wrong offset!");
static_assert(offsetof(UBP_FightManager_C, ___r____) == 0x0000A8, "Member 'UBP_FightManager_C::___r____' has a wrong offset!");
static_assert(offsetof(UBP_FightManager_C, BPaip_) == 0x0000B8, "Member 'UBP_FightManager_C::BPaip_' has a wrong offset!");
static_assert(offsetof(UBP_FightManager_C, Stari4_BPAIp_) == 0x000108, "Member 'UBP_FightManager_C::Stari4_BPAIp_' has a wrong offset!");
static_assert(offsetof(UBP_FightManager_C, _o____) == 0x000118, "Member 'UBP_FightManager_C::_o____' has a wrong offset!");
static_assert(offsetof(UBP_FightManager_C, Debug__a__) == 0x000120, "Member 'UBP_FightManager_C::Debug__a__' has a wrong offset!");
static_assert(offsetof(UBP_FightManager_C, __Debug_FightAttribute) == 0x000170, "Member 'UBP_FightManager_C::__Debug_FightAttribute' has a wrong offset!");
static_assert(offsetof(UBP_FightManager_C, _dDebug_FightAttribute) == 0x000180, "Member 'UBP_FightManager_C::_dDebug_FightAttribute' has a wrong offset!");
static_assert(offsetof(UBP_FightManager_C, _MStarip_) == 0x000190, "Member 'UBP_FightManager_C::_MStarip_' has a wrong offset!");
static_assert(offsetof(UBP_FightManager_C, ______h) == 0x0001E0, "Member 'UBP_FightManager_C::______h' has a wrong offset!");
static_assert(offsetof(UBP_FightManager_C, __Mp_) == 0x0001E8, "Member 'UBP_FightManager_C::__Mp_' has a wrong offset!");

}

