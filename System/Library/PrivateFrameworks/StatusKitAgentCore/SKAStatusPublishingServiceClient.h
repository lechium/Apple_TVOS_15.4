//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StatusKitAgentCore/SKAStatusPublishingServiceClientConnectionLifecycleDelegate-Protocol.h>
#import <StatusKitAgentCore/SKStatusPublishingDaemonProtocol-Protocol.h>

@class NSString, SKAInvitationManager, SKAStatusPublishingServiceClientConnection;
@protocol OS_dispatch_queue, SKAChannelManaging, SKADatabaseManaging, SKADatabaseProviding, SKAMessagingProviding, SKAStatusPublishingManaging, SKAStatusPublishingServiceClientDelegate;

@interface SKAStatusPublishingServiceClient : NSObject <SKStatusPublishingDaemonProtocol, SKAStatusPublishingServiceClientConnectionLifecycleDelegate>
{
    _Bool _accountIsStatusKitCapable;	// 8 = 0x8
    _Bool _accountCheckCompleted;	// 9 = 0x9
    NSString *_statusTypeIdenfifier;	// 16 = 0x10
    SKAStatusPublishingServiceClientConnection *_clientConnection;	// 24 = 0x18
    id <SKAStatusPublishingServiceClientDelegate> _delegate;	// 32 = 0x20
    id <SKADatabaseManaging> _databaseManager;	// 40 = 0x28
    id <SKADatabaseProviding> _databaseProvider;	// 48 = 0x30
    id <SKAMessagingProviding> _messagingProvider;	// 56 = 0x38
    SKAInvitationManager *_invitationManager;	// 64 = 0x40
    id <SKAChannelManaging> _channelManager;	// 72 = 0x48
    id <SKAStatusPublishingManaging> _publishingManager;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_queue;	// 88 = 0x58
}

+ (id)logger;	// IMP=0x0000000000011559
+ (id)_dateCreatedDriftError;	// IMP=0x0000000000011357
+ (id)_unableToResolveSenderHandleError;	// IMP=0x000000000001125e
+ (id)_accountNotCapableError;	// IMP=0x0000000000011191
+ (id)_noUsersToShareWithError;	// IMP=0x0000000000011098
+ (id)_noPersonalChannelErrorForStatusTypeIdentifier:(id)arg1;	// IMP=0x0000000000010f9c
+ (id)_missingEntitlmentErrorForStatusTypeIdentifier:(id)arg1;	// IMP=0x0000000000010e99
- (void).cxx_destruct;	// IMP=0x0000000000014438
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool accountCheckCompleted; // @synthesize accountCheckCompleted=_accountCheckCompleted;
@property(nonatomic) _Bool accountIsStatusKitCapable; // @synthesize accountIsStatusKitCapable=_accountIsStatusKitCapable;
@property(retain, nonatomic) id <SKAStatusPublishingManaging> publishingManager; // @synthesize publishingManager=_publishingManager;
@property(retain, nonatomic) id <SKAChannelManaging> channelManager; // @synthesize channelManager=_channelManager;
@property(retain, nonatomic) SKAInvitationManager *invitationManager; // @synthesize invitationManager=_invitationManager;
@property(retain, nonatomic) id <SKAMessagingProviding> messagingProvider; // @synthesize messagingProvider=_messagingProvider;
@property(retain, nonatomic) id <SKADatabaseProviding> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(retain, nonatomic) id <SKADatabaseManaging> databaseManager; // @synthesize databaseManager=_databaseManager;
@property(nonatomic) __weak id <SKAStatusPublishingServiceClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKAStatusPublishingServiceClientConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(readonly, copy, nonatomic) NSString *statusTypeIdenfifier; // @synthesize statusTypeIdenfifier=_statusTypeIdenfifier;
- (double)_delayForStatusPublishRequest:(id)arg1;	// IMP=0x0000000000014288
- (double)_randomSecondaryDeviceRepublishDelay;	// IMP=0x0000000000014164
- (double)_secondaryDeviceRepublishMinDelayTime;	// IMP=0x0000000000014143
- (double)_secondaryDeviceRepublishMaxDelayTime;	// IMP=0x0000000000014122
- (double)_randomUnscheduledPublishDelay;	// IMP=0x00000000000140fb
- (double)_randomScheduledPublishDelay;	// IMP=0x00000000000140d4
- (double)_unscheduledPublishMaxDelayTime;	// IMP=0x00000000000140b8
- (double)_scheduledPublishMaxDelayTime;	// IMP=0x0000000000014097
- (double)_serverBagTimeIntervalForKey:(id)arg1 withDefaultValue:(double)arg2;	// IMP=0x0000000000014045
- (id)_serverBagNumberForKey:(id)arg1;	// IMP=0x0000000000013f44
- (void)accountIsStatusKitCapableWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013d4f
@property(readonly, copy) NSString *description;
- (void)registerForDelegateCallbacksWithStatusTypeIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013a44
- (void)removeAllInvitedHandlesFromPersonalChannelWithStatusTypeIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013701
- (void)removeInvitedHandles:(id)arg1 statusTypeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001334b
- (void)inviteHandles:(id)arg1 fromSenderHandle:(id)arg2 withInvitationPayload:(id)arg3 statusTypeIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000012e5f
- (void)fetchHandleInvitability:(id)arg1 fromHandle:(id)arg2 forStatusTypeIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000012b92
- (void)isHandleInviteable:(id)arg1 fromHandle:(id)arg2 forStatusTypeIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000128ce
- (void)isHandleInvited:(id)arg1 fromSenderHandle:(id)arg2 forStatusTypeIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000120ab
- (void)invitedHandlesForStatusTypeIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011ba3
- (void)publishStatusRequest:(id)arg1 statusTypeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000115b5
- (void)publishingServiceClientConnectionWasInvalidated:(id)arg1;	// IMP=0x00000000000114c1
- (void)publishingServiceClientConnectionWasInterrupted:(id)arg1;	// IMP=0x0000000000011450
- (id)initWithXPCConnection:(id)arg1 queue:(id)arg2 delegate:(id)arg3 databaseManager:(id)arg4 invitationManager:(id)arg5 publishingManager:(id)arg6 channelManager:(id)arg7;	// IMP=0x0000000000010d1b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

