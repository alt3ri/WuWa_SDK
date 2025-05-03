#pragma once
// Package: XeSSBlueprint

#include "Basic.hpp"


namespace SDK
{

// Enum XeSSBlueprint.EXeSSQualityMode
// NumValues: 0x0009
enum class EXeSSQualityMode : uint8
{
	Off                                      = 0,
	UltraPerformance                         = 1,
	Performance                              = 2,
	Balanced                                 = 3,
	Quality                                  = 4,
	UltraQuality                             = 5,
	UltraQualityPlus                         = 6,
	AntiAliasing                             = 7,
	EXeSSQualityMode_MAX                     = 8,
};

}

