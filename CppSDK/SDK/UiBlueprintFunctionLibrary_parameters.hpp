#pragma once
// Package: UiBlueprintFunctionLibrary

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "EWeaponViewName_structs.hpp"


namespace SDK::Params
{

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GetCurrentRoleConfigId
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GetCurrentRoleConfigId final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GetCurrentRoleConfigId) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GetCurrentRoleConfigId");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GetCurrentRoleConfigId) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_GetCurrentRoleConfigId");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetCurrentRoleConfigId, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GetCurrentRoleConfigId::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetCurrentRoleConfigId, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_GetCurrentRoleConfigId::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GetUiWeaponEquippedRoleId
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GetUiWeaponEquippedRoleId final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GetUiWeaponEquippedRoleId) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GetUiWeaponEquippedRoleId");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GetUiWeaponEquippedRoleId) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_GetUiWeaponEquippedRoleId");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetUiWeaponEquippedRoleId, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GetUiWeaponEquippedRoleId::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetUiWeaponEquippedRoleId, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_GetUiWeaponEquippedRoleId::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.ActivitySequenceEmitEvent
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_ActivitySequenceEmitEvent final
{
public:
	class FString                                 param;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_ActivitySequenceEmitEvent) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_ActivitySequenceEmitEvent");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_ActivitySequenceEmitEvent) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_ActivitySequenceEmitEvent");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_ActivitySequenceEmitEvent, param) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_ActivitySequenceEmitEvent::param' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_ActivitySequenceEmitEvent, __WorldContext) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_ActivitySequenceEmitEvent::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GetLocalGameDataPath
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GetLocalGameDataPath final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GetLocalGameDataPath) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GetLocalGameDataPath");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GetLocalGameDataPath) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_GetLocalGameDataPath");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetLocalGameDataPath, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GetLocalGameDataPath::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetLocalGameDataPath, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_GetLocalGameDataPath::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.TestSceneLoadBornLocation
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_TestSceneLoadBornLocation final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ReturnValue;                                       // 0x0008(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_TestSceneLoadBornLocation) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_TestSceneLoadBornLocation");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_TestSceneLoadBornLocation) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_TestSceneLoadBornLocation");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneLoadBornLocation, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_TestSceneLoadBornLocation::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneLoadBornLocation, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_TestSceneLoadBornLocation::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.ShowGenericPrompt
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_ShowGenericPrompt final
{
public:
	class FString                                 id;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_ShowGenericPrompt) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_ShowGenericPrompt");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_ShowGenericPrompt) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_ShowGenericPrompt");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_ShowGenericPrompt, id) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_ShowGenericPrompt::id' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_ShowGenericPrompt, __WorldContext) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_ShowGenericPrompt::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.PlayBattleNormalTip
// 0x0020 (0x0020 - 0x0000)
struct UiBlueprintFunctionLibrary_C_PlayBattleNormalTip final
{
public:
	class FString                                 textKey;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         duration;                                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_PlayBattleNormalTip) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_PlayBattleNormalTip");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_PlayBattleNormalTip) == 0x000020, "Wrong size on UiBlueprintFunctionLibrary_C_PlayBattleNormalTip");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_PlayBattleNormalTip, textKey) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_PlayBattleNormalTip::textKey' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_PlayBattleNormalTip, duration) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_PlayBattleNormalTip::duration' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_PlayBattleNormalTip, __WorldContext) == 0x000018, "Member 'UiBlueprintFunctionLibrary_C_PlayBattleNormalTip::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.PlayBattleCountdownTip
