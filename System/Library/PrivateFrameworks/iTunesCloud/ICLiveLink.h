//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICSharedListeningConnectionControllerDelegate-Protocol.h>

@class ICLiveLinkIdentity, ICLiveLinkPlaybackCoordinatorMedium, ICSharedListeningConnectionController, ICSharedListeningQueue, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol ICLiveLinkDelegate, OS_dispatch_queue;

@interface ICLiveLink : NSObject <ICSharedListeningConnectionControllerDelegate>
{
    _Bool _processingAction;	// 8 = 0x8
    _Bool _starting;	// 9 = 0x9
    _Bool _started;	// 10 = 0xa
    _Bool _receivedDisconnectionNotice;	// 11 = 0xb
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    NSArray *_participants;	// 16 = 0x10
    ICSharedListeningQueue *_queue;	// 24 = 0x18
    id <ICLiveLinkDelegate> _delegate;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    NSString *_sessionKey;	// 48 = 0x30
    NSMutableDictionary *_pendingRequests;	// 56 = 0x38
    NSMutableArray *_pendingActions;	// 64 = 0x40
    ICLiveLinkPlaybackCoordinatorMedium *_playbackCoordinatorMedium;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 80 = 0x50
    ICSharedListeningConnectionController *_connectionController;	// 88 = 0x58
    ICLiveLinkIdentity *_clientSpecifiedIdentity;	// 96 = 0x60
    long long _localParticipantServerID;	// 104 = 0x68
    NSString *_forcedReconnectReason;	// 112 = 0x70
    NSString *_deferredReconnectReason;	// 120 = 0x78
    long long _currentRetryCount;	// 128 = 0x80
    long long _maxRetries;	// 136 = 0x88
    long long _maxRetryWaitPeriod;	// 144 = 0x90
}

