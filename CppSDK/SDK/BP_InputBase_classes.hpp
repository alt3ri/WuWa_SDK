#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InputBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "EInputCharacterState_structs.hpp"
#include "SInputShowList_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InputBase.BP_InputBase_C
// 0x00B8 (0x0178 - 0x00C0)
class UBP_InputBase_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABaseCharacter*                         OwnerActor;                                        // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UnlockLongPressTime;                               // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IsLockOnState;                                     // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<EInputCharacterState, struct FSInputShowList> InputShowMap;                                      // 0x00D8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EInputCharacterState, struct FSInputShowList> MobileInputShowMap;                                // 0x0128(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_InputBase(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	struct FSInputCaches GetUnrealCacheConfig(int32 Action);
	struct FSInputHoldConfig GetUnrealHoldConfig(int32 Action);
	void _______6(float Time);
	void ___w___4(float Time);
	void _______5(float Time);
	void ___w___3(float Time);
	void P__b____(float Time);
	void P__b_w__(float Time);
	void _______4(float Time);
	void ___w___2(float Time);
	void _______3(float Time);
	void ___w___1(float Time);
	void __1____(float Time);
	void __1_w__(float Time);
	void _a1____(float Time);
	void _a1_w__(float Time);
	void _______2(float Time);
	void ___w___0(float Time);
	void _a2____(float Time);
	void _a2_w__(float Time);
	void _b_r1____(float Time);
	void _b_r1_w__(float Time);
	void _b_r2____(float Time);
	void _b_r2_w__(float Time);
	void _b_r3____(float Time);
	void _b_r3_w__(float Time);
	void ________(float Time);
	void _____w__(float Time);
	void _______1(float Time);
	void ___w__(float Time);
	struct FSInputCommand _____10(float Time);
	struct FSInputCommand ___w_4(float Time);
	struct FSInputCommand _____9(float Time);
	struct FSInputCommand _____8(float Time);
	struct FSInputCommand ___w_3(float Time);
	struct FSInputCommand _____7(float Time);
	struct FSInputCommand P__b___0(float Time);
	struct FSInputCommand P__b_w(float Time);
	struct FSInputCommand P__b__(float Time);
	struct FSInputCommand _____6(float Time);
	struct FSInputCommand ___w_2(float Time);
	struct FSInputCommand _____5(float Time);
	struct FSInputCommand _____4(float Time);
	struct FSInputCommand ___w_1(float Time);
	struct FSInputCommand _____3(float Time);
	struct FSInputCommand __1___0(float Time);
	struct FSInputCommand __1_w(float Time);
	struct FSInputCommand __1__(float Time);
	struct FSInputCommand _a1___0(float Time);
	struct FSInputCommand _a1_w(float Time);
	struct FSInputCommand _a1__(float Time);
	struct FSInputCommand _____2(float Time);
	struct FSInputCommand ___w_0(float Time);
	struct FSInputCommand _____1(float Time);
	struct FSInputCommand _a2___0(float Time);
	struct FSInputCommand _a2_w(float Time);
	struct FSInputCommand _a2__(float Time);
	struct FSInputCommand _b_r1___0(float Time);
	struct FSInputCommand _b_r1_w(float Time);
	struct FSInputCommand _b_r1__(float Time);
	struct FSInputCommand _b_r2___0(float Time);
	struct FSInputCommand _b_r2_w(float Time);
	struct FSInputCommand _b_r2__(float Time);
	struct FSInputCommand _b_r3___0(float Time);
	struct FSInputCommand _b_r3_w(float Time);
	struct FSInputCommand _b_r3__(float Time);
	struct FSInputCommand _____0(float Time);
	struct FSInputCommand ___w(float Time);
	struct FSInputCommand ____(float Time);
	struct FSInputCommand _______0(float Time);
	struct FSInputCommand ______(float Time);
	void GetMoveVector(struct FVector2D* ReturnVaule);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InputBase_C">();
	}
	static class UBP_InputBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_InputBase_C>();
	}
};
static_assert(alignof(UBP_InputBase_C) == 0x000008, "Wrong alignment on UBP_InputBase_C");
static_assert(sizeof(UBP_InputBase_C) == 0x000178, "Wrong size on UBP_InputBase_C");
static_assert(offsetof(UBP_InputBase_C, UberGraphFrame) == 0x0000C0, "Member 'UBP_InputBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_InputBase_C, OwnerActor) == 0x0000C8, "Member 'UBP_InputBase_C::OwnerActor' has a wrong offset!");
static_assert(offsetof(UBP_InputBase_C, UnlockLongPressTime) == 0x0000D0, "Member 'UBP_InputBase_C::UnlockLongPressTime' has a wrong offset!");
static_assert(offsetof(UBP_InputBase_C, IsLockOnState) == 0x0000D4, "Member 'UBP_InputBase_C::IsLockOnState' has a wrong offset!");
static_assert(offsetof(UBP_InputBase_C, InputShowMap) == 0x0000D8, "Member 'UBP_InputBase_C::InputShowMap' has a wrong offset!");
static_assert(offsetof(UBP_InputBase_C, MobileInputShowMap) == 0x000128, "Member 'UBP_InputBase_C::MobileInputShowMap' has a wrong offset!");

}