// 0x0020 (0x0020 - 0x0000)
struct UiBlueprintFunctionLibrary_C_PlayBattleCountdownTip final
{
public:
	class FString                                 textKey;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         duration;                                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         countdown;                                         // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_PlayBattleCountdownTip) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_PlayBattleCountdownTip");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_PlayBattleCountdownTip) == 0x000020, "Wrong size on UiBlueprintFunctionLibrary_C_PlayBattleCountdownTip");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_PlayBattleCountdownTip, textKey) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_PlayBattleCountdownTip::textKey' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_PlayBattleCountdownTip, duration) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_PlayBattleCountdownTip::duration' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_PlayBattleCountdownTip, countdown) == 0x000014, "Member 'UiBlueprintFunctionLibrary_C_PlayBattleCountdownTip::countdown' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_PlayBattleCountdownTip, __WorldContext) == 0x000018, "Member 'UiBlueprintFunctionLibrary_C_PlayBattleCountdownTip::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.IsLongPressExploreButton
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_IsLongPressExploreButton final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_IsLongPressExploreButton) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_IsLongPressExploreButton");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_IsLongPressExploreButton) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_IsLongPressExploreButton");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_IsLongPressExploreButton, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_IsLongPressExploreButton::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_IsLongPressExploreButton, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_IsLongPressExploreButton::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.IsMobileNow
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_IsMobileNow final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_IsMobileNow) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_IsMobileNow");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_IsMobileNow) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_IsMobileNow");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_IsMobileNow, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_IsMobileNow::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_IsMobileNow, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_IsMobileNow::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.IsGameInited
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_IsGameInited final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_IsGameInited) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_IsGameInited");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_IsGameInited) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_IsGameInited");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_IsGameInited, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_IsGameInited::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_IsGameInited, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_IsGameInited::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.PlaySequenceEventByStringParam
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_PlaySequenceEventByStringParam final
{
public:
	class FString                                 param;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_PlaySequenceEventByStringParam) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_PlaySequenceEventByStringParam");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_PlaySequenceEventByStringParam) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_PlaySequenceEventByStringParam");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_PlaySequenceEventByStringParam, param) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_PlaySequenceEventByStringParam::param' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_PlaySequenceEventByStringParam, __WorldContext) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_PlaySequenceEventByStringParam::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.SetIsSilentLogin
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_SetIsSilentLogin final
{
public:
	bool                                          value;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_SetIsSilentLogin) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_SetIsSilentLogin");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_SetIsSilentLogin) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_SetIsSilentLogin");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetIsSilentLogin, value) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_SetIsSilentLogin::value' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetIsSilentLogin, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_SetIsSilentLogin::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GachaInteractFinish
// 0x0008 (0x0008 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GachaInteractFinish final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GachaInteractFinish) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GachaInteractFinish");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GachaInteractFinish) == 0x000008, "Wrong size on UiBlueprintFunctionLibrary_C_GachaInteractFinish");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GachaInteractFinish, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GachaInteractFinish::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GachaClick
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GachaClick final
{
public:
	bool                                          isPress;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GachaClick) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GachaClick");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GachaClick) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_GachaClick");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GachaClick, isPress) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GachaClick::isPress' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GachaClick, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_GachaClick::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.IsGamepadNow
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_IsGamepadNow final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_IsGamepadNow) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_IsGamepadNow");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_IsGamepadNow) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_IsGamepadNow");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_IsGamepadNow, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_IsGamepadNow::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_IsGamepadNow, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_IsGamepadNow::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.EndGachaScene
// 0x0008 (0x0008 - 0x0000)
struct UiBlueprintFunctionLibrary_C_EndGachaScene final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_EndGachaScene) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_EndGachaScene");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_EndGachaScene) == 0x000008, "Wrong size on UiBlueprintFunctionLibrary_C_EndGachaScene");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_EndGachaScene, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_EndGachaScene::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GetWeaponViewName
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GetWeaponViewName final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWeaponViewName                               ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GetWeaponViewName) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GetWeaponViewName");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GetWeaponViewName) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_GetWeaponViewName");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetWeaponViewName, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GetWeaponViewName::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetWeaponViewName, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_GetWeaponViewName::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GetUiWeaponBreachLevel
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GetUiWeaponBreachLevel final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GetUiWeaponBreachLevel) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GetUiWeaponBreachLevel");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GetUiWeaponBreachLevel) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_GetUiWeaponBreachLevel");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetUiWeaponBreachLevel, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GetUiWeaponBreachLevel::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetUiWeaponBreachLevel, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_GetUiWeaponBreachLevel::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.SetUiEndSequenceFrame
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_SetUiEndSequenceFrame final
{
public:
	float                                         Frame;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_SetUiEndSequenceFrame) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_SetUiEndSequenceFrame");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_SetUiEndSequenceFrame) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_SetUiEndSequenceFrame");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetUiEndSequenceFrame, Frame) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_SetUiEndSequenceFrame::Frame' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetUiEndSequenceFrame, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_SetUiEndSequenceFrame::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.SetUiStartSequenceFrame
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_SetUiStartSequenceFrame final
{
public:
	float                                         Frame;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_SetUiStartSequenceFrame) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_SetUiStartSequenceFrame");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_SetUiStartSequenceFrame) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_SetUiStartSequenceFrame");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetUiStartSequenceFrame, Frame) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_SetUiStartSequenceFrame::Frame' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetUiStartSequenceFrame, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_SetUiStartSequenceFrame::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GetTopViewName
