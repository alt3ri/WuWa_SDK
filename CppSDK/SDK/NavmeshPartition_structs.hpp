#pragma once
// Package: NavmeshPartition

#include "Basic.hpp"


namespace SDK
{

// Enum NavmeshPartition.ENavPartition
// NumValues: 0x0004
enum class ENavPartition : uint8
{
	Normal                                   = 0,
	Water                                    = 1,
	Max                                      = 2,
	ENavPartition_MAX                        = 3,
};

}

