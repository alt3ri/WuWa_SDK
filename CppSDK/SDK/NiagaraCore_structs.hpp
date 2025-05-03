#pragma once
// Package: NiagaraCore

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct NiagaraCore.NiagaraCompileHash
// 0x0010 (0x0010 - 0x0000)
struct FNiagaraCompileHash final
{
public:
	TArray<uint8>                                 DataHash;                                          // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FNiagaraCompileHash) == 0x000008, "Wrong alignment on FNiagaraCompileHash");
static_assert(sizeof(FNiagaraCompileHash) == 0x000010, "Wrong size on FNiagaraCompileHash");
static_assert(offsetof(FNiagaraCompileHash, DataHash) == 0x000000, "Member 'FNiagaraCompileHash::DataHash' has a wrong offset!");

}