// 0x0020 (0x0020 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GetTopViewName final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GetTopViewName) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GetTopViewName");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GetTopViewName) == 0x000020, "Wrong size on UiBlueprintFunctionLibrary_C_GetTopViewName");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetTopViewName, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GetTopViewName::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetTopViewName, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_GetTopViewName::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.IsOpenPhotograph
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_IsOpenPhotograph final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_IsOpenPhotograph) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_IsOpenPhotograph");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_IsOpenPhotograph) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_IsOpenPhotograph");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_IsOpenPhotograph, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_IsOpenPhotograph::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_IsOpenPhotograph, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_IsOpenPhotograph::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.IsPlayerLookAtCameraInPhoto
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_IsPlayerLookAtCameraInPhoto final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_IsPlayerLookAtCameraInPhoto) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_IsPlayerLookAtCameraInPhoto");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_IsPlayerLookAtCameraInPhoto) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_IsPlayerLookAtCameraInPhoto");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_IsPlayerLookAtCameraInPhoto, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_IsPlayerLookAtCameraInPhoto::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_IsPlayerLookAtCameraInPhoto, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_IsPlayerLookAtCameraInPhoto::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.TestSceneSaveServerIp
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_TestSceneSaveServerIp final
{
public:
	class FString                                 serverIp;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_TestSceneSaveServerIp) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_TestSceneSaveServerIp");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_TestSceneSaveServerIp) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_TestSceneSaveServerIp");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneSaveServerIp, serverIp) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_TestSceneSaveServerIp::serverIp' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneSaveServerIp, __WorldContext) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_TestSceneSaveServerIp::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.TestSceneLoadServerIp
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_TestSceneLoadServerIp final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_TestSceneLoadServerIp) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_TestSceneLoadServerIp");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_TestSceneLoadServerIp) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_TestSceneLoadServerIp");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneLoadServerIp, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_TestSceneLoadServerIp::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneLoadServerIp, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_TestSceneLoadServerIp::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.SetPartStateVisible
// 0x0028 (0x0028 - 0x0000)
struct UiBlueprintFunctionLibrary_C_SetPartStateVisible final
{
public:
	float                                         entityId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 boneName;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          bVisible;                                          // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_SetPartStateVisible) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_SetPartStateVisible");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_SetPartStateVisible) == 0x000028, "Wrong size on UiBlueprintFunctionLibrary_C_SetPartStateVisible");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetPartStateVisible, entityId) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_SetPartStateVisible::entityId' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetPartStateVisible, boneName) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_SetPartStateVisible::boneName' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetPartStateVisible, bVisible) == 0x000018, "Member 'UiBlueprintFunctionLibrary_C_SetPartStateVisible::bVisible' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetPartStateVisible, __WorldContext) == 0x000020, "Member 'UiBlueprintFunctionLibrary_C_SetPartStateVisible::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.TestSceneSaveGender
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_TestSceneSaveGender final
{
public:
	bool                                          isMale;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_TestSceneSaveGender) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_TestSceneSaveGender");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_TestSceneSaveGender) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_TestSceneSaveGender");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneSaveGender, isMale) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_TestSceneSaveGender::isMale' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneSaveGender, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_TestSceneSaveGender::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.TestSceneLoadGender
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_TestSceneLoadGender final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_TestSceneLoadGender) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_TestSceneLoadGender");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_TestSceneLoadGender) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_TestSceneLoadGender");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneLoadGender, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_TestSceneLoadGender::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneLoadGender, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_TestSceneLoadGender::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.TestSceneSaveBornMode1
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_TestSceneSaveBornMode1 final
{
public:
	bool                                          mode1;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_TestSceneSaveBornMode1) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_TestSceneSaveBornMode1");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_TestSceneSaveBornMode1) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_TestSceneSaveBornMode1");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneSaveBornMode1, mode1) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_TestSceneSaveBornMode1::mode1' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneSaveBornMode1, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_TestSceneSaveBornMode1::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.RefreshInputTag
