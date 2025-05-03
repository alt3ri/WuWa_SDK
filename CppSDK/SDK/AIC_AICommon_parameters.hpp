#pragma once
// Package: AIC_AICommon

#include "Basic.hpp"

#include "EAiLevelVarSource_structs.hpp"
#include "SAiLevelVar_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ECharacterState_structs.hpp"


namespace SDK::Params
{

// Function AIC_AICommon.AIC_AICommon_C.ExecuteUbergraph_AIC_AICommon
// 0x0518 (0x0518 - 0x0000)
struct AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bContent)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0028)(ZeroConstructor)
	TDelegate<void(const TArray<class AActor*>& AddActor, const TArray<class AActor*>& RemoveActor, const TArray<int32>& RemoveActorIds, int32 Num)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0030(0x0028)(ZeroConstructor)
	TDelegate<void(const TArray<class AActor*>& AddActor, const TArray<class AActor*>& RemoveActor, const TArray<int32>& RemoveActorIds, int32 Num)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0058(0x0028)(ZeroConstructor)
	TDelegate<void(const TArray<class AActor*>& AddActor, const TArray<class AActor*>& RemoveActor, const TArray<int32>& RemoveActorIds, int32 Num)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0080(0x0028)(ZeroConstructor)
	TDelegate<void(bool bContent)>                K2Node_CreateDelegate_OutputDelegate_4;            // 0x00A8(0x0028)(ZeroConstructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x00D0(0x0028)(ZeroConstructor)
	TDelegate<void(bool bContent)>                K2Node_CreateDelegate_OutputDelegate_6;            // 0x00F8(0x0028)(ZeroConstructor)
	TArray<class AActor*>                         ___object_Variable;                                // 0x0120(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0133(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         ___int_Array_Index_Variable;                       // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bContent)>                K2Node_CreateDelegate_OutputDelegate_7;            // 0x0140(0x0028)(ZeroConstructor)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_181[0x7];                                      // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue;        // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bContent_4;                     // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bContent_3;                     // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A2[0x6];                                      // 0x01A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UKuroBooleanEventBinder*                CallFunc___AIC___ReturnValue;                      // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UKuroBooleanEventBinder*                CallFunc___AIC___ReturnValue_1;                    // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bContent_2;                     // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B9[0x7];                                      // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_CustomEvent_AddActor_2;                     // 0x01C0(0x0010)(ConstParm, ReferenceParm)
	TArray<class AActor*>                         K2Node_CustomEvent_RemoveActor_2;                  // 0x01D0(0x0010)(ConstParm, ReferenceParm)
	TArray<int32>                                 K2Node_CustomEvent_RemoveActorIds_2;               // 0x01E0(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_Num_2;                          // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F4[0x4];                                      // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UKuroPerceptionEventBinder*             CallFunc__________ReturnValue;                     // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_CustomEvent_AddActor_1;                     // 0x0200(0x0010)(ConstParm, ReferenceParm)
	TArray<class AActor*>                         K2Node_CustomEvent_RemoveActor_1;                  // 0x0210(0x0010)(ConstParm, ReferenceParm)
	TArray<int32>                                 K2Node_CustomEvent_RemoveActorIds_1;               // 0x0220(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_Num_1;                          // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234[0x4];                                      // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UKuroPerceptionEventBinder*             CallFunc__________ReturnValue_1;                   // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_CustomEvent_AddActor;                       // 0x0240(0x0010)(ConstParm, ReferenceParm)
	TArray<class AActor*>                         K2Node_CustomEvent_RemoveActor;                    // 0x0250(0x0010)(ConstParm, ReferenceParm)
	TArray<int32>                                 K2Node_CustomEvent_RemoveActorIds;                 // 0x0260(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_Num;                            // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274[0x4];                                      // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UKuroPerceptionEventBinder*             CallFunc__________ReturnValue_2;                   // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0281(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_282[0x2];                                      // 0x0282(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_Name;                           // 0x0284(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0291(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc______ReturnValue;                         // 0x0292(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_293[0x1];                                      // 0x0293(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMonsterType_ReturnValue;               // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ContainsTag_ReturnValue;                  // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_299[0x3];                                      // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ___int_Loop_Counter_Variable;                      // 0x029C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A1[0x3];                                      // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bContent_1;                     // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UKuroBooleanEventBinder*                CallFunc___AIC___ReturnValue_2;                    // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bContent)>                K2Node_CreateDelegate_OutputDelegate_8;            // 0x02C8(0x0028)(ZeroConstructor)
	bool                                          K2Node_CustomEvent_bContent;                       // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F1[0x7];                                      // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UKuroBooleanEventBinder*                CallFunc___AIC___ReturnValue_3;                    // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_D_K2_SetActorLocation_SweepHitResult;     // 0x0300(0x0094)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_D_K2_SetActorLocation_ReturnValue;        // 0x0394(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_395[0x3];                                      // 0x0395(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0398(0x0010)(ConstParm, ReferenceParm)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue_1;      // 0x03A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue_2;      // 0x03C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                     CallFunc_D_LineTraceMultiForObjects_OutHits;       // 0x03D8(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_D_LineTraceMultiForObjects_ReturnValue;   // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E9[0x3];                                      // 0x03E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x03EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F1[0x3];                                      // 0x03F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_Array_Get_Item_1;                         // 0x03F4(0x0094)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0488(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0489(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48A[0x2];                                      // 0x048A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x048C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0490(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0494(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x04A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x04AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x04B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C4[0x4];                                      // 0x04C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x04C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x04D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x04D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x04E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x04EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x04F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x04F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0500(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCollisionProfileName_ReturnValue;      // 0x050C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon) == 0x000008, "Wrong alignment on AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon");
