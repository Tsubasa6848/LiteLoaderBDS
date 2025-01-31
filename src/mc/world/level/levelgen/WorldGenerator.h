#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/platform/threading/ConditionVariable.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/platform/threading/SpinLock.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/levelgen/v1/IPreliminarySurfaceProvider.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

class HardcodedSpawnAreaRegistry;
class StructureFeatureRegistry;
class BiomeArea;
class HashedString;

class WorldGenerator : public ChunkSource, public IPreliminarySurfaceProvider {
public:
    // WorldGenerator inner types declare
    // clang-format off
    struct BlockVolumeDimensions;
    // clang-format on

    // WorldGenerator inner types define
    struct BlockVolumeDimensions {
        uint mWidth;  // this+0x0
        uint mDepth;  // this+0x4
        uint mHeight; // this+0x8
    };

    std::unique_ptr<HardcodedSpawnAreaRegistry> mHardcodedSpawnTypes;           // this+0x78
    std::unique_ptr<StructureFeatureRegistry>   mStructureFeatureRegistry;      // this+0x80
    Bedrock::Threading::Mutex                   mCreateStructureInstancesMutex; // location=0x80
    Bedrock::Threading::ConditionVariable       mStructureInstanceWaitVar;      // location=0xa8
    std::atomic<int>                            mActiveStructureInstanceCreateCount;
    std::unordered_set<ChunkPos>                visitedPositions;
    SpinLock                                    visitedPositionsMutex; // this+0x168

public:
    // prevent constructor by default
    WorldGenerator& operator=(WorldGenerator const&);
    WorldGenerator(WorldGenerator const&);
    WorldGenerator();

public:
    // NOLINTBEGIN
    virtual ~WorldGenerator();

    // vIndex: 33
    virtual void init();

    // vIndex: 34
    virtual ::StructureFeatureType findStructureFeatureTypeAt(class BlockPos const& pos);

    // vIndex: 35
    virtual bool isStructureFeatureTypeAt(class BlockPos const& pos, ::StructureFeatureType type) const;

    // vIndex: 36
    virtual bool findNearestStructureFeature(
        ::StructureFeatureType            feature,
        class BlockPos const&             origin,
        class BlockPos&                   pos,
        bool                              mustBeInNewChunks,
        std::optional<class HashedString> biomeTag
    );

    // vIndex: 37
    virtual void garbageCollectBlueprints(class buffer_span<class ChunkPos> activeChunks);

    // vIndex: 38
    virtual void
    prepareHeights(class BlockVolume& box, class ChunkPos const& chunkPos, bool factorInBeardsAndShavers) = 0;

    // vIndex: 39
    virtual void prepareAndComputeHeights(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        std::vector<short>&   ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    ) = 0;

    // vIndex: 40
    virtual class BiomeArea getBiomeArea(class BoundingBox const& area, uint scale) const = 0;

    // vIndex: 41
    virtual class BiomeSource const& getBiomeSource() const = 0;

    // vIndex: 42
    virtual struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const = 0;

    // vIndex: 43
    virtual class BlockPos findSpawnPosition() const = 0;

    // vIndex: 44
    virtual void addHardcodedSpawnAreas(class LevelChunk& lc);

    // vIndex: 45
    virtual void debugRender();

    // vIndex: 46
    virtual void decorateWorldGenLoadChunk(
        class Biome const&       biome,
        class LevelChunk&        lc,
        class BlockVolumeTarget& target,
        class Random&            random,
        class ChunkPos const&    pos
    ) const = 0;

    // vIndex: 47
    virtual void decorateWorldGenPostProcess(
        class Biome const& biome,
        class LevelChunk&  lc,
        class BlockSource& source,
        class Random&      random
    ) const = 0;

    // IPreliminarySurfaceProvider vtable overloaded functions
    virtual std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4> worldPos) const;

    // ChunkSource vtable overloaded function
    virtual void
    postProcessMobsAt(class BlockSource& region, int chunkWestBlock, int chunkNorthBlock, class Random& random);

    MCAPI explicit WorldGenerator(class Dimension& dimension);

    MCAPI WorldGenerator(
        class Dimension&                                dimension,
        std::unique_ptr<class StructureFeatureRegistry> structureFeatureRegistry
    );

    MCAPI std::vector<short> computeChunkHeightMap(class ChunkPos const& pos);

    MCAPI class StructureFeatureRegistry& getStructureFeatureRegistry() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void postProcessStructureFeatures(class BlockSource& region, class Random& random, int chunkX, int chunkZ);

    MCAPI void postProcessStructures(class BlockSource& region, class Random& random, int chunkX, int chunkZ);

    MCAPI void
    preProcessStructures(class Dimension& dimension, class ChunkPos const& cp, class BiomeSource const& biomeSource);

    MCAPI void prepareStructureFeatureBlueprints(
        class Dimension&                         dimension,
        class ChunkPos const&                    cp,
        class BiomeSource const&                 biomeSource,
        class IPreliminarySurfaceProvider const& preliminarySurfaceProvider
    );

    MCAPI void waitForStructures();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForChunkSource();

    MCAPI static void** vftableForIPreliminarySurfaceProvider();

    MCAPI void* ctor$(class Dimension& dimension);

    MCAPI void*
    ctor$(class Dimension& dimension, std::unique_ptr<class StructureFeatureRegistry> structureFeatureRegistry);

    MCAPI void dtor$();

    MCAPI void addHardcodedSpawnAreas$(class LevelChunk& lc);

    MCAPI void debugRender$();

    MCAPI bool findNearestStructureFeature$(
        ::StructureFeatureType            feature,
        class BlockPos const&             origin,
        class BlockPos&                   pos,
        bool                              mustBeInNewChunks,
        std::optional<class HashedString> biomeTag
    );

    MCAPI ::StructureFeatureType findStructureFeatureTypeAt$(class BlockPos const& pos);

    MCAPI void garbageCollectBlueprints$(class buffer_span<class ChunkPos> activeChunks);

    MCAPI std::optional<short> getPreliminarySurfaceLevel$(class DividedPos2d<4>) const;

    MCAPI void init$();

    MCAPI bool isStructureFeatureTypeAt$(class BlockPos const& pos, ::StructureFeatureType type) const;

    MCAPI void
    postProcessMobsAt$(class BlockSource& region, int chunkWestBlock, int chunkNorthBlock, class Random& random);

    MCAPI static uint64 const& TICKING_QUEUE_PASS_LIMIT();

    // NOLINTEND
};