// 0x0008 (0x0008 - 0x0000)
struct UiBlueprintFunctionLibrary_C_RefreshInputTag final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_RefreshInputTag) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_RefreshInputTag");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_RefreshInputTag) == 0x000008, "Wrong size on UiBlueprintFunctionLibrary_C_RefreshInputTag");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_RefreshInputTag, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_RefreshInputTag::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.SetTempLocation
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_SetTempLocation final
{
public:
	struct FVector                                cameraLocation;                                    // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_SetTempLocation) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_SetTempLocation");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_SetTempLocation) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_SetTempLocation");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetTempLocation, cameraLocation) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_SetTempLocation::cameraLocation' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetTempLocation, __WorldContext) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_SetTempLocation::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.TestSceneSaveAccount
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_TestSceneSaveAccount final
{
public:
	class FString                                 account;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_TestSceneSaveAccount) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_TestSceneSaveAccount");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_TestSceneSaveAccount) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_TestSceneSaveAccount");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneSaveAccount, account) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_TestSceneSaveAccount::account' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneSaveAccount, __WorldContext) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_TestSceneSaveAccount::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.TestSceneLoadAccount
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_TestSceneLoadAccount final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_TestSceneLoadAccount) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_TestSceneLoadAccount");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_TestSceneLoadAccount) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_TestSceneLoadAccount");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneLoadAccount, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_TestSceneLoadAccount::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneLoadAccount, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_TestSceneLoadAccount::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.TestSceneSaveNetMode
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_TestSceneSaveNetMode final
{
public:
	bool                                          value;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_TestSceneSaveNetMode) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_TestSceneSaveNetMode");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_TestSceneSaveNetMode) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_TestSceneSaveNetMode");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneSaveNetMode, value) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_TestSceneSaveNetMode::value' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneSaveNetMode, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_TestSceneSaveNetMode::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.TestSceneLoadNetMode
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_TestSceneLoadNetMode final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_TestSceneLoadNetMode) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_TestSceneLoadNetMode");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_TestSceneLoadNetMode) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_TestSceneLoadNetMode");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneLoadNetMode, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_TestSceneLoadNetMode::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneLoadNetMode, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_TestSceneLoadNetMode::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.TestSceneLogin
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_TestSceneLogin final
{
public:
	class FString                                 levelName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_TestSceneLogin) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_TestSceneLogin");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_TestSceneLogin) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_TestSceneLogin");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneLogin, levelName) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_TestSceneLogin::levelName' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TestSceneLogin, __WorldContext) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_TestSceneLogin::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.SetBossStateVisible
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_SetBossStateVisible final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_SetBossStateVisible) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_SetBossStateVisible");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_SetBossStateVisible) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_SetBossStateVisible");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetBossStateVisible, bVisible) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_SetBossStateVisible::bVisible' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetBossStateVisible, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_SetBossStateVisible::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.SetHeadStateVisible
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_SetHeadStateVisible final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_SetHeadStateVisible) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_SetHeadStateVisible");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_SetHeadStateVisible) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_SetHeadStateVisible");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetHeadStateVisible, bVisible) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_SetHeadStateVisible::bVisible' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetHeadStateVisible, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_SetHeadStateVisible::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.SetDamageViewVisible
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_SetDamageViewVisible final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_SetDamageViewVisible) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_SetDamageViewVisible");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_SetDamageViewVisible) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_SetDamageViewVisible");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetDamageViewVisible, bVisible) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_SetDamageViewVisible::bVisible' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetDamageViewVisible, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_SetDamageViewVisible::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.BackLoginView
// 0x0008 (0x0008 - 0x0000)
struct UiBlueprintFunctionLibrary_C_BackLoginView final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_BackLoginView) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_BackLoginView");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_BackLoginView) == 0x000008, "Wrong size on UiBlueprintFunctionLibrary_C_BackLoginView");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_BackLoginView, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_BackLoginView::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.OpenWorldMapView
// 0x0008 (0x0008 - 0x0000)
struct UiBlueprintFunctionLibrary_C_OpenWorldMapView final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_OpenWorldMapView) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_OpenWorldMapView");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_OpenWorldMapView) == 0x000008, "Wrong size on UiBlueprintFunctionLibrary_C_OpenWorldMapView");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_OpenWorldMapView, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_OpenWorldMapView::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.OpenGmView
// 0x0008 (0x0008 - 0x0000)
struct UiBlueprintFunctionLibrary_C_OpenGmView final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_OpenGmView) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_OpenGmView");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_OpenGmView) == 0x000008, "Wrong size on UiBlueprintFunctionLibrary_C_OpenGmView");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_OpenGmView, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_OpenGmView::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GetRoleDamageData
// 0x0020 (0x0020 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GetRoleDamageData final
{
public:
	int32                                         damageId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GetRoleDamageData) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GetRoleDamageData");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GetRoleDamageData) == 0x000020, "Wrong size on UiBlueprintFunctionLibrary_C_GetRoleDamageData");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleDamageData, damageId) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GetRoleDamageData::damageId' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleDamageData, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_GetRoleDamageData::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleDamageData, ReturnValue) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_GetRoleDamageData::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GetRoleProperty
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GetRoleProperty final
{
public:
	int32                                         roleInfoId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GetRoleProperty) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GetRoleProperty");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GetRoleProperty) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_GetRoleProperty");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleProperty, roleInfoId) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GetRoleProperty::roleInfoId' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleProperty, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_GetRoleProperty::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleProperty, ReturnValue) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_GetRoleProperty::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GetRoleCameraConfig
// 0x0020 (0x0020 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GetRoleCameraConfig final
{
public:
	int32                                         roleInfoId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GetRoleCameraConfig) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GetRoleCameraConfig");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GetRoleCameraConfig) == 0x000020, "Wrong size on UiBlueprintFunctionLibrary_C_GetRoleCameraConfig");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleCameraConfig, roleInfoId) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GetRoleCameraConfig::roleInfoId' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleCameraConfig, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_GetRoleCameraConfig::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleCameraConfig, ReturnValue) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_GetRoleCameraConfig::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GetRoleAddAttrList
// 0x0060 (0x0060 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GetRoleAddAttrList final
{
public:
	int32                                         roleInfoId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, float>                            ReturnValue;                                       // 0x0010(0x0050)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GetRoleAddAttrList) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GetRoleAddAttrList");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GetRoleAddAttrList) == 0x000060, "Wrong size on UiBlueprintFunctionLibrary_C_GetRoleAddAttrList");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleAddAttrList, roleInfoId) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GetRoleAddAttrList::roleInfoId' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleAddAttrList, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_GetRoleAddAttrList::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleAddAttrList, ReturnValue) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_GetRoleAddAttrList::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GetRoleBaseAttrList
// 0x0060 (0x0060 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GetRoleBaseAttrList final
{
public:
	int32                                         roleInfoId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, float>                            ReturnValue;                                       // 0x0010(0x0050)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GetRoleBaseAttrList) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GetRoleBaseAttrList");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GetRoleBaseAttrList) == 0x000060, "Wrong size on UiBlueprintFunctionLibrary_C_GetRoleBaseAttrList");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleBaseAttrList, roleInfoId) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GetRoleBaseAttrList::roleInfoId' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleBaseAttrList, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_GetRoleBaseAttrList::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleBaseAttrList, ReturnValue) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_GetRoleBaseAttrList::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GetRoleEntityId
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GetRoleEntityId final
{
public:
	int32                                         roleInfoId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GetRoleEntityId) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GetRoleEntityId");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GetRoleEntityId) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_GetRoleEntityId");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleEntityId, roleInfoId) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GetRoleEntityId::roleInfoId' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleEntityId, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_GetRoleEntityId::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleEntityId, ReturnValue) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_GetRoleEntityId::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GetRoleMeshId
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GetRoleMeshId final
{
public:
	int32                                         roleInfoId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GetRoleMeshId) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GetRoleMeshId");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GetRoleMeshId) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_GetRoleMeshId");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleMeshId, roleInfoId) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GetRoleMeshId::roleInfoId' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleMeshId, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_GetRoleMeshId::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetRoleMeshId, ReturnValue) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_GetRoleMeshId::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.EndScreenEffect
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_EndScreenEffect final
{
public:
	class FString                                 effectPath;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_EndScreenEffect) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_EndScreenEffect");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_EndScreenEffect) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_EndScreenEffect");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_EndScreenEffect, effectPath) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_EndScreenEffect::effectPath' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_EndScreenEffect, __WorldContext) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_EndScreenEffect::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.BeginScreenEffect
// 0x0020 (0x0020 - 0x0000)
struct UiBlueprintFunctionLibrary_C_BeginScreenEffect final
{
public:
	class FString                                 effectPath;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         priority;                                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_BeginScreenEffect) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_BeginScreenEffect");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_BeginScreenEffect) == 0x000020, "Wrong size on UiBlueprintFunctionLibrary_C_BeginScreenEffect");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_BeginScreenEffect, effectPath) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_BeginScreenEffect::effectPath' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_BeginScreenEffect, priority) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_BeginScreenEffect::priority' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_BeginScreenEffect, __WorldContext) == 0x000018, "Member 'UiBlueprintFunctionLibrary_C_BeginScreenEffect::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.CloseUiScene