static_assert(sizeof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon) == 0x000518, "Wrong size on AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, EntryPoint) == 0x000000, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::EntryPoint' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CreateDelegate_OutputDelegate_1) == 0x000030, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CreateDelegate_OutputDelegate_2) == 0x000058, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CreateDelegate_OutputDelegate_3) == 0x000080, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000A8, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000D0, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000F8, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, ___object_Variable) == 0x000120, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::___object_Variable' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000130, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000131, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_EqualEqual_NameName_ReturnValue_2) == 0x000132, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_EqualEqual_NameName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_BooleanOR_ReturnValue) == 0x000133, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, ___int_Array_Index_Variable) == 0x000134, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_BooleanOR_ReturnValue_1) == 0x000138, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CreateDelegate_OutputDelegate_7) == 0x000140, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_Event_DeltaSeconds) == 0x000168, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_K2_GetPawn_ReturnValue) == 0x000170, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_DynamicCast_AsTs_Base_Character) == 0x000178, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_DynamicCast_bSuccess) == 0x000180, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_D_K2_GetActorLocation_ReturnValue) == 0x000188, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_D_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CustomEvent_bContent_4) == 0x0001A0, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CustomEvent_bContent_4' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CustomEvent_bContent_3) == 0x0001A1, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CustomEvent_bContent_3' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc___AIC___ReturnValue) == 0x0001A8, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc___AIC___ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc___AIC___ReturnValue_1) == 0x0001B0, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc___AIC___ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CustomEvent_bContent_2) == 0x0001B8, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CustomEvent_bContent_2' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CustomEvent_AddActor_2) == 0x0001C0, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CustomEvent_AddActor_2' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CustomEvent_RemoveActor_2) == 0x0001D0, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CustomEvent_RemoveActor_2' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CustomEvent_RemoveActorIds_2) == 0x0001E0, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CustomEvent_RemoveActorIds_2' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CustomEvent_Num_2) == 0x0001F0, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CustomEvent_Num_2' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc__________ReturnValue) == 0x0001F8, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc__________ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CustomEvent_AddActor_1) == 0x000200, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CustomEvent_AddActor_1' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CustomEvent_RemoveActor_1) == 0x000210, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CustomEvent_RemoveActor_1' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CustomEvent_RemoveActorIds_1) == 0x000220, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CustomEvent_RemoveActorIds_1' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CustomEvent_Num_1) == 0x000230, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CustomEvent_Num_1' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc__________ReturnValue_1) == 0x000238, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc__________ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CustomEvent_AddActor) == 0x000240, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CustomEvent_AddActor' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CustomEvent_RemoveActor) == 0x000250, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CustomEvent_RemoveActor' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CustomEvent_RemoveActorIds) == 0x000260, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CustomEvent_RemoveActorIds' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CustomEvent_Num) == 0x000270, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CustomEvent_Num' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc__________ReturnValue_2) == 0x000278, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc__________ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_Greater_IntInt_ReturnValue) == 0x000280, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000281, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CustomEvent_Name) == 0x000284, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CustomEvent_Name' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000290, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_SwitchName_CmpSuccess) == 0x000291, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc______ReturnValue) == 0x000292, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc______ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_GetMonsterType_ReturnValue) == 0x000294, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_GetMonsterType_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_ContainsTag_ReturnValue) == 0x000298, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_ContainsTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, ___int_Loop_Counter_Variable) == 0x00029C, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_IsValid_ReturnValue_1) == 0x0002A0, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_Add_IntInt_ReturnValue) == 0x0002A4, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CustomEvent_bContent_1) == 0x0002A8, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CustomEvent_bContent_1' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc___AIC___ReturnValue_2) == 0x0002B0, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc___AIC___ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_Array_Get_Item) == 0x0002B8, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_SwitchInteger_CmpSuccess) == 0x0002C0, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CreateDelegate_OutputDelegate_8) == 0x0002C8, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_CustomEvent_bContent) == 0x0002F0, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_CustomEvent_bContent' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc___AIC___ReturnValue_3) == 0x0002F8, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc___AIC___ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_D_K2_SetActorLocation_SweepHitResult) == 0x000300, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_D_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_D_K2_SetActorLocation_ReturnValue) == 0x000394, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_D_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, K2Node_MakeArray_Array) == 0x000398, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_D_K2_GetActorLocation_ReturnValue_1) == 0x0003A8, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_D_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_D_K2_GetActorLocation_ReturnValue_2) == 0x0003C0, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_D_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_D_LineTraceMultiForObjects_OutHits) == 0x0003D8, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_D_LineTraceMultiForObjects_OutHits' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_D_LineTraceMultiForObjects_ReturnValue) == 0x0003E8, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_D_LineTraceMultiForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_Array_Length_ReturnValue) == 0x0003EC, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_Less_IntInt_ReturnValue) == 0x0003F0, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_Array_Get_Item_1) == 0x0003F4, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_BreakHitResult_bBlockingHit) == 0x000488, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_BreakHitResult_bInitialOverlap) == 0x000489, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_BreakHitResult_Time) == 0x00048C, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_BreakHitResult_Distance) == 0x000490, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_BreakHitResult_Location) == 0x000494, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_BreakHitResult_ImpactPoint) == 0x0004A0, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_BreakHitResult_Normal) == 0x0004AC, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_BreakHitResult_ImpactNormal) == 0x0004B8, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_BreakHitResult_PhysMat) == 0x0004C8, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_BreakHitResult_HitActor) == 0x0004D0, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_BreakHitResult_HitComponent) == 0x0004D8, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_BreakHitResult_HitBoneName) == 0x0004E0, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_BreakHitResult_HitItem) == 0x0004EC, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_BreakHitResult_FaceIndex) == 0x0004F0, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_BreakHitResult_TraceStart) == 0x0004F4, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_BreakHitResult_TraceEnd) == 0x000500, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon, CallFunc_GetCollisionProfileName_ReturnValue) == 0x00050C, "Member 'AIC_AICommon_C_ExecuteUbergraph_AIC_AICommon::CallFunc_GetCollisionProfileName_ReturnValue' has a wrong offset!");

