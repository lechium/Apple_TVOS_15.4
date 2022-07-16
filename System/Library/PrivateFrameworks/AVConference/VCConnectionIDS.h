//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCConnectionProtocol-Protocol.h>

@class IDSDataChannelLinkContext, NSData, NSString, NSUUID, VCDatagramChannelIDS;

__attribute__((visibility("hidden")))
@interface VCConnectionIDS <VCConnectionProtocol>
{
    IDSDataChannelLinkContext *_linkContext;	// 16 = 0x10
    unsigned int _datagramChannelToken;	// 24 = 0x18
    VCDatagramChannelIDS *_datagramChannel;	// 32 = 0x20
    int _priority;	// 40 = 0x28
    unsigned int _type;	// 44 = 0x2c
    int _localCellTech;	// 48 = 0x30
    int _remoteCellTech;	// 52 = 0x34
    int _connectionMTU;	// 56 = 0x38
    int _maxConnectionMTU;	// 60 = 0x3c
    unsigned int _uplinkBitrateCap;	// 64 = 0x40
    unsigned int _downlinkBitrateCap;	// 68 = 0x44
    unsigned int _uplinkAudioBitrateCapOneToOne;	// 72 = 0x48
    unsigned int _uplinkBitrateCapOneToOne;	// 76 = 0x4c
    _Bool _isLocalDelegated;	// 80 = 0x50
    _Bool _isRemoteDelegated;	// 81 = 0x51
    _Bool _isVirtualRelayLink;	// 82 = 0x52
}

+ (unsigned int)worstCaseNetworkOverheadInBytesWithNumOfStreamId:(int)arg1 isPriorityIncluded:(_Bool)arg2;	// IMP=0x00000000001f3317
@property int maxConnectionMTU; // @synthesize maxConnectionMTU=_maxConnectionMTU;
@property(readonly) _Bool isVirtualRelayLink; // @synthesize isVirtualRelayLink=_isVirtualRelayLink;
@property(readonly) _Bool isRemoteDelegated; // @synthesize isRemoteDelegated=_isRemoteDelegated;
@property(readonly) _Bool isLocalDelegated; // @synthesize isLocalDelegated=_isLocalDelegated;
@property unsigned int uplinkBitrateCapOneToOne; // @synthesize uplinkBitrateCapOneToOne=_uplinkBitrateCapOneToOne;
@property unsigned int uplinkAudioBitrateCapOneToOne; // @synthesize uplinkAudioBitrateCapOneToOne=_uplinkAudioBitrateCapOneToOne;
@property unsigned int downlinkBitrateCap; // @synthesize downlinkBitrateCap=_downlinkBitrateCap;
@property unsigned int uplinkBitrateCap; // @synthesize uplinkBitrateCap=_uplinkBitrateCap;
@property(readonly) unsigned int type; // @synthesize type=_type;
@property int priority; // @synthesize priority=_priority;
@property(readonly) VCDatagramChannelIDS *datagramChannel; // @synthesize datagramChannel=_datagramChannel;
@property(readonly) unsigned int datagramChannelToken; // @synthesize datagramChannelToken=_datagramChannelToken;
@property(readonly) _Bool isRemoteConstrained;
@property(readonly) _Bool isRemoteExpensive;
@property(readonly) _Bool isLocalConstrained;
@property(readonly) _Bool isLocalExpensive;
- (int)cellTechForSoMask:(unsigned int)arg1 fallbackTo:(int)arg2;	// IMP=0x00000000001f3da4
- (_Bool)matchesChannelTokenWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;	// IMP=0x00000000001f3d74
- (_Bool)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;	// IMP=0x00000000001f3d2d
@property(readonly) unsigned char linkID;
- (_Bool)isOnSameInterfacesAndQRSessionWithConnection:(id)arg1;	// IMP=0x00000000001f3b09
- (_Bool)isOnSameQRSessionWithConnection:(id)arg1;	// IMP=0x00000000001f3a58
- (_Bool)isOnSameInterfacesWithConnection:(id)arg1;	// IMP=0x00000000001f383b
- (unsigned short)updateMaxConnectionMTU:(unsigned short)arg1;	// IMP=0x00000000001f3684
- (_Bool)isSameAsConnection:(id)arg1;	// IMP=0x00000000001f360e
@property int remoteCellTech;
@property int localCellTech;
- (void)setCellularMTU:(int)arg1;	// IMP=0x00000000001f3584
- (void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;	// IMP=0x00000000001f34cd
@property(readonly) NSString *remoteInterfaceTypeString;
@property(readonly) NSString *localInterfaceTypeString;
@property(readonly) int remoteConnectionType;
@property(readonly) int localConnectionType;
@property(readonly) NSUUID *connectionUUID;
- (int)networkOverheadInBytesWithNumOfStreamId:(int)arg1 isPriorityIncluded:(_Bool)arg2;	// IMP=0x00000000001f32d4
@property int connectionMTU;
- (id)connectionQRSessionID;	// IMP=0x00000000001f3297
@property(readonly) _Bool serverIsDegraded;
@property(readonly) _Bool isRelay;
@property(readonly) _Bool isEndToEndLink;
@property(readonly) _Bool isWifiToWifi;
@property(readonly) NSString *localInterfaceName;
@property(readonly) _Bool isVPN;
@property(readonly) int connectionId;
@property(readonly) _Bool isIPv6;
@property(readonly) _Bool isRemoteOn5G;
@property(readonly) _Bool isLocalOn5G;
@property(readonly) _Bool isRemoteOnCellular;
@property(readonly) _Bool isLocalOnCellular;
@property(readonly) _Bool isRemoteOnWiFi;
@property(readonly) _Bool isLocalOnWiFi;
@property(readonly) NSData *sharedDigestKey;
@property(readonly) NSString *relaySessionToken;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000001f2a95
- (id)initWithLinkContext:(id)arg1 dataChannelToken:(unsigned int)arg2;	// IMP=0x00000000001f269c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
