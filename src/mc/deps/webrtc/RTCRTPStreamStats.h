#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RTCStats.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCStats; }
namespace webrtc { class RTCStatsMemberInterface; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCRTPStreamStats : public ::webrtc::RTCStats {
public:
    // prevent constructor by default
    RTCRTPStreamStats& operator=(RTCRTPStreamStats const&);
    RTCRTPStreamStats();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RTCRTPStreamStats@webrtc@@UEAA@XZ
    virtual ~RTCRTPStreamStats();

    // vIndex: 1, symbol:
    // ?copy@RTCRTPStreamStats@webrtc@@UEBA?AV?$unique_ptr@VRTCStats@webrtc@@U?$default_delete@VRTCStats@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::RTCStats> copy() const;

    // vIndex: 2, symbol: ?type@RTCRTPStreamStats@webrtc@@UEBAPEBDXZ
    virtual char const* type() const;

    // vIndex: 3, symbol:
    // ?MembersOfThisObjectAndAncestors@RTCRTPStreamStats@webrtc@@MEBA?AV?$vector@PEBVRTCStatsMemberInterface@webrtc@@V?$allocator@PEBVRTCStatsMemberInterface@webrtc@@@std@@@std@@_K@Z
    virtual std::vector<class webrtc::RTCStatsMemberInterface const*> MembersOfThisObjectAndAncestors(uint64) const;

    // symbol: ??0RTCRTPStreamStats@webrtc@@QEAA@AEBV01@@Z
    MCAPI RTCRTPStreamStats(class webrtc::RTCRTPStreamStats const&);

    // symbol: ?kType@RTCRTPStreamStats@webrtc@@2QBDB
    MCAPI static char const kType[];

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0RTCRTPStreamStats@webrtc@@IEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimestamp@1@@Z
    MCAPI RTCRTPStreamStats(std::string, class webrtc::Timestamp);

    // NOLINTEND
};

}; // namespace webrtc