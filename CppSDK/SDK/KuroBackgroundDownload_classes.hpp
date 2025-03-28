#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroBackgroundDownload

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class KuroBackgroundDownload.KuroBgPrefixDownload
// 0x0038 (0x0068 - 0x0030)
class UKuroBgPrefixDownload final : public UObject
{
public:
	FMulticastInlineDelegateProperty_             AllCompleteDelegate;                               // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             ProgressDelegate;                                  // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             ProgressDelegateNew;                               // 0x0050(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Start(const class FString& Suffix, const TArray<class FString>& Prefixes, const TArray<struct FKuroRequestDownloadInfo>& Targets, int32 InRetryCount, float InTimeout, bool bNewIOSApi);

	void Cancel() const;
	void Continue() const;
	int32 GetBpsSpeed() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroBgPrefixDownload">();
	}
	static class UKuroBgPrefixDownload* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroBgPrefixDownload>();
	}
};
static_assert(alignof(UKuroBgPrefixDownload) == 0x000008, "Wrong alignment on UKuroBgPrefixDownload");
static_assert(sizeof(UKuroBgPrefixDownload) == 0x000068, "Wrong size on UKuroBgPrefixDownload");
static_assert(offsetof(UKuroBgPrefixDownload, AllCompleteDelegate) == 0x000030, "Member 'UKuroBgPrefixDownload::AllCompleteDelegate' has a wrong offset!");
static_assert(offsetof(UKuroBgPrefixDownload, ProgressDelegate) == 0x000040, "Member 'UKuroBgPrefixDownload::ProgressDelegate' has a wrong offset!");
static_assert(offsetof(UKuroBgPrefixDownload, ProgressDelegateNew) == 0x000050, "Member 'UKuroBgPrefixDownload::ProgressDelegateNew' has a wrong offset!");

}

