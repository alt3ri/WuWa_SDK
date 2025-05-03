#pragma once
// Package: BP_KuroSkeletalMeshDestructibleActor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C.ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor
// 0x0160 (0x0160 - 0x0000)
struct BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue;        // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_VectorDoubleToVector_ReturnValue;    // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransformDouble                       CallFunc_D_GetRelativeTransform_ReturnValue;       // 0x0040(0x0040)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_D_K2_SetRelativeTransform_SweepHitResult; // 0x0080(0x0094)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                K2Node_Event_HurtDirection;                        // 0x0114(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_HurtOrigin;                           // 0x0120(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Impulse;                              // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsZeroImpulse;                        // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_131[0x3];                                      // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0134(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_Conv_VectorToVectorDouble_ReturnValue;    // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159[0x3];                                      // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor) == 0x000010, "Wrong alignment on BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor");
static_assert(sizeof(BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor) == 0x000160, "Wrong size on BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor, EntryPoint) == 0x000000, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor, CallFunc_D_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor::CallFunc_D_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor, CallFunc_Conv_VectorDoubleToVector_ReturnValue) == 0x000020, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor::CallFunc_Conv_VectorDoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor, CallFunc_Add_VectorVector_ReturnValue) == 0x00002C, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor, CallFunc_D_GetRelativeTransform_ReturnValue) == 0x000040, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor::CallFunc_D_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor, CallFunc_D_K2_SetRelativeTransform_SweepHitResult) == 0x000080, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor::CallFunc_D_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor, K2Node_Event_HurtDirection) == 0x000114, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor::K2Node_Event_HurtDirection' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor, K2Node_Event_HurtOrigin) == 0x000120, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor::K2Node_Event_HurtOrigin' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor, K2Node_Event_Impulse) == 0x00012C, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor::K2Node_Event_Impulse' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor, K2Node_Event_IsZeroImpulse) == 0x000130, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor::K2Node_Event_IsZeroImpulse' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000134, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor, CallFunc_Conv_VectorToVectorDouble_ReturnValue) == 0x000140, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor::CallFunc_Conv_VectorToVectorDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor, CallFunc_BooleanOR_ReturnValue) == 0x000158, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00015C, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ExecuteUbergraph_BP_KuroSkeletalMeshDestructibleActor::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C.PlayDestruction
// 0x0020 (0x0020 - 0x0000)
struct BP_KuroSkeletalMeshDestructibleActor_C_PlayDestruction final
{
public:
	struct FVector                                HurtDirection;                                     // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HurtOrigin_0;                                      // 0x000C(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Impulse_0;                                         // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsZeroImpulse;                                     // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KuroSkeletalMeshDestructibleActor_C_PlayDestruction) == 0x000004, "Wrong alignment on BP_KuroSkeletalMeshDestructibleActor_C_PlayDestruction");
static_assert(sizeof(BP_KuroSkeletalMeshDestructibleActor_C_PlayDestruction) == 0x000020, "Wrong size on BP_KuroSkeletalMeshDestructibleActor_C_PlayDestruction");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_PlayDestruction, HurtDirection) == 0x000000, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_PlayDestruction::HurtDirection' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_PlayDestruction, HurtOrigin_0) == 0x00000C, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_PlayDestruction::HurtOrigin_0' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_PlayDestruction, Impulse_0) == 0x000018, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_PlayDestruction::Impulse_0' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_PlayDestruction, IsZeroImpulse) == 0x00001C, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_PlayDestruction::IsZeroImpulse' has a wrong offset!");

// Function BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C.SetStaticMeshChunkListVisiblity
// 0x0028 (0x0028 - 0x0000)
struct BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity final
{
public:
	bool                                          visiblity;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ___int_Array_Index_Variable;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity) == 0x000008, "Wrong alignment on BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity");
static_assert(sizeof(BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity) == 0x000028, "Wrong size on BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity, visiblity) == 0x000000, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity::visiblity' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity, ___int_Array_Index_Variable) == 0x000004, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity, ___int_Loop_Counter_Variable) == 0x000008, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListVisiblity::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C.SetStaticMeshChunkListPhysicsSimulation
// 0x0028 (0x0028 - 0x0000)
struct BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation final
{
public:
	bool                                          enablePhysicsSimulation;                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ___int_Array_Index_Variable;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation) == 0x000008, "Wrong alignment on BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation");
