#pragma once
// Package: BlockoutToolsPlugin

#include "Basic.hpp"


namespace SDK
{

// Enum BlockoutToolsPlugin.EBlockoutMaterialType
// NumValues: 0x0003
enum class EBlockoutMaterialType : uint8
{
	BlockoutMaterialType_Grid                = 0,
	BlockoutMaterialType_CustomMaterial      = 1,
	BlockoutMaterialType_MAX                 = 2,
};

}

