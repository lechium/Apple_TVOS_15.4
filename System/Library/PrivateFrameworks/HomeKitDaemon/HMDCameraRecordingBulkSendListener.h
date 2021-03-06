//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDDataStreamBulkSendListener-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSObject, NSString, NSUUID;
@protocol HMDCameraRecordingBulkSendListenerDelegate, OS_dispatch_queue;

@interface HMDCameraRecordingBulkSendListener : HMFObject <HMFLogging, HMDDataStreamBulkSendListener>
{
    NSUUID *_UUID;	// 8 = 0x8
    id <HMDCameraRecordingBulkSendListenerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSString *_pendingOpenSessionReason;	// 32 = 0x20
    CDUnknownBlockType _pendingOpenSessionCallback;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x000000000080659d
- (void).cxx_destruct;	// IMP=0x0000000000805f16
@property __weak id <HMDCameraRecordingBulkSendListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)attributeDescriptions;	// IMP=0x0000000000805e07
- (id)logIdentifier;	// IMP=0x0000000000805db7
- (void)accessoryDidCloseDataStream:(id)arg1;	// IMP=0x0000000000805d4e
- (void)accessoryDidStartListening:(id)arg1;	// IMP=0x0000000000805ca0
- (void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id)arg2;	// IMP=0x0000000000805c86
- (void)openBulkSendSessionWithAccessory:(id)arg1 reason:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000805b3a
- (void)addPendingBulkSendSessionOpenReason:(id)arg1 pendingBulkSendSessionCallback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000805aa6
@property(readonly, getter=isSessionOpenInProgress) _Bool sessionOpenInProgress;
- (id)initWithWorkQueue:(id)arg1;	// IMP=0x00000000008059e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