static_assert(sizeof(BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation) == 0x000028, "Wrong size on BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation, enablePhysicsSimulation) == 0x000000, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation::enablePhysicsSimulation' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation, ___int_Array_Index_Variable) == 0x000004, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation, ___int_Loop_Counter_Variable) == 0x000008, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_SetStaticMeshChunkListPhysicsSimulation::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C.UpdateProxyMesh
// 0x0003 (0x0003 - 0x0000)
struct BP_KuroSkeletalMeshDestructibleActor_C_UpdateProxyMesh final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KuroSkeletalMeshDestructibleActor_C_UpdateProxyMesh) == 0x000001, "Wrong alignment on BP_KuroSkeletalMeshDestructibleActor_C_UpdateProxyMesh");
static_assert(sizeof(BP_KuroSkeletalMeshDestructibleActor_C_UpdateProxyMesh) == 0x000003, "Wrong size on BP_KuroSkeletalMeshDestructibleActor_C_UpdateProxyMesh");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_UpdateProxyMesh, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_UpdateProxyMesh::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_UpdateProxyMesh, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000001, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_UpdateProxyMesh::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_UpdateProxyMesh, CallFunc_SetStaticMesh_ReturnValue) == 0x000002, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_UpdateProxyMesh::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");

// Function BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C.PreviewFullDestructible
// 0x0007 (0x0007 - 0x0000)
struct BP_KuroSkeletalMeshDestructibleActor_C_PreviewFullDestructible final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsGameRunning_ReturnValue;                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue_1;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KuroSkeletalMeshDestructibleActor_C_PreviewFullDestructible) == 0x000001, "Wrong alignment on BP_KuroSkeletalMeshDestructibleActor_C_PreviewFullDestructible");
static_assert(sizeof(BP_KuroSkeletalMeshDestructibleActor_C_PreviewFullDestructible) == 0x000007, "Wrong size on BP_KuroSkeletalMeshDestructibleActor_C_PreviewFullDestructible");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_PreviewFullDestructible, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_PreviewFullDestructible::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_PreviewFullDestructible, CallFunc_SetStaticMesh_ReturnValue) == 0x000001, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_PreviewFullDestructible::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_PreviewFullDestructible, CallFunc_IsGameRunning_ReturnValue) == 0x000002, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_PreviewFullDestructible::CallFunc_IsGameRunning_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_PreviewFullDestructible, CallFunc_Not_PreBool_ReturnValue) == 0x000003, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_PreviewFullDestructible::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_PreviewFullDestructible, CallFunc_SetStaticMesh_ReturnValue_1) == 0x000004, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_PreviewFullDestructible::CallFunc_SetStaticMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_PreviewFullDestructible, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000005, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_PreviewFullDestructible::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_PreviewFullDestructible, CallFunc_BooleanAND_ReturnValue) == 0x000006, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_PreviewFullDestructible::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C.ShowStaticMeshList
// 0x0020 (0x0020 - 0x0000)
struct BP_KuroSkeletalMeshDestructibleActor_C_ShowStaticMeshList final
{
public:
	int32                                         ___int_Array_Index_Variable;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KuroSkeletalMeshDestructibleActor_C_ShowStaticMeshList) == 0x000008, "Wrong alignment on BP_KuroSkeletalMeshDestructibleActor_C_ShowStaticMeshList");
static_assert(sizeof(BP_KuroSkeletalMeshDestructibleActor_C_ShowStaticMeshList) == 0x000020, "Wrong size on BP_KuroSkeletalMeshDestructibleActor_C_ShowStaticMeshList");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ShowStaticMeshList, ___int_Array_Index_Variable) == 0x000000, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ShowStaticMeshList::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ShowStaticMeshList, ___int_Loop_Counter_Variable) == 0x000004, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ShowStaticMeshList::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ShowStaticMeshList, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ShowStaticMeshList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ShowStaticMeshList, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ShowStaticMeshList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ShowStaticMeshList, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ShowStaticMeshList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_ShowStaticMeshList, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_ShowStaticMeshList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_KuroSkeletalMeshDestructibleActor.BP_KuroSkeletalMeshDestructibleActor_C.HideStaticMeshList
// 0x0028 (0x0028 - 0x0000)
struct BP_KuroSkeletalMeshDestructibleActor_C_HideStaticMeshList final
{
public:
	int32                                         ___int_Array_Index_Variable;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KuroSkeletalMeshDestructibleActor_C_HideStaticMeshList) == 0x000008, "Wrong alignment on BP_KuroSkeletalMeshDestructibleActor_C_HideStaticMeshList");
static_assert(sizeof(BP_KuroSkeletalMeshDestructibleActor_C_HideStaticMeshList) == 0x000028, "Wrong size on BP_KuroSkeletalMeshDestructibleActor_C_HideStaticMeshList");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_HideStaticMeshList, ___int_Array_Index_Variable) == 0x000000, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_HideStaticMeshList::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_HideStaticMeshList, ___int_Loop_Counter_Variable) == 0x000004, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_HideStaticMeshList::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_HideStaticMeshList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_HideStaticMeshList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_HideStaticMeshList, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_HideStaticMeshList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_HideStaticMeshList, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_HideStaticMeshList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_HideStaticMeshList, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_HideStaticMeshList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_KuroSkeletalMeshDestructibleActor_C_HideStaticMeshList, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'BP_KuroSkeletalMeshDestructibleActor_C_HideStaticMeshList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