// Function AIC_AICommon.AIC_AICommon_C.保底传送回调
// 0x0001 (0x0001 - 0x0000)
struct AIC_AICommon_C_保底传送回调 final
{
public:
	bool                                          bContent;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIC_AICommon_C_保底传送回调) == 0x000001, "Wrong alignment on AIC_AICommon_C_保底传送回调");
static_assert(sizeof(AIC_AICommon_C_保底传送回调) == 0x000001, "Wrong size on AIC_AICommon_C_保底传送回调");
static_assert(offsetof(AIC_AICommon_C_保底传送回调, bContent) == 0x000000, "Member 'AIC_AICommon_C_保底传送回调::bContent' has a wrong offset!");

// Function AIC_AICommon.AIC_AICommon_C.入战监听
// 0x0001 (0x0001 - 0x0000)
struct AIC_AICommon_C_入战监听 final
{
public:
	bool                                          bContent;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIC_AICommon_C_入战监听) == 0x000001, "Wrong alignment on AIC_AICommon_C_入战监听");
static_assert(sizeof(AIC_AICommon_C_入战监听) == 0x000001, "Wrong size on AIC_AICommon_C_入战监听");
static_assert(offsetof(AIC_AICommon_C_入战监听, bContent) == 0x000000, "Member 'AIC_AICommon_C_入战监听::bContent' has a wrong offset!");

// Function AIC_AICommon.AIC_AICommon_C.AicTriggerEvent
// 0x000C (0x000C - 0x0000)
struct AIC_AICommon_C_AicTriggerEvent final
{
public:
	class FName                                   Name_0;                                            // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIC_AICommon_C_AicTriggerEvent) == 0x000004, "Wrong alignment on AIC_AICommon_C_AicTriggerEvent");
static_assert(sizeof(AIC_AICommon_C_AicTriggerEvent) == 0x00000C, "Wrong size on AIC_AICommon_C_AicTriggerEvent");
static_assert(offsetof(AIC_AICommon_C_AicTriggerEvent, Name_0) == 0x000000, "Member 'AIC_AICommon_C_AicTriggerEvent::Name_0' has a wrong offset!");

// Function AIC_AICommon.AIC_AICommon_C.仇恨外受击
// 0x0038 (0x0038 - 0x0000)
struct AIC_AICommon_C_仇恨外受击 final
{
public:
	TArray<class AActor*>                         AddActor;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class AActor*>                         RemoveActor;                                       // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                 RemoveActorIds;                                    // 0x0020(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Num;                                               // 0x0030(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIC_AICommon_C_仇恨外受击) == 0x000008, "Wrong alignment on AIC_AICommon_C_仇恨外受击");
static_assert(sizeof(AIC_AICommon_C_仇恨外受击) == 0x000038, "Wrong size on AIC_AICommon_C_仇恨外受击");
static_assert(offsetof(AIC_AICommon_C_仇恨外受击, AddActor) == 0x000000, "Member 'AIC_AICommon_C_仇恨外受击::AddActor' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_仇恨外受击, RemoveActor) == 0x000010, "Member 'AIC_AICommon_C_仇恨外受击::RemoveActor' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_仇恨外受击, RemoveActorIds) == 0x000020, "Member 'AIC_AICommon_C_仇恨外受击::RemoveActorIds' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_仇恨外受击, Num) == 0x000030, "Member 'AIC_AICommon_C_仇恨外受击::Num' has a wrong offset!");

// Function AIC_AICommon.AIC_AICommon_C.感知监听
// 0x0038 (0x0038 - 0x0000)
struct AIC_AICommon_C_感知监听 final
{
public:
	TArray<class AActor*>                         AddActor;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class AActor*>                         RemoveActor;                                       // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                 RemoveActorIds;                                    // 0x0020(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Num;                                               // 0x0030(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIC_AICommon_C_感知监听) == 0x000008, "Wrong alignment on AIC_AICommon_C_感知监听");
static_assert(sizeof(AIC_AICommon_C_感知监听) == 0x000038, "Wrong size on AIC_AICommon_C_感知监听");
static_assert(offsetof(AIC_AICommon_C_感知监听, AddActor) == 0x000000, "Member 'AIC_AICommon_C_感知监听::AddActor' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_感知监听, RemoveActor) == 0x000010, "Member 'AIC_AICommon_C_感知监听::RemoveActor' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_感知监听, RemoveActorIds) == 0x000020, "Member 'AIC_AICommon_C_感知监听::RemoveActorIds' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_感知监听, Num) == 0x000030, "Member 'AIC_AICommon_C_感知监听::Num' has a wrong offset!");

// Function AIC_AICommon.AIC_AICommon_C.仇恨监听
// 0x0038 (0x0038 - 0x0000)
struct AIC_AICommon_C_仇恨监听 final
{
public:
	TArray<class AActor*>                         AddActor;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class AActor*>                         RemoveActor;                                       // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                 RemoveActorIds;                                    // 0x0020(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Num;                                               // 0x0030(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIC_AICommon_C_仇恨监听) == 0x000008, "Wrong alignment on AIC_AICommon_C_仇恨监听");
static_assert(sizeof(AIC_AICommon_C_仇恨监听) == 0x000038, "Wrong size on AIC_AICommon_C_仇恨监听");
static_assert(offsetof(AIC_AICommon_C_仇恨监听, AddActor) == 0x000000, "Member 'AIC_AICommon_C_仇恨监听::AddActor' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_仇恨监听, RemoveActor) == 0x000010, "Member 'AIC_AICommon_C_仇恨监听::RemoveActor' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_仇恨监听, RemoveActorIds) == 0x000020, "Member 'AIC_AICommon_C_仇恨监听::RemoveActorIds' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_仇恨监听, Num) == 0x000030, "Member 'AIC_AICommon_C_仇恨监听::Num' has a wrong offset!");

// Function AIC_AICommon.AIC_AICommon_C.通用战斗AI
// 0x0001 (0x0001 - 0x0000)
struct AIC_AICommon_C_通用战斗AI final
{
public:
	bool                                          bContent;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIC_AICommon_C_通用战斗AI) == 0x000001, "Wrong alignment on AIC_AICommon_C_通用战斗AI");
static_assert(sizeof(AIC_AICommon_C_通用战斗AI) == 0x000001, "Wrong size on AIC_AICommon_C_通用战斗AI");
static_assert(offsetof(AIC_AICommon_C_通用战斗AI, bContent) == 0x000000, "Member 'AIC_AICommon_C_通用战斗AI::bContent' has a wrong offset!");

// Function AIC_AICommon.AIC_AICommon_C.默认感知保底事件
// 0x0001 (0x0001 - 0x0000)
struct AIC_AICommon_C_默认感知保底事件 final
{
public:
	bool                                          bContent;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIC_AICommon_C_默认感知保底事件) == 0x000001, "Wrong alignment on AIC_AICommon_C_默认感知保底事件");
static_assert(sizeof(AIC_AICommon_C_默认感知保底事件) == 0x000001, "Wrong size on AIC_AICommon_C_默认感知保底事件");
static_assert(offsetof(AIC_AICommon_C_默认感知保底事件, bContent) == 0x000000, "Member 'AIC_AICommon_C_默认感知保底事件::bContent' has a wrong offset!");

// Function AIC_AICommon.AIC_AICommon_C.通用行为树条件
// 0x0001 (0x0001 - 0x0000)
struct AIC_AICommon_C_通用行为树条件 final
{
public:
	bool                                          bContent;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIC_AICommon_C_通用行为树条件) == 0x000001, "Wrong alignment on AIC_AICommon_C_通用行为树条件");
static_assert(sizeof(AIC_AICommon_C_通用行为树条件) == 0x000001, "Wrong size on AIC_AICommon_C_通用行为树条件");
static_assert(offsetof(AIC_AICommon_C_通用行为树条件, bContent) == 0x000000, "Member 'AIC_AICommon_C_通用行为树条件::bContent' has a wrong offset!");

// Function AIC_AICommon.AIC_AICommon_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct AIC_AICommon_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIC_AICommon_C_ReceiveTick) == 0x000004, "Wrong alignment on AIC_AICommon_C_ReceiveTick");
static_assert(sizeof(AIC_AICommon_C_ReceiveTick) == 0x000004, "Wrong size on AIC_AICommon_C_ReceiveTick");
static_assert(offsetof(AIC_AICommon_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'AIC_AICommon_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function AIC_AICommon.AIC_AICommon_C.状态切换函数
// 0x0030 (0x0030 - 0x0000)
struct AIC_AICommon_C_状态切换函数 final
{
public:
	class UObject*                                角色;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharacterState                               老状态;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharacterState                               新状态;                                            // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          主控;                                              // 0x000A(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                角色返回;                                          // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharacterState                               老状态返回;                                        // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharacterState                               新状态返回;                                        // 0x0019(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          主控返回;                                          // 0x001A(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          主控临时;                                          // 0x001B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharacterState                               新状态临时;                                        // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharacterState                               老状态临时;                                        // 0x001D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                角色临时;                                          // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIC_AICommon_C_状态切换函数) == 0x000008, "Wrong alignment on AIC_AICommon_C_状态切换函数");
static_assert(sizeof(AIC_AICommon_C_状态切换函数) == 0x000030, "Wrong size on AIC_AICommon_C_状态切换函数");
static_assert(offsetof(AIC_AICommon_C_状态切换函数, 角色) == 0x000000, "Member 'AIC_AICommon_C_状态切换函数::角色' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_状态切换函数, 老状态) == 0x000008, "Member 'AIC_AICommon_C_状态切换函数::老状态' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_状态切换函数, 新状态) == 0x000009, "Member 'AIC_AICommon_C_状态切换函数::新状态' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_状态切换函数, 主控) == 0x00000A, "Member 'AIC_AICommon_C_状态切换函数::主控' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_状态切换函数, 角色返回) == 0x000010, "Member 'AIC_AICommon_C_状态切换函数::角色返回' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_状态切换函数, 老状态返回) == 0x000018, "Member 'AIC_AICommon_C_状态切换函数::老状态返回' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_状态切换函数, 新状态返回) == 0x000019, "Member 'AIC_AICommon_C_状态切换函数::新状态返回' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_状态切换函数, 主控返回) == 0x00001A, "Member 'AIC_AICommon_C_状态切换函数::主控返回' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_状态切换函数, 主控临时) == 0x00001B, "Member 'AIC_AICommon_C_状态切换函数::主控临时' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_状态切换函数, 新状态临时) == 0x00001C, "Member 'AIC_AICommon_C_状态切换函数::新状态临时' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_状态切换函数, 老状态临时) == 0x00001D, "Member 'AIC_AICommon_C_状态切换函数::老状态临时' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_状态切换函数, 角色临时) == 0x000020, "Member 'AIC_AICommon_C_状态切换函数::角色临时' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_状态切换函数, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'AIC_AICommon_C_状态切换函数::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function AIC_AICommon.AIC_AICommon_C.感知到仇恨目标
// 0x0020 (0x0020 - 0x0000)
struct AIC_AICommon_C_感知到仇恨目标 final
{
public:
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue;        // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ContainsTag_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetActorLookAtWithContext_ReturnValue;    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIC_AICommon_C_感知到仇恨目标) == 0x000008, "Wrong alignment on AIC_AICommon_C_感知到仇恨目标");
static_assert(sizeof(AIC_AICommon_C_感知到仇恨目标) == 0x000020, "Wrong size on AIC_AICommon_C_感知到仇恨目标");
static_assert(offsetof(AIC_AICommon_C_感知到仇恨目标, CallFunc_D_K2_GetActorLocation_ReturnValue) == 0x000000, "Member 'AIC_AICommon_C_感知到仇恨目标::CallFunc_D_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_感知到仇恨目标, CallFunc_ContainsTag_ReturnValue) == 0x000018, "Member 'AIC_AICommon_C_感知到仇恨目标::CallFunc_ContainsTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_感知到仇恨目标, CallFunc_SetActorLookAtWithContext_ReturnValue) == 0x000019, "Member 'AIC_AICommon_C_感知到仇恨目标::CallFunc_SetActorLookAtWithContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_感知到仇恨目标, K2Node_SwitchInteger_CmpSuccess) == 0x00001A, "Member 'AIC_AICommon_C_感知到仇恨目标::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function AIC_AICommon.AIC_AICommon_C.设置区域监听对象
// 0x0020 (0x0020 - 0x0000)
struct AIC_AICommon_C_设置区域监听对象 final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetFormationControlledRoles_ReturnValue;  // 0x0010(0x0010)(ReferenceParm)
};
static_assert(alignof(AIC_AICommon_C_设置区域监听对象) == 0x000008, "Wrong alignment on AIC_AICommon_C_设置区域监听对象");
static_assert(sizeof(AIC_AICommon_C_设置区域监听对象) == 0x000020, "Wrong size on AIC_AICommon_C_设置区域监听对象");
static_assert(offsetof(AIC_AICommon_C_设置区域监听对象, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'AIC_AICommon_C_设置区域监听对象::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_设置区域监听对象, CallFunc_Array_Add_ReturnValue) == 0x000004, "Member 'AIC_AICommon_C_设置区域监听对象::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_设置区域监听对象, CallFunc_Array_Contains_ReturnValue) == 0x000008, "Member 'AIC_AICommon_C_设置区域监听对象::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_设置区域监听对象, CallFunc_GetFormationControlledRoles_ReturnValue) == 0x000010, "Member 'AIC_AICommon_C_设置区域监听对象::CallFunc_GetFormationControlledRoles_ReturnValue' has a wrong offset!");

// Function AIC_AICommon.AIC_AICommon_C.区域
// 0x0050 (0x0050 - 0x0000)
struct AIC_AICommon_C_区域 final
{
public:
	TDelegate<void()>                             换人监听;                                          // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                CallFunc_GetBpEventManager_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_EventManager_C*                     K2Node_DynamicCast_AsBP_Event_Manager;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UKuroRegionDetectComponent*             CallFunc_GetComponentByClass_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIC_AICommon_C_区域) == 0x000008, "Wrong alignment on AIC_AICommon_C_区域");
static_assert(sizeof(AIC_AICommon_C_区域) == 0x000050, "Wrong size on AIC_AICommon_C_区域");
static_assert(offsetof(AIC_AICommon_C_区域, 换人监听) == 0x000000, "Member 'AIC_AICommon_C_区域::换人监听' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_区域, CallFunc_GetBpEventManager_ReturnValue) == 0x000028, "Member 'AIC_AICommon_C_区域::CallFunc_GetBpEventManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_区域, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'AIC_AICommon_C_区域::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_区域, K2Node_DynamicCast_AsBP_Event_Manager) == 0x000038, "Member 'AIC_AICommon_C_区域::K2Node_DynamicCast_AsBP_Event_Manager' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_区域, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'AIC_AICommon_C_区域::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_区域, CallFunc_GetComponentByClass_ReturnValue) == 0x000048, "Member 'AIC_AICommon_C_区域::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function AIC_AICommon.AIC_AICommon_C.区域监听事件函数
// 0x0040 (0x0040 - 0x0000)
struct AIC_AICommon_C_区域监听事件函数 final
{
public:
	class FString                                 区域名称;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(bool IsInRegion, class AActor* Target)> 事件;                                              // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UKuroRegionEventBinder*                 CallFunc_GetRegionEvent_ReturnValue;               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIC_AICommon_C_区域监听事件函数) == 0x000008, "Wrong alignment on AIC_AICommon_C_区域监听事件函数");
static_assert(sizeof(AIC_AICommon_C_区域监听事件函数) == 0x000040, "Wrong size on AIC_AICommon_C_区域监听事件函数");
static_assert(offsetof(AIC_AICommon_C_区域监听事件函数, 区域名称) == 0x000000, "Member 'AIC_AICommon_C_区域监听事件函数::区域名称' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_区域监听事件函数, 事件) == 0x000010, "Member 'AIC_AICommon_C_区域监听事件函数::事件' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_区域监听事件函数, CallFunc_GetRegionEvent_ReturnValue) == 0x000038, "Member 'AIC_AICommon_C_区域监听事件函数::CallFunc_GetRegionEvent_ReturnValue' has a wrong offset!");

// Function AIC_AICommon.AIC_AICommon_C.角色怪射线检测
// 0x01A8 (0x01A8 - 0x0000)
struct AIC_AICommon_C_角色怪射线检测 final
{
public:
	bool                                          可以钩锁;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ___int_Array_Index_Variable;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         ___object_Variable;                                // 0x0010(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ContainsTag_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue;        // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue_1;      // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FHitResult>                     CallFunc_D_LineTraceMultiForObjects_OutHits;       // 0x0068(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_D_LineTraceMultiForObjects_ReturnValue;   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_Array_Get_Item;                           // 0x0084(0x0094)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11A[0x2];                                      // 0x011A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0124(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0170(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0184(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0190(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCollisionProfileName_ReturnValue;      // 0x019C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIC_AICommon_C_角色怪射线检测) == 0x000008, "Wrong alignment on AIC_AICommon_C_角色怪射线检测");
static_assert(sizeof(AIC_AICommon_C_角色怪射线检测) == 0x0001A8, "Wrong size on AIC_AICommon_C_角色怪射线检测");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, 可以钩锁) == 0x000000, "Member 'AIC_AICommon_C_角色怪射线检测::可以钩锁' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, ___int_Array_Index_Variable) == 0x000004, "Member 'AIC_AICommon_C_角色怪射线检测::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, ___int_Loop_Counter_Variable) == 0x000008, "Member 'AIC_AICommon_C_角色怪射线检测::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, ___object_Variable) == 0x000010, "Member 'AIC_AICommon_C_角色怪射线检测::___object_Variable' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_ContainsTag_ReturnValue) == 0x000021, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_ContainsTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_D_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_D_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_D_K2_GetActorLocation_ReturnValue_1) == 0x000040, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_D_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, K2Node_MakeArray_Array) == 0x000058, "Member 'AIC_AICommon_C_角色怪射线检测::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_D_LineTraceMultiForObjects_OutHits) == 0x000068, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_D_LineTraceMultiForObjects_OutHits' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_D_LineTraceMultiForObjects_ReturnValue) == 0x000078, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_D_LineTraceMultiForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_Array_Length_ReturnValue) == 0x00007C, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_Array_Get_Item) == 0x000084, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_BreakHitResult_bBlockingHit) == 0x000118, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_BreakHitResult_bInitialOverlap) == 0x000119, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_BreakHitResult_Time) == 0x00011C, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_BreakHitResult_Distance) == 0x000120, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_BreakHitResult_Location) == 0x000124, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_BreakHitResult_ImpactPoint) == 0x000130, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_BreakHitResult_Normal) == 0x00013C, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_BreakHitResult_ImpactNormal) == 0x000148, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_BreakHitResult_PhysMat) == 0x000158, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_BreakHitResult_HitActor) == 0x000160, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_BreakHitResult_HitComponent) == 0x000168, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_BreakHitResult_HitBoneName) == 0x000170, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_BreakHitResult_HitItem) == 0x00017C, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_BreakHitResult_FaceIndex) == 0x000180, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_BreakHitResult_TraceStart) == 0x000184, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_BreakHitResult_TraceEnd) == 0x000190, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_角色怪射线检测, CallFunc_GetCollisionProfileName_ReturnValue) == 0x00019C, "Member 'AIC_AICommon_C_角色怪射线检测::CallFunc_GetCollisionProfileName_ReturnValue' has a wrong offset!");

