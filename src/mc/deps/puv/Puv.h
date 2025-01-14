#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/CerealUpgraderBase.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/deps/puv/Logger.h"
#include "mc/deps/puv/LoggerIterator.h"
#include "mc/deps/puv/RangeType.h"
#include "mc/deps/puv/v1_20_50/BlockDescriptor.h"
#include "mc/deps/puv/v1_20_50/RepairableItemComponent.h"
#include "mc/deps/puv/v1_20_50/ShooterItemComponent.h"
#include "mc/deps/puv/v1_20_60/BlockCulling.h"
#include "mc/external/cereal/BasicNumericConstraint.h"
#include "mc/external/cereal/ResultCode.h"
#include "mc/external/cereal/SerializerContext.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class IntRangeConstraint; }
namespace Puv { class LoadResultAny; }
namespace Puv { class Logger; }
namespace Puv { class ParserBase; }
namespace Puv { class Upgrader; }
namespace Puv { class VersionRange; }
namespace Puv::Legacy { struct ItemDescriptor; }
namespace Puv::internal { struct PathElement; }
namespace Puv::v1_20_50 { struct BlockDescriptor; }
namespace Puv::v1_20_50 { struct ComponentItemComponentData; }
namespace Puv::v1_20_50 { struct CooldownItemComponent; }
namespace Puv::v1_20_50 { struct DiggerItemComponent; }
namespace Puv::v1_20_50 { struct EnchantableItemComponent; }
namespace Puv::v1_20_50 { struct EntityPlacerItemComponent; }
namespace Puv::v1_20_50 { struct FoodItemComponent; }
namespace Puv::v1_20_50 { struct IconItemComponent; }
namespace Puv::v1_20_50 { struct InteractButtonItemComponent; }
namespace Puv::v1_20_50 { struct PlanterItemComponent; }
namespace Puv::v1_20_50 { struct ProjectileItemComponent; }
namespace Puv::v1_20_50 { struct ShooterItemComponent; }
namespace Puv::v1_20_50 { struct TagsItemComponent; }
namespace Puv::v1_20_50::BlockDescriptorSerializer { struct BlockDescriptorProxy; }
namespace Puv::v1_20_60 { struct ComponentItemComponentData; }
namespace Puv::v1_20_60 { struct IconItemComponent; }
namespace Puv::v1_20_80 { struct ComponentItemComponentData; }
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal { class SerializerEnumMapping; }
namespace cereal { struct ReflectionCtx; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace Puv {
// NOLINTBEGIN
MCAPI class SemVersion pickFormatVersion(std::string const& input);
// NOLINTEND

}; // namespace Puv