// 0x0008 (0x0008 - 0x0000)
struct UiBlueprintFunctionLibrary_C_CloseUiScene final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_CloseUiScene) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_CloseUiScene");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_CloseUiScene) == 0x000008, "Wrong size on UiBlueprintFunctionLibrary_C_CloseUiScene");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_CloseUiScene, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_CloseUiScene::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.OpenUiScene
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_OpenUiScene final
{
public:
	class FString                                 uiScenePath;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_OpenUiScene) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_OpenUiScene");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_OpenUiScene) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_OpenUiScene");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_OpenUiScene, uiScenePath) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_OpenUiScene::uiScenePath' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_OpenUiScene, __WorldContext) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_OpenUiScene::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.PlayPlayUiCameraBlendAnimationFromCurrentHandle
// 0x0028 (0x0028 - 0x0000)
struct UiBlueprintFunctionLibrary_C_PlayPlayUiCameraBlendAnimationFromCurrentHandle final
{
public:
	class FString                                 targetAnimationHandleUniqueName;                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 animationBlendDataUniqueName;                      // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_PlayPlayUiCameraBlendAnimationFromCurrentHandle) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_PlayPlayUiCameraBlendAnimationFromCurrentHandle");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_PlayPlayUiCameraBlendAnimationFromCurrentHandle) == 0x000028, "Wrong size on UiBlueprintFunctionLibrary_C_PlayPlayUiCameraBlendAnimationFromCurrentHandle");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_PlayPlayUiCameraBlendAnimationFromCurrentHandle, targetAnimationHandleUniqueName) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_PlayPlayUiCameraBlendAnimationFromCurrentHandle::targetAnimationHandleUniqueName' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_PlayPlayUiCameraBlendAnimationFromCurrentHandle, animationBlendDataUniqueName) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_PlayPlayUiCameraBlendAnimationFromCurrentHandle::animationBlendDataUniqueName' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_PlayPlayUiCameraBlendAnimationFromCurrentHandle, __WorldContext) == 0x000020, "Member 'UiBlueprintFunctionLibrary_C_PlayPlayUiCameraBlendAnimationFromCurrentHandle::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.ClearAllUiCameraAnimationHandles
// 0x0008 (0x0008 - 0x0000)
struct UiBlueprintFunctionLibrary_C_ClearAllUiCameraAnimationHandles final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_ClearAllUiCameraAnimationHandles) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_ClearAllUiCameraAnimationHandles");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_ClearAllUiCameraAnimationHandles) == 0x000008, "Wrong size on UiBlueprintFunctionLibrary_C_ClearAllUiCameraAnimationHandles");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_ClearAllUiCameraAnimationHandles, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_ClearAllUiCameraAnimationHandles::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.ResetUiCameraAnimationHandle
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_ResetUiCameraAnimationHandle final
{
public:
	class FString                                 uniqueName;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_ResetUiCameraAnimationHandle) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_ResetUiCameraAnimationHandle");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_ResetUiCameraAnimationHandle) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_ResetUiCameraAnimationHandle");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_ResetUiCameraAnimationHandle, uniqueName) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_ResetUiCameraAnimationHandle::uniqueName' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_ResetUiCameraAnimationHandle, __WorldContext) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_ResetUiCameraAnimationHandle::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.ConnectServer
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_ConnectServer final
{
public:
	class FString                                 httpResult;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_ConnectServer) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_ConnectServer");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_ConnectServer) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_ConnectServer");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_ConnectServer, httpResult) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_ConnectServer::httpResult' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_ConnectServer, __WorldContext) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_ConnectServer::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.OpenDragonPoolView
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_OpenDragonPoolView final
{
public:
	int32                                         dragonPoolId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_OpenDragonPoolView) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_OpenDragonPoolView");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_OpenDragonPoolView) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_OpenDragonPoolView");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_OpenDragonPoolView, dragonPoolId) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_OpenDragonPoolView::dragonPoolId' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_OpenDragonPoolView, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_OpenDragonPoolView::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.CloseShop
