#pragma once
// Package: BPL_BulletPreview

#include "Basic.hpp"

#include "SReBulletDataMain_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPL_BulletPreview.BPL_BulletPreview_C.ShowBulletPreview
// 0x0FC0 (0x0FC0 - 0x0000)
struct BPL_BulletPreview_C_ShowBulletPreview final
{
public:
	class FString                                 子弹表路径;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   子弹ID;                                            // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 拥有者;                                            // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 meshComp;                                          // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Ret;                                               // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSReBulletDataMain                     子弹配置行;                                        // 0x0040(0x0790)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UDataTable*                             CallFunc_GetDataTableOnEditor_Return;              // 0x07D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEditor_ReturnValue;                     // 0x07D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D9[0x7];                                      // 0x07D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransformDouble                       CallFunc_D_GetTransform_ReturnValue;               // 0x07E0(0x0040)(IsPlainOldData, NoDestructor)
	class ABP_ActorBulletPreview_C*               CallFunc_D_SpawnActorFromClass_ReturnValue;        // 0x0820(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSReBulletDataMain                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x0828(0x0790)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0FB8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_BulletPreview_C_ShowBulletPreview) == 0x000010, "Wrong alignment on BPL_BulletPreview_C_ShowBulletPreview");
static_assert(sizeof(BPL_BulletPreview_C_ShowBulletPreview) == 0x000FC0, "Wrong size on BPL_BulletPreview_C_ShowBulletPreview");
static_assert(offsetof(BPL_BulletPreview_C_ShowBulletPreview, 子弹表路径) == 0x000000, "Member 'BPL_BulletPreview_C_ShowBulletPreview::子弹表路径' has a wrong offset!");
static_assert(offsetof(BPL_BulletPreview_C_ShowBulletPreview, 子弹ID) == 0x000010, "Member 'BPL_BulletPreview_C_ShowBulletPreview::子弹ID' has a wrong offset!");
static_assert(offsetof(BPL_BulletPreview_C_ShowBulletPreview, 拥有者) == 0x000020, "Member 'BPL_BulletPreview_C_ShowBulletPreview::拥有者' has a wrong offset!");
static_assert(offsetof(BPL_BulletPreview_C_ShowBulletPreview, meshComp) == 0x000028, "Member 'BPL_BulletPreview_C_ShowBulletPreview::meshComp' has a wrong offset!");
static_assert(offsetof(BPL_BulletPreview_C_ShowBulletPreview, __WorldContext) == 0x000030, "Member 'BPL_BulletPreview_C_ShowBulletPreview::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_BulletPreview_C_ShowBulletPreview, Ret) == 0x000038, "Member 'BPL_BulletPreview_C_ShowBulletPreview::Ret' has a wrong offset!");
static_assert(offsetof(BPL_BulletPreview_C_ShowBulletPreview, 子弹配置行) == 0x000040, "Member 'BPL_BulletPreview_C_ShowBulletPreview::子弹配置行' has a wrong offset!");
static_assert(offsetof(BPL_BulletPreview_C_ShowBulletPreview, CallFunc_GetDataTableOnEditor_Return) == 0x0007D0, "Member 'BPL_BulletPreview_C_ShowBulletPreview::CallFunc_GetDataTableOnEditor_Return' has a wrong offset!");
static_assert(offsetof(BPL_BulletPreview_C_ShowBulletPreview, CallFunc_IsEditor_ReturnValue) == 0x0007D8, "Member 'BPL_BulletPreview_C_ShowBulletPreview::CallFunc_IsEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_BulletPreview_C_ShowBulletPreview, CallFunc_D_GetTransform_ReturnValue) == 0x0007E0, "Member 'BPL_BulletPreview_C_ShowBulletPreview::CallFunc_D_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_BulletPreview_C_ShowBulletPreview, CallFunc_D_SpawnActorFromClass_ReturnValue) == 0x000820, "Member 'BPL_BulletPreview_C_ShowBulletPreview::CallFunc_D_SpawnActorFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_BulletPreview_C_ShowBulletPreview, CallFunc_GetDataTableRowFromName_OutRow) == 0x000828, "Member 'BPL_BulletPreview_C_ShowBulletPreview::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BPL_BulletPreview_C_ShowBulletPreview, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000FB8, "Member 'BPL_BulletPreview_C_ShowBulletPreview::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

}

