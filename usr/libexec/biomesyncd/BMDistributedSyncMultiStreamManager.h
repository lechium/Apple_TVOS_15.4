//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSyncDevicePeerStatusTracker, BMSyncSessionMetricsCollector, NSDictionary;

@interface BMDistributedSyncMultiStreamManager : NSObject
{
    NSDictionary *_distributedSyncManagers;	// 8 = 0x8
    BMSyncDevicePeerStatusTracker *_peerStatusTracker;	// 16 = 0x10
    BMSyncSessionMetricsCollector *_metricsCollector;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000020be2
@property(retain, nonatomic) BMSyncSessionMetricsCollector *metricsCollector; // @synthesize metricsCollector=_metricsCollector;
@property(readonly, nonatomic) BMSyncDevicePeerStatusTracker *peerStatusTracker; // @synthesize peerStatusTracker=_peerStatusTracker;
@property(readonly, nonatomic) NSDictionary *distributedSyncManagers; // @synthesize distributedSyncManagers=_distributedSyncManagers;
- (_Bool)supportsSyncingWithPlatform:(long long)arg1 overTransport:(unsigned long long)arg2 inDirection:(unsigned long long)arg3;	// IMP=0x00100000000209ae
- (id)deletedLocations;	// IMP=0x001000000002060a
- (void)mergeAtomBatches:(id)arg1 deletedLocations:(id)arg2 sessionContext:(id)arg3;	// IMP=0x0010000000020232
- (id)atomBatchesAfterVectorClock:(id)arg1 targetPlatform:(long long)arg2 transportType:(unsigned long long)arg3 direction:(unsigned long long)arg4 version:(unsigned char)arg5 chunker:(id)arg6;	// IMP=0x001000000001fd93
- (id)vectorClockForStreamsSupportingTransportType:(unsigned long long)arg1 direction:(unsigned long long)arg2;	// IMP=0x001000000001f9a5
- (id)initWithDistributedSyncManagers:(id)arg1 peerStatusTracker:(id)arg2;	// IMP=0x001000000001f901

@end