// 0x0008 (0x0008 - 0x0000)
struct UiBlueprintFunctionLibrary_C_CloseShop final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_CloseShop) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_CloseShop");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_CloseShop) == 0x000008, "Wrong size on UiBlueprintFunctionLibrary_C_CloseShop");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_CloseShop, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_CloseShop::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.OpenShop
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_OpenShop final
{
public:
	float                                         shopId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_OpenShop) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_OpenShop");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_OpenShop) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_OpenShop");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_OpenShop, shopId) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_OpenShop::shopId' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_OpenShop, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_OpenShop::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.SetUiRootActive
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_SetUiRootActive final
{
public:
	bool                                          value;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_SetUiRootActive) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_SetUiRootActive");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_SetUiRootActive) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_SetUiRootActive");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetUiRootActive, value) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_SetUiRootActive::value' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_SetUiRootActive, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_SetUiRootActive::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GetAccount
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GetAccount final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GetAccount) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GetAccount");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GetAccount) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_GetAccount");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetAccount, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GetAccount::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetAccount, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_GetAccount::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GetPlayerId
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GetPlayerId final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GetPlayerId) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GetPlayerId");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GetPlayerId) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_GetPlayerId");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetPlayerId, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GetPlayerId::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetPlayerId, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_GetPlayerId::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GetPlayerLevel
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GetPlayerLevel final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GetPlayerLevel) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GetPlayerLevel");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GetPlayerLevel) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_GetPlayerLevel");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetPlayerLevel, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GetPlayerLevel::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetPlayerLevel, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_GetPlayerLevel::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.InitUiRoot
// 0x0008 (0x0008 - 0x0000)
struct UiBlueprintFunctionLibrary_C_InitUiRoot final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_InitUiRoot) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_InitUiRoot");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_InitUiRoot) == 0x000008, "Wrong size on UiBlueprintFunctionLibrary_C_InitUiRoot");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_InitUiRoot, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_InitUiRoot::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GetItemCountByConfigId
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GetItemCountByConfigId final
{
public:
	int32                                         itemConfigId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GetItemCountByConfigId) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GetItemCountByConfigId");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GetItemCountByConfigId) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_GetItemCountByConfigId");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetItemCountByConfigId, itemConfigId) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GetItemCountByConfigId::itemConfigId' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetItemCountByConfigId, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_GetItemCountByConfigId::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetItemCountByConfigId, ReturnValue) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_GetItemCountByConfigId::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.UnLockedTeleport
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_UnLockedTeleport final
{
public:
	int32                                         teleportId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_UnLockedTeleport) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_UnLockedTeleport");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_UnLockedTeleport) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_UnLockedTeleport");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_UnLockedTeleport, teleportId) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_UnLockedTeleport::teleportId' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_UnLockedTeleport, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_UnLockedTeleport::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.CheckTeleport
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_CheckTeleport final
{
public:
	int32                                         teleportId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_CheckTeleport) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_CheckTeleport");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_CheckTeleport) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_CheckTeleport");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_CheckTeleport, teleportId) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_CheckTeleport::teleportId' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_CheckTeleport, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_CheckTeleport::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_CheckTeleport, ReturnValue) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_CheckTeleport::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.CheckGuideStatus
// 0x0028 (0x0028 - 0x0000)
struct UiBlueprintFunctionLibrary_C_CheckGuideStatus final
{
public:
	int32                                         guideGroupId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         status;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 operator_0;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_CheckGuideStatus) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_CheckGuideStatus");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_CheckGuideStatus) == 0x000028, "Wrong size on UiBlueprintFunctionLibrary_C_CheckGuideStatus");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_CheckGuideStatus, guideGroupId) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_CheckGuideStatus::guideGroupId' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_CheckGuideStatus, status) == 0x000004, "Member 'UiBlueprintFunctionLibrary_C_CheckGuideStatus::status' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_CheckGuideStatus, operator_0) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_CheckGuideStatus::operator_0' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_CheckGuideStatus, __WorldContext) == 0x000018, "Member 'UiBlueprintFunctionLibrary_C_CheckGuideStatus::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_CheckGuideStatus, ReturnValue) == 0x000020, "Member 'UiBlueprintFunctionLibrary_C_CheckGuideStatus::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.ApplyUiCameraAnimationSettings
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_ApplyUiCameraAnimationSettings final
{
public:
	class FString                                 uniqueName;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_ApplyUiCameraAnimationSettings) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_ApplyUiCameraAnimationSettings");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_ApplyUiCameraAnimationSettings) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_ApplyUiCameraAnimationSettings");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_ApplyUiCameraAnimationSettings, uniqueName) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_ApplyUiCameraAnimationSettings::uniqueName' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_ApplyUiCameraAnimationSettings, __WorldContext) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_ApplyUiCameraAnimationSettings::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.OpenBattleView
