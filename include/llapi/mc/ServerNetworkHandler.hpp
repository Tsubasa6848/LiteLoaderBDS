/**
 * @file  ServerNetworkHandler.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"
#include "Social.hpp"
#include "Automation.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerNetworkHandler.
 *
 */
class ServerNetworkHandler {

#define AFTER_EXTRA
// Add Member There
#define ENABLE_VIRTUAL_FAKESYMBOL_SERVERNETWORKHANDLER

public:
    inline void onClientAuthenticated(class NetworkIdentifier const& a0, class Certificate const& a1) {
       return _onClientAuthenticated(a0, a1);
    }
    // Do not use _getServerPlayer directly
    inline class ServerPlayer* getServerPlayer(class NetworkIdentifier const& a0, char a1 = 0) {
        auto v3 = (ServerNetworkHandler*)((char*)this - 16);
        return v3->_getServerPlayer(a0, (SubClientId)a1);
    }

    inline int getActiveAndInProgressPlayerCount(class mce::UUID a1) {
        return _getActiveAndInProgressPlayerCount(a1);
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERNETWORKHANDLER
public:
    class ServerNetworkHandler& operator=(class ServerNetworkHandler const &) = delete;
    ServerNetworkHandler(class ServerNetworkHandler const &) = delete;
    ServerNetworkHandler() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERNETWORKHANDLER
    /**
     * @symbol ?_getServerPlayer@ServerNetworkHandler@@EEAAPEAVServerPlayer@@AEBVNetworkIdentifier@@W4SubClientId@@@Z
     * @hash   -1800729655
     */
    MCVAPI class ServerPlayer * _getServerPlayer(class NetworkIdentifier const &, enum class SubClientId);
    /**
     * @symbol ?allowIncomingPacketId@ServerNetworkHandler@@UEAA_NAEBVNetworkIdentifier@@W4MinecraftPacketIds@@@Z
     * @hash   1907791611
     */
    MCVAPI bool allowIncomingPacketId(class NetworkIdentifier const &, enum class MinecraftPacketIds);
    /**
     * @symbol ?getGameSpecificNetEventCallback@ServerNetworkHandler@@UEAAPEAVGameSpecificNetEventCallback@@XZ
     * @hash   750955316
     */
    MCVAPI class GameSpecificNetEventCallback * getGameSpecificNetEventCallback();
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVChangeMobPropertyPacket@@@Z
     * @hash   -469168838
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ChangeMobPropertyPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPhotoTransferPacket@@@Z
     * @hash   -540687838
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PhotoTransferPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVCreatePhotoPacket@@@Z
     * @hash   -2140294327
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CreatePhotoPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVEditorNetworkPacket@@@Z
     * @hash   1657542750
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EditorNetworkPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPurchaseReceiptPacket@@@Z
     * @hash   408557672
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PurchaseReceiptPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVCompletedUsingItemPacket@@@Z
     * @hash   1612462827
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CompletedUsingItemPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVUpdatePlayerGameTypePacket@@@Z
     * @hash   -1961222639
     */
    MCVAPI void handle(class NetworkIdentifier const &, class UpdatePlayerGameTypePacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@V?$shared_ptr@VBlockActorDataPacket@@@std@@@Z
     * @hash   1197128074
     */
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class BlockActorDataPacket>);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVActorEventPacket@@@Z
     * @hash   1466295778
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ActorEventPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVActorPickRequestPacket@@@Z
     * @hash   1868486542
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ActorPickRequestPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVAnimatePacket@@@Z
     * @hash   386614510
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AnimatePacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVAnvilDamagePacket@@@Z
     * @hash   899357892
     */
    MCVAPI void handle(class NetworkIdentifier const &, class AnvilDamagePacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVBlockPickRequestPacket@@@Z
     * @hash   61674870
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BlockPickRequestPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVBookEditPacket@@@Z
     * @hash   980073124
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BookEditPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVBossEventPacket@@@Z
     * @hash   -574728622
     */
    MCVAPI void handle(class NetworkIdentifier const &, class BossEventPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVClientCacheBlobStatusPacket@@@Z
     * @hash   -1894083447
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientCacheBlobStatusPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVClientCacheStatusPacket@@@Z
     * @hash   874524262
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientCacheStatusPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVClientToServerHandshakePacket@@@Z
     * @hash   -294721007
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ClientToServerHandshakePacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVCodeBuilderSourcePacket@@@Z
     * @hash   -1586493802
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CodeBuilderSourcePacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVCommandBlockUpdatePacket@@@Z
     * @hash   -443568820
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CommandBlockUpdatePacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVCommandRequestPacket@@@Z
     * @hash   1747248339
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CommandRequestPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVContainerClosePacket@@@Z
     * @hash   31827152
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ContainerClosePacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVCraftingEventPacket@@@Z
     * @hash   -265480489
     */
    MCVAPI void handle(class NetworkIdentifier const &, class CraftingEventPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVDebugInfoPacket@@@Z
     * @hash   1344590030
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DebugInfoPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVDisconnectPacket@@@Z
     * @hash   602488251
     */
    MCVAPI void handle(class NetworkIdentifier const &, class DisconnectPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVEmoteListPacket@@@Z
     * @hash   -229660359
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EmoteListPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVEmotePacket@@@Z
     * @hash   -1637097465
     */
    MCVAPI void handle(class NetworkIdentifier const &, class EmotePacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVFilterTextPacket@@@Z
     * @hash   -1255920270
     */
    MCVAPI void handle(class NetworkIdentifier const &, class FilterTextPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVGameTestRequestPacket@@@Z
     * @hash   8465652
     */
    MCVAPI void handle(class NetworkIdentifier const &, class GameTestRequestPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVInteractPacket@@@Z
     * @hash   1827502113
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InteractPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVInventoryTransactionPacket@@@Z
     * @hash   752297525
     */
    MCVAPI void handle(class NetworkIdentifier const &, class InventoryTransactionPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVItemFrameDropItemPacket@@@Z
     * @hash   -1570153965
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemFrameDropItemPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVItemStackRequestPacket@@@Z
     * @hash   73858733
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ItemStackRequestPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVLabTablePacket@@@Z
     * @hash   -303196122
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LabTablePacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVLecternUpdatePacket@@@Z
     * @hash   -1044743761
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LecternUpdatePacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVLevelSoundEventPacket@@@Z
     * @hash   -985557376
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVLevelSoundEventPacketV2@@@Z
     * @hash   -151298652
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacketV2 const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVLevelSoundEventPacketV1@@@Z
     * @hash   324937941
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacketV1 const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVLoginPacket@@@Z
     * @hash   -25947034
     */
    MCVAPI void handle(class NetworkIdentifier const &, class LoginPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVMapCreateLockedCopyPacket@@@Z
     * @hash   -56559672
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MapCreateLockedCopyPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVMapInfoRequestPacket@@@Z
     * @hash   39418546
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MapInfoRequestPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVMobEquipmentPacket@@@Z
     * @hash   1512132233
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MobEquipmentPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVModalFormResponsePacket@@@Z
     * @hash   -132949779
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ModalFormResponsePacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVMoveActorAbsolutePacket@@@Z
     * @hash   -1697240780
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MoveActorAbsolutePacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVMovePlayerPacket@@@Z
     * @hash   410029189
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MovePlayerPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVMultiplayerSettingsPacket@@@Z
     * @hash   -1759650142
     */
    MCVAPI void handle(class NetworkIdentifier const &, class MultiplayerSettingsPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVNetworkStackLatencyPacket@@@Z
     * @hash   2091546795
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NetworkStackLatencyPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVNpcRequestPacket@@@Z
     * @hash   -231050791
     */
    MCVAPI void handle(class NetworkIdentifier const &, class NpcRequestPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPassengerJumpPacket@@@Z
     * @hash   1434167751
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PassengerJumpPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerActionPacket@@@Z
     * @hash   -1116639504
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerActionPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerAuthInputPacket@@@Z
     * @hash   1502807566
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerAuthInputPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerHotbarPacket@@@Z
     * @hash   -584370848
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerHotbarPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerInputPacket@@@Z
     * @hash   887837062
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerInputPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPlayerSkinPacket@@@Z
     * @hash   -997439063
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerSkinPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVPositionTrackingDBClientRequestPacket@@@Z
     * @hash   11186233
     */
    MCVAPI void handle(class NetworkIdentifier const &, class PositionTrackingDBClientRequestPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVRequestAbilityPacket@@@Z
     * @hash   -1243029380
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestAbilityPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVRequestChunkRadiusPacket@@@Z
     * @hash   -1254137449
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestChunkRadiusPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVRequestNetworkSettingsPacket@@@Z
     * @hash   -646426043
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestNetworkSettingsPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVRequestPermissionsPacket@@@Z
     * @hash   -284692814
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RequestPermissionsPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackChunkRequestPacket@@@Z
     * @hash   1214192814
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackChunkRequestPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVRespawnPacket@@@Z
     * @hash   -1575605545
     */
    MCVAPI void handle(class NetworkIdentifier const &, class RespawnPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVScriptMessagePacket@@@Z
     * @hash   -2105693533
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ScriptMessagePacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSetDefaultGameTypePacket@@@Z
     * @hash   -1903608180
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetDefaultGameTypePacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSetDifficultyPacket@@@Z
     * @hash   1748194242
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetDifficultyPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSetLocalPlayerAsInitializedPacket@@@Z
     * @hash   -736067753
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetLocalPlayerAsInitializedPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSetPlayerGameTypePacket@@@Z
     * @hash   997332928
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SetPlayerGameTypePacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSettingsCommandPacket@@@Z
     * @hash   -643254425
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SettingsCommandPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVShowCreditsPacket@@@Z
     * @hash   -706785678
     */
    MCVAPI void handle(class NetworkIdentifier const &, class ShowCreditsPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSimpleEventPacket@@@Z
     * @hash   430668103
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SimpleEventPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSpawnExperienceOrbPacket@@@Z
     * @hash   -149185619
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SpawnExperienceOrbPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVStructureBlockUpdatePacket@@@Z
     * @hash   2125270228
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StructureBlockUpdatePacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVStructureTemplateDataRequestPacket@@@Z
     * @hash   -1843568737
     */
    MCVAPI void handle(class NetworkIdentifier const &, class StructureTemplateDataRequestPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSubChunkRequestPacket@@@Z
     * @hash   -1586131779
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SubChunkRequestPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVSubClientLoginPacket@@@Z
     * @hash   1583222073
     */
    MCVAPI void handle(class NetworkIdentifier const &, class SubClientLoginPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z
     * @hash   -2072371046
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TextPacket const &);
    /**
     * @symbol ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTickSyncPacket@@@Z
     * @hash   793979839
     */
    MCVAPI void handle(class NetworkIdentifier const &, class TickSyncPacket const &);
    /**
     * @symbol ?onDisconnect@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N1@Z
     * @hash   1665543213
     */
    MCVAPI void onDisconnect(class NetworkIdentifier const &, std::string const &, bool, std::string const &);
    /**
     * @symbol ?onInvalidPlayerJoinedLobby@ServerNetworkHandler@@UEAAXAEBVUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1389073871
     */
    MCVAPI void onInvalidPlayerJoinedLobby(class mce::UUID const &, std::string const &);
    /**
     * @symbol ?onPlayerReady@ServerNetworkHandler@@UEAAXAEAVPlayer@@@Z
     * @hash   758857128
     */
    MCVAPI void onPlayerReady(class Player &);
    /**
     * @symbol ?onTextFilterSkipped@ServerNetworkHandler@@EEAAXAEBVNetworkIdentifier@@W4SubClientId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   366558980
     */
    MCVAPI void onTextFilterSkipped(class NetworkIdentifier const &, enum class SubClientId, std::string const &);
    /**
     * @symbol ?onTick@ServerNetworkHandler@@UEAAXXZ
     * @hash   -359559004
     */
    MCVAPI void onTick();
    /**
     * @symbol ?onTransferRequest@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   1728210648
     */
    MCVAPI void onTransferRequest(class NetworkIdentifier const &, std::string const &, int);
    /**
     * @symbol ?onWebsocketRequest@ServerNetworkHandler@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$function@$$A6AXXZ@3@@Z
     * @hash   -149032994
     */
    MCVAPI void onWebsocketRequest(std::string const &, std::string const &, class std::function<void (void)>);
    /**
     * @symbol ?onXboxUserBlocked@ServerNetworkHandler@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -582572699
     */
    MCVAPI void onXboxUserBlocked(std::string const &);
    /**
     * @symbol ?onXboxUserUnblocked@ServerNetworkHandler@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -195203362
     */
    MCVAPI void onXboxUserUnblocked(std::string const &);
    /**
     * @symbol ?sendServerLegacyParticle@ServerNetworkHandler@@UEAAXW4ParticleType@@AEBVVec3@@1H@Z
     * @hash   -943339483
     */
    MCVAPI void sendServerLegacyParticle(enum class ParticleType, class Vec3 const &, class Vec3 const &, int);
    /**
     * @symbol ??1ServerNetworkHandler@@UEAA@XZ
     * @hash   1774819908
     */
    MCVAPI ~ServerNetworkHandler();
#endif
    /**
     * @symbol ??0ServerNetworkHandler@@QEAA@AEAVGameCallbacks@@AEBV?$NonOwnerPointer@VILevel@@@Bedrock@@AEAVNetworkHandler@@AEAVPrivateKeyManager@@AEAVServerLocator@@AEAVPacketSender@@AEAVAllowList@@PEAVPermissionsFile@@AEBVUUID@mce@@H_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEAVMinecraftCommands@@AEAVIMinecraftApp@@AEBV?$unordered_map@UPackIdVersion@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@UPackIdVersion@@@3@U?$equal_to@UPackIdVersion@@@3@V?$allocator@U?$pair@$$CBUPackIdVersion@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@AEAVScheduler@@V?$NonOwnerPointer@VTextFilteringProcessor@@@3@V?$optional_ref@VMinecraftGameTest@@@@V?$ServiceReference@VAppConfigs@@@@V?$ServiceReference@VMultiplayerServiceManager@Social@@@@9@Z
     * @hash   -569077449
     */
    // MCAPI ServerNetworkHandler(class GameCallbacks &, class Bedrock::NonOwnerPointer<class ILevel> const &, class NetworkHandler &, class PrivateKeyManager &, class ServerLocator &, class PacketSender &, class AllowList &, class PermissionsFile *, class mce::UUID const &, int, bool, std::vector<std::string> const &, std::string, int, class MinecraftCommands &, class IMinecraftApp &, class std::unordered_map<struct PackIdVersion, std::string, struct std::hash<struct PackIdVersion>, struct std::equal_to<struct PackIdVersion>, class std::allocator<struct std::pair<struct PackIdVersion const, std::string>>> const &, class Scheduler &, class Bedrock::NonOwnerPointer<class TextFilteringProcessor>, class optional_ref<class MinecraftGameTest>, class ServiceReference<class AppConfigs>, class ServiceReference<class Social::MultiplayerServiceManager>, bool);
    /**
     * @symbol ?activateAllowList@ServerNetworkHandler@@QEAAXXZ
     * @hash   1274447459
     */
    MCAPI void activateAllowList();
    /**
     * @symbol ?addToDenyList@ServerNetworkHandler@@QEAAXAEBVUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1695348221
     */
    MCAPI void addToDenyList(class mce::UUID const &, std::string const &);
    /**
     * @symbol ?allowIncomingConnections@ServerNetworkHandler@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   258544299
     */
    MCAPI void allowIncomingConnections(std::string const &, bool);
    /**
     * @symbol ?createNewPlayer@ServerNetworkHandler@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBVNetworkIdentifier@@AEBVConnectionRequest@@@Z
     * @hash   1509603975
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createNewPlayer(class NetworkIdentifier const &, class ConnectionRequest const &);
    /**
     * @symbol ?createSimulatedPlayer@ServerNetworkHandler@@QEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     * @hash   -1110536742
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> createSimulatedPlayer(std::string const &, std::string const &);
    /**
     * @symbol ?disallowIncomingConnections@ServerNetworkHandler@@QEAAXXZ
     * @hash   450838051
     */
    MCAPI void disallowIncomingConnections();
    /**
     * @symbol ?disconnectClient@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   494410516
     */
    MCAPI void disconnectClient(class NetworkIdentifier const &, std::string const &, bool);
    /**
     * @symbol ?disconnectClient@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@W4SubClientId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   846597689
     */
    MCAPI void disconnectClient(class NetworkIdentifier const &, enum class SubClientId, std::string const &, bool);
    /**
     * @symbol ?engineCancelResponseHelper@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@AEBVResourcePackClientResponsePacket@@@Z
     * @hash   1089876949
     */
    MCAPI void engineCancelResponseHelper(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
    /**
     * @symbol ?engineDownloadingFinishedResponseHelper@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@AEBVResourcePackClientResponsePacket@@@Z
     * @hash   -1181721501
     */
    MCAPI void engineDownloadingFinishedResponseHelper(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
    /**
     * @symbol ?engineDownloadingResponseHelper@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@AEBVResourcePackClientResponsePacket@@@Z
     * @hash   -393097489
     */
    MCAPI void engineDownloadingResponseHelper(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
    /**
     * @symbol ?fetchConnectionRequest@ServerNetworkHandler@@QEAAAEBVConnectionRequest@@AEBVNetworkIdentifier@@@Z
     * @hash   -268303627
     */
    MCAPI class ConnectionRequest const & fetchConnectionRequest(class NetworkIdentifier const &);
    /**
     * @symbol ?isDedicatedServer@ServerNetworkHandler@@QEAA_NXZ
     * @hash   -2025184430
     */
    MCAPI bool isDedicatedServer();
    /**
     * @symbol ?isHost@ServerNetworkHandler@@QEAA_NAEAVServerPlayer@@@Z
     * @hash   -81422663
     */
    MCAPI bool isHost(class ServerPlayer &);
    /**
     * @symbol ?onReady_ClientGeneration@ServerNetworkHandler@@QEAAXAEAVPlayer@@AEBVNetworkIdentifier@@@Z
     * @hash   -1668507773
     */
    MCAPI void onReady_ClientGeneration(class Player &, class NetworkIdentifier const &);
    /**
     * @symbol ?onStartShutdown@ServerNetworkHandler@@QEAAXXZ
     * @hash   -295783549
     */
    MCAPI void onStartShutdown();
    /**
     * @symbol ?persistPlayerPermissionsToDisk@ServerNetworkHandler@@QEAAXAEBVUserEntityIdentifierComponent@@W4PlayerPermissionLevel@@@Z
     * @hash   1608491975
     */
    MCAPI void persistPlayerPermissionsToDisk(class UserEntityIdentifierComponent const &, enum class PlayerPermissionLevel);
    /**
     * @symbol ?sendLoginMessageLocal@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@AEBVConnectionRequest@@AEAVServerPlayer@@@Z
     * @hash   1451030614
     */
    MCAPI void sendLoginMessageLocal(class NetworkIdentifier const &, class ConnectionRequest const &, class ServerPlayer &);
    /**
     * @symbol ?setAutomationClient@ServerNetworkHandler@@QEAAXV?$NonOwnerPointer@VAutomationClient@Automation@@@Bedrock@@@Z
     * @hash   -567681991
     */
    MCAPI void setAutomationClient(class Bedrock::NonOwnerPointer<class Automation::AutomationClient>);
    /**
     * @symbol ?setMaxNumPlayers@ServerNetworkHandler@@QEAAHH@Z
     * @hash   -1617478799
     */
    MCAPI int setMaxNumPlayers(int);
    /**
     * @symbol ?setNewPlayerPermissions@ServerNetworkHandler@@QEAAXAEAVServerPlayer@@@Z
     * @hash   306086774
     */
    MCAPI void setNewPlayerPermissions(class ServerPlayer &);
    /**
     * @symbol ?trytLoadPlayer@ServerNetworkHandler@@QEAA_NAEAVServerPlayer@@AEBVConnectionRequest@@@Z
     * @hash   -1611511742
     */
    MCAPI bool trytLoadPlayer(class ServerPlayer &, class ConnectionRequest const &);
    /**
     * @symbol ?updateServerAnnouncement@ServerNetworkHandler@@QEAAXXZ
     * @hash   611235893
     */
    MCAPI void updateServerAnnouncement();

//private:
    /**
     * @symbol ?_buildSubChunkPacketData@ServerNetworkHandler@@AEAAXAEBVNetworkIdentifier@@PEBVServerPlayer@@AEBVSubChunkRequestPacket@@AEAVSubChunkPacket@@I_N@Z
     * @hash   -1344989364
     */
    MCAPI void _buildSubChunkPacketData(class NetworkIdentifier const &, class ServerPlayer const *, class SubChunkRequestPacket const &, class SubChunkPacket &, unsigned int, bool);
    /**
     * @symbol ?_createNewPlayer@ServerNetworkHandler@@AEAAAEAVServerPlayer@@AEBVNetworkIdentifier@@AEBVSubClientConnectionRequest@@W4SubClientId@@@Z
     * @hash   966808338
     */
    MCAPI class ServerPlayer & _createNewPlayer(class NetworkIdentifier const &, class SubClientConnectionRequest const &, enum class SubClientId);
    /**
     * @symbol ?_displayGameMessage@ServerNetworkHandler@@AEAAXAEBVPlayer@@AEAUChatEvent@@@Z
     * @hash   -1376058492
     */
    MCAPI void _displayGameMessage(class Player const &, struct ChatEvent &);
    /**
     * @symbol ?_getActiveAndInProgressPlayerCount@ServerNetworkHandler@@AEBAHVUUID@mce@@@Z
     * @hash   -1110421084
     */
    MCAPI int _getActiveAndInProgressPlayerCount(class mce::UUID) const;
    /**
     * @symbol ?_getDisplayName@ServerNetworkHandler@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCertificate@@_NAEBV23@@Z
     * @hash   -1255568454
     */
    MCAPI std::string _getDisplayName(class Certificate const &, bool, std::string const &) const;
    /**
     * @symbol ?_handleCommandBlockUpdatePacket@ServerNetworkHandler@@AEAAXAEBVServerPlayer@@AEBVNetworkIdentifier@@AEBVCommandBlockUpdatePacket@@@Z
     * @hash   437250386
     */
    MCAPI void _handleCommandBlockUpdatePacket(class ServerPlayer const &, class NetworkIdentifier const &, class CommandBlockUpdatePacket const &);
    /**
     * @symbol ?_handleSetDifficulty@ServerNetworkHandler@@AEBAXAEBVServerPlayer@@AEBVSetDifficultyPacket@@@Z
     * @hash   1695301521
     */
    MCAPI void _handleSetDifficulty(class ServerPlayer const &, class SetDifficultyPacket const &) const;
    /**
     * @symbol ?_loadNewPlayer@ServerNetworkHandler@@AEAA_NAEAVServerPlayer@@_N@Z
     * @hash   2109999119
     */
    MCAPI bool _loadNewPlayer(class ServerPlayer &, bool);
    /**
     * @symbol ?_onClientAuthenticated@ServerNetworkHandler@@AEAAXAEBVNetworkIdentifier@@AEBVCertificate@@@Z
     * @hash   1026240131
     */
    MCAPI void _onClientAuthenticated(class NetworkIdentifier const &, class Certificate const &);
    /**
     * @symbol ?_onPlayerLeft@ServerNetworkHandler@@AEAAXPEAVServerPlayer@@_N@Z
     * @hash   1240936115
     */
    MCAPI void _onPlayerLeft(class ServerPlayer *, bool);
    /**
     * @symbol ?_onSubClientAuthenticated@ServerNetworkHandler@@AEAAXAEBVNetworkIdentifier@@AEBVCertificate@@AEBVSubClientLoginPacket@@@Z
     * @hash   -1600589628
     */
    MCAPI void _onSubClientAuthenticated(class NetworkIdentifier const &, class Certificate const &, class SubClientLoginPacket const &);
    /**
     * @symbol ?_sendAdditionalLevelData@ServerNetworkHandler@@AEAAXAEAVServerPlayer@@AEBVNetworkIdentifier@@@Z
     * @hash   1271447959
     */
    MCAPI void _sendAdditionalLevelData(class ServerPlayer &, class NetworkIdentifier const &);
    /**
     * @symbol ?_sendLevelData@ServerNetworkHandler@@AEAAXAEAVServerPlayer@@AEBVNetworkIdentifier@@@Z
     * @hash   758497454
     */
    MCAPI void _sendLevelData(class ServerPlayer &, class NetworkIdentifier const &);
    /**
     * @symbol ?_updatePermissions@ServerNetworkHandler@@AEAA_NAEBVServerPlayer@@AEBVRequestPermissionsPacket@@AEAVAbilities@@AEAVPermissionsHandler@@PEAVPlayer@@@Z
     * @hash   -336946293
     */
    MCAPI bool _updatePermissions(class ServerPlayer const &, class RequestPermissionsPacket const &, class Abilities &, class PermissionsHandler &, class Player *);

private:

};