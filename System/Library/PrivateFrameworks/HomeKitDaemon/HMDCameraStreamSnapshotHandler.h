//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCameraGetSnapshotProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCameraStreamSnapshotCaptureDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDCameraStreamSnapshotHandler : HMFObject <HMFLogging, HMDCameraStreamSnapshotCaptureDelegate, HMDCameraGetSnapshotProtocol>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    _Bool _streamAvailable;	// 16 = 0x10
    _Bool _streamSetupInProgress;	// 17 = 0x11
    NSMutableSet *_streamSnapshotCaptures;	// 24 = 0x18
    NSMutableSet *_retiredStreamSnapshotCaptures;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_propertyQueue;	// 48 = 0x30
    NSMutableDictionary *_serviceInstanceStreamStatus;	// 56 = 0x38
    NSMapTable *_delegateTable;	// 64 = 0x40
    NSString *_logIdentifier;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x0000000000328b61
- (void).cxx_destruct;	// IMP=0x00000000003276d5
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)streamSnapshotCapture:(id)arg1 didGetLastSnapshot:(id)arg2;	// IMP=0x000000000032715f
- (void)streamSnapshotCapture:(id)arg1 didGetNewSnapshot:(id)arg2;	// IMP=0x0000000000327152
- (void)getSnapshot:(unsigned long long)arg1;	// IMP=0x00000000003270e9
- (void)removeVideoStreamInterface:(id)arg1;	// IMP=0x000000000032703b
- (void)addVideoStreamInterface:(id)arg1;	// IMP=0x0000000000326f8d
- (void)setStreamSetupStatusForService:(id)arg1 inProgress:(_Bool)arg2;	// IMP=0x0000000000326ed4
@property(readonly, getter=isStreamSetupInProgress) _Bool streamSetupInProgress; // @synthesize streamSetupInProgress=_streamSetupInProgress;
@property(readonly, getter=isStreamAvailable) _Bool streamAvailable; // @synthesize streamAvailable=_streamAvailable;
- (void)removeDelegate:(id)arg1;	// IMP=0x0000000000326c34
- (void)addDelegate:(id)arg1 delegateQueue:(id)arg2;	// IMP=0x0000000000326b51
- (id)initWithWorkQueue:(id)arg1 services:(id)arg2 logID:(id)arg3;	// IMP=0x00000000003267ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

