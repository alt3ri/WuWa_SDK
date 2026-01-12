#pragma once
// Package: JsEnv

#include "Basic.hpp"


namespace SDK
{

// Enum JsEnv.EV8GCType
// NumValues: 0x0008
enum class EV8GCType : uint8
{
	DoNothing                                = 0,
	CallV8LowMemory                          = 1,
	CallMinorGC                              = 2,
	CallFullGC                               = 3,
	CallMemoryPressureNone                   = 4,
	CallMemoryPressureModerate               = 5,
	CallMemoryPressureCritical               = 6,
	EV8GCType_MAX                            = 7,
};

// ScriptStruct JsEnv.PropertyMetaRoot
// 0x0001 (0x0001 - 0x0000)
struct FPropertyMetaRoot final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPropertyMetaRoot) == 0x000001, "Wrong alignment on FPropertyMetaRoot");
static_assert(sizeof(FPropertyMetaRoot) == 0x000001, "Wrong size on FPropertyMetaRoot");

// ScriptStruct JsEnv.ArrayBuffer
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FArrayBuffer final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FArrayBuffer) == 0x000008, "Wrong alignment on FArrayBuffer");
static_assert(sizeof(FArrayBuffer) == 0x000010, "Wrong size on FArrayBuffer");

// ScriptStruct JsEnv.JsObject
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FJsObject final
{
public:
	uint8                                         Pad_0[0x18];                                       // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FJsObject) == 0x000008, "Wrong alignment on FJsObject");
static_assert(sizeof(FJsObject) == 0x000018, "Wrong size on FJsObject");

}

