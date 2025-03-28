#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventManager

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "SHitInformation_structs.hpp"
#include "ECharacterState_structs.hpp"
#include "ECaughtResultType_structs.hpp"


namespace SDK::Params
{

// Function BP_EventManager.BP_EventManager_C.Lb}h9�__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_EventManager_C_Lb__h_9___DelegateSignature final
{
public:
	uint8                                         __h___;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Lb__;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventManager_C_Lb__h_9___DelegateSignature) == 0x000008, "Wrong alignment on BP_EventManager_C_Lb__h_9___DelegateSignature");
static_assert(sizeof(BP_EventManager_C_Lb__h_9___DelegateSignature) == 0x000010, "Wrong size on BP_EventManager_C_Lb__h_9___DelegateSignature");
static_assert(offsetof(BP_EventManager_C_Lb__h_9___DelegateSignature, __h___) == 0x000000, "Member 'BP_EventManager_C_Lb__h_9___DelegateSignature::__h___' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C_Lb__h_9___DelegateSignature, Lb__) == 0x000008, "Member 'BP_EventManager_C_Lb__h_9___DelegateSignature::Lb__' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C.S	�r���__DelegateSignature
// 0x0880 (0x0880 - 0x0000)
struct BP_EventManager_C_S__r_____DelegateSignature final
{
public:
	class ATsBaseCharacter_C*                     _r;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSHitInformation                       __pn;                                              // 0x0008(0x0878)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventManager_C_S__r_____DelegateSignature) == 0x000008, "Wrong alignment on BP_EventManager_C_S__r_____DelegateSignature");
static_assert(sizeof(BP_EventManager_C_S__r_____DelegateSignature) == 0x000880, "Wrong size on BP_EventManager_C_S__r_____DelegateSignature");
static_assert(offsetof(BP_EventManager_C_S__r_____DelegateSignature, _r) == 0x000000, "Member 'BP_EventManager_C_S__r_____DelegateSignature::_r' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C_S__r_____DelegateSignature, __pn) == 0x000008, "Member 'BP_EventManager_C_S__r_____DelegateSignature::__pn' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C.S��LbS �__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct BP_EventManager_C_S__LbS____DelegateSignature final
{
public:
	class FName                                   InID;                                              // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventManager_C_S__LbS____DelegateSignature) == 0x000004, "Wrong alignment on BP_EventManager_C_S__LbS____DelegateSignature");
static_assert(sizeof(BP_EventManager_C_S__LbS____DelegateSignature) == 0x00000C, "Wrong size on BP_EventManager_C_S__LbS____DelegateSignature");
static_assert(offsetof(BP_EventManager_C_S__LbS____DelegateSignature, InID) == 0x000000, "Member 'BP_EventManager_C_S__LbS____DelegateSignature::InID' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C. d�S__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_EventManager_C__d_S__DelegateSignature final
{
public:
	class AActor*                                 _d__S;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventManager_C__d_S__DelegateSignature) == 0x000008, "Wrong alignment on BP_EventManager_C__d_S__DelegateSignature");
static_assert(sizeof(BP_EventManager_C__d_S__DelegateSignature) == 0x000008, "Wrong size on BP_EventManager_C__d_S__DelegateSignature");
static_assert(offsetof(BP_EventManager_C__d_S__DelegateSignature, _d__S) == 0x000000, "Member 'BP_EventManager_C__d_S__DelegateSignature::_d__S' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C.���S__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_EventManager_C____S__DelegateSignature final
{
public:
	int32                                         _SID;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Entity;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventManager_C____S__DelegateSignature) == 0x000008, "Wrong alignment on BP_EventManager_C____S__DelegateSignature");
static_assert(sizeof(BP_EventManager_C____S__DelegateSignature) == 0x000010, "Wrong size on BP_EventManager_C____S__DelegateSignature");
static_assert(offsetof(BP_EventManager_C____S__DelegateSignature, _SID) == 0x000000, "Member 'BP_EventManager_C____S__DelegateSignature::_SID' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C____S__DelegateSignature, Entity) == 0x000008, "Member 'BP_EventManager_C____S__DelegateSignature::Entity' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C.P9}-M__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_EventManager_C_P9_MinusM__DelegateSignature final
{
public:
	int32                                         BulletId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EntityId;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventManager_C_P9_MinusM__DelegateSignature) == 0x000004, "Wrong alignment on BP_EventManager_C_P9_MinusM__DelegateSignature");
static_assert(sizeof(BP_EventManager_C_P9_MinusM__DelegateSignature) == 0x000008, "Wrong size on BP_EventManager_C_P9_MinusM__DelegateSignature");
static_assert(offsetof(BP_EventManager_C_P9_MinusM__DelegateSignature, BulletId) == 0x000000, "Member 'BP_EventManager_C_P9_MinusM__DelegateSignature::BulletId' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C_P9_MinusM__DelegateSignature, EntityId) == 0x000004, "Member 'BP_EventManager_C_P9_MinusM__DelegateSignature::EntityId' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C.�r�M@���__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_EventManager_C__r_M_______DelegateSignature final
{
public:
	class ATsBaseCharacter_C*                     _r;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           _MTag;                                             // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	float                                         __M____;                                           // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param________;                                     // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventManager_C__r_M_______DelegateSignature) == 0x000008, "Wrong alignment on BP_EventManager_C__r_M_______DelegateSignature");
static_assert(sizeof(BP_EventManager_C__r_M_______DelegateSignature) == 0x000020, "Wrong size on BP_EventManager_C__r_M_______DelegateSignature");
static_assert(offsetof(BP_EventManager_C__r_M_______DelegateSignature, _r) == 0x000000, "Member 'BP_EventManager_C__r_M_______DelegateSignature::_r' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C__r_M_______DelegateSignature, _MTag) == 0x000008, "Member 'BP_EventManager_C__r_M_______DelegateSignature::_MTag' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C__r_M_______DelegateSignature, __M____) == 0x000014, "Member 'BP_EventManager_C__r_M_______DelegateSignature::__M____' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C__r_M_______DelegateSignature, Param________) == 0x000018, "Member 'BP_EventManager_C__r_M_______DelegateSignature::Param________' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C.�r�M1�S��__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_EventManager_C__r_M1_S____DelegateSignature final
{
public:
	class ATsBaseCharacter_C*                     _r;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           _MTag;                                             // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     Param____;                                         // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventManager_C__r_M1_S____DelegateSignature) == 0x000008, "Wrong alignment on BP_EventManager_C__r_M1_S____DelegateSignature");
static_assert(sizeof(BP_EventManager_C__r_M1_S____DelegateSignature) == 0x000020, "Wrong size on BP_EventManager_C__r_M1_S____DelegateSignature");
static_assert(offsetof(BP_EventManager_C__r_M1_S____DelegateSignature, _r) == 0x000000, "Member 'BP_EventManager_C__r_M1_S____DelegateSignature::_r' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C__r_M1_S____DelegateSignature, _MTag) == 0x000008, "Member 'BP_EventManager_C__r_M1_S____DelegateSignature::_MTag' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C__r_M1_S____DelegateSignature, Param____) == 0x000018, "Member 'BP_EventManager_C__r_M1_S____DelegateSignature::Param____' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C.AI�;�07a�__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_EventManager_C_AI___07a___DelegateSignature final
{
public:
	class ATsBaseCharacter_C*                     _r;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventManager_C_AI___07a___DelegateSignature) == 0x000008, "Wrong alignment on BP_EventManager_C_AI___07a___DelegateSignature");
static_assert(sizeof(BP_EventManager_C_AI___07a___DelegateSignature) == 0x000010, "Wrong size on BP_EventManager_C_AI___07a___DelegateSignature");
static_assert(offsetof(BP_EventManager_C_AI___07a___DelegateSignature, _r) == 0x000000, "Member 'BP_EventManager_C_AI___07a___DelegateSignature::_r' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C_AI___07a___DelegateSignature, Param_Index) == 0x000008, "Member 'BP_EventManager_C_AI___07a___DelegateSignature::Param_Index' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C.CaughtEntity__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_EventManager_C_CaughtEntity__DelegateSignature final
{
public:
	int32                                         RoleEntityID;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CaughtEntityID;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CaughtID;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ECaughtResultType                             Result;                                            // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventManager_C_CaughtEntity__DelegateSignature) == 0x000008, "Wrong alignment on BP_EventManager_C_CaughtEntity__DelegateSignature");
static_assert(sizeof(BP_EventManager_C_CaughtEntity__DelegateSignature) == 0x000020, "Wrong size on BP_EventManager_C_CaughtEntity__DelegateSignature");
static_assert(offsetof(BP_EventManager_C_CaughtEntity__DelegateSignature, RoleEntityID) == 0x000000, "Member 'BP_EventManager_C_CaughtEntity__DelegateSignature::RoleEntityID' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C_CaughtEntity__DelegateSignature, CaughtEntityID) == 0x000004, "Member 'BP_EventManager_C_CaughtEntity__DelegateSignature::CaughtEntityID' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C_CaughtEntity__DelegateSignature, CaughtID) == 0x000008, "Member 'BP_EventManager_C_CaughtEntity__DelegateSignature::CaughtID' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C_CaughtEntity__DelegateSignature, Result) == 0x000018, "Member 'BP_EventManager_C_CaughtEntity__DelegateSignature::Result' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C.�r�b�__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_EventManager_C__r___b___DelegateSignature final
{
public:
	class ATsBaseCharacter_C*                     _r;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharacterState                               Param____;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharacterState                               Param_____0;                                       // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __;                                                // 0x000A(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventManager_C__r___b___DelegateSignature) == 0x000008, "Wrong alignment on BP_EventManager_C__r___b___DelegateSignature");
static_assert(sizeof(BP_EventManager_C__r___b___DelegateSignature) == 0x000010, "Wrong size on BP_EventManager_C__r___b___DelegateSignature");
static_assert(offsetof(BP_EventManager_C__r___b___DelegateSignature, _r) == 0x000000, "Member 'BP_EventManager_C__r___b___DelegateSignature::_r' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C__r___b___DelegateSignature, Param____) == 0x000008, "Member 'BP_EventManager_C__r___b___DelegateSignature::Param____' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C__r___b___DelegateSignature, Param_____0) == 0x000009, "Member 'BP_EventManager_C__r___b___DelegateSignature::Param_____0' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C__r___b___DelegateSignature, __) == 0x00000A, "Member 'BP_EventManager_C__r___b___DelegateSignature::__' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C.S���V���__DelegateSignature
// 0x0880 (0x0880 - 0x0000)
struct BP_EventManager_C_S___V_____DelegateSignature final
{
public:
	int32                                         _V__ID;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSHitInformation                       __pn;                                              // 0x0008(0x0878)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventManager_C_S___V_____DelegateSignature) == 0x000008, "Wrong alignment on BP_EventManager_C_S___V_____DelegateSignature");
static_assert(sizeof(BP_EventManager_C_S___V_____DelegateSignature) == 0x000880, "Wrong size on BP_EventManager_C_S___V_____DelegateSignature");
static_assert(offsetof(BP_EventManager_C_S___V_____DelegateSignature, _V__ID) == 0x000000, "Member 'BP_EventManager_C_S___V_____DelegateSignature::_V__ID' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C_S___V_____DelegateSignature, __pn) == 0x000008, "Member 'BP_EventManager_C_S___V_____DelegateSignature::__pn' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C.S	�r{��__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_EventManager_C_S__r_____DelegateSignature final
{
public:
	class ATsBaseCharacter_C*                     _r;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventManager_C_S__r_____DelegateSignature) == 0x000008, "Wrong alignment on BP_EventManager_C_S__r_____DelegateSignature");
static_assert(sizeof(BP_EventManager_C_S__r_____DelegateSignature) == 0x000008, "Wrong size on BP_EventManager_C_S__r_____DelegateSignature");
static_assert(offsetof(BP_EventManager_C_S__r_____DelegateSignature, _r) == 0x000000, "Member 'BP_EventManager_C_S__r_____DelegateSignature::_r' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C.��9��__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_EventManager_C_______9____DelegateSignature final
{
public:
	bool                                          __e__;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventManager_C_______9____DelegateSignature) == 0x000001, "Wrong alignment on BP_EventManager_C_______9____DelegateSignature");
static_assert(sizeof(BP_EventManager_C_______9____DelegateSignature) == 0x000001, "Wrong size on BP_EventManager_C_______9____DelegateSignature");
static_assert(offsetof(BP_EventManager_C_______9____DelegateSignature, __e__) == 0x000000, "Member 'BP_EventManager_C_______9____DelegateSignature::__e__' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C.���9��__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_EventManager_C_______9____DelegateSignature final
{
public:
	class ATsBaseCharacter_C*                     __;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventManager_C_______9____DelegateSignature) == 0x000008, "Wrong alignment on BP_EventManager_C_______9____DelegateSignature");
static_assert(sizeof(BP_EventManager_C_______9____DelegateSignature) == 0x000008, "Wrong size on BP_EventManager_C_______9____DelegateSignature");
static_assert(offsetof(BP_EventManager_C_______9____DelegateSignature, __) == 0x000000, "Member 'BP_EventManager_C_______9____DelegateSignature::__' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C.�����__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BP_EventManager_C__________DelegateSignature final
{
public:
	int32                                         RoleEntityId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CaughtEntityId;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CaughtId;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventManager_C__________DelegateSignature) == 0x000008, "Wrong alignment on BP_EventManager_C__________DelegateSignature");
static_assert(sizeof(BP_EventManager_C__________DelegateSignature) == 0x000018, "Wrong size on BP_EventManager_C__________DelegateSignature");
static_assert(offsetof(BP_EventManager_C__________DelegateSignature, RoleEntityId) == 0x000000, "Member 'BP_EventManager_C__________DelegateSignature::RoleEntityId' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C__________DelegateSignature, CaughtEntityId) == 0x000004, "Member 'BP_EventManager_C__________DelegateSignature::CaughtEntityId' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C__________DelegateSignature, CaughtId) == 0x000008, "Member 'BP_EventManager_C__________DelegateSignature::CaughtId' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C.P(�>�_�__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct BP_EventManager_C_P________DelegateSignature final
{
public:
	int32                                         P_ID;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventManager_C_P________DelegateSignature) == 0x000004, "Wrong alignment on BP_EventManager_C_P________DelegateSignature");
static_assert(sizeof(BP_EventManager_C_P________DelegateSignature) == 0x000004, "Wrong size on BP_EventManager_C_P________DelegateSignature");
static_assert(offsetof(BP_EventManager_C_P________DelegateSignature, P_ID) == 0x000000, "Member 'BP_EventManager_C_P________DelegateSignature::P_ID' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C.��i�04b�__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_EventManager_C___i_04b___DelegateSignature final
{
public:
	class AActor*                                 __i;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Fourb;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventManager_C___i_04b___DelegateSignature) == 0x000008, "Wrong alignment on BP_EventManager_C___i_04b___DelegateSignature");
static_assert(sizeof(BP_EventManager_C___i_04b___DelegateSignature) == 0x000010, "Wrong size on BP_EventManager_C___i_04b___DelegateSignature");
static_assert(offsetof(BP_EventManager_C___i_04b___DelegateSignature, __i) == 0x000000, "Member 'BP_EventManager_C___i_04b___DelegateSignature::__i' has a wrong offset!");
static_assert(offsetof(BP_EventManager_C___i_04b___DelegateSignature, Fourb) == 0x000008, "Member 'BP_EventManager_C___i_04b___DelegateSignature::Fourb' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C. �8�a�i__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct BP_EventManager_C___8_a_i__DelegateSignature final
{
public:
	int32                                         EntityId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventManager_C___8_a_i__DelegateSignature) == 0x000004, "Wrong alignment on BP_EventManager_C___8_a_i__DelegateSignature");
static_assert(sizeof(BP_EventManager_C___8_a_i__DelegateSignature) == 0x000004, "Wrong size on BP_EventManager_C___8_a_i__DelegateSignature");
static_assert(offsetof(BP_EventManager_C___8_a_i__DelegateSignature, EntityId) == 0x000000, "Member 'BP_EventManager_C___8_a_i__DelegateSignature::EntityId' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C.\b8�a�i__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct BP_EventManager_C__b8_a_i__DelegateSignature final
{
public:
	int32                                         EntityId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventManager_C__b8_a_i__DelegateSignature) == 0x000004, "Wrong alignment on BP_EventManager_C__b8_a_i__DelegateSignature");
static_assert(sizeof(BP_EventManager_C__b8_a_i__DelegateSignature) == 0x000004, "Wrong size on BP_EventManager_C__b8_a_i__DelegateSignature");
static_assert(offsetof(BP_EventManager_C__b8_a_i__DelegateSignature, EntityId) == 0x000000, "Member 'BP_EventManager_C__b8_a_i__DelegateSignature::EntityId' has a wrong offset!");

// Function BP_EventManager.BP_EventManager_C.SU|9��__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_EventManager_C_SU_9_____DelegateSignature final
{
public:
	class AActor*                                 FishingBoat;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventManager_C_SU_9_____DelegateSignature) == 0x000008, "Wrong alignment on BP_EventManager_C_SU_9_____DelegateSignature");
static_assert(sizeof(BP_EventManager_C_SU_9_____DelegateSignature) == 0x000008, "Wrong size on BP_EventManager_C_SU_9_____DelegateSignature");
static_assert(offsetof(BP_EventManager_C_SU_9_____DelegateSignature, FishingBoat) == 0x000000, "Member 'BP_EventManager_C_SU_9_____DelegateSignature::FishingBoat' has a wrong offset!");

}

