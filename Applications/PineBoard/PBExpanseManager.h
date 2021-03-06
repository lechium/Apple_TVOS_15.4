//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, NSUUID, PBBulletinService, PBDialogContext, PBExpanseNoticeManager, PBSBulletin, PBSystemIndicator, TUCallCenter, TUConversationManager;
@protocol OS_dispatch_queue, PBSystemIndicatorProviderDelegate;

@interface PBExpanseManager : NSObject
{
    _Bool _observing;	// 8 = 0x8
    id <PBSystemIndicatorProviderDelegate> _systemIndicatorProviderDelegate;	// 16 = 0x10
    PBSystemIndicator *_systemIndicator;	// 24 = 0x18
    long long _expanseSessionState;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSMutableSet *_missingAppActivityUUIDSet;	// 48 = 0x30
    NSMutableDictionary *_missingAppAlertDialogContexts;	// 56 = 0x38
    NSMutableDictionary *_missingAppBulletinCache;	// 64 = 0x40
    PBSBulletin *_currentWelcomeBackBulletin;	// 72 = 0x48
    PBBulletinService *_bulletinService;	// 80 = 0x50
    PBDialogContext *_currentSharePlayWaitViewDialogContext;	// 88 = 0x58
    TUConversationManager *_conversationManager;	// 96 = 0x60
    TUCallCenter *_callCenter;	// 104 = 0x68
    NSUUID *_currentJoinedConversationUUID;	// 112 = 0x70
    PBExpanseNoticeManager *_expanseNoticeManager;	// 120 = 0x78
}

+ (id)sharedInstance;	// IMP=0x0020000000179d70
- (void).cxx_destruct;	// IMP=0x0020000000182cb0
@property(retain, nonatomic) PBExpanseNoticeManager *expanseNoticeManager; // @synthesize expanseNoticeManager=_expanseNoticeManager;
@property(retain, nonatomic) NSUUID *currentJoinedConversationUUID; // @synthesize currentJoinedConversationUUID=_currentJoinedConversationUUID;
@property(retain, nonatomic) TUCallCenter *callCenter; // @synthesize callCenter=_callCenter;
@property(retain, nonatomic) TUConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(retain, nonatomic) PBDialogContext *currentSharePlayWaitViewDialogContext; // @synthesize currentSharePlayWaitViewDialogContext=_currentSharePlayWaitViewDialogContext;
@property(retain, nonatomic) PBBulletinService *bulletinService; // @synthesize bulletinService=_bulletinService;
@property(retain, nonatomic) PBSBulletin *currentWelcomeBackBulletin; // @synthesize currentWelcomeBackBulletin=_currentWelcomeBackBulletin;
@property(retain, nonatomic) NSMutableDictionary *missingAppBulletinCache; // @synthesize missingAppBulletinCache=_missingAppBulletinCache;
@property(retain, nonatomic) NSMutableDictionary *missingAppAlertDialogContexts; // @synthesize missingAppAlertDialogContexts=_missingAppAlertDialogContexts;
@property(retain, nonatomic) NSMutableSet *missingAppActivityUUIDSet; // @synthesize missingAppActivityUUIDSet=_missingAppActivityUUIDSet;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) long long expanseSessionState; // @synthesize expanseSessionState=_expanseSessionState;
@property(readonly, nonatomic) PBSystemIndicator *systemIndicator; // @synthesize systemIndicator=_systemIndicator;
@property(nonatomic) __weak id <PBSystemIndicatorProviderDelegate> systemIndicatorProviderDelegate; // @synthesize systemIndicatorProviderDelegate=_systemIndicatorProviderDelegate;
- (void)joinExpanseSessionOnNearbyDevice;	// IMP=0x00100000001820d0
- (void)presentMissingAppBulletinForActivitySession:(id)arg1 inConversation:(id)arg2;	// IMP=0x00100000001816f0
- (void)presentMissingAppAlertForActivitySession:(id)arg1 inConversation:(id)arg2;	// IMP=0x00100000001807a0
- (void)dismissStaleMissingAppAlertsForCurrentConversation:(id)arg1;	// IMP=0x00100000001801e0
- (void)maybePresentMissingAppBulletinsForConversation:(id)arg1;	// IMP=0x001000000017fec0
- (id)currentSplitSessionConversation;	// IMP=0x001000000017faa0
- (id)currentSplitSessionActivitySession;	// IMP=0x001000000017f7b0
- (void)launchCurrentActivitySession;	// IMP=0x001000000017f650
- (void)refreshExpanseIndicatorForSessionState:(long long)arg1 applicationSceneHandle:(id)arg2;	// IMP=0x001000000017ee00
- (id)missingAppActivitySessions:(id)arg1;	// IMP=0x001000000017e300
- (void)refreshExpanseSessionState;	// IMP=0x001000000017dc70
- (void)neighborhoodActivityConduit:(id)arg1 leftSplitSessionWithID:(id)arg2;	// IMP=0x001000000017db70
- (void)neighborhoodActivityConduit:(id)arg1 joinedSplitSessionWithID:(id)arg2 fromDevice:(id)arg3;	// IMP=0x001000000017da50
- (void)neighborhoodActivityConduitUpdatedKnownContacts:(id)arg1;	// IMP=0x001000000017da10
- (void)neighborhoodActivityConduitNearbyConversationsChanged:(id)arg1;	// IMP=0x001000000017d930
- (void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;	// IMP=0x001000000017d820
- (void)conversationManager:(id)arg1 conversation:(id)arg2 receivedActivitySessionEvent:(id)arg3;	// IMP=0x001000000017d500
- (void)conversationManager:(id)arg1 conversation:(id)arg2 participant:(id)arg3 addedNotice:(id)arg4;	// IMP=0x001000000017c580
- (void)conversationManager:(id)arg1 activitySessionsChangedForConversation:(id)arg2;	// IMP=0x001000000017c460
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;	// IMP=0x001000000017c310
- (void)sceneManager:(id)arg1 didChangeCurrentApplicationFromSceneHandle:(id)arg2 toSceneHandle:(id)arg3;	// IMP=0x001000000017c260
- (void)dialogManager:(id)arg1 willDismissDialogWithContext:(id)arg2 dismissalContext:(id)arg3;	// IMP=0x001000000017bdc0
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x001000000017bae0
- (void)powerManager:(id)arg1 willSleepSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000017b980
- (void)cancelPendingJoinRequest;	// IMP=0x001000000017b890
- (void)handleCallControlURL:(id)arg1;	// IMP=0x001000000017b3d0
- (void)showWelcomeBackBulletinIfNeededForProfileIdentifier:(id)arg1 withInsertAtFrontOfQueue:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000017a5e0
- (void)stopObserving;	// IMP=0x001000000017a3a0
- (void)startObserving;	// IMP=0x001000000017a090
- (id)init;	// IMP=0x0010000000179e60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

