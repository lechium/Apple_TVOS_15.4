//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCSessionDownlinkBandwidthAllocator : NSObject
{
    NSMutableDictionary *_allocatedMediaEntriesForClients;	// 8 = 0x8
    unsigned int _maxConcurrentVideoClients;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_clientQueue;	// 24 = 0x18
    NSMutableArray *_clients;	// 32 = 0x20
    NSMutableDictionary *_selectedMediaEntriesForClients;	// 40 = 0x28
    NSMutableArray *_sortedMediaEntries;	// 48 = 0x30
    struct opaqueRTCReporting *_reportingAgent;	// 56 = 0x38
    _Bool _forceFullBandwidth;	// 64 = 0x40
}

+ (id)sortMediaEntriesGroupIds:(id)arg1;	// IMP=0x00000000002b1d31
@property(nonatomic) _Bool forceFullBandwidth; // @synthesize forceFullBandwidth=_forceFullBandwidth;
- (void)client:(id)arg1 didActualNetworkBitrateChangeForStreamGroupID:(unsigned int)arg2;	// IMP=0x00000000002b54ae
- (void)deregisterForBandwidthAllocationWithClient:(id)arg1;	// IMP=0x00000000002b53df
- (void)reportingSessionParticipantEventBitrateChanged:(id)arg1 optedInNetworkBitrate:(unsigned int)arg2 actualNetworkBitrate:(unsigned int)arg3 optedInStreamID:(id)arg4 actualStreamID:(id)arg5;	// IMP=0x00000000002b52b7
- (void)registerForBandwidthAllocationWithClient:(id)arg1;	// IMP=0x00000000002b51e8
- (void)reset;	// IMP=0x00000000002b51a3
- (void)updateSelectedMediaEntriesForClientWithUUID:(id)arg1;	// IMP=0x00000000002b4e2a
- (id)distributeBitrate:(unsigned int)arg1;	// IMP=0x00000000002b2a0e
@property(readonly, nonatomic) unsigned long long simultaneousTalkers;
- (void)updateHighestAudioBitrates:(id)arg1 bitrate:(unsigned int)arg2;	// IMP=0x00000000002b2913
- (unsigned int)requiredAudioBitrate:(unsigned int)arg1 highestAudioBitrates:(id)arg2;	// IMP=0x00000000002b2887
- (void)sortMediaEntries;	// IMP=0x00000000002b1e76
- (void)dealloc;	// IMP=0x00000000002b1c9f
- (id)initWithReportingAgent:(struct opaqueRTCReporting *)arg1;	// IMP=0x00000000002b1bc0

@end
