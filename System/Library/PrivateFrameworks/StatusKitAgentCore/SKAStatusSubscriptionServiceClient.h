//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StatusKitAgentCore/SKAClientConnectionRepresentable-Protocol.h>
#import <StatusKitAgentCore/SKAStatusSubscriptionServiceClientConnectionLifecycleDelegate-Protocol.h>
#import <StatusKitAgentCore/SKStatusSubscriptionDaemonProtocol-Protocol.h>

@class NSString, SKAStatusSubscriptionServiceClientConnection;
@protocol OS_dispatch_queue, SKADatabaseManaging, SKAStatusEncryptionManaging, SKAStatusSubscriptionManaging, SKAStatusSubscriptionServiceClientDelegate;

@interface SKAStatusSubscriptionServiceClient : NSObject <SKStatusSubscriptionDaemonProtocol, SKAClientConnectionRepresentable, SKAStatusSubscriptionServiceClientConnectionLifecycleDelegate>
{
    _Bool _accountCheckCompleted;	// 8 = 0x8
    _Bool _accountIsStatusKitCapable;	// 9 = 0x9
    NSString *_statusTypeIdenfifier;	// 16 = 0x10
    SKAStatusSubscriptionServiceClientConnection *_clientConnection;	// 24 = 0x18
    id <SKAStatusSubscriptionServiceClientDelegate> _delegate;	// 32 = 0x20
    id <SKADatabaseManaging> _databaseManager;	// 40 = 0x28
    id <SKAStatusSubscriptionManaging> _subscriptionManager;	// 48 = 0x30
    id <SKAStatusEncryptionManaging> _encryptionManager;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
}

+ (id)logger;	// IMP=0x00000000000149da
+ (id)_subscriptionIdentifierNotFoundError:(id)arg1;	// IMP=0x00000000000148de
+ (id)_accountNotCapableError;	// IMP=0x0000000000014811
+ (id)_genericMissingSubscriptionEntitlmentError;	// IMP=0x0000000000014711
+ (id)_missingEntitlmentErrorForStatusTypeIdentifier:(id)arg1;	// IMP=0x000000000001460e
- (void).cxx_destruct;	// IMP=0x000000000001a8ce
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <SKAStatusEncryptionManaging> encryptionManager; // @synthesize encryptionManager=_encryptionManager;
@property(nonatomic) _Bool accountIsStatusKitCapable; // @synthesize accountIsStatusKitCapable=_accountIsStatusKitCapable;
@property(nonatomic) _Bool accountCheckCompleted; // @synthesize accountCheckCompleted=_accountCheckCompleted;
@property(retain, nonatomic) id <SKAStatusSubscriptionManaging> subscriptionManager; // @synthesize subscriptionManager=_subscriptionManager;
@property(retain, nonatomic) id <SKADatabaseManaging> databaseManager; // @synthesize databaseManager=_databaseManager;
@property(nonatomic) __weak id <SKAStatusSubscriptionServiceClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKAStatusSubscriptionServiceClientConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(readonly, copy, nonatomic) NSString *statusTypeIdenfifier; // @synthesize statusTypeIdenfifier=_statusTypeIdenfifier;
- (void)accountIsStatusKitCapableWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a5fd
- (_Bool)_validateChannelIsKnownForSubscriptionIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 databaseContext:(id)arg3;	// IMP=0x000000000001a436
- (long long)validatePersonalChannel:(id)arg1 matchesEncryptionValidationToken:(id)arg2 fromSender:(id)arg3;	// IMP=0x000000000001a062
- (long long)validatePersonalChannel:(id)arg1 matchesSubscriptionValidationToken:(id)arg2 fromSender:(id)arg3;	// IMP=0x0000000000019e30
- (void)validatePersonalStatusSubscriptionMatchesSubscriptionValidationTokens:(id)arg1 fromSender:(id)arg2 statusTypeIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000019818
- (void)subscriptionValidationTokensForHandle:(id)arg1 statusTypeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001936d
- (void)deleteSubscriptionWithIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000190be
- (void)releasePersistentSubscriptionAssertionForSubscriptionIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 applicationIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000018b8d
- (void)retainPersistentSubscriptionAssertionForSubscriptionIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 applicationIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001865c
- (void)releaseTransientSubscriptionAssertionForSubscriptionIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018159
- (void)retainTransientSubscriptionAssertionForSubscriptionIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000017c56
- (void)registerForDelegateCallbacksWithStatusTypeIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000179cc
- (void)subscriptionMetadataForPersonalSubscriptionWithStatusTypeIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017678
- (void)allStatusSubscriptionsWithPersistentSubscriptionAssertionForApplicationIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000170a1
- (void)allSubscriptionMetadatasWithActiveSubscriptionsForStatusTypeIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016ab2
- (void)allSubscriptionMetadatasWithActiveAssertionsForStatusTypeIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001647f
- (void)allSubscriptionMetadatasForStatusTypeIdentifier:(id)arg1 includingPersonalSubscription:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015f88
- (void)subscriptionMetadataForHandle:(id)arg1 statusTypeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015b74
- (void)subscriptionServiceClientConnectionWasInvalidated:(id)arg1;	// IMP=0x0000000000015a49
- (void)subscriptionServiceClientConnectionWasInterrupted:(id)arg1;	// IMP=0x0000000000015950
- (_Bool)channelMatchesClientStatusTypeIdentifier:(id)arg1;	// IMP=0x0000000000015889
- (id)_currentStatusForChannel:(id)arg1;	// IMP=0x00000000000155de
- (id)_handlesAssociatedWithChannel:(id)arg1;	// IMP=0x000000000001539a
- (id)_subscriptionMetadataForChannel:(id)arg1;	// IMP=0x0000000000015285
- (void)handleReceivedInvitationForChannel:(id)arg1;	// IMP=0x0000000000015087
- (void)handleReceivedStatusUpdate:(id)arg1 onChannel:(id)arg2;	// IMP=0x0000000000014e7b
- (void)handleRemoteDatabaseChangeForChannels:(id)arg1;	// IMP=0x0000000000014a36
- (id)initWithXPCConnection:(id)arg1 queue:(id)arg2 delegate:(id)arg3 databaseManager:(id)arg4 subscriptionManager:(id)arg5 encryptionManager:(id)arg6;	// IMP=0x00000000000144b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

