//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICMusicSubscriptionStatusRemoteRequestingClient-Protocol.h>

@class NSMutableDictionary, NSOperationQueue, NSString, NSUUID, NSXPCConnection;
@protocol NSCopying, OS_dispatch_queue, OS_dispatch_source;

@interface ICMusicSubscriptionStatusController : NSObject <ICMusicSubscriptionStatusRemoteRequestingClient>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    unsigned long long _numberOfActiveRemoteRequests;	// 24 = 0x18
    NSOperationQueue *_operationQueue;	// 32 = 0x20
    id <NSCopying> _privacyAcknowledgementObservationToken;	// 40 = 0x28
    NSXPCConnection *_remoteRequestingClientConnection;	// 48 = 0x30
    NSUUID *_remoteRequestingClientConnectionIdentifier;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_remoteRequestingClientConnectionInvalidationTimer;	// 64 = 0x40
    NSMutableDictionary *_statusHandlersForPendingIdenticalRequests;	// 72 = 0x48
    NSMutableDictionary *_pendingRequests;	// 80 = 0x50
}

+ (_Bool)_hasEntitlementForMusicSubscriptionStatusService;	// IMP=0x00000000001730a2
+ (id)sharedStatusController;	// IMP=0x0000000000173072
- (void).cxx_destruct;	// IMP=0x0000000000170f26
- (void)_handleSubscriptionStatusDidChangeDistributedNotification:(id)arg1;	// IMP=0x0000000000170dd4
- (void)_handleSubscriptionStatusCacheUnderlyingCachingPropertiesDidChangeNotification:(id)arg1;	// IMP=0x0000000000170bf9
- (void)_handleSubscriptionStatusCacheDidChangeNotification:(id)arg1;	// IMP=0x0000000000170a1e
- (void)_handleSubscriptionStatusDidChangeFollowingPrivacyAcknowledgementNotification:(id)arg1;	// IMP=0x000000000017087e
- (void)_handlePrivacyAcknowledgementRequirementChanged:(_Bool)arg1;	// IMP=0x0000000000170785
- (void)_cancelPendingRequests;	// IMP=0x00000000001704f9
- (_Bool)_willPerformSubscriptionStatusRequest:(id)arg1 withStatusHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001701ec
- (void)_willBeginRemoteRequestWithUniqueIdentifier:(id)arg1 statusHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001701a1
- (void)_scheduleInvalidationOfRemoteRequestingClientConnection;	// IMP=0x00000000001700f0
- (void)_remoteRequestingClientConnectionInvalidationTimerDidExpire;	// IMP=0x00000000001700b6
- (void)_handleSeveredRemoteClientConnectionWithIdentifier:(id)arg1;	// IMP=0x000000000016ffc8
- (id)_remoteRequestingClientConnection;	// IMP=0x000000000016fece
- (void)_invalidateRemoteRequestingClientConnection;	// IMP=0x000000000016fdcf
- (void)_didEndRemoteRequestWithUniqueIdentifier:(id)arg1;	// IMP=0x000000000016fd9a
- (void)_deliverSubscriptionStatusResponse:(id)arg1 forRequest:(id)arg2 error:(id)arg3;	// IMP=0x000000000016f92a
- (void)_cancelRemoteRequestingClientConnectionInvalidationTimer;	// IMP=0x000000000016f8eb
- (void)deliverSubscriptionStatusResponse:(id)arg1 forRemoteRequestWithUniqueIdentifier:(id)arg2 error:(id)arg3;	// IMP=0x000000000016f807
- (void)invalidateCachedSubscriptionStatusForUserIdentity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000016f71b
- (void)invalidateCachedSubscriptionStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000016f655
- (void)refreshSubscriptionUsingRequestContext:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000016f569
- (void)refreshSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000016f4d5
- (void)refreshSubscriptionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000016f459
- (void)disableSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000016f36d
- (void)disableSubscriptionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000016f2f1
- (void)enableSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000016f205
- (void)enableSubscriptionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000016f189
- (void)performSubscriptionStatusRequest:(id)arg1 withStatusHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000016efb9
- (void)performSubscriptionStatusRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000016ef21
- (void)getSubscriptionStatusForUserIdentity:(id)arg1 bypassingCache:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000016edb9
- (void)getSubscriptionStatusForUserIdentity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000016eda2
- (void)getSubscriptionStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000016ed26
- (void)dealloc;	// IMP=0x000000000016ead4
- (id)init;	// IMP=0x000000000016e704

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

