#pragma once
// Package: KFC_AICommon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SPointsRow_structs.hpp"
#include "SNpcPathPoint_structs.hpp"
#include "ECamp_structs.hpp"
#include "ERelation_structs.hpp"
#include "SCamp_structs.hpp"


namespace SDK::Params
{

// Function KFC_AICommon.KFC_AICommon_C.获取自身距离目标角度
// 0x00A8 (0x00A8 - 0x0000)
struct KFC_AICommon_C_获取自身距离目标角度 final
{
public:
	class AActor*                                 目标角色;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 原点角色;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         返回角度;                                          // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue;        // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue_1;      // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_D_Subtract_VectorVector_ReturnValue;      // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_VectorDoubleToVector_ReturnValue;    // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue_1;                     // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DegAcos_ReturnValue;                      // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_获取自身距离目标角度) == 0x000008, "Wrong alignment on KFC_AICommon_C_获取自身距离目标角度");
static_assert(sizeof(KFC_AICommon_C_获取自身距离目标角度) == 0x0000A8, "Wrong size on KFC_AICommon_C_获取自身距离目标角度");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度, 目标角色) == 0x000000, "Member 'KFC_AICommon_C_获取自身距离目标角度::目标角色' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度, 原点角色) == 0x000008, "Member 'KFC_AICommon_C_获取自身距离目标角度::原点角色' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度, __WorldContext) == 0x000010, "Member 'KFC_AICommon_C_获取自身距离目标角度::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度, 返回角度) == 0x000018, "Member 'KFC_AICommon_C_获取自身距离目标角度::返回角度' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度, CallFunc_D_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'KFC_AICommon_C_获取自身距离目标角度::CallFunc_D_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度, CallFunc_D_K2_GetActorLocation_ReturnValue_1) == 0x000038, "Member 'KFC_AICommon_C_获取自身距离目标角度::CallFunc_D_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度, CallFunc_GetActorForwardVector_ReturnValue) == 0x000050, "Member 'KFC_AICommon_C_获取自身距离目标角度::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度, CallFunc_D_Subtract_VectorVector_ReturnValue) == 0x000060, "Member 'KFC_AICommon_C_获取自身距离目标角度::CallFunc_D_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度, CallFunc_Normal_ReturnValue) == 0x000078, "Member 'KFC_AICommon_C_获取自身距离目标角度::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度, CallFunc_Conv_VectorDoubleToVector_ReturnValue) == 0x000084, "Member 'KFC_AICommon_C_获取自身距离目标角度::CallFunc_Conv_VectorDoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度, CallFunc_Normal_ReturnValue_1) == 0x000090, "Member 'KFC_AICommon_C_获取自身距离目标角度::CallFunc_Normal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度, CallFunc_Dot_VectorVector_ReturnValue) == 0x00009C, "Member 'KFC_AICommon_C_获取自身距离目标角度::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度, CallFunc_DegAcos_ReturnValue) == 0x0000A0, "Member 'KFC_AICommon_C_获取自身距离目标角度::CallFunc_DegAcos_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.目标距离计算
// 0x01C8 (0x01C8 - 0x0000)
struct KFC_AICommon_C_目标距离计算 final
{
public:
	class AActor*                                 AI对象;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 目标对象;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         到目标的距离;                                      // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          返回是否超过目标;                                  // 0x001C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          是否超过目标;                                      // 0x001D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          上一帧位置;                                        // 0x0020(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         距离私有变量;                                      // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          目标位置向量;                                      // 0x0040(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue;        // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue_1;      // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_X;                      // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Y;                      // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Z;                      // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_X_1;                    // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Y_1;                    // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Z_1;                    // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_MakeVectorDouble_ReturnValue;             // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_MakeVectorDouble_ReturnValue_1;           // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue_2;      // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue_3;      // 0x0100(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_X_2;                    // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Y_2;                    // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Z_2;                    // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_X_3;                    // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Y_3;                    // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Z_3;                    // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_MakeVectorDouble_ReturnValue_2;           // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_MakeVectorDouble_ReturnValue_3;           // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDistanceTo_ReturnValue;                // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17C[0x4];                                      // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_D_Subtract_VectorVector_ReturnValue;      // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_Subtract_VectorVector_ReturnValue_1;    // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_D_Dot_VectorVector_ReturnValue;           // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_D_DegAcos_ReturnValue;                    // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_D_Greater_FloatFloat_ReturnValue;         // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KFC_AICommon_C_目标距离计算) == 0x000008, "Wrong alignment on KFC_AICommon_C_目标距离计算");
static_assert(sizeof(KFC_AICommon_C_目标距离计算) == 0x0001C8, "Wrong size on KFC_AICommon_C_目标距离计算");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, AI对象) == 0x000000, "Member 'KFC_AICommon_C_目标距离计算::AI对象' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, 目标对象) == 0x000008, "Member 'KFC_AICommon_C_目标距离计算::目标对象' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, __WorldContext) == 0x000010, "Member 'KFC_AICommon_C_目标距离计算::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, 到目标的距离) == 0x000018, "Member 'KFC_AICommon_C_目标距离计算::到目标的距离' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, 返回是否超过目标) == 0x00001C, "Member 'KFC_AICommon_C_目标距离计算::返回是否超过目标' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, 是否超过目标) == 0x00001D, "Member 'KFC_AICommon_C_目标距离计算::是否超过目标' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, 上一帧位置) == 0x000020, "Member 'KFC_AICommon_C_目标距离计算::上一帧位置' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, 距离私有变量) == 0x000038, "Member 'KFC_AICommon_C_目标距离计算::距离私有变量' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, 目标位置向量) == 0x000040, "Member 'KFC_AICommon_C_目标距离计算::目标位置向量' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_D_K2_GetActorLocation_ReturnValue) == 0x000058, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_D_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_D_K2_GetActorLocation_ReturnValue_1) == 0x000070, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_D_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_BreakVectorDouble_X) == 0x000088, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_BreakVectorDouble_X' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_BreakVectorDouble_Y) == 0x000090, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_BreakVectorDouble_Y' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_BreakVectorDouble_Z) == 0x000098, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_BreakVectorDouble_Z' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_BreakVectorDouble_X_1) == 0x0000A0, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_BreakVectorDouble_X_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_BreakVectorDouble_Y_1) == 0x0000A8, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_BreakVectorDouble_Y_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_BreakVectorDouble_Z_1) == 0x0000B0, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_BreakVectorDouble_Z_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_MakeVectorDouble_ReturnValue) == 0x0000B8, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_MakeVectorDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_MakeVectorDouble_ReturnValue_1) == 0x0000D0, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_MakeVectorDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_D_K2_GetActorLocation_ReturnValue_2) == 0x0000E8, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_D_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_D_K2_GetActorLocation_ReturnValue_3) == 0x000100, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_D_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_BreakVectorDouble_X_2) == 0x000118, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_BreakVectorDouble_X_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_BreakVectorDouble_Y_2) == 0x000120, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_BreakVectorDouble_Y_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_BreakVectorDouble_Z_2) == 0x000128, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_BreakVectorDouble_Z_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_BreakVectorDouble_X_3) == 0x000130, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_BreakVectorDouble_X_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_BreakVectorDouble_Y_3) == 0x000138, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_BreakVectorDouble_Y_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_BreakVectorDouble_Z_3) == 0x000140, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_BreakVectorDouble_Z_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_MakeVectorDouble_ReturnValue_2) == 0x000148, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_MakeVectorDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_MakeVectorDouble_ReturnValue_3) == 0x000160, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_MakeVectorDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_GetDistanceTo_ReturnValue) == 0x000178, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_GetDistanceTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_D_Subtract_VectorVector_ReturnValue) == 0x000180, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_D_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_D_Subtract_VectorVector_ReturnValue_1) == 0x000198, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_D_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_D_Dot_VectorVector_ReturnValue) == 0x0001B0, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_D_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_D_DegAcos_ReturnValue) == 0x0001B8, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_D_DegAcos_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_目标距离计算, CallFunc_D_Greater_FloatFloat_ReturnValue) == 0x0001C0, "Member 'KFC_AICommon_C_目标距离计算::CallFunc_D_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.更新动画属性（性能消耗大仅限进行测试开发）
// 0x0090 (0x0090 - 0x0000)
struct KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_ final
{
public:
	class ACharacter*                             As_Base_Character;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                速度向量;                                          // 0x0010(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                加速度;                                            // 0x001C(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                移动输入向量;                                      // 0x0028(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          是否正在移动;                                      // 0x0034(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          是否有移动输入;                                    // 0x0035(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         速度;                                              // 0x0038(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         瞄准旋转速率;                                      // 0x003C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 移动模式;                                          // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     TsBaseChar;                                        // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAimYawRate_ReturnValue;                // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSpeed_ReturnValue;                     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetAcceleration_ReturnValue;              // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMoveInput_ReturnValue;                 // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMoving_ReturnValue;                     // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72[0x2];                                       // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetCurrentAcceleration_ReturnValue;       // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_) == 0x000008, "Wrong alignment on KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_");
static_assert(sizeof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_) == 0x000090, "Wrong size on KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, As_Base_Character) == 0x000000, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::As_Base_Character' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, __WorldContext) == 0x000008, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, 速度向量) == 0x000010, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::速度向量' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, 加速度) == 0x00001C, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::加速度' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, 移动输入向量) == 0x000028, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::移动输入向量' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, 是否正在移动) == 0x000034, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::是否正在移动' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, 是否有移动输入) == 0x000035, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::是否有移动输入' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, 速度) == 0x000038, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::速度' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, 瞄准旋转速率) == 0x00003C, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::瞄准旋转速率' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, 移动模式) == 0x000040, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::移动模式' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, TsBaseChar) == 0x000048, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::TsBaseChar' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, K2Node_DynamicCast_AsTs_Base_Character) == 0x000050, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, CallFunc_GetAimYawRate_ReturnValue) == 0x00005C, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::CallFunc_GetAimYawRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, CallFunc_GetSpeed_ReturnValue) == 0x000060, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::CallFunc_GetSpeed_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, CallFunc_GetAcceleration_ReturnValue) == 0x000064, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::CallFunc_GetAcceleration_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, CallFunc_HasMoveInput_ReturnValue) == 0x000070, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::CallFunc_HasMoveInput_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, CallFunc_IsMoving_ReturnValue) == 0x000071, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::CallFunc_IsMoving_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, CallFunc_GetCurrentAcceleration_ReturnValue) == 0x000074, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::CallFunc_GetCurrentAcceleration_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_, CallFunc_GetVelocity_ReturnValue) == 0x000080, "Member 'KFC_AICommon_C_更新动画属性_性能消耗大仅限进行测试开发_::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.播放特写镜头动画
// 0x0078 (0x0078 - 0x0000)
struct KFC_AICommon_C_播放特写镜头动画 final
{
public:
	class FName                                   剧情ID;                                            // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             剧情资源表;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         演员Actor数组;                                     // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FName>                           演员身份数组;                                      // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                __WorldContext;                                    // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SequenceData_C*                     NewLocalVar_0;                                     // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable;                       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_播放特写镜头动画) == 0x000008, "Wrong alignment on KFC_AICommon_C_播放特写镜头动画");
static_assert(sizeof(KFC_AICommon_C_播放特写镜头动画) == 0x000078, "Wrong size on KFC_AICommon_C_播放特写镜头动画");
static_assert(offsetof(KFC_AICommon_C_播放特写镜头动画, 剧情ID) == 0x000000, "Member 'KFC_AICommon_C_播放特写镜头动画::剧情ID' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_播放特写镜头动画, 剧情资源表) == 0x000010, "Member 'KFC_AICommon_C_播放特写镜头动画::剧情资源表' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_播放特写镜头动画, 演员Actor数组) == 0x000018, "Member 'KFC_AICommon_C_播放特写镜头动画::演员Actor数组' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_播放特写镜头动画, 演员身份数组) == 0x000028, "Member 'KFC_AICommon_C_播放特写镜头动画::演员身份数组' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_播放特写镜头动画, __WorldContext) == 0x000038, "Member 'KFC_AICommon_C_播放特写镜头动画::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_播放特写镜头动画, NewLocalVar_0) == 0x000040, "Member 'KFC_AICommon_C_播放特写镜头动画::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_播放特写镜头动画, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'KFC_AICommon_C_播放特写镜头动画::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_播放特写镜头动画, ___int_Array_Index_Variable) == 0x00004C, "Member 'KFC_AICommon_C_播放特写镜头动画::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_播放特写镜头动画, ___int_Loop_Counter_Variable) == 0x000050, "Member 'KFC_AICommon_C_播放特写镜头动画::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_播放特写镜头动画, CallFunc_Array_Get_Item) == 0x000058, "Member 'KFC_AICommon_C_播放特写镜头动画::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_播放特写镜头动画, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'KFC_AICommon_C_播放特写镜头动画::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_播放特写镜头动画, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'KFC_AICommon_C_播放特写镜头动画::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_播放特写镜头动画, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'KFC_AICommon_C_播放特写镜头动画::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_播放特写镜头动画, CallFunc_Array_AddUnique_ReturnValue) == 0x000074, "Member 'KFC_AICommon_C_播放特写镜头动画::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.游荡强制转向结束
// 0x0018 (0x0018 - 0x0000)
struct KFC_AICommon_C_游荡强制转向结束 final
{
public:
	class ATsBaseCharacter_C*                     BaseCharacter;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          结束自动朝向;                                      // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KFC_AICommon_C_游荡强制转向结束) == 0x000008, "Wrong alignment on KFC_AICommon_C_游荡强制转向结束");
static_assert(sizeof(KFC_AICommon_C_游荡强制转向结束) == 0x000018, "Wrong size on KFC_AICommon_C_游荡强制转向结束");
static_assert(offsetof(KFC_AICommon_C_游荡强制转向结束, BaseCharacter) == 0x000000, "Member 'KFC_AICommon_C_游荡强制转向结束::BaseCharacter' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_游荡强制转向结束, __WorldContext) == 0x000008, "Member 'KFC_AICommon_C_游荡强制转向结束::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_游荡强制转向结束, 结束自动朝向) == 0x000010, "Member 'KFC_AICommon_C_游荡强制转向结束::结束自动朝向' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.导航强制转向开始
// 0x0078 (0x0078 - 0x0000)
struct KFC_AICommon_C_导航强制转向开始 final
{
public:
	class ATsBaseCharacter_C*                     自身base对象;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         旋转速度;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                导航坐标;                                          // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          导航强制转向中;                                    // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_ProjectPointOnToPlane_ReturnValue;        // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue;        // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_VectorDoubleToVector_ReturnValue;    // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_ProjectPointOnToPlane_ReturnValue_1;      // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KFC_AICommon_C_导航强制转向开始) == 0x000008, "Wrong alignment on KFC_AICommon_C_导航强制转向开始");
static_assert(sizeof(KFC_AICommon_C_导航强制转向开始) == 0x000078, "Wrong size on KFC_AICommon_C_导航强制转向开始");
static_assert(offsetof(KFC_AICommon_C_导航强制转向开始, 自身base对象) == 0x000000, "Member 'KFC_AICommon_C_导航强制转向开始::自身base对象' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_导航强制转向开始, 旋转速度) == 0x000008, "Member 'KFC_AICommon_C_导航强制转向开始::旋转速度' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_导航强制转向开始, 导航坐标) == 0x00000C, "Member 'KFC_AICommon_C_导航强制转向开始::导航坐标' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_导航强制转向开始, __WorldContext) == 0x000018, "Member 'KFC_AICommon_C_导航强制转向开始::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_导航强制转向开始, 导航强制转向中) == 0x000020, "Member 'KFC_AICommon_C_导航强制转向开始::导航强制转向中' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_导航强制转向开始, CallFunc_ProjectPointOnToPlane_ReturnValue) == 0x000024, "Member 'KFC_AICommon_C_导航强制转向开始::CallFunc_ProjectPointOnToPlane_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_导航强制转向开始, CallFunc_D_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'KFC_AICommon_C_导航强制转向开始::CallFunc_D_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_导航强制转向开始, CallFunc_Conv_VectorDoubleToVector_ReturnValue) == 0x000048, "Member 'KFC_AICommon_C_导航强制转向开始::CallFunc_Conv_VectorDoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_导航强制转向开始, CallFunc_ProjectPointOnToPlane_ReturnValue_1) == 0x000054, "Member 'KFC_AICommon_C_导航强制转向开始::CallFunc_ProjectPointOnToPlane_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_导航强制转向开始, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000060, "Member 'KFC_AICommon_C_导航强制转向开始::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_导航强制转向开始, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x00006C, "Member 'KFC_AICommon_C_导航强制转向开始::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.停止移动
// 0x0010 (0x0010 - 0x0000)
struct KFC_AICommon_C_停止移动 final
{
public:
	class ATsBaseCharacter_C*                     Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_停止移动) == 0x000008, "Wrong alignment on KFC_AICommon_C_停止移动");
static_assert(sizeof(KFC_AICommon_C_停止移动) == 0x000010, "Wrong size on KFC_AICommon_C_停止移动");
static_assert(offsetof(KFC_AICommon_C_停止移动, Character) == 0x000000, "Member 'KFC_AICommon_C_停止移动::Character' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_停止移动, __WorldContext) == 0x000008, "Member 'KFC_AICommon_C_停止移动::__WorldContext' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.游荡强制转向开始
// 0x0080 (0x0080 - 0x0000)
struct KFC_AICommon_C_游荡强制转向开始 final
{
public:
	class ATsBaseCharacter_C*                     自身Character;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         旋转速度;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     仇恨对象;                                          // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          自动朝向开始;                                      // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue;        // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue_1;      // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_ProjectPointOnToPlane_ReturnValue;      // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_D_FindLookAtRotation_ReturnValue;         // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KFC_AICommon_C_游荡强制转向开始) == 0x000008, "Wrong alignment on KFC_AICommon_C_游荡强制转向开始");
static_assert(sizeof(KFC_AICommon_C_游荡强制转向开始) == 0x000080, "Wrong size on KFC_AICommon_C_游荡强制转向开始");
static_assert(offsetof(KFC_AICommon_C_游荡强制转向开始, 自身Character) == 0x000000, "Member 'KFC_AICommon_C_游荡强制转向开始::自身Character' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_游荡强制转向开始, 旋转速度) == 0x000008, "Member 'KFC_AICommon_C_游荡强制转向开始::旋转速度' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_游荡强制转向开始, 仇恨对象) == 0x000010, "Member 'KFC_AICommon_C_游荡强制转向开始::仇恨对象' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_游荡强制转向开始, __WorldContext) == 0x000018, "Member 'KFC_AICommon_C_游荡强制转向开始::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_游荡强制转向开始, 自动朝向开始) == 0x000020, "Member 'KFC_AICommon_C_游荡强制转向开始::自动朝向开始' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_游荡强制转向开始, CallFunc_D_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'KFC_AICommon_C_游荡强制转向开始::CallFunc_D_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_游荡强制转向开始, CallFunc_D_K2_GetActorLocation_ReturnValue_1) == 0x000040, "Member 'KFC_AICommon_C_游荡强制转向开始::CallFunc_D_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_游荡强制转向开始, CallFunc_D_ProjectPointOnToPlane_ReturnValue) == 0x000058, "Member 'KFC_AICommon_C_游荡强制转向开始::CallFunc_D_ProjectPointOnToPlane_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_游荡强制转向开始, CallFunc_D_FindLookAtRotation_ReturnValue) == 0x000070, "Member 'KFC_AICommon_C_游荡强制转向开始::CallFunc_D_FindLookAtRotation_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.设置黑板Int
// 0x0040 (0x0040 - 0x0000)
struct KFC_AICommon_C_设置黑板Int final
{
public:
	class ATsBaseCharacter_C*                     角色;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Key;                                               // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         值;                                                // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_CreatureInterface_C> CallFunc_GetEntityId_self_CastInput;               // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetEntityId_ReturnValue;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_设置黑板Int) == 0x000008, "Wrong alignment on KFC_AICommon_C_设置黑板Int");
static_assert(sizeof(KFC_AICommon_C_设置黑板Int) == 0x000040, "Wrong size on KFC_AICommon_C_设置黑板Int");
static_assert(offsetof(KFC_AICommon_C_设置黑板Int, 角色) == 0x000000, "Member 'KFC_AICommon_C_设置黑板Int::角色' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_设置黑板Int, Key) == 0x000008, "Member 'KFC_AICommon_C_设置黑板Int::Key' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_设置黑板Int, 值) == 0x000018, "Member 'KFC_AICommon_C_设置黑板Int::值' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_设置黑板Int, __WorldContext) == 0x000020, "Member 'KFC_AICommon_C_设置黑板Int::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_设置黑板Int, CallFunc_GetEntityId_self_CastInput) == 0x000028, "Member 'KFC_AICommon_C_设置黑板Int::CallFunc_GetEntityId_self_CastInput' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_设置黑板Int, CallFunc_GetEntityId_ReturnValue) == 0x000038, "Member 'KFC_AICommon_C_设置黑板Int::CallFunc_GetEntityId_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.获取黑板 Int
// 0x0028 (0x0028 - 0x0000)
struct KFC_AICommon_C_获取黑板_Int final
{
public:
	class ABaseCharacter*                         角色;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Key;                                               // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         值;                                                // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIntValueByEntity_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_获取黑板_Int) == 0x000008, "Wrong alignment on KFC_AICommon_C_获取黑板_Int");
static_assert(sizeof(KFC_AICommon_C_获取黑板_Int) == 0x000028, "Wrong size on KFC_AICommon_C_获取黑板_Int");
static_assert(offsetof(KFC_AICommon_C_获取黑板_Int, 角色) == 0x000000, "Member 'KFC_AICommon_C_获取黑板_Int::角色' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板_Int, Key) == 0x000008, "Member 'KFC_AICommon_C_获取黑板_Int::Key' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板_Int, __WorldContext) == 0x000018, "Member 'KFC_AICommon_C_获取黑板_Int::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板_Int, 值) == 0x000020, "Member 'KFC_AICommon_C_获取黑板_Int::值' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板_Int, CallFunc_GetIntValueByEntity_ReturnValue) == 0x000024, "Member 'KFC_AICommon_C_获取黑板_Int::CallFunc_GetIntValueByEntity_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.获取自身距离坐标角度
// 0x00B8 (0x00B8 - 0x0000)
struct KFC_AICommon_C_获取自身距离坐标角度 final
{
public:
	struct FVectorDouble                          目标坐标;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 原点角色;                                          // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         返回角度;                                          // 0x0028(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue;        // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_GetActorForwardVector_ReturnValue;      // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_Subtract_VectorVector_ReturnValue;      // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_Normal_ReturnValue;                     // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_Normal_ReturnValue_1;                   // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_D_Dot_VectorVector_ReturnValue;           // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_DoubleToFloat_ReturnValue;           // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DegAcos_ReturnValue;                      // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_获取自身距离坐标角度) == 0x000008, "Wrong alignment on KFC_AICommon_C_获取自身距离坐标角度");
static_assert(sizeof(KFC_AICommon_C_获取自身距离坐标角度) == 0x0000B8, "Wrong size on KFC_AICommon_C_获取自身距离坐标角度");
static_assert(offsetof(KFC_AICommon_C_获取自身距离坐标角度, 目标坐标) == 0x000000, "Member 'KFC_AICommon_C_获取自身距离坐标角度::目标坐标' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离坐标角度, 原点角色) == 0x000018, "Member 'KFC_AICommon_C_获取自身距离坐标角度::原点角色' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离坐标角度, __WorldContext) == 0x000020, "Member 'KFC_AICommon_C_获取自身距离坐标角度::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离坐标角度, 返回角度) == 0x000028, "Member 'KFC_AICommon_C_获取自身距离坐标角度::返回角度' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离坐标角度, CallFunc_D_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'KFC_AICommon_C_获取自身距离坐标角度::CallFunc_D_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离坐标角度, CallFunc_D_GetActorForwardVector_ReturnValue) == 0x000048, "Member 'KFC_AICommon_C_获取自身距离坐标角度::CallFunc_D_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离坐标角度, CallFunc_D_Subtract_VectorVector_ReturnValue) == 0x000060, "Member 'KFC_AICommon_C_获取自身距离坐标角度::CallFunc_D_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离坐标角度, CallFunc_D_Normal_ReturnValue) == 0x000078, "Member 'KFC_AICommon_C_获取自身距离坐标角度::CallFunc_D_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离坐标角度, CallFunc_D_Normal_ReturnValue_1) == 0x000090, "Member 'KFC_AICommon_C_获取自身距离坐标角度::CallFunc_D_Normal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离坐标角度, CallFunc_D_Dot_VectorVector_ReturnValue) == 0x0000A8, "Member 'KFC_AICommon_C_获取自身距离坐标角度::CallFunc_D_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离坐标角度, CallFunc_Conv_DoubleToFloat_ReturnValue) == 0x0000B0, "Member 'KFC_AICommon_C_获取自身距离坐标角度::CallFunc_Conv_DoubleToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离坐标角度, CallFunc_DegAcos_ReturnValue) == 0x0000B4, "Member 'KFC_AICommon_C_获取自身距离坐标角度::CallFunc_DegAcos_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.使用技能关卡封装
// 0x0038 (0x0038 - 0x0000)
struct KFC_AICommon_C_使用技能关卡封装 final
{
public:
	bool                                          外部方向输入清0;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     自身Character;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   技能随机结果;                                      // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 技能目标;                                          // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BeginSkill_ReturnValue;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KFC_AICommon_C_使用技能关卡封装) == 0x000008, "Wrong alignment on KFC_AICommon_C_使用技能关卡封装");
static_assert(sizeof(KFC_AICommon_C_使用技能关卡封装) == 0x000038, "Wrong size on KFC_AICommon_C_使用技能关卡封装");
static_assert(offsetof(KFC_AICommon_C_使用技能关卡封装, 外部方向输入清0) == 0x000000, "Member 'KFC_AICommon_C_使用技能关卡封装::外部方向输入清0' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_使用技能关卡封装, 自身Character) == 0x000008, "Member 'KFC_AICommon_C_使用技能关卡封装::自身Character' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_使用技能关卡封装, 技能随机结果) == 0x000010, "Member 'KFC_AICommon_C_使用技能关卡封装::技能随机结果' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_使用技能关卡封装, 技能目标) == 0x000020, "Member 'KFC_AICommon_C_使用技能关卡封装::技能目标' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_使用技能关卡封装, __WorldContext) == 0x000028, "Member 'KFC_AICommon_C_使用技能关卡封装::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_使用技能关卡封装, CallFunc_BeginSkill_ReturnValue) == 0x000030, "Member 'KFC_AICommon_C_使用技能关卡封装::CallFunc_BeginSkill_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.获取自身距离目标角度2D
// 0x00C0 (0x00C0 - 0x0000)
struct KFC_AICommon_C_获取自身距离目标角度2D final
{
public:
	class AActor*                                 目标角色;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 原点角色;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         返回角度;                                          // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue;        // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue_1;      // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_D_Subtract_VectorVector_ReturnValue;      // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc____Z_OutVec;                              // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_VectorDoubleToVector_ReturnValue;    // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc____Z_OutVec_1;                            // 0x009C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue_1;                     // 0x00A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DegAcos_ReturnValue;                      // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_获取自身距离目标角度2D) == 0x000008, "Wrong alignment on KFC_AICommon_C_获取自身距离目标角度2D");
static_assert(sizeof(KFC_AICommon_C_获取自身距离目标角度2D) == 0x0000C0, "Wrong size on KFC_AICommon_C_获取自身距离目标角度2D");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度2D, 目标角色) == 0x000000, "Member 'KFC_AICommon_C_获取自身距离目标角度2D::目标角色' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度2D, 原点角色) == 0x000008, "Member 'KFC_AICommon_C_获取自身距离目标角度2D::原点角色' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度2D, __WorldContext) == 0x000010, "Member 'KFC_AICommon_C_获取自身距离目标角度2D::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度2D, 返回角度) == 0x000018, "Member 'KFC_AICommon_C_获取自身距离目标角度2D::返回角度' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度2D, CallFunc_D_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'KFC_AICommon_C_获取自身距离目标角度2D::CallFunc_D_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度2D, CallFunc_D_K2_GetActorLocation_ReturnValue_1) == 0x000038, "Member 'KFC_AICommon_C_获取自身距离目标角度2D::CallFunc_D_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度2D, CallFunc_GetActorForwardVector_ReturnValue) == 0x000050, "Member 'KFC_AICommon_C_获取自身距离目标角度2D::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度2D, CallFunc_D_Subtract_VectorVector_ReturnValue) == 0x000060, "Member 'KFC_AICommon_C_获取自身距离目标角度2D::CallFunc_D_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度2D, CallFunc____Z_OutVec) == 0x000078, "Member 'KFC_AICommon_C_获取自身距离目标角度2D::CallFunc____Z_OutVec' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度2D, CallFunc_Conv_VectorDoubleToVector_ReturnValue) == 0x000084, "Member 'KFC_AICommon_C_获取自身距离目标角度2D::CallFunc_Conv_VectorDoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度2D, CallFunc_Normal_ReturnValue) == 0x000090, "Member 'KFC_AICommon_C_获取自身距离目标角度2D::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度2D, CallFunc____Z_OutVec_1) == 0x00009C, "Member 'KFC_AICommon_C_获取自身距离目标角度2D::CallFunc____Z_OutVec_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度2D, CallFunc_Normal_ReturnValue_1) == 0x0000A8, "Member 'KFC_AICommon_C_获取自身距离目标角度2D::CallFunc_Normal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度2D, CallFunc_Dot_VectorVector_ReturnValue) == 0x0000B4, "Member 'KFC_AICommon_C_获取自身距离目标角度2D::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身距离目标角度2D, CallFunc_DegAcos_ReturnValue) == 0x0000B8, "Member 'KFC_AICommon_C_获取自身距离目标角度2D::CallFunc_DegAcos_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.忽略 Z
// 0x0038 (0x0038 - 0x0000)
struct KFC_AICommon_C_忽略_Z final
{
public:
	struct FVector                                InVec;                                             // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OutVec;                                            // 0x0018(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue;        // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_忽略_Z) == 0x000008, "Wrong alignment on KFC_AICommon_C_忽略_Z");
static_assert(sizeof(KFC_AICommon_C_忽略_Z) == 0x000038, "Wrong size on KFC_AICommon_C_忽略_Z");
static_assert(offsetof(KFC_AICommon_C_忽略_Z, InVec) == 0x000000, "Member 'KFC_AICommon_C_忽略_Z::InVec' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_忽略_Z, __WorldContext) == 0x000010, "Member 'KFC_AICommon_C_忽略_Z::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_忽略_Z, OutVec) == 0x000018, "Member 'KFC_AICommon_C_忽略_Z::OutVec' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_忽略_Z, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000024, "Member 'KFC_AICommon_C_忽略_Z::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_忽略_Z, CallFunc_Conv_Vector2DToVector_ReturnValue) == 0x00002C, "Member 'KFC_AICommon_C_忽略_Z::CallFunc_Conv_Vector2DToVector_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.阵营判断
// 0x0068 (0x0068 - 0x0000)
struct KFC_AICommon_C_阵营判断 final
{
public:
	ECamp                                         自身阵营;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECamp                                         目标阵营;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             阵营关系数据;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERelation                                     关系;                                              // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         关系整数;                                          // 0x001C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSCamp                                 找到的阵营数据;                                    // 0x0020(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSCamp                                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x0050(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KFC_AICommon_C_阵营判断) == 0x000008, "Wrong alignment on KFC_AICommon_C_阵营判断");
static_assert(sizeof(KFC_AICommon_C_阵营判断) == 0x000068, "Wrong size on KFC_AICommon_C_阵营判断");
static_assert(offsetof(KFC_AICommon_C_阵营判断, 自身阵营) == 0x000000, "Member 'KFC_AICommon_C_阵营判断::自身阵营' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_阵营判断, 目标阵营) == 0x000001, "Member 'KFC_AICommon_C_阵营判断::目标阵营' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_阵营判断, 阵营关系数据) == 0x000008, "Member 'KFC_AICommon_C_阵营判断::阵营关系数据' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_阵营判断, __WorldContext) == 0x000010, "Member 'KFC_AICommon_C_阵营判断::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_阵营判断, 关系) == 0x000018, "Member 'KFC_AICommon_C_阵营判断::关系' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_阵营判断, 关系整数) == 0x00001C, "Member 'KFC_AICommon_C_阵营判断::关系整数' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_阵营判断, 找到的阵营数据) == 0x000020, "Member 'KFC_AICommon_C_阵营判断::找到的阵营数据' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_阵营判断, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000030, "Member 'KFC_AICommon_C_阵营判断::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_阵营判断, CallFunc_Conv_StringToName_ReturnValue) == 0x000040, "Member 'KFC_AICommon_C_阵营判断::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_阵营判断, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00004C, "Member 'KFC_AICommon_C_阵营判断::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_阵营判断, CallFunc_GetDataTableRowFromName_OutRow) == 0x000050, "Member 'KFC_AICommon_C_阵营判断::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_阵营判断, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000060, "Member 'KFC_AICommon_C_阵营判断::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_阵营判断, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000061, "Member 'KFC_AICommon_C_阵营判断::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_阵营判断, K2Node_SwitchInteger_CmpSuccess) == 0x000062, "Member 'KFC_AICommon_C_阵营判断::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.GetPathToTarget
// 0x0170 (0x0170 - 0x0000)
struct KFC_AICommon_C_GetPathToTarget final
{
public:
	struct FVector                                InEndPos;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InStartPos;                                        // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        OutPathpoint;                                      // 0x0020(0x0010)(Parm, OutParm)
	TArray<struct FVector>                        Points;                                            // 0x0030(0x0010)(Edit, BlueprintVisible)
	struct FVector                                tempPos;                                           // 0x0040(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSPointsRow                            PointsRow;                                         // 0x0050(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FSPointsRow>                    Rows;                                              // 0x0068(0x0010)(Edit, BlueprintVisible)
	TArray<struct FVector>                        PathPoints;                                        // 0x0078(0x0010)(Edit, BlueprintVisible)
	float                                         YDir;                                              // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         XDir;                                              // 0x008C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable;                       // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue_1;            // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CD[0x3];                                       // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X_2;                          // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_2;                          // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_2;                          // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x00DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DF[0x1];                                       // 0x00DF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        CallFunc_Get_Pos_in_Path_OutPoints;                // 0x00E0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_AddUnique_ReturnValue_2;            // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x00F8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x010C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x3];                                      // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSNpcPathPoint                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x011C(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_135[0x3];                                      // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0138(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_2;      // 0x0144(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0150(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_3;                          // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_3;                          // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_3;                          // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KFC_AICommon_C_GetPathToTarget) == 0x000008, "Wrong alignment on KFC_AICommon_C_GetPathToTarget");
static_assert(sizeof(KFC_AICommon_C_GetPathToTarget) == 0x000170, "Wrong size on KFC_AICommon_C_GetPathToTarget");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, InEndPos) == 0x000000, "Member 'KFC_AICommon_C_GetPathToTarget::InEndPos' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, InStartPos) == 0x00000C, "Member 'KFC_AICommon_C_GetPathToTarget::InStartPos' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, __WorldContext) == 0x000018, "Member 'KFC_AICommon_C_GetPathToTarget::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, OutPathpoint) == 0x000020, "Member 'KFC_AICommon_C_GetPathToTarget::OutPathpoint' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, Points) == 0x000030, "Member 'KFC_AICommon_C_GetPathToTarget::Points' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, tempPos) == 0x000040, "Member 'KFC_AICommon_C_GetPathToTarget::tempPos' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, PointsRow) == 0x000050, "Member 'KFC_AICommon_C_GetPathToTarget::PointsRow' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, Rows) == 0x000068, "Member 'KFC_AICommon_C_GetPathToTarget::Rows' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, PathPoints) == 0x000078, "Member 'KFC_AICommon_C_GetPathToTarget::PathPoints' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, YDir) == 0x000088, "Member 'KFC_AICommon_C_GetPathToTarget::YDir' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, XDir) == 0x00008C, "Member 'KFC_AICommon_C_GetPathToTarget::XDir' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000090, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_BreakVector_X) == 0x00009C, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_BreakVector_Y) == 0x0000A0, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_BreakVector_Z) == 0x0000A4, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, ___int_Array_Index_Variable) == 0x0000A8, "Member 'KFC_AICommon_C_GetPathToTarget::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, ___int_Loop_Counter_Variable) == 0x0000AC, "Member 'KFC_AICommon_C_GetPathToTarget::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_Add_IntInt_ReturnValue) == 0x0000B0, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_BreakVector_X_1) == 0x0000B4, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_BreakVector_Y_1) == 0x0000B8, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_BreakVector_Z_1) == 0x0000BC, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_Array_AddUnique_ReturnValue) == 0x0000C0, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_Array_AddUnique_ReturnValue_1) == 0x0000C4, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_Array_AddUnique_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_Array_Length_ReturnValue) == 0x0000C8, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000CC, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_BreakVector_X_2) == 0x0000D0, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_BreakVector_Y_2) == 0x0000D4, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_BreakVector_Z_2) == 0x0000D8, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x0000DC, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0000DD, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_GreaterEqual_FloatFloat_ReturnValue_1) == 0x0000DE, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_GreaterEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_Get_Pos_in_Path_OutPoints) == 0x0000E0, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_Get_Pos_in_Path_OutPoints' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_Array_AddUnique_ReturnValue_2) == 0x0000F0, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_Array_AddUnique_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_GetDataTableRowNames_OutRowNames) == 0x0000F8, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_Array_Length_ReturnValue_1) == 0x000108, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_Array_Get_Item) == 0x00010C, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_Less_IntInt_ReturnValue) == 0x000118, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_GetDataTableRowFromName_OutRow) == 0x00011C, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000134, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000138, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_Subtract_VectorVector_ReturnValue_2) == 0x000144, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_Subtract_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000150, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_BreakVector_X_3) == 0x00015C, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_BreakVector_X_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_BreakVector_Y_3) == 0x000160, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_BreakVector_Y_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_BreakVector_Z_3) == 0x000164, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_BreakVector_Z_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000168, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x000169, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_GetPathToTarget, CallFunc_BooleanAND_ReturnValue) == 0x00016A, "Member 'KFC_AICommon_C_GetPathToTarget::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.在原点左边
// 0x00B8 (0x00B8 - 0x0000)
struct KFC_AICommon_C_在原点左边 final
{
public:
	struct FVectorDouble                          原点;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          目标点;                                            // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          原点朝向的点;                                      // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0048(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          在原点左边_0;                                      // 0x0050(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_D_FindLookAtRotation_ReturnValue;         // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVectorDouble                          CallFunc_D_GetDirectionUnitVector_ReturnValue;     // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetRightVector_ReturnValue;               // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_Conv_VectorToVectorDouble_ReturnValue;    // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_D_Dot_VectorVector_ReturnValue;           // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_D_DegAcos_ReturnValue;                    // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_D_Greater_FloatFloat_ReturnValue;         // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KFC_AICommon_C_在原点左边) == 0x000008, "Wrong alignment on KFC_AICommon_C_在原点左边");
static_assert(sizeof(KFC_AICommon_C_在原点左边) == 0x0000B8, "Wrong size on KFC_AICommon_C_在原点左边");
static_assert(offsetof(KFC_AICommon_C_在原点左边, 原点) == 0x000000, "Member 'KFC_AICommon_C_在原点左边::原点' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_在原点左边, 目标点) == 0x000018, "Member 'KFC_AICommon_C_在原点左边::目标点' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_在原点左边, 原点朝向的点) == 0x000030, "Member 'KFC_AICommon_C_在原点左边::原点朝向的点' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_在原点左边, __WorldContext) == 0x000048, "Member 'KFC_AICommon_C_在原点左边::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_在原点左边, 在原点左边_0) == 0x000050, "Member 'KFC_AICommon_C_在原点左边::在原点左边_0' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_在原点左边, CallFunc_D_FindLookAtRotation_ReturnValue) == 0x000054, "Member 'KFC_AICommon_C_在原点左边::CallFunc_D_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_在原点左边, CallFunc_D_GetDirectionUnitVector_ReturnValue) == 0x000060, "Member 'KFC_AICommon_C_在原点左边::CallFunc_D_GetDirectionUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_在原点左边, CallFunc_GetRightVector_ReturnValue) == 0x000078, "Member 'KFC_AICommon_C_在原点左边::CallFunc_GetRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_在原点左边, CallFunc_Conv_VectorToVectorDouble_ReturnValue) == 0x000088, "Member 'KFC_AICommon_C_在原点左边::CallFunc_Conv_VectorToVectorDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_在原点左边, CallFunc_D_Dot_VectorVector_ReturnValue) == 0x0000A0, "Member 'KFC_AICommon_C_在原点左边::CallFunc_D_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_在原点左边, CallFunc_D_DegAcos_ReturnValue) == 0x0000A8, "Member 'KFC_AICommon_C_在原点左边::CallFunc_D_DegAcos_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_在原点左边, CallFunc_D_Greater_FloatFloat_ReturnValue) == 0x0000B0, "Member 'KFC_AICommon_C_在原点左边::CallFunc_D_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.Get Pos in Path
// 0x01B0 (0x01B0 - 0x0000)
struct KFC_AICommon_C_Get_Pos_in_Path final
{
public:
	TArray<struct FSPointsRow>                    InRow;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bXDir;                                             // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bYDir;                                             // 0x0011(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        OutPoints;                                         // 0x0020(0x0010)(Parm, OutParm)
	TArray<struct FVector>                        Points;                                            // 0x0030(0x0010)(Edit, BlueprintVisible)
	int32                                         ___int_Array_Index_Variable;                       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable;                      // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ___int_Array_Index_Variable_1;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable_2;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable_1;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ___int_Loop_Counter_Variable_2;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable_3;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable_3;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable_4;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable_4;                     // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Loop_Counter_Variable_5;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___int_Array_Index_Variable_5;                     // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_2;                          // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_2;                          // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_2;                          // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSPointsRow                            CallFunc_Array_Get_Item;                           // 0x00B8(0x0018)(HasGetValueTypeHash)
	struct FSPointsRow                            CallFunc_Array_Get_Item_1;                         // 0x00D0(0x0018)(HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item_2;                         // 0x00E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item_3;                         // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_3;                          // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_3;                          // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_3;                          // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X_4;                          // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_4;                          // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_4;                          // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121[0x3];                                      // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue_1;            // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item_4;                         // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_5;                          // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_5;                          // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_5;                          // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_151[0x3];                                      // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Array_Get_Item_5;                         // 0x0154(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue_2;            // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_4;            // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_6;                          // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_6;                          // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_6;                          // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue_1;                        // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;    // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_17D[0x3];                                      // 0x017D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_18A[0x2];                                      // 0x018A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_5;            // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue_3;            // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue_2;                        // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_7;                          // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_7;                          // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_7;                          // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_3;    // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KFC_AICommon_C_Get_Pos_in_Path) == 0x000008, "Wrong alignment on KFC_AICommon_C_Get_Pos_in_Path");
static_assert(sizeof(KFC_AICommon_C_Get_Pos_in_Path) == 0x0001B0, "Wrong size on KFC_AICommon_C_Get_Pos_in_Path");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, InRow) == 0x000000, "Member 'KFC_AICommon_C_Get_Pos_in_Path::InRow' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, bXDir) == 0x000010, "Member 'KFC_AICommon_C_Get_Pos_in_Path::bXDir' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, bYDir) == 0x000011, "Member 'KFC_AICommon_C_Get_Pos_in_Path::bYDir' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, __WorldContext) == 0x000018, "Member 'KFC_AICommon_C_Get_Pos_in_Path::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, OutPoints) == 0x000020, "Member 'KFC_AICommon_C_Get_Pos_in_Path::OutPoints' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, Points) == 0x000030, "Member 'KFC_AICommon_C_Get_Pos_in_Path::Points' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, ___int_Array_Index_Variable) == 0x000040, "Member 'KFC_AICommon_C_Get_Pos_in_Path::___int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, ___int_Loop_Counter_Variable) == 0x000044, "Member 'KFC_AICommon_C_Get_Pos_in_Path::___int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Subtract_IntInt_ReturnValue) == 0x000048, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00004C, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, ___int_Array_Index_Variable_1) == 0x000050, "Member 'KFC_AICommon_C_Get_Pos_in_Path::___int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, ___int_Array_Index_Variable_2) == 0x000054, "Member 'KFC_AICommon_C_Get_Pos_in_Path::___int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, ___int_Loop_Counter_Variable_1) == 0x000058, "Member 'KFC_AICommon_C_Get_Pos_in_Path::___int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00005C, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000060, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, ___int_Loop_Counter_Variable_2) == 0x000064, "Member 'KFC_AICommon_C_Get_Pos_in_Path::___int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, ___int_Array_Index_Variable_3) == 0x00006C, "Member 'KFC_AICommon_C_Get_Pos_in_Path::___int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, ___int_Loop_Counter_Variable_3) == 0x000070, "Member 'KFC_AICommon_C_Get_Pos_in_Path::___int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Add_IntInt_ReturnValue_1) == 0x000074, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, ___int_Loop_Counter_Variable_4) == 0x000078, "Member 'KFC_AICommon_C_Get_Pos_in_Path::___int_Loop_Counter_Variable_4' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Add_IntInt_ReturnValue_2) == 0x00007C, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, ___int_Array_Index_Variable_4) == 0x000080, "Member 'KFC_AICommon_C_Get_Pos_in_Path::___int_Array_Index_Variable_4' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, ___int_Loop_Counter_Variable_5) == 0x000084, "Member 'KFC_AICommon_C_Get_Pos_in_Path::___int_Loop_Counter_Variable_5' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000088, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x00008C, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_X) == 0x000090, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_Y) == 0x000094, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_Z) == 0x000098, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, ___int_Array_Index_Variable_5) == 0x00009C, "Member 'KFC_AICommon_C_Get_Pos_in_Path::___int_Array_Index_Variable_5' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_X_1) == 0x0000A0, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_Y_1) == 0x0000A4, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_Z_1) == 0x0000A8, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_X_2) == 0x0000AC, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_Y_2) == 0x0000B0, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_Z_2) == 0x0000B4, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Array_Get_Item_1) == 0x0000D0, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Array_Get_Item_2) == 0x0000E8, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Array_Get_Item_3) == 0x0000F4, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_X_3) == 0x000100, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_X_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_Y_3) == 0x000104, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_Y_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_Z_3) == 0x000108, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_Z_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Array_AddUnique_ReturnValue) == 0x00010C, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000110, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_X_4) == 0x000114, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_X_4' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_Y_4) == 0x000118, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_Y_4' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_Z_4) == 0x00011C, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_Z_4' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_GreaterEqual_FloatFloat_ReturnValue_1) == 0x000120, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_GreaterEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Array_AddUnique_ReturnValue_1) == 0x000124, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Array_AddUnique_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Array_Get_Item_4) == 0x000128, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Array_Length_ReturnValue) == 0x000134, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_X_5) == 0x000138, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_X_5' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_Y_5) == 0x00013C, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_Y_5' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_Z_5) == 0x000140, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_Z_5' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x000144, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Array_Length_ReturnValue_1) == 0x000148, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Max_ReturnValue) == 0x00014C, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Less_IntInt_ReturnValue) == 0x000150, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Array_Get_Item_5) == 0x000154, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Array_Length_ReturnValue_2) == 0x000160, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Array_AddUnique_ReturnValue_2) == 0x000164, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Array_AddUnique_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Subtract_IntInt_ReturnValue_4) == 0x000168, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Subtract_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_X_6) == 0x00016C, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_X_6' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_Y_6) == 0x000170, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_Y_6' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_Z_6) == 0x000174, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_Z_6' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Max_ReturnValue_1) == 0x000178, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Max_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_GreaterEqual_FloatFloat_ReturnValue_2) == 0x00017C, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_GreaterEqual_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Array_Length_ReturnValue_3) == 0x000180, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Array_Length_ReturnValue_4) == 0x000184, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Less_IntInt_ReturnValue_1) == 0x000188, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Less_IntInt_ReturnValue_2) == 0x000189, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Array_Length_ReturnValue_5) == 0x00018C, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Subtract_IntInt_ReturnValue_5) == 0x000190, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Subtract_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Array_AddUnique_ReturnValue_3) == 0x000194, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Array_AddUnique_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_Max_ReturnValue_2) == 0x000198, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_Max_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_X_7) == 0x00019C, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_X_7' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_Y_7) == 0x0001A0, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_Y_7' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_BreakVector_Z_7) == 0x0001A4, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_BreakVector_Z_7' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_Get_Pos_in_Path, CallFunc_GreaterEqual_FloatFloat_ReturnValue_3) == 0x0001A8, "Member 'KFC_AICommon_C_Get_Pos_in_Path::CallFunc_GreaterEqual_FloatFloat_ReturnValue_3' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.忽略胶囊体距离
// 0x0030 (0x0030 - 0x0000)
struct KFC_AICommon_C_忽略胶囊体距离 final
{
public:
	class ATsBaseCharacter_C*                     比较对象1;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     比较对象2;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         距离;                                              // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDistanceTo_ReturnValue;                // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScaledCapsuleRadius_ReturnValue;       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScaledCapsuleRadius_ReturnValue_1;     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_忽略胶囊体距离) == 0x000008, "Wrong alignment on KFC_AICommon_C_忽略胶囊体距离");
static_assert(sizeof(KFC_AICommon_C_忽略胶囊体距离) == 0x000030, "Wrong size on KFC_AICommon_C_忽略胶囊体距离");
static_assert(offsetof(KFC_AICommon_C_忽略胶囊体距离, 比较对象1) == 0x000000, "Member 'KFC_AICommon_C_忽略胶囊体距离::比较对象1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_忽略胶囊体距离, 比较对象2) == 0x000008, "Member 'KFC_AICommon_C_忽略胶囊体距离::比较对象2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_忽略胶囊体距离, __WorldContext) == 0x000010, "Member 'KFC_AICommon_C_忽略胶囊体距离::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_忽略胶囊体距离, 距离) == 0x000018, "Member 'KFC_AICommon_C_忽略胶囊体距离::距离' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_忽略胶囊体距离, CallFunc_GetDistanceTo_ReturnValue) == 0x00001C, "Member 'KFC_AICommon_C_忽略胶囊体距离::CallFunc_GetDistanceTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_忽略胶囊体距离, CallFunc_GetScaledCapsuleRadius_ReturnValue) == 0x000020, "Member 'KFC_AICommon_C_忽略胶囊体距离::CallFunc_GetScaledCapsuleRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_忽略胶囊体距离, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000024, "Member 'KFC_AICommon_C_忽略胶囊体距离::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_忽略胶囊体距离, CallFunc_GetScaledCapsuleRadius_ReturnValue_1) == 0x000028, "Member 'KFC_AICommon_C_忽略胶囊体距离::CallFunc_GetScaledCapsuleRadius_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_忽略胶囊体距离, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x00002C, "Member 'KFC_AICommon_C_忽略胶囊体距离::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.怪物通用
// 0x0008 (0x0008 - 0x0000)
struct KFC_AICommon_C_怪物通用 final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_怪物通用) == 0x000008, "Wrong alignment on KFC_AICommon_C_怪物通用");
static_assert(sizeof(KFC_AICommon_C_怪物通用) == 0x000008, "Wrong size on KFC_AICommon_C_怪物通用");
static_assert(offsetof(KFC_AICommon_C_怪物通用, __WorldContext) == 0x000000, "Member 'KFC_AICommon_C_怪物通用::__WorldContext' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.高度差计算
// 0x00B0 (0x00B0 - 0x0000)
struct KFC_AICommon_C_高度差计算 final
{
public:
	class ATsBaseCharacter_C*                     原点目标;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     比较目标;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         高度差;                                            // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_D_GetScaledCapsuleHalfHeight_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_D_GetScaledCapsuleHalfHeight_ReturnValue_1; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue;        // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue_1;      // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_X;                      // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Y;                      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Z;                      // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_X_1;                    // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Y_1;                    // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Z_1;                    // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_D_Subtract_FloatFloat_ReturnValue;        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_D_Subtract_FloatFloat_ReturnValue_1;      // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_D_Subtract_FloatFloat_ReturnValue_2;      // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_DoubleToFloat_ReturnValue;           // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_高度差计算) == 0x000008, "Wrong alignment on KFC_AICommon_C_高度差计算");
static_assert(sizeof(KFC_AICommon_C_高度差计算) == 0x0000B0, "Wrong size on KFC_AICommon_C_高度差计算");
static_assert(offsetof(KFC_AICommon_C_高度差计算, 原点目标) == 0x000000, "Member 'KFC_AICommon_C_高度差计算::原点目标' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_高度差计算, 比较目标) == 0x000008, "Member 'KFC_AICommon_C_高度差计算::比较目标' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_高度差计算, __WorldContext) == 0x000010, "Member 'KFC_AICommon_C_高度差计算::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_高度差计算, 高度差) == 0x000018, "Member 'KFC_AICommon_C_高度差计算::高度差' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_高度差计算, CallFunc_D_GetScaledCapsuleHalfHeight_ReturnValue) == 0x000020, "Member 'KFC_AICommon_C_高度差计算::CallFunc_D_GetScaledCapsuleHalfHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_高度差计算, CallFunc_D_GetScaledCapsuleHalfHeight_ReturnValue_1) == 0x000028, "Member 'KFC_AICommon_C_高度差计算::CallFunc_D_GetScaledCapsuleHalfHeight_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_高度差计算, CallFunc_D_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'KFC_AICommon_C_高度差计算::CallFunc_D_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_高度差计算, CallFunc_D_K2_GetActorLocation_ReturnValue_1) == 0x000048, "Member 'KFC_AICommon_C_高度差计算::CallFunc_D_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_高度差计算, CallFunc_BreakVectorDouble_X) == 0x000060, "Member 'KFC_AICommon_C_高度差计算::CallFunc_BreakVectorDouble_X' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_高度差计算, CallFunc_BreakVectorDouble_Y) == 0x000068, "Member 'KFC_AICommon_C_高度差计算::CallFunc_BreakVectorDouble_Y' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_高度差计算, CallFunc_BreakVectorDouble_Z) == 0x000070, "Member 'KFC_AICommon_C_高度差计算::CallFunc_BreakVectorDouble_Z' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_高度差计算, CallFunc_BreakVectorDouble_X_1) == 0x000078, "Member 'KFC_AICommon_C_高度差计算::CallFunc_BreakVectorDouble_X_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_高度差计算, CallFunc_BreakVectorDouble_Y_1) == 0x000080, "Member 'KFC_AICommon_C_高度差计算::CallFunc_BreakVectorDouble_Y_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_高度差计算, CallFunc_BreakVectorDouble_Z_1) == 0x000088, "Member 'KFC_AICommon_C_高度差计算::CallFunc_BreakVectorDouble_Z_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_高度差计算, CallFunc_D_Subtract_FloatFloat_ReturnValue) == 0x000090, "Member 'KFC_AICommon_C_高度差计算::CallFunc_D_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_高度差计算, CallFunc_D_Subtract_FloatFloat_ReturnValue_1) == 0x000098, "Member 'KFC_AICommon_C_高度差计算::CallFunc_D_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_高度差计算, CallFunc_D_Subtract_FloatFloat_ReturnValue_2) == 0x0000A0, "Member 'KFC_AICommon_C_高度差计算::CallFunc_D_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_高度差计算, CallFunc_Conv_DoubleToFloat_ReturnValue) == 0x0000A8, "Member 'KFC_AICommon_C_高度差计算::CallFunc_Conv_DoubleToFloat_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.导航强制转向结束
// 0x0010 (0x0010 - 0x0000)
struct KFC_AICommon_C_导航强制转向结束 final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          导航强制转向中;                                    // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KFC_AICommon_C_导航强制转向结束) == 0x000008, "Wrong alignment on KFC_AICommon_C_导航强制转向结束");
static_assert(sizeof(KFC_AICommon_C_导航强制转向结束) == 0x000010, "Wrong size on KFC_AICommon_C_导航强制转向结束");
static_assert(offsetof(KFC_AICommon_C_导航强制转向结束, __WorldContext) == 0x000000, "Member 'KFC_AICommon_C_导航强制转向结束::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_导航强制转向结束, 导航强制转向中) == 0x000008, "Member 'KFC_AICommon_C_导航强制转向结束::导航强制转向中' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.距离中值
// 0x0020 (0x0020 - 0x0000)
struct KFC_AICommon_C_距离中值 final
{
public:
	float                                         最大距离;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         最小距离;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         距离中值_0;                                        // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_距离中值) == 0x000008, "Wrong alignment on KFC_AICommon_C_距离中值");
static_assert(sizeof(KFC_AICommon_C_距离中值) == 0x000020, "Wrong size on KFC_AICommon_C_距离中值");
static_assert(offsetof(KFC_AICommon_C_距离中值, 最大距离) == 0x000000, "Member 'KFC_AICommon_C_距离中值::最大距离' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_距离中值, 最小距离) == 0x000004, "Member 'KFC_AICommon_C_距离中值::最小距离' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_距离中值, __WorldContext) == 0x000008, "Member 'KFC_AICommon_C_距离中值::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_距离中值, 距离中值_0) == 0x000010, "Member 'KFC_AICommon_C_距离中值::距离中值_0' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_距离中值, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000014, "Member 'KFC_AICommon_C_距离中值::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_距离中值, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000018, "Member 'KFC_AICommon_C_距离中值::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_距离中值, CallFunc_Add_FloatFloat_ReturnValue) == 0x00001C, "Member 'KFC_AICommon_C_距离中值::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.向量偏转角度长度仰角的坐标
// 0x0330 (0x0330 - 0x0000)
struct KFC_AICommon_C_向量偏转角度长度仰角的坐标 final
{
public:
	float                                         长度;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         旋转;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         仰角;                                              // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          原点;                                              // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          目标点;                                            // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ThreeD旋转;                                        // 0x0040(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0048(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          坐标点;                                            // 0x0050(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          第一次轴;                                          // 0x0068(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          相对旋转偏移;                                      // 0x0080(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          旋转后向量;                                        // 0x0098(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_MakeVectorDouble_ReturnValue;             // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_MakeVectorDouble_ReturnValue_1;           // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_MakeVectorDouble_ReturnValue_2;           // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_FloatToDouble_ReturnValue;           // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_MakeVectorDouble_ReturnValue_3;           // 0x0100(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_D_GetDirectionUnitVector_ReturnValue;     // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_GetDirectionUnitVector_ReturnValue_1;   // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_D_MakeRotFromX_ReturnValue;               // 0x0150(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15C[0x4];                                      // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_D_RotateAngleAxis_ReturnValue;            // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_GreaterGreater_VectorRotator_ReturnValue; // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_RotateAngleAxis_ReturnValue_1;          // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_RotateAngleAxis_ReturnValue_2;          // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_D_MakeRotFromXY_ReturnValue;              // 0x01C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1CC[0x4];                                      // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_D_Add_VectorVector_ReturnValue;           // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_GreaterGreater_VectorRotator_ReturnValue_1; // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_D_FindLookAtRotation_ReturnValue;         // 0x0200(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20C[0x4];                                      // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_D_GreaterGreater_VectorRotator_ReturnValue_2; // 0x0210(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_Add_VectorVector_ReturnValue_1;         // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_D_MakeRotFromX_ReturnValue_1;             // 0x0240(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_24C[0x4];                                      // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_D_GreaterGreater_VectorRotator_ReturnValue_3; // 0x0250(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_GetDirectionUnitVector_ReturnValue_2;   // 0x0268(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_RotateAngleAxis_ReturnValue_3;          // 0x0280(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29C[0x4];                                      // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_D_RotateAngleAxis_ReturnValue_4;          // 0x02A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_FloatToDouble_ReturnValue_1;         // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_MakeVectorDouble_ReturnValue_4;           // 0x02C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_Add_VectorVector_ReturnValue_2;         // 0x02D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_D_FindLookAtRotation_ReturnValue_1;       // 0x02F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2FC[0x4];                                      // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_D_GreaterGreater_VectorRotator_ReturnValue_4; // 0x0300(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_Add_VectorVector_ReturnValue_3;         // 0x0318(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_向量偏转角度长度仰角的坐标) == 0x000008, "Wrong alignment on KFC_AICommon_C_向量偏转角度长度仰角的坐标");
static_assert(sizeof(KFC_AICommon_C_向量偏转角度长度仰角的坐标) == 0x000330, "Wrong size on KFC_AICommon_C_向量偏转角度长度仰角的坐标");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, 长度) == 0x000000, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::长度' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, 旋转) == 0x000004, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::旋转' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, 仰角) == 0x000008, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::仰角' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, 原点) == 0x000010, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::原点' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, 目标点) == 0x000028, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::目标点' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, ThreeD旋转) == 0x000040, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::ThreeD旋转' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, __WorldContext) == 0x000048, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, 坐标点) == 0x000050, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::坐标点' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, 第一次轴) == 0x000068, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::第一次轴' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, 相对旋转偏移) == 0x000080, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::相对旋转偏移' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, 旋转后向量) == 0x000098, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::旋转后向量' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_MakeVectorDouble_ReturnValue) == 0x0000B0, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_MakeVectorDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_MakeVectorDouble_ReturnValue_1) == 0x0000C8, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_MakeVectorDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_MakeVectorDouble_ReturnValue_2) == 0x0000E0, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_MakeVectorDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_Conv_FloatToDouble_ReturnValue) == 0x0000F8, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_Conv_FloatToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_MakeVectorDouble_ReturnValue_3) == 0x000100, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_MakeVectorDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000118, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_GetDirectionUnitVector_ReturnValue) == 0x000120, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_GetDirectionUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_GetDirectionUnitVector_ReturnValue_1) == 0x000138, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_GetDirectionUnitVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_MakeRotFromX_ReturnValue) == 0x000150, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_RotateAngleAxis_ReturnValue) == 0x000160, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_GreaterGreater_VectorRotator_ReturnValue) == 0x000178, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_RotateAngleAxis_ReturnValue_1) == 0x000190, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_RotateAngleAxis_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_RotateAngleAxis_ReturnValue_2) == 0x0001A8, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_RotateAngleAxis_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_MakeRotFromXY_ReturnValue) == 0x0001C0, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_MakeRotFromXY_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_Add_VectorVector_ReturnValue) == 0x0001D0, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_GreaterGreater_VectorRotator_ReturnValue_1) == 0x0001E8, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_GreaterGreater_VectorRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_FindLookAtRotation_ReturnValue) == 0x000200, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_GreaterGreater_VectorRotator_ReturnValue_2) == 0x000210, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_GreaterGreater_VectorRotator_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_Add_VectorVector_ReturnValue_1) == 0x000228, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_MakeRotFromX_ReturnValue_1) == 0x000240, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_MakeRotFromX_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_GreaterGreater_VectorRotator_ReturnValue_3) == 0x000250, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_GreaterGreater_VectorRotator_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_GetDirectionUnitVector_ReturnValue_2) == 0x000268, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_GetDirectionUnitVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_RotateAngleAxis_ReturnValue_3) == 0x000280, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_RotateAngleAxis_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000298, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_RotateAngleAxis_ReturnValue_4) == 0x0002A0, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_RotateAngleAxis_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_Conv_FloatToDouble_ReturnValue_1) == 0x0002B8, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_Conv_FloatToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_MakeVectorDouble_ReturnValue_4) == 0x0002C0, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_MakeVectorDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_Add_VectorVector_ReturnValue_2) == 0x0002D8, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_FindLookAtRotation_ReturnValue_1) == 0x0002F0, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_FindLookAtRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_GreaterGreater_VectorRotator_ReturnValue_4) == 0x000300, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_GreaterGreater_VectorRotator_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_向量偏转角度长度仰角的坐标, CallFunc_D_Add_VectorVector_ReturnValue_3) == 0x000318, "Member 'KFC_AICommon_C_向量偏转角度长度仰角的坐标::CallFunc_D_Add_VectorVector_ReturnValue_3' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.传送坐标可靠性判断
// 0x00E8 (0x00E8 - 0x0000)
struct KFC_AICommon_C_传送坐标可靠性判断 final
{
public:
	struct FVectorDouble                          起始坐标;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          被验证坐标;                                        // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     自身;                                              // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          坐标点可靠;                                        // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          可靠坐标;                                          // 0x0048(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         返回坐标距离目标距离;                              // 0x0060(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNavigationPath*                        导航组件;                                          // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        路径点集合;                                        // 0x0070(0x0010)(Edit, BlueprintVisible)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_VectorDoubleToVector_ReturnValue;    // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_Conv_VectorToVectorDouble_ReturnValue;    // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_ProjectPointToNavigation_ProjectedLocation; // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_D_K2_ProjectPointToNavigation_ReturnValue; // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNavigationPath*                        CallFunc_D_FindPathToLocationSynchronously_ReturnValue; // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_传送坐标可靠性判断) == 0x000008, "Wrong alignment on KFC_AICommon_C_传送坐标可靠性判断");
static_assert(sizeof(KFC_AICommon_C_传送坐标可靠性判断) == 0x0000E8, "Wrong size on KFC_AICommon_C_传送坐标可靠性判断");
static_assert(offsetof(KFC_AICommon_C_传送坐标可靠性判断, 起始坐标) == 0x000000, "Member 'KFC_AICommon_C_传送坐标可靠性判断::起始坐标' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_传送坐标可靠性判断, 被验证坐标) == 0x000018, "Member 'KFC_AICommon_C_传送坐标可靠性判断::被验证坐标' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_传送坐标可靠性判断, 自身) == 0x000030, "Member 'KFC_AICommon_C_传送坐标可靠性判断::自身' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_传送坐标可靠性判断, __WorldContext) == 0x000038, "Member 'KFC_AICommon_C_传送坐标可靠性判断::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_传送坐标可靠性判断, 坐标点可靠) == 0x000040, "Member 'KFC_AICommon_C_传送坐标可靠性判断::坐标点可靠' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_传送坐标可靠性判断, 可靠坐标) == 0x000048, "Member 'KFC_AICommon_C_传送坐标可靠性判断::可靠坐标' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_传送坐标可靠性判断, 返回坐标距离目标距离) == 0x000060, "Member 'KFC_AICommon_C_传送坐标可靠性判断::返回坐标距离目标距离' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_传送坐标可靠性判断, 导航组件) == 0x000068, "Member 'KFC_AICommon_C_传送坐标可靠性判断::导航组件' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_传送坐标可靠性判断, 路径点集合) == 0x000070, "Member 'KFC_AICommon_C_传送坐标可靠性判断::路径点集合' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_传送坐标可靠性判断, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'KFC_AICommon_C_传送坐标可靠性判断::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_传送坐标可靠性判断, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000084, "Member 'KFC_AICommon_C_传送坐标可靠性判断::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_传送坐标可靠性判断, CallFunc_Conv_VectorDoubleToVector_ReturnValue) == 0x000088, "Member 'KFC_AICommon_C_传送坐标可靠性判断::CallFunc_Conv_VectorDoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_传送坐标可靠性判断, CallFunc_Subtract_IntInt_ReturnValue) == 0x000094, "Member 'KFC_AICommon_C_传送坐标可靠性判断::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_传送坐标可靠性判断, CallFunc_Array_Get_Item) == 0x000098, "Member 'KFC_AICommon_C_传送坐标可靠性判断::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_传送坐标可靠性判断, CallFunc_Vector_Distance_ReturnValue) == 0x0000A4, "Member 'KFC_AICommon_C_传送坐标可靠性判断::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_传送坐标可靠性判断, CallFunc_Conv_VectorToVectorDouble_ReturnValue) == 0x0000A8, "Member 'KFC_AICommon_C_传送坐标可靠性判断::CallFunc_Conv_VectorToVectorDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_传送坐标可靠性判断, CallFunc_D_K2_ProjectPointToNavigation_ProjectedLocation) == 0x0000C0, "Member 'KFC_AICommon_C_传送坐标可靠性判断::CallFunc_D_K2_ProjectPointToNavigation_ProjectedLocation' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_传送坐标可靠性判断, CallFunc_D_K2_ProjectPointToNavigation_ReturnValue) == 0x0000D8, "Member 'KFC_AICommon_C_传送坐标可靠性判断::CallFunc_D_K2_ProjectPointToNavigation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_传送坐标可靠性判断, CallFunc_D_FindPathToLocationSynchronously_ReturnValue) == 0x0000E0, "Member 'KFC_AICommon_C_传送坐标可靠性判断::CallFunc_D_FindPathToLocationSynchronously_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.设置黑板Long
// 0x0040 (0x0040 - 0x0000)
struct KFC_AICommon_C_设置黑板Long final
{
public:
	class ATsBaseCharacter_C*                     角色;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Key;                                               // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int64                                         值;                                                // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_CreatureInterface_C> CallFunc_GetEntityId_self_CastInput;               // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetEntityId_ReturnValue;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_设置黑板Long) == 0x000008, "Wrong alignment on KFC_AICommon_C_设置黑板Long");
static_assert(sizeof(KFC_AICommon_C_设置黑板Long) == 0x000040, "Wrong size on KFC_AICommon_C_设置黑板Long");
static_assert(offsetof(KFC_AICommon_C_设置黑板Long, 角色) == 0x000000, "Member 'KFC_AICommon_C_设置黑板Long::角色' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_设置黑板Long, Key) == 0x000008, "Member 'KFC_AICommon_C_设置黑板Long::Key' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_设置黑板Long, 值) == 0x000018, "Member 'KFC_AICommon_C_设置黑板Long::值' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_设置黑板Long, __WorldContext) == 0x000020, "Member 'KFC_AICommon_C_设置黑板Long::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_设置黑板Long, CallFunc_GetEntityId_self_CastInput) == 0x000028, "Member 'KFC_AICommon_C_设置黑板Long::CallFunc_GetEntityId_self_CastInput' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_设置黑板Long, CallFunc_GetEntityId_ReturnValue) == 0x000038, "Member 'KFC_AICommon_C_设置黑板Long::CallFunc_GetEntityId_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.获取黑板Long
// 0x0048 (0x0048 - 0x0000)
struct KFC_AICommon_C_获取黑板Long final
{
public:
	class ATsBaseCharacter_C*                     角色;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Key;                                               // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         值;                                                // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TScriptInterface<class IBPI_CreatureInterface_C> CallFunc_GetEntityId_self_CastInput;               // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetEntityId_ReturnValue;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_GetLongValueByEntity_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_获取黑板Long) == 0x000008, "Wrong alignment on KFC_AICommon_C_获取黑板Long");
static_assert(sizeof(KFC_AICommon_C_获取黑板Long) == 0x000048, "Wrong size on KFC_AICommon_C_获取黑板Long");
static_assert(offsetof(KFC_AICommon_C_获取黑板Long, 角色) == 0x000000, "Member 'KFC_AICommon_C_获取黑板Long::角色' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板Long, Key) == 0x000008, "Member 'KFC_AICommon_C_获取黑板Long::Key' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板Long, __WorldContext) == 0x000018, "Member 'KFC_AICommon_C_获取黑板Long::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板Long, 值) == 0x000020, "Member 'KFC_AICommon_C_获取黑板Long::值' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板Long, CallFunc_GetEntityId_self_CastInput) == 0x000028, "Member 'KFC_AICommon_C_获取黑板Long::CallFunc_GetEntityId_self_CastInput' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板Long, CallFunc_GetEntityId_ReturnValue) == 0x000038, "Member 'KFC_AICommon_C_获取黑板Long::CallFunc_GetEntityId_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板Long, CallFunc_GetLongValueByEntity_ReturnValue) == 0x000040, "Member 'KFC_AICommon_C_获取黑板Long::CallFunc_GetLongValueByEntity_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.获取黑板EntityId
// 0x0040 (0x0040 - 0x0000)
struct KFC_AICommon_C_获取黑板EntityId final
{
public:
	class ATsBaseCharacter_C*                     角色;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Key;                                               // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         值;                                                // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CreatureInterface_C> CallFunc_GetEntityId_self_CastInput;               // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetEntityId_ReturnValue;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEntityIdByEntity_ReturnValue;          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_获取黑板EntityId) == 0x000008, "Wrong alignment on KFC_AICommon_C_获取黑板EntityId");
static_assert(sizeof(KFC_AICommon_C_获取黑板EntityId) == 0x000040, "Wrong size on KFC_AICommon_C_获取黑板EntityId");
static_assert(offsetof(KFC_AICommon_C_获取黑板EntityId, 角色) == 0x000000, "Member 'KFC_AICommon_C_获取黑板EntityId::角色' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板EntityId, Key) == 0x000008, "Member 'KFC_AICommon_C_获取黑板EntityId::Key' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板EntityId, __WorldContext) == 0x000018, "Member 'KFC_AICommon_C_获取黑板EntityId::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板EntityId, 值) == 0x000020, "Member 'KFC_AICommon_C_获取黑板EntityId::值' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板EntityId, CallFunc_GetEntityId_self_CastInput) == 0x000028, "Member 'KFC_AICommon_C_获取黑板EntityId::CallFunc_GetEntityId_self_CastInput' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板EntityId, CallFunc_GetEntityId_ReturnValue) == 0x000038, "Member 'KFC_AICommon_C_获取黑板EntityId::CallFunc_GetEntityId_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板EntityId, CallFunc_GetEntityIdByEntity_ReturnValue) == 0x00003C, "Member 'KFC_AICommon_C_获取黑板EntityId::CallFunc_GetEntityIdByEntity_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.设置黑板EntityId
// 0x0040 (0x0040 - 0x0000)
struct KFC_AICommon_C_设置黑板EntityId final
{
public:
	class ATsBaseCharacter_C*                     角色;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Key;                                               // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         值;                                                // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_CreatureInterface_C> CallFunc_GetEntityId_self_CastInput;               // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetEntityId_ReturnValue;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_设置黑板EntityId) == 0x000008, "Wrong alignment on KFC_AICommon_C_设置黑板EntityId");
static_assert(sizeof(KFC_AICommon_C_设置黑板EntityId) == 0x000040, "Wrong size on KFC_AICommon_C_设置黑板EntityId");
static_assert(offsetof(KFC_AICommon_C_设置黑板EntityId, 角色) == 0x000000, "Member 'KFC_AICommon_C_设置黑板EntityId::角色' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_设置黑板EntityId, Key) == 0x000008, "Member 'KFC_AICommon_C_设置黑板EntityId::Key' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_设置黑板EntityId, 值) == 0x000018, "Member 'KFC_AICommon_C_设置黑板EntityId::值' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_设置黑板EntityId, __WorldContext) == 0x000020, "Member 'KFC_AICommon_C_设置黑板EntityId::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_设置黑板EntityId, CallFunc_GetEntityId_self_CastInput) == 0x000028, "Member 'KFC_AICommon_C_设置黑板EntityId::CallFunc_GetEntityId_self_CastInput' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_设置黑板EntityId, CallFunc_GetEntityId_ReturnValue) == 0x000038, "Member 'KFC_AICommon_C_设置黑板EntityId::CallFunc_GetEntityId_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.开启交互事件
// 0x0010 (0x0010 - 0x0000)
struct KFC_AICommon_C_开启交互事件 final
{
public:
	int32                                         交互事件ID;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_开启交互事件) == 0x000008, "Wrong alignment on KFC_AICommon_C_开启交互事件");
static_assert(sizeof(KFC_AICommon_C_开启交互事件) == 0x000010, "Wrong size on KFC_AICommon_C_开启交互事件");
static_assert(offsetof(KFC_AICommon_C_开启交互事件, 交互事件ID) == 0x000000, "Member 'KFC_AICommon_C_开启交互事件::交互事件ID' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_开启交互事件, __WorldContext) == 0x000008, "Member 'KFC_AICommon_C_开启交互事件::__WorldContext' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.创建 CD计时器回调
// 0x0048 (0x0048 - 0x0000)
struct KFC_AICommon_C_创建_CD计时器回调 final
{
public:
	class AAIC_AICommon_C*                        AIC自身对象;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         cd_Id;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bContent)>                事件;                                              // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                __WorldContext;                                    // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKuroBooleanEventBinder*                CallFunc_SpawnObject_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_创建_CD计时器回调) == 0x000008, "Wrong alignment on KFC_AICommon_C_创建_CD计时器回调");
static_assert(sizeof(KFC_AICommon_C_创建_CD计时器回调) == 0x000048, "Wrong size on KFC_AICommon_C_创建_CD计时器回调");
static_assert(offsetof(KFC_AICommon_C_创建_CD计时器回调, AIC自身对象) == 0x000000, "Member 'KFC_AICommon_C_创建_CD计时器回调::AIC自身对象' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_创建_CD计时器回调, cd_Id) == 0x000008, "Member 'KFC_AICommon_C_创建_CD计时器回调::cd_Id' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_创建_CD计时器回调, 事件) == 0x000010, "Member 'KFC_AICommon_C_创建_CD计时器回调::事件' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_创建_CD计时器回调, __WorldContext) == 0x000038, "Member 'KFC_AICommon_C_创建_CD计时器回调::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_创建_CD计时器回调, CallFunc_SpawnObject_ReturnValue) == 0x000040, "Member 'KFC_AICommon_C_创建_CD计时器回调::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.抛物线位移函数
// 0x0068 (0x0068 - 0x0000)
struct KFC_AICommon_C_抛物线位移函数 final
{
public:
	float                                         激发时长;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         激发力度;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         发射角度;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         返回高度;                                          // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         返回位置;                                          // 0x001C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         高度速度;                                          // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         距离速度;                                          // 0x0024(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         当前高度;                                          // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         当前位置;                                          // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         当前速度;                                          // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Square_ReturnValue;                       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_4;        // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_5;        // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_6;        // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_抛物线位移函数) == 0x000008, "Wrong alignment on KFC_AICommon_C_抛物线位移函数");
static_assert(sizeof(KFC_AICommon_C_抛物线位移函数) == 0x000068, "Wrong size on KFC_AICommon_C_抛物线位移函数");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, 激发时长) == 0x000000, "Member 'KFC_AICommon_C_抛物线位移函数::激发时长' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, 激发力度) == 0x000004, "Member 'KFC_AICommon_C_抛物线位移函数::激发力度' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, 发射角度) == 0x000008, "Member 'KFC_AICommon_C_抛物线位移函数::发射角度' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, __WorldContext) == 0x000010, "Member 'KFC_AICommon_C_抛物线位移函数::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, 返回高度) == 0x000018, "Member 'KFC_AICommon_C_抛物线位移函数::返回高度' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, 返回位置) == 0x00001C, "Member 'KFC_AICommon_C_抛物线位移函数::返回位置' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, 高度速度) == 0x000020, "Member 'KFC_AICommon_C_抛物线位移函数::高度速度' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, 距离速度) == 0x000024, "Member 'KFC_AICommon_C_抛物线位移函数::距离速度' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, 当前高度) == 0x000028, "Member 'KFC_AICommon_C_抛物线位移函数::当前高度' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, 当前位置) == 0x00002C, "Member 'KFC_AICommon_C_抛物线位移函数::当前位置' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, 当前速度) == 0x000030, "Member 'KFC_AICommon_C_抛物线位移函数::当前速度' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000034, "Member 'KFC_AICommon_C_抛物线位移函数::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000038, "Member 'KFC_AICommon_C_抛物线位移函数::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x00003C, "Member 'KFC_AICommon_C_抛物线位移函数::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000040, "Member 'KFC_AICommon_C_抛物线位移函数::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000044, "Member 'KFC_AICommon_C_抛物线位移函数::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000048, "Member 'KFC_AICommon_C_抛物线位移函数::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, CallFunc_Square_ReturnValue) == 0x00004C, "Member 'KFC_AICommon_C_抛物线位移函数::CallFunc_Square_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x000050, "Member 'KFC_AICommon_C_抛物线位移函数::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, CallFunc_Multiply_FloatFloat_ReturnValue_4) == 0x000054, "Member 'KFC_AICommon_C_抛物线位移函数::CallFunc_Multiply_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000058, "Member 'KFC_AICommon_C_抛物线位移函数::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, CallFunc_Multiply_FloatFloat_ReturnValue_5) == 0x00005C, "Member 'KFC_AICommon_C_抛物线位移函数::CallFunc_Multiply_FloatFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, CallFunc_Multiply_FloatFloat_ReturnValue_6) == 0x000060, "Member 'KFC_AICommon_C_抛物线位移函数::CallFunc_Multiply_FloatFloat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_抛物线位移函数, CallFunc_Subtract_FloatFloat_ReturnValue_2) == 0x000064, "Member 'KFC_AICommon_C_抛物线位移函数::CallFunc_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.获取自身对于目标仰角
// 0x01C0 (0x01C0 - 0x0000)
struct KFC_AICommon_C_获取自身对于目标仰角 final
{
public:
	class ACharacter*                             目标对象;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             原点对象;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          忽略胶囊体;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         返回角度;                                          // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorUpVector_ReturnValue;             // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue;        // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVectorDouble_X;                      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Y;                      // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Z;                      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue_1;      // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_X_1;                    // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Y_1;                    // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Z_1;                    // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_D_GetScaledCapsuleHalfHeight_ReturnValue; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_D_Subtract_FloatFloat_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_MakeVectorDouble_ReturnValue;             // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_D_GetScaledCapsuleHalfHeight_ReturnValue_1; // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_D_Subtract_FloatFloat_ReturnValue_1;      // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_MakeVectorDouble_ReturnValue_1;           // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_Subtract_VectorVector_ReturnValue;      // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue_2;      // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_VectorDoubleToVector_ReturnValue;    // 0x0120(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorUpVector_ReturnValue_1;           // 0x012C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue_1;                     // 0x0138(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue_2;                     // 0x0144(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DegAcos_ReturnValue;                      // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_D_K2_GetActorLocation_ReturnValue_3;      // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174[0x4];                                      // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_D_Subtract_VectorVector_ReturnValue_1;    // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_VectorDoubleToVector_ReturnValue_1;  // 0x0194(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue_3;                     // 0x01A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue_1;           // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DegAcos_ReturnValue_1;                    // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_获取自身对于目标仰角) == 0x000008, "Wrong alignment on KFC_AICommon_C_获取自身对于目标仰角");
static_assert(sizeof(KFC_AICommon_C_获取自身对于目标仰角) == 0x0001C0, "Wrong size on KFC_AICommon_C_获取自身对于目标仰角");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, 目标对象) == 0x000000, "Member 'KFC_AICommon_C_获取自身对于目标仰角::目标对象' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, 原点对象) == 0x000008, "Member 'KFC_AICommon_C_获取自身对于目标仰角::原点对象' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, 忽略胶囊体) == 0x000010, "Member 'KFC_AICommon_C_获取自身对于目标仰角::忽略胶囊体' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, __WorldContext) == 0x000018, "Member 'KFC_AICommon_C_获取自身对于目标仰角::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, 返回角度) == 0x000020, "Member 'KFC_AICommon_C_获取自身对于目标仰角::返回角度' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_GetActorUpVector_ReturnValue) == 0x000024, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_GetActorUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_D_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_D_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_Normal_ReturnValue) == 0x000048, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_BreakVectorDouble_X) == 0x000058, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_BreakVectorDouble_X' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_BreakVectorDouble_Y) == 0x000060, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_BreakVectorDouble_Y' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_BreakVectorDouble_Z) == 0x000068, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_BreakVectorDouble_Z' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_D_K2_GetActorLocation_ReturnValue_1) == 0x000070, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_D_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_BreakVectorDouble_X_1) == 0x000088, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_BreakVectorDouble_X_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_BreakVectorDouble_Y_1) == 0x000090, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_BreakVectorDouble_Y_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_BreakVectorDouble_Z_1) == 0x000098, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_BreakVectorDouble_Z_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_D_GetScaledCapsuleHalfHeight_ReturnValue) == 0x0000A0, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_D_GetScaledCapsuleHalfHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_D_Subtract_FloatFloat_ReturnValue) == 0x0000A8, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_D_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_MakeVectorDouble_ReturnValue) == 0x0000B0, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_MakeVectorDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_D_GetScaledCapsuleHalfHeight_ReturnValue_1) == 0x0000C8, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_D_GetScaledCapsuleHalfHeight_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_D_Subtract_FloatFloat_ReturnValue_1) == 0x0000D0, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_D_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_MakeVectorDouble_ReturnValue_1) == 0x0000D8, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_MakeVectorDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_D_Subtract_VectorVector_ReturnValue) == 0x0000F0, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_D_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_D_K2_GetActorLocation_ReturnValue_2) == 0x000108, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_D_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_Conv_VectorDoubleToVector_ReturnValue) == 0x000120, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_Conv_VectorDoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_GetActorUpVector_ReturnValue_1) == 0x00012C, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_GetActorUpVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_Normal_ReturnValue_1) == 0x000138, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_Normal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_Normal_ReturnValue_2) == 0x000144, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_Normal_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_Dot_VectorVector_ReturnValue) == 0x000150, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_DegAcos_ReturnValue) == 0x000154, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_DegAcos_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_D_K2_GetActorLocation_ReturnValue_3) == 0x000158, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_D_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000170, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_D_Subtract_VectorVector_ReturnValue_1) == 0x000178, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_D_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_Add_FloatFloat_ReturnValue) == 0x000190, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_Conv_VectorDoubleToVector_ReturnValue_1) == 0x000194, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_Conv_VectorDoubleToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_Normal_ReturnValue_3) == 0x0001A0, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_Normal_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_Dot_VectorVector_ReturnValue_1) == 0x0001AC, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_Dot_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_DegAcos_ReturnValue_1) == 0x0001B0, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_DegAcos_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0001B4, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取自身对于目标仰角, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x0001B8, "Member 'KFC_AICommon_C_获取自身对于目标仰角::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.获取 Base属性值
// 0x0020 (0x0020 - 0x0000)
struct KFC_AICommon_C_获取_Base属性值 final
{
public:
	class ATsBaseCharacter_C*                     目标;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         属性id;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         属性值;                                            // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAttributeBaseValue_ReturnValue;        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_获取_Base属性值) == 0x000008, "Wrong alignment on KFC_AICommon_C_获取_Base属性值");
static_assert(sizeof(KFC_AICommon_C_获取_Base属性值) == 0x000020, "Wrong size on KFC_AICommon_C_获取_Base属性值");
static_assert(offsetof(KFC_AICommon_C_获取_Base属性值, 目标) == 0x000000, "Member 'KFC_AICommon_C_获取_Base属性值::目标' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取_Base属性值, 属性id) == 0x000008, "Member 'KFC_AICommon_C_获取_Base属性值::属性id' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取_Base属性值, __WorldContext) == 0x000010, "Member 'KFC_AICommon_C_获取_Base属性值::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取_Base属性值, 属性值) == 0x000018, "Member 'KFC_AICommon_C_获取_Base属性值::属性值' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取_Base属性值, CallFunc_GetAttributeBaseValue_ReturnValue) == 0x00001C, "Member 'KFC_AICommon_C_获取_Base属性值::CallFunc_GetAttributeBaseValue_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.获取Current属性值
// 0x0020 (0x0020 - 0x0000)
struct KFC_AICommon_C_获取Current属性值 final
{
public:
	class ABaseCharacter*                         目标;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         属性id;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         属性值;                                            // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAttributeCurrentValue_ReturnValue;     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_获取Current属性值) == 0x000008, "Wrong alignment on KFC_AICommon_C_获取Current属性值");
static_assert(sizeof(KFC_AICommon_C_获取Current属性值) == 0x000020, "Wrong size on KFC_AICommon_C_获取Current属性值");
static_assert(offsetof(KFC_AICommon_C_获取Current属性值, 目标) == 0x000000, "Member 'KFC_AICommon_C_获取Current属性值::目标' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取Current属性值, 属性id) == 0x000008, "Member 'KFC_AICommon_C_获取Current属性值::属性id' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取Current属性值, __WorldContext) == 0x000010, "Member 'KFC_AICommon_C_获取Current属性值::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取Current属性值, 属性值) == 0x000018, "Member 'KFC_AICommon_C_获取Current属性值::属性值' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取Current属性值, CallFunc_GetAttributeCurrentValue_ReturnValue) == 0x00001C, "Member 'KFC_AICommon_C_获取Current属性值::CallFunc_GetAttributeCurrentValue_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.忽略 Z Double
// 0x0068 (0x0068 - 0x0000)
struct KFC_AICommon_C_忽略_Z_Double final
{
public:
	struct FVectorDouble                          InVec;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          OutVec;                                            // 0x0020(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_X;                      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Y;                      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVectorDouble_Z;                      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          CallFunc_MakeVectorDouble_ReturnValue;             // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_忽略_Z_Double) == 0x000008, "Wrong alignment on KFC_AICommon_C_忽略_Z_Double");
static_assert(sizeof(KFC_AICommon_C_忽略_Z_Double) == 0x000068, "Wrong size on KFC_AICommon_C_忽略_Z_Double");
static_assert(offsetof(KFC_AICommon_C_忽略_Z_Double, InVec) == 0x000000, "Member 'KFC_AICommon_C_忽略_Z_Double::InVec' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_忽略_Z_Double, __WorldContext) == 0x000018, "Member 'KFC_AICommon_C_忽略_Z_Double::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_忽略_Z_Double, OutVec) == 0x000020, "Member 'KFC_AICommon_C_忽略_Z_Double::OutVec' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_忽略_Z_Double, CallFunc_BreakVectorDouble_X) == 0x000038, "Member 'KFC_AICommon_C_忽略_Z_Double::CallFunc_BreakVectorDouble_X' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_忽略_Z_Double, CallFunc_BreakVectorDouble_Y) == 0x000040, "Member 'KFC_AICommon_C_忽略_Z_Double::CallFunc_BreakVectorDouble_Y' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_忽略_Z_Double, CallFunc_BreakVectorDouble_Z) == 0x000048, "Member 'KFC_AICommon_C_忽略_Z_Double::CallFunc_BreakVectorDouble_Z' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_忽略_Z_Double, CallFunc_MakeVectorDouble_ReturnValue) == 0x000050, "Member 'KFC_AICommon_C_忽略_Z_Double::CallFunc_MakeVectorDouble_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.获取黑板坐标
// 0x0068 (0x0068 - 0x0000)
struct KFC_AICommon_C_获取黑板坐标 final
{
public:
	class ATsBaseCharacter_C*                     角色;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Key;                                               // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorDouble                          位置;                                              // 0x0020(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_CreatureInterface_C> CallFunc_GetEntityId_self_CastInput;               // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetEntityId_ReturnValue;                  // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          CallFunc_GetVectorValueByEntity_ReturnValue;       // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_获取黑板坐标) == 0x000008, "Wrong alignment on KFC_AICommon_C_获取黑板坐标");
static_assert(sizeof(KFC_AICommon_C_获取黑板坐标) == 0x000068, "Wrong size on KFC_AICommon_C_获取黑板坐标");
static_assert(offsetof(KFC_AICommon_C_获取黑板坐标, 角色) == 0x000000, "Member 'KFC_AICommon_C_获取黑板坐标::角色' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板坐标, Key) == 0x000008, "Member 'KFC_AICommon_C_获取黑板坐标::Key' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板坐标, __WorldContext) == 0x000018, "Member 'KFC_AICommon_C_获取黑板坐标::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板坐标, 位置) == 0x000020, "Member 'KFC_AICommon_C_获取黑板坐标::位置' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板坐标, CallFunc_GetEntityId_self_CastInput) == 0x000038, "Member 'KFC_AICommon_C_获取黑板坐标::CallFunc_GetEntityId_self_CastInput' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板坐标, CallFunc_GetEntityId_ReturnValue) == 0x000048, "Member 'KFC_AICommon_C_获取黑板坐标::CallFunc_GetEntityId_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_获取黑板坐标, CallFunc_GetVectorValueByEntity_ReturnValue) == 0x000050, "Member 'KFC_AICommon_C_获取黑板坐标::CallFunc_GetVectorValueByEntity_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.怪物通用转向
// 0x0048 (0x0048 - 0x0000)
struct KFC_AICommon_C_怪物通用转向 final
{
public:
	struct FRotator                               目标旋转体;                                        // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         TargetInterpSpeed_Const_;                          // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ActorInterpSpeed_Smooth_;                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     旋转对象;                                          // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_RInterpTo_Constant_ReturnValue;           // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetActorRotationWithContext_ReturnValue;  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KFC_AICommon_C_怪物通用转向) == 0x000008, "Wrong alignment on KFC_AICommon_C_怪物通用转向");
static_assert(sizeof(KFC_AICommon_C_怪物通用转向) == 0x000048, "Wrong size on KFC_AICommon_C_怪物通用转向");
static_assert(offsetof(KFC_AICommon_C_怪物通用转向, 目标旋转体) == 0x000000, "Member 'KFC_AICommon_C_怪物通用转向::目标旋转体' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_怪物通用转向, TargetInterpSpeed_Const_) == 0x00000C, "Member 'KFC_AICommon_C_怪物通用转向::TargetInterpSpeed_Const_' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_怪物通用转向, ActorInterpSpeed_Smooth_) == 0x000010, "Member 'KFC_AICommon_C_怪物通用转向::ActorInterpSpeed_Smooth_' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_怪物通用转向, 旋转对象) == 0x000018, "Member 'KFC_AICommon_C_怪物通用转向::旋转对象' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_怪物通用转向, __WorldContext) == 0x000020, "Member 'KFC_AICommon_C_怪物通用转向::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_怪物通用转向, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000028, "Member 'KFC_AICommon_C_怪物通用转向::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_怪物通用转向, CallFunc_K2_GetActorRotation_ReturnValue) == 0x00002C, "Member 'KFC_AICommon_C_怪物通用转向::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_怪物通用转向, CallFunc_RInterpTo_Constant_ReturnValue) == 0x000038, "Member 'KFC_AICommon_C_怪物通用转向::CallFunc_RInterpTo_Constant_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_怪物通用转向, CallFunc_SetActorRotationWithContext_ReturnValue) == 0x000044, "Member 'KFC_AICommon_C_怪物通用转向::CallFunc_SetActorRotationWithContext_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.是否需要移动
// 0x0020 (0x0020 - 0x0000)
struct KFC_AICommon_C_是否需要移动 final
{
public:
	class ATsBaseCharacter_C*                     BaseCharacter;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          是否正在移动;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          是否有移动输入;                                    // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	EKuroNetRole                                  CallFunc_Kuro_GetLocalRole_ReturnValue;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KFC_AICommon_C_是否需要移动) == 0x000008, "Wrong alignment on KFC_AICommon_C_是否需要移动");
static_assert(sizeof(KFC_AICommon_C_是否需要移动) == 0x000020, "Wrong size on KFC_AICommon_C_是否需要移动");
static_assert(offsetof(KFC_AICommon_C_是否需要移动, BaseCharacter) == 0x000000, "Member 'KFC_AICommon_C_是否需要移动::BaseCharacter' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_是否需要移动, 是否正在移动) == 0x000008, "Member 'KFC_AICommon_C_是否需要移动::是否正在移动' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_是否需要移动, 是否有移动输入) == 0x000009, "Member 'KFC_AICommon_C_是否需要移动::是否有移动输入' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_是否需要移动, __WorldContext) == 0x000010, "Member 'KFC_AICommon_C_是否需要移动::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_是否需要移动, ReturnValue) == 0x000018, "Member 'KFC_AICommon_C_是否需要移动::ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_是否需要移动, CallFunc_Kuro_GetLocalRole_ReturnValue) == 0x000019, "Member 'KFC_AICommon_C_是否需要移动::CallFunc_Kuro_GetLocalRole_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_是否需要移动, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001A, "Member 'KFC_AICommon_C_是否需要移动::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_是否需要移动, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00001B, "Member 'KFC_AICommon_C_是否需要移动::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_是否需要移动, CallFunc_BooleanOR_ReturnValue) == 0x00001C, "Member 'KFC_AICommon_C_是否需要移动::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_是否需要移动, CallFunc_BooleanOR_ReturnValue_1) == 0x00001D, "Member 'KFC_AICommon_C_是否需要移动::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_是否需要移动, CallFunc_BooleanAND_ReturnValue) == 0x00001E, "Member 'KFC_AICommon_C_是否需要移动::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.创建AIC监听
// 0x0048 (0x0048 - 0x0000)
struct KFC_AICommon_C_创建AIC监听 final
{
public:
	class UObject*                                AIC自身对象;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TDelegate<void(bool bContent)>                Event;                                             // 0x0008(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper)
	class UObject*                                __WorldContext;                                    // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKuroBooleanEventBinder*                ReturnValue;                                       // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UKuroBooleanEventBinder*                CallFunc_SpawnObject_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_创建AIC监听) == 0x000008, "Wrong alignment on KFC_AICommon_C_创建AIC监听");
static_assert(sizeof(KFC_AICommon_C_创建AIC监听) == 0x000048, "Wrong size on KFC_AICommon_C_创建AIC监听");
static_assert(offsetof(KFC_AICommon_C_创建AIC监听, AIC自身对象) == 0x000000, "Member 'KFC_AICommon_C_创建AIC监听::AIC自身对象' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_创建AIC监听, Event) == 0x000008, "Member 'KFC_AICommon_C_创建AIC监听::Event' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_创建AIC监听, __WorldContext) == 0x000030, "Member 'KFC_AICommon_C_创建AIC监听::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_创建AIC监听, ReturnValue) == 0x000038, "Member 'KFC_AICommon_C_创建AIC监听::ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_创建AIC监听, CallFunc_SpawnObject_ReturnValue) == 0x000040, "Member 'KFC_AICommon_C_创建AIC监听::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.创建仇恨感知监听
// 0x0048 (0x0048 - 0x0000)
struct KFC_AICommon_C_创建仇恨感知监听 final
{
public:
	class UObject*                                AIC自身对象;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TDelegate<void(const TArray<class AActor*>& AddActor, const TArray<class AActor*>& RemoveActor, const TArray<int32>& RemoveActorIds, int32 Num)> Event1;                                            // 0x0008(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                __WorldContext;                                    // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKuroPerceptionEventBinder*             ReturnValue;                                       // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UKuroPerceptionEventBinder*             CallFunc_SpawnObject_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_创建仇恨感知监听) == 0x000008, "Wrong alignment on KFC_AICommon_C_创建仇恨感知监听");
static_assert(sizeof(KFC_AICommon_C_创建仇恨感知监听) == 0x000048, "Wrong size on KFC_AICommon_C_创建仇恨感知监听");
static_assert(offsetof(KFC_AICommon_C_创建仇恨感知监听, AIC自身对象) == 0x000000, "Member 'KFC_AICommon_C_创建仇恨感知监听::AIC自身对象' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_创建仇恨感知监听, Event1) == 0x000008, "Member 'KFC_AICommon_C_创建仇恨感知监听::Event1' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_创建仇恨感知监听, __WorldContext) == 0x000030, "Member 'KFC_AICommon_C_创建仇恨感知监听::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_创建仇恨感知监听, ReturnValue) == 0x000038, "Member 'KFC_AICommon_C_创建仇恨感知监听::ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_创建仇恨感知监听, CallFunc_SpawnObject_ReturnValue) == 0x000040, "Member 'KFC_AICommon_C_创建仇恨感知监听::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function KFC_AICommon.KFC_AICommon_C.创建物件破坏监听
// 0x0048 (0x0048 - 0x0000)
struct KFC_AICommon_C_创建物件破坏监听 final
{
public:
	class UObject*                                AIC自身对象;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TDelegate<void(class AActor* Actor, bool bContent)> Event;                                             // 0x0008(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper)
	class UObject*                                __WorldContext;                                    // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKuroActorEventBinder*                  ReturnValue;                                       // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UKuroActorEventBinder*                  CallFunc_SpawnObject_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KFC_AICommon_C_创建物件破坏监听) == 0x000008, "Wrong alignment on KFC_AICommon_C_创建物件破坏监听");
static_assert(sizeof(KFC_AICommon_C_创建物件破坏监听) == 0x000048, "Wrong size on KFC_AICommon_C_创建物件破坏监听");
static_assert(offsetof(KFC_AICommon_C_创建物件破坏监听, AIC自身对象) == 0x000000, "Member 'KFC_AICommon_C_创建物件破坏监听::AIC自身对象' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_创建物件破坏监听, Event) == 0x000008, "Member 'KFC_AICommon_C_创建物件破坏监听::Event' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_创建物件破坏监听, __WorldContext) == 0x000030, "Member 'KFC_AICommon_C_创建物件破坏监听::__WorldContext' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_创建物件破坏监听, ReturnValue) == 0x000038, "Member 'KFC_AICommon_C_创建物件破坏监听::ReturnValue' has a wrong offset!");
static_assert(offsetof(KFC_AICommon_C_创建物件破坏监听, CallFunc_SpawnObject_ReturnValue) == 0x000040, "Member 'KFC_AICommon_C_创建物件破坏监听::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

}