// 0x0008 (0x0008 - 0x0000)
struct UiBlueprintFunctionLibrary_C_OpenBattleView final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_OpenBattleView) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_OpenBattleView");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_OpenBattleView) == 0x000008, "Wrong size on UiBlueprintFunctionLibrary_C_OpenBattleView");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_OpenBattleView, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_OpenBattleView::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.InitializeOfflineFormationInstance
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_InitializeOfflineFormationInstance final
{
public:
	int32                                         aConfigId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         bConfigId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         cConfigId;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_InitializeOfflineFormationInstance) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_InitializeOfflineFormationInstance");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_InitializeOfflineFormationInstance) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_InitializeOfflineFormationInstance");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_InitializeOfflineFormationInstance, aConfigId) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_InitializeOfflineFormationInstance::aConfigId' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_InitializeOfflineFormationInstance, bConfigId) == 0x000004, "Member 'UiBlueprintFunctionLibrary_C_InitializeOfflineFormationInstance::bConfigId' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_InitializeOfflineFormationInstance, cConfigId) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_InitializeOfflineFormationInstance::cConfigId' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_InitializeOfflineFormationInstance, __WorldContext) == 0x000010, "Member 'UiBlueprintFunctionLibrary_C_InitializeOfflineFormationInstance::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.ChangeRole
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_ChangeRole final
{
public:
	bool                                          bUseGoBattleSkill;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         position;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_ChangeRole) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_ChangeRole");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_ChangeRole) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_ChangeRole");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_ChangeRole, bUseGoBattleSkill) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_ChangeRole::bUseGoBattleSkill' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_ChangeRole, position) == 0x000004, "Member 'UiBlueprintFunctionLibrary_C_ChangeRole::position' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_ChangeRole, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_ChangeRole::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.GetAllFormationRole
// 0x0018 (0x0018 - 0x0000)
struct UiBlueprintFunctionLibrary_C_GetAllFormationRole final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATsBaseCharacter_C*>             ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_GetAllFormationRole) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_GetAllFormationRole");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_GetAllFormationRole) == 0x000018, "Wrong size on UiBlueprintFunctionLibrary_C_GetAllFormationRole");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetAllFormationRole, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_GetAllFormationRole::__WorldContext' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_GetAllFormationRole, ReturnValue) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_GetAllFormationRole::ReturnValue' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.AreaEndOverlap
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_AreaEndOverlap final
{
public:
	float                                         areaId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_AreaEndOverlap) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_AreaEndOverlap");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_AreaEndOverlap) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_AreaEndOverlap");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_AreaEndOverlap, areaId) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_AreaEndOverlap::areaId' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_AreaEndOverlap, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_AreaEndOverlap::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.AreaBeginOverlap
// 0x0010 (0x0010 - 0x0000)
struct UiBlueprintFunctionLibrary_C_AreaBeginOverlap final
{
public:
	float                                         areaId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_AreaBeginOverlap) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_AreaBeginOverlap");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_AreaBeginOverlap) == 0x000010, "Wrong size on UiBlueprintFunctionLibrary_C_AreaBeginOverlap");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_AreaBeginOverlap, areaId) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_AreaBeginOverlap::areaId' has a wrong offset!");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_AreaBeginOverlap, __WorldContext) == 0x000008, "Member 'UiBlueprintFunctionLibrary_C_AreaBeginOverlap::__WorldContext' has a wrong offset!");

// Function UiBlueprintFunctionLibrary.UiBlueprintFunctionLibrary_C.TempModuleStart
// 0x0008 (0x0008 - 0x0000)
struct UiBlueprintFunctionLibrary_C_TempModuleStart final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UiBlueprintFunctionLibrary_C_TempModuleStart) == 0x000008, "Wrong alignment on UiBlueprintFunctionLibrary_C_TempModuleStart");
static_assert(sizeof(UiBlueprintFunctionLibrary_C_TempModuleStart) == 0x000008, "Wrong size on UiBlueprintFunctionLibrary_C_TempModuleStart");
static_assert(offsetof(UiBlueprintFunctionLibrary_C_TempModuleStart, __WorldContext) == 0x000000, "Member 'UiBlueprintFunctionLibrary_C_TempModuleStart::__WorldContext' has a wrong offset!");

}

