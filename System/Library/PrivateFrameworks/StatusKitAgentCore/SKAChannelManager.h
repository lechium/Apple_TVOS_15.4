//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StatusKitAgentCore/SKAChannelManaging-Protocol.h>
#import <StatusKitAgentCore/SKAPushManagingDelegate-Protocol.h>

@class NSString;
@protocol SKAAccountProviding, SKAChannelManagingDelegate, SKAPushManaging;

@interface SKAChannelManager : NSObject <SKAPushManagingDelegate, SKAChannelManaging>
{
    id <SKAPushManaging> _pushManager;	// 8 = 0x8
    id <SKAAccountProviding> _accountProvider;	// 16 = 0x10
    id <SKAChannelManagingDelegate> _delegate;	// 24 = 0x18
}

+ (id)_jwtTokenNotFoundError;	// IMP=0x000000000001d792
+ (id)logger;	// IMP=0x000000000001d736
- (void).cxx_destruct;	// IMP=0x000000000001d8de
@property(nonatomic) __weak id <SKAChannelManagingDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SKAAccountProviding> accountProvider; // @synthesize accountProvider=_accountProvider;
@property(retain, nonatomic) id <SKAPushManaging> pushManager; // @synthesize pushManager=_pushManager;
- (void)pushManager:(id)arg1 failedToSubscribeToChannel:(id)arg2 withError:(id)arg3;	// IMP=0x000000000001d676
- (void)pushManager:(id)arg1 didReceiveData:(id)arg2 onChannel:(id)arg3 dateReceived:(id)arg4 dateExpired:(id)arg5;	// IMP=0x000000000001d56a
- (id)_getJWTToken;	// IMP=0x000000000001d44b
- (id)serverTime;	// IMP=0x000000000001d3fb
- (id)_createPayloadDataFromData:(id)arg1;	// IMP=0x000000000001d323
- (void)unsubscribeFromChannels:(id)arg1;	// IMP=0x000000000001d29c
- (void)subscribeToChannels:(id)arg1;	// IMP=0x000000000001d215
- (void)activeChannelSubscriptionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d0b4
- (void)publishData:(id)arg1 onChannel:(id)arg2 withChannelToken:(id)arg3 publishInitiateTime:(id)arg4 isPendingPublish:(_Bool)arg5 isScheduledPublish:(_Bool)arg6 retryCount:(unsigned long long)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x000000000001c7ee
- (void)createChannelWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001c0d8
- (id)initWithPushManager:(id)arg1 accountProvider:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000001c00c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

