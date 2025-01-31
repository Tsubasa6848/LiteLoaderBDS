#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/v1_20_50/BlockDescriptor.h"
#include "mc/deps/puv/v1_20_50/RepairableItemComponent.h"
#include "mc/deps/puv/v1_20_50/ShooterItemComponent.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Puv::v1_20_50 { struct BlockDescriptor; }
namespace Puv::v1_20_50 { struct ComponentItemComponentData; }
namespace Puv::v1_20_50 { struct CooldownItemComponent; }
namespace Puv::v1_20_50 { struct DiggerItemComponent; }
namespace Puv::v1_20_50 { struct EnchantableItemComponent; }
namespace Puv::v1_20_50 { struct EntityPlacerItemComponent; }
namespace Puv::v1_20_50 { struct FoodItemComponent; }
namespace Puv::v1_20_50 { struct InteractButtonItemComponent; }
namespace Puv::v1_20_50 { struct PlanterItemComponent; }
namespace Puv::v1_20_50 { struct ProjectileItemComponent; }
namespace Puv::v1_20_50 { struct ShooterItemComponent; }
namespace Puv::v1_20_50 { struct TagsItemComponent; }
namespace Puv::v1_20_50::BlockDescriptorSerializer { struct BlockDescriptorProxy; }
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal { struct ReflectionCtx; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace Puv::v1_20_50 {
// NOLINTBEGIN
MCAPI void bindItemComponentTypes(struct cereal::ReflectionCtx& ctx);

MCAPI bool operator==(struct Puv::v1_20_50::BlockDescriptor const& a, struct Puv::v1_20_50::BlockDescriptor const& b);

MCAPI bool operator==(
    struct Puv::v1_20_50::BlockDescriptor::Compound const& a,
    struct Puv::v1_20_50::BlockDescriptor::Compound const& b
);
// NOLINTEND

}; // namespace Puv::v1_20_50
