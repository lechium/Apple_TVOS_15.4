//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTMessageDelivery, NSDate, PDSRequest, PDSUserTracker;
@protocol OS_dispatch_queue, PDSRequestQueueDelegate;

@interface PDSRequestQueue : NSObject
{
    id <PDSRequestQueueDelegate> _delegate;	// 8 = 0x8
    long long _messageTimeout;	// 16 = 0x10
    PDSRequest *_inflightRequest;	// 24 = 0x18
    PDSRequest *_queuedRequest;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    FTMessageDelivery *_messageDelivery;	// 48 = 0x30
    PDSUserTracker *_userTracker;	// 56 = 0x38
    CDUnknownBlockType _pushTokenBlock;	// 64 = 0x40
    CDUnknownBlockType _entryStoreBlock;	// 72 = 0x48
    long long _authRetries;	// 80 = 0x50
    NSDate *_lastReauthAttempt;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000114b7
@property(retain, nonatomic) NSDate *lastReauthAttempt; // @synthesize lastReauthAttempt=_lastReauthAttempt;
@property(nonatomic) long long authRetries; // @synthesize authRetries=_authRetries;
@property(copy, nonatomic) CDUnknownBlockType entryStoreBlock; // @synthesize entryStoreBlock=_entryStoreBlock;
@property(copy, nonatomic) CDUnknownBlockType pushTokenBlock; // @synthesize pushTokenBlock=_pushTokenBlock;
@property(retain, nonatomic) PDSUserTracker *userTracker; // @synthesize userTracker=_userTracker;
@property(retain, nonatomic) FTMessageDelivery *messageDelivery; // @synthesize messageDelivery=_messageDelivery;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) PDSRequest *queuedRequest; // @synthesize queuedRequest=_queuedRequest;
@property(retain, nonatomic) PDSRequest *inflightRequest; // @synthesize inflightRequest=_inflightRequest;
@property(nonatomic) long long messageTimeout; // @synthesize messageTimeout=_messageTimeout;
@property(nonatomic) __weak id <PDSRequestQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_removeDeadEntriesForUser:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000001123e
- (void)_logProtoUserPushToken:(id)arg1;	// IMP=0x000000000001113c
- (void)_logEntries:(id)arg1;	// IMP=0x0000000000010d46
- (void)_cancelPendingRequests;	// IMP=0x0000000000010b28
- (void)_reAuthAndContinueWithRequest:(id)arg1 forUser:(id)arg2;	// IMP=0x00000000000105a3
- (_Bool)_isAuthIssue:(long long)arg1;	// IMP=0x0000000000010582
- (void)_flightRequest:(id)arg1;	// IMP=0x000000000000de27
- (id)_hwVersion;	// IMP=0x000000000000dda5
- (id)_osVersion;	// IMP=0x000000000000dc79
- (id)_machineID;	// IMP=0x000000000000db52
- (id)_deviceInfo;	// IMP=0x000000000000d9b9
- (void)_dequeueIfNeeded;	// IMP=0x000000000000d924
- (_Bool)enqueueRequest:(id)arg1;	// IMP=0x000000000000d7e2
- (id)initWithMessageDelivery:(id)arg1 userTracker:(id)arg2 queue:(id)arg3 pushTokenBlock:(CDUnknownBlockType)arg4 entryStoreBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000000d462

@end

