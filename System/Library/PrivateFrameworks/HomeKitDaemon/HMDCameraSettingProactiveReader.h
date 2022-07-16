//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMCameraStreamPreferences, HMDAccessory, HMFMessage, NSObject, NSSet, NSString;
@protocol HMDCameraSettingProactiveReaderDelegate, OS_dispatch_queue;

@interface HMDCameraSettingProactiveReader : HMFObject <HMFLogging>
{
    NSString *_logIdentifier;	// 8 = 0x8
    id <HMDCameraSettingProactiveReaderDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSString *_sessionID;	// 32 = 0x20
    HMDAccessory *_accessory;	// 40 = 0x28
    NSSet *_streamControlMessageHandlers;	// 48 = 0x30
    HMCameraStreamPreferences *_streamPreferences;	// 56 = 0x38
    HMFMessage *_pendingMessage;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00000000005e5e26
+ (id)_streamingStatusForResponse:(id)arg1;	// IMP=0x00000000005e5ab7
- (void).cxx_destruct;	// IMP=0x00000000005e558d
@property(retain) HMFMessage *pendingMessage; // @synthesize pendingMessage=_pendingMessage;
@property(readonly) HMCameraStreamPreferences *streamPreferences; // @synthesize streamPreferences=_streamPreferences;
@property(readonly) NSSet *streamControlMessageHandlers; // @synthesize streamControlMessageHandlers=_streamControlMessageHandlers;
@property __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDCameraSettingProactiveReaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)_callDidCompleteReadDelegateCallback;	// IMP=0x00000000005e5414
- (id)_inUseStreamControlMessageHandlersForReadResponses:(id)arg1;	// IMP=0x00000000005e5259
- (id)_availableStreamControlMessageHandlersForReadResponses:(id)arg1;	// IMP=0x00000000005e509e
- (void)_handleStreamStatusMultireadResponse:(id)arg1;	// IMP=0x00000000005e4b20
- (void)readSetting;	// IMP=0x00000000005e45c8
- (void)handleMessage:(id)arg1;	// IMP=0x00000000005e419f
- (_Bool)hasPendingNegotiateMessageForSessionWithIdentifier:(id)arg1;	// IMP=0x00000000005e40cb
- (id)initWithWorkQueue:(id)arg1 sessionID:(id)arg2 accessory:(id)arg3 message:(id)arg4 streamControlMessageHandlers:(id)arg5 streamPreferences:(id)arg6 logIdentifier:(id)arg7;	// IMP=0x00000000005e3e95

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

