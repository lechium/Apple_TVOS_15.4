//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class HMFActivity, HMFUnfairLock, NSDictionary, NSString, NSUUID, _HMContext;
@protocol HMDeviceSetupSessionDelegate, OS_dispatch_queue;

@interface HMDeviceSetupSession : NSObject <HMFLogging, HMFMessageReceiver>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    HMFActivity *_activity;	// 16 = 0x10
    _Bool _open;	// 24 = 0x18
    NSDictionary *_userInfo;	// 32 = 0x20
    id <HMDeviceSetupSessionDelegate> _delegate;	// 40 = 0x28
    NSUUID *_identifier;	// 48 = 0x30
    long long _role;	// 56 = 0x38
    _HMContext *_context;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x0000000000217918
+ (id)homeManagerDestination;	// IMP=0x00000000002178b3
- (void).cxx_destruct;	// IMP=0x0000000000216b6f
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
@property(readonly, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly) long long role; // @synthesize role=_role;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly) __weak id <HMDeviceSetupSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x0000000000216a6d
- (void)_reallySendExchangeData:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000216863
- (void)__handleReceivedExchangeData:(id)arg1;	// IMP=0x0000000000216639
- (void)sendExchangeData:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000216627
- (void)_handleDisconnection:(id)arg1;	// IMP=0x000000000021658d
- (void)__handleClose:(id)arg1;	// IMP=0x00000000002164cb
- (void)__closeWithError:(id)arg1;	// IMP=0x0000000000216161
- (void)_closeWithError:(id)arg1;	// IMP=0x0000000000216093
- (void)close;	// IMP=0x0000000000215ff9
- (void)_handleOpenedSession;	// IMP=0x0000000000215f66
- (void)open;	// IMP=0x0000000000215dd9
- (id)messageDestination;	// IMP=0x0000000000215d70
- (void)__registerForMessages;	// IMP=0x0000000000215c8b
- (void)setUserInfo:(id)arg1;	// IMP=0x0000000000215bc7
@property(readonly, copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void)dealloc;	// IMP=0x00000000002159d5
- (id)initWithRole:(long long)arg1 delegate:(id)arg2;	// IMP=0x0000000000215692
- (id)init;	// IMP=0x00000000002155ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