// Function AIC_AICommon.AIC_AICommon_C.通用关卡变量切换监听
// 0x0070 (0x0070 - 0x0000)
struct AIC_AICommon_C_通用关卡变量切换监听 final
{
public:
	EAiLevelVarSource                             关卡变量监听类型;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 关卡变量名称;                                      // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         关卡副本行为树id;                                  // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bContent)>                事件;                                              // 0x0020(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FSAiLevelVar                           K2Node_MakeStruct_SAiLevelVar;                     // 0x0048(0x0020)(ZeroConstructor, HasGetValueTypeHash)
	class UKuroBooleanEventBinder*                CallFunc_SpawnObject_ReturnValue;                  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIC_AICommon_C_通用关卡变量切换监听) == 0x000008, "Wrong alignment on AIC_AICommon_C_通用关卡变量切换监听");
static_assert(sizeof(AIC_AICommon_C_通用关卡变量切换监听) == 0x000070, "Wrong size on AIC_AICommon_C_通用关卡变量切换监听");
static_assert(offsetof(AIC_AICommon_C_通用关卡变量切换监听, 关卡变量监听类型) == 0x000000, "Member 'AIC_AICommon_C_通用关卡变量切换监听::关卡变量监听类型' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_通用关卡变量切换监听, 关卡变量名称) == 0x000008, "Member 'AIC_AICommon_C_通用关卡变量切换监听::关卡变量名称' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_通用关卡变量切换监听, 关卡副本行为树id) == 0x000018, "Member 'AIC_AICommon_C_通用关卡变量切换监听::关卡副本行为树id' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_通用关卡变量切换监听, 事件) == 0x000020, "Member 'AIC_AICommon_C_通用关卡变量切换监听::事件' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_通用关卡变量切换监听, K2Node_MakeStruct_SAiLevelVar) == 0x000048, "Member 'AIC_AICommon_C_通用关卡变量切换监听::K2Node_MakeStruct_SAiLevelVar' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_通用关卡变量切换监听, CallFunc_SpawnObject_ReturnValue) == 0x000068, "Member 'AIC_AICommon_C_通用关卡变量切换监听::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function AIC_AICommon.AIC_AICommon_C.状态切换时
// 0x0018 (0x0018 - 0x0000)
struct AIC_AICommon_C_状态切换时 final
{
public:
	ECharacterState                               oldState;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharacterState                               newState;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isAutonomousProxy;                                 // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc____________;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharacterState                               CallFunc_____________;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharacterState                               CallFunc______________1;                           // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_____________1;                            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AIC_AICommon_C_状态切换时) == 0x000008, "Wrong alignment on AIC_AICommon_C_状态切换时");
static_assert(sizeof(AIC_AICommon_C_状态切换时) == 0x000018, "Wrong size on AIC_AICommon_C_状态切换时");
static_assert(offsetof(AIC_AICommon_C_状态切换时, oldState) == 0x000000, "Member 'AIC_AICommon_C_状态切换时::oldState' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_状态切换时, newState) == 0x000001, "Member 'AIC_AICommon_C_状态切换时::newState' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_状态切换时, isAutonomousProxy) == 0x000002, "Member 'AIC_AICommon_C_状态切换时::isAutonomousProxy' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_状态切换时, CallFunc____________) == 0x000008, "Member 'AIC_AICommon_C_状态切换时::CallFunc____________' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_状态切换时, CallFunc_____________) == 0x000010, "Member 'AIC_AICommon_C_状态切换时::CallFunc_____________' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_状态切换时, CallFunc______________1) == 0x000011, "Member 'AIC_AICommon_C_状态切换时::CallFunc______________1' has a wrong offset!");
static_assert(offsetof(AIC_AICommon_C_状态切换时, CallFunc_____________1) == 0x000012, "Member 'AIC_AICommon_C_状态切换时::CallFunc_____________1' has a wrong offset!");

}