+ (id)linkWithSessionIdentifier:(id)arg1 identity:(id)arg2;	// IMP=0x00000000000be280
+ (id)linkWithIdentity:(id)arg1;	// IMP=0x00000000000be231
- (void).cxx_destruct;	// IMP=0x00000000000b3e9f
@property(nonatomic) long long maxRetryWaitPeriod; // @synthesize maxRetryWaitPeriod=_maxRetryWaitPeriod;
@property(nonatomic) long long maxRetries; // @synthesize maxRetries=_maxRetries;
@property(nonatomic) long long currentRetryCount; // @synthesize currentRetryCount=_currentRetryCount;
@property(nonatomic) _Bool receivedDisconnectionNotice; // @synthesize receivedDisconnectionNotice=_receivedDisconnectionNotice;
@property(copy, nonatomic) NSString *deferredReconnectReason; // @synthesize deferredReconnectReason=_deferredReconnectReason;
@property(copy, nonatomic) NSString *forcedReconnectReason; // @synthesize forcedReconnectReason=_forcedReconnectReason;
@property(nonatomic, getter=isStarted) _Bool started; // @synthesize started=_started;
@property(nonatomic, getter=isStarting) _Bool starting; // @synthesize starting=_starting;
@property(readonly, nonatomic) long long localParticipantServerID; // @synthesize localParticipantServerID=_localParticipantServerID;
@property(readonly, copy, nonatomic) ICLiveLinkIdentity *clientSpecifiedIdentity; // @synthesize clientSpecifiedIdentity=_clientSpecifiedIdentity;
@property(retain, nonatomic) ICSharedListeningConnectionController *connectionController; // @synthesize connectionController=_connectionController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) ICLiveLinkPlaybackCoordinatorMedium *playbackCoordinatorMedium; // @synthesize playbackCoordinatorMedium=_playbackCoordinatorMedium;
@property(nonatomic) _Bool processingAction; // @synthesize processingAction=_processingAction;
@property(retain, nonatomic) NSMutableArray *pendingActions; // @synthesize pendingActions=_pendingActions;
@property(retain, nonatomic) NSMutableDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <ICLiveLinkDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handlePotentiallyRecoverableError:(id)arg1;	// IMP=0x00000000000b39a0
- (void)_didReceivePluginErrorMessage:(id)arg1;	// IMP=0x00000000000b36be
- (void)connectionController:(id)arg1 connectionDidReceiveMessage:(id)arg2;	// IMP=0x00000000000b36a9
- (void)connectionController:(id)arg1 connectionDidEndWithError:(id)arg2;	// IMP=0x00000000000b34d8
- (void)connectionController:(id)arg1 didEncounterFatalError:(id)arg2;	// IMP=0x00000000000b3344
- (void)connectionControllerConnectionDidStart:(id)arg1;	// IMP=0x00000000000b302c
- (void)_performClientInfoExchangeAndInitializeQueue;	// IMP=0x00000000000b2ce8
- (void)_updateQueueWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b29b0
- (void)_updateParticipantsWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b2678
- (void)_storeTraceID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b245c
- (void)_processPendingActions;	// IMP=0x00000000000b1f7d
- (id)_participantForParticipantID:(long long)arg1;	// IMP=0x00000000000b1dc6
- (id)_participantForAction:(id)arg1;	// IMP=0x00000000000b1da0
- (void)_handleUpdatedQueue:(id)arg1 serverQueueContext:(id)arg2;	// IMP=0x00000000000b1ae2
- (void)_handleUpdatedParticipantQuery:(id)arg1;	// IMP=0x00000000000b1820
- (void)_handleReceivedMessage:(id)arg1;	// IMP=0x00000000000b152c
- (void)_emitSessionEventIfNeededForAction:(id)arg1 disconnectedParticipant:(id)arg2;	// IMP=0x00000000000b11b8
- (void)_didReceiveServerNoticeAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b0f3f
- (void)_didReceiveReplaceQueueItemsAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b0d89
- (void)_didReceiveRemoveItemAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b0a8d
- (void)_didReceiveReactionAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b07dd
- (void)_didReceiveQueueSyncAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b044e
- (void)_didReceivePlayNowQueueItemsAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b0298
- (void)_didReceivePlaybackSyncAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000afdd1
- (void)_didReceivePlaybackControlSettingsAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000af9f1
- (void)_didReceiveParticipantChangeAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000af6a7
- (void)_didReceiveMoveItemAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000af4f1
- (void)_didReceiveCurrentItemTransitionAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000af278
- (void)_didReceiveCurrentItemChangeAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000aeeea
- (void)_didReceiveAddItemsAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000aed34
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000aebf6
- (void)sendPlaybackSyncPayload:(id)arg1;	// IMP=0x00000000000ae484
- (void)receivedEvent:(id)arg1;	// IMP=0x00000000000ae2c7
- (void)receivedCurrentItemIdentifier:(id)arg1 fromParticipant:(id)arg2;	// IMP=0x00000000000ae037
- (id)participantForParticipantUUID:(id)arg1;	// IMP=0x00000000000add9a
- (void)fetchPlaybackSyncStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000adb9e
@property(readonly, copy, nonatomic) ICSharedListeningQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, copy, nonatomic) ICLiveLinkIdentity *identity;
- (void)updateWithIdentity:(id)arg1;	// IMP=0x00000000000ad581
- (void)broadcastDirectCurrentItemChangedToItemIdentifier:(id)arg1;	// IMP=0x00000000000ad2e9
- (void)endSynchronizedPlayback;	// IMP=0x00000000000ad233
- (void)beginSynchronizedPlaybackWithAVCFPlaybackCoordinator:(void *)arg1;	// IMP=0x00000000000ad19f
- (void)beginSynchronizedPlaybackWithAVPlaybackCoordinator:(id)arg1;	// IMP=0x00000000000acfe8
- (void)reconnectWithReason:(id)arg1 options:(id)arg2;	// IMP=0x00000000000ace7e
- (void)stop;	// IMP=0x00000000000acd1a
- (void)start;	// IMP=0x00000000000ac96d
@property(readonly, nonatomic) NSURL *invitationURL;
- (void)dealloc;	// IMP=0x00000000000ac849
- (id)initWithSharedListeningSessionIdentifier:(id)arg1 identity:(id)arg2;	// IMP=0x00000000000ac636

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

