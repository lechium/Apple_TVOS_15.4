//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSNumber, NSString;

@interface HMDCameraMetricsSnapshotLogEvent <HMDAWDLogEvent>
{
    _Bool _snapshotForNotification;	// 32 = 0x20
    NSNumber *_referenceTimestamp;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000071f6ca
@property(retain, nonatomic) NSNumber *referenceTimestamp; // @synthesize referenceTimestamp=_referenceTimestamp;
@property(readonly, nonatomic) _Bool snapshotForNotification; // @synthesize snapshotForNotification=_snapshotForNotification;
- (id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(_Bool)arg3 snapshotForNotification:(_Bool)arg4;	// IMP=0x000000000071f652
- (id)metricForAWD;	// IMP=0x000000000083f3ea
- (void)addIDSTransfer:(id)arg1;	// IMP=0x000000000083f00a
- (void)addSnapshotMessaging:(id)arg1;	// IMP=0x000000000083e960
- (void)addIDSSession:(id)arg1;	// IMP=0x000000000083e55c
- (unsigned int)timeSinceReference:(id)arg1;	// IMP=0x000000000083e4ea
- (unsigned int)AWDMessageType;	// IMP=0x000000000083e4df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

