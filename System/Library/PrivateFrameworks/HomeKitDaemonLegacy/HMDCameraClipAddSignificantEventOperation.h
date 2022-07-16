//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMBLocalZoneMirrorOutputObserver-Protocol.h>

@class HMDCameraRecordingSessionSignificantEvent, NSDictionary, NSString;

@interface HMDCameraClipAddSignificantEventOperation <HMBLocalZoneMirrorOutputObserver>
{
    HMDCameraRecordingSessionSignificantEvent *_significantEvent;	// 8 = 0x8
    NSDictionary *_homePresenceByPairingIdentity;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00000000005c9686
+ (unsigned long long)cameraClipOperationType;	// IMP=0x00000000005c967b
- (void).cxx_destruct;	// IMP=0x00000000005c964a
@property(readonly) NSDictionary *homePresenceByPairingIdentity; // @synthesize homePresenceByPairingIdentity=_homePresenceByPairingIdentity;
@property(readonly, copy) HMDCameraRecordingSessionSignificantEvent *significantEvent; // @synthesize significantEvent=_significantEvent;
- (id)attributeDescriptions;	// IMP=0x00000000005c949a
- (void)updateMirrorOutputModel:(id)arg1;	// IMP=0x00000000005c91dc
- (id)modelsToAdd;	// IMP=0x00000000005c8950
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 dataSource:(id)arg5;	// IMP=0x00000000005c87e1
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4;	// IMP=0x00000000005c8717

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

