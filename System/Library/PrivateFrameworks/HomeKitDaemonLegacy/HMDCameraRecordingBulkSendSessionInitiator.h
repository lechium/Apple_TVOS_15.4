//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDCameraRecordingBulkSendListenerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDCameraRecordingBulkSendListener, HMDHAPAccessory, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraRecordingBulkSendSessionInitiator : HMFObject <HMFLogging, HMDCameraRecordingBulkSendListenerDelegate>
{
    _Bool _waitingForAccessory;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMDHAPAccessory *_accessory;	// 24 = 0x18
    HMDCameraRecordingBulkSendListener *_currentListener;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x000000000067b258
- (void).cxx_destruct;	// IMP=0x000000000067b1c9
@property(retain) HMDCameraRecordingBulkSendListener *currentListener; // @synthesize currentListener=_currentListener;
@property(getter=isWaitingForAccessory) _Bool waitingForAccessory; // @synthesize waitingForAccessory=_waitingForAccessory;
@property __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)logIdentifier;	// IMP=0x000000000067b0ed
- (void)listenerDidReceiveDataStreamClose:(id)arg1;	// IMP=0x000000000067af2d
- (void)listenerDidReceiveDataStreamStart:(id)arg1;	// IMP=0x000000000067ada6
- (void)handleAccessoryDoesSupportBulkSendDataStreamNotification:(id)arg1;	// IMP=0x000000000067ad35
- (void)_registerBulkSendListener;	// IMP=0x000000000067ab80
- (void)openNewSessionWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000067a6b4
- (void)stop;	// IMP=0x000000000067a43f
- (void)configure;	// IMP=0x000000000067a38c
@property(readonly, getter=isSessionOpenInProgress) _Bool sessionOpenInProgress;
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2;	// IMP=0x000000000067a24f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

