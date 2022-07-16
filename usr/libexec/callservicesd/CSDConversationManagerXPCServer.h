//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDClientManager, CSDConversationManager, NSString;
@protocol OS_dispatch_queue;

@interface CSDConversationManagerXPCServer : NSObject
{
    int _clientsShouldConnectToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CSDConversationManager *_conversationManager;	// 24 = 0x18
    CSDClientManager *_clientManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000012d1ab
// Error: Property attributes should begin with the type ('T') attribute, property name: clientsShouldConnectToken
// Property attributes: (null)

@property(readonly, nonatomic) CSDClientManager *clientManager; // @synthesize clientManager=_clientManager;
@property(readonly, nonatomic) CSDConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)conversationManager:(id)arg1 screenSharingAvailableChanged:(_Bool)arg2;	// IMP=0x001000000012d0ad
- (void)conversationManager:(id)arg1 sharePlayAvailableChanged:(_Bool)arg2;	// IMP=0x001000000012cfdf
- (void)conversationManager:(id)arg1 trackedPendingMember:(id)arg2 forConversationLink:(id)arg3;	// IMP=0x001000000012ceab
- (void)conversationManager:(id)arg1 activityAuthorizationChangedForBundleIdentifier:(id)arg2;	// IMP=0x001000000012cea5
- (void)conversationManager:(id)arg1 conversation:(id)arg2 appLaunchState:(unsigned long long)arg3 forActivitySession:(id)arg4;	// IMP=0x001000000012cd89
- (void)conversationManager:(id)arg1 conversation:(id)arg2 remoteParticipantWithIdentifier:(unsigned long long)arg3 updatedVideoEnabled:(_Bool)arg4;	// IMP=0x001000000012cc6a
- (void)conversationManager:(id)arg1 conversation:(id)arg2 remoteParticipantWithIdentifier:(unsigned long long)arg3 updatedAudioEnabled:(_Bool)arg4;	// IMP=0x001000000012cb4b
- (void)conversationManager:(id)arg1 conversation:(id)arg2 receivedActivitySessionEvent:(id)arg3;	// IMP=0x001000000012ca17
- (void)conversationManager:(id)arg1 conversation:(id)arg2 participant:(id)arg3 addedNotice:(id)arg4;	// IMP=0x001000000012c8b4
- (void)conversationManager:(id)arg1 conversation:(id)arg2 requestedScreenShareForParticipant:(id)arg3;	// IMP=0x001000000012c780
- (void)conversationManager:(id)arg1 conversation:(id)arg2 mediaPrioritiesDidChangeForParticipant:(id)arg3;	// IMP=0x001000000012c5ac
- (void)notifyClientsOfConversationsByGroupUUIDUpdate;	// IMP=0x001000000012c435
- (void)conversationManager:(id)arg1 removedConversationWithUUID:(id)arg2;	// IMP=0x001000000012c423
- (void)conversationManager:(id)arg1 conversationChanged:(id)arg2;	// IMP=0x001000000012c411
- (void)conversationManager:(id)arg1 activatedConversationLinksChanged:(id)arg2;	// IMP=0x001000000012c2e6
- (void)conversationManager:(id)arg1 updateIncomingPendingConversationsByGroupUUID:(id)arg2;	// IMP=0x001000000012c1bb
- (void)conversationManager:(id)arg1 conversationUpdateMessagesGroupPhoto:(id)arg2;	// IMP=0x001000000012c090
- (void)conversationManager:(id)arg1 conversation:(id)arg2 buzzedMember:(id)arg3;	// IMP=0x001000000012bf31
- (void)conversationManager:(id)arg1 conversation:(id)arg2 addedMembersLocally:(id)arg3;	// IMP=0x001000000012bdd2
- (void)conversationManager:(id)arg1 activitySuggestionsChanged:(id)arg2;	// IMP=0x001000000012bdcc
- (oneway void)updateMessagesGroupPhotoOnConversationWithUUID:(id)arg1;	// IMP=0x001000000012bd34
- (oneway void)updateMessagesGroupName:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x001000000012bc7b
- (oneway void)getMessagesGroupDetailsForConversationUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012b7d1
- (oneway void)setSupportsMessagesGroupProviding:(_Bool)arg1;	// IMP=0x001000000012b762
- (oneway void)requestScreenShareFromMember:(id)arg1 conversationUUID:(id)arg2;	// IMP=0x001000000012b6dc
- (void)unregisterClient:(id)arg1;	// IMP=0x001000000012b5da
- (void)registerClient:(id)arg1;	// IMP=0x001000000012b4d8
- (oneway void)setGridDisplayMode:(unsigned long long)arg1 forConversationWithUUID:(id)arg2;	// IMP=0x001000000012b438
- (oneway void)updateConversationWithUUID:(id)arg1 participantPresentationContexts:(id)arg2;	// IMP=0x001000000012b37f
- (oneway void)setIgnoreLetMeInRequests:(_Bool)arg1 forConversationUUID:(id)arg2;	// IMP=0x001000000012b2e1
- (oneway void)rejectPendingMember:(id)arg1 forConversationUUID:(id)arg2;	// IMP=0x001000000012b228
- (oneway void)approvePendingMember:(id)arg1 forConversationUUID:(id)arg2;	// IMP=0x001000000012b16f
- (void)linkSyncStateIncludeLinks:(_Bool)arg1 WithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000012b0d1
- (oneway void)scheduleConversationLinkCheckInInitial:(_Bool)arg1;	// IMP=0x001000000012b04e
- (oneway void)setLinkName:(id)arg1 forConversationLink:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000012af7e
- (oneway void)activateLink:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012aec5
- (oneway void)getInactiveLinkWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012ae2d
- (oneway void)checkLinkValidity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012ad74
- (oneway void)renewLink:(id)arg1 expirationDate:(id)arg2 reason:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000012accf
- (oneway void)invalidateLink:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012ac16
- (oneway void)fetchUpcomingNoticeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012ab7e
- (oneway void)getScreenSharingAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012aade
- (oneway void)getSharePlayAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012aa3e
- (oneway void)refreshActiveConversations;	// IMP=0x001000000012a9ca
- (oneway void)removeConversationNoticeWithUUID:(id)arg1;	// IMP=0x001000000012a932
- (oneway void)activateConversationNoticeWithActionURL:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x001000000012a879
- (oneway void)addInvitedMemberHandles:(id)arg1 toConversationLink:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000012a7a9
- (oneway void)generateLinkWithInvitedMemberHandles:(id)arg1 linkLifetimeScope:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000012a6e8
- (oneway void)generateLinkForConversationUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012a62f
- (oneway void)getActiveLinksWithCreatedOnly:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012a591
- (oneway void)getLatestRemoteScreenShareAttributesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012a4f9
- (oneway void)setVideoEnabled:(_Bool)arg1 forRemoteParticipantWithIdentifier:(unsigned long long)arg2 conversationUUID:(id)arg3;	// IMP=0x001000000012a450
- (oneway void)setAudioEnabled:(_Bool)arg1 forRemoteParticipantWithIdentifier:(unsigned long long)arg2 conversationUUID:(id)arg3;	// IMP=0x001000000012a3a7
- (oneway void)setDownlinkMuted:(_Bool)arg1 forRemoteParticipantsInConversationWithUUID:(id)arg2;	// IMP=0x001000000012a309
- (oneway void)kickMember:(id)arg1 conversationUUID:(id)arg2;	// IMP=0x001000000012a250
- (oneway void)buzzMember:(id)arg1 conversationUUID:(id)arg2;	// IMP=0x001000000012a197
- (oneway void)launchApplicationForActivitySessionUUID:(id)arg1 forceBackground:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000012a0d8
- (oneway void)launchApplicationForActivitySessionUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012a01f
- (oneway void)setAutoSharePlayEnabled:(_Bool)arg1;	// IMP=0x0010000000129f9c
- (oneway void)setActivityAuthorization:(_Bool)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0010000000129efe
- (oneway void)removeActivitySuggestion:(id)arg1;	// IMP=0x0010000000129c99
- (oneway void)addActivitySuggestion:(id)arg1;	// IMP=0x0010000000129a34
- (oneway void)presentDismissalAlertForActivitySessionWithUUID:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x001000000012997b
- (oneway void)leaveActivitySession:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x00100000001298c2
- (oneway void)createActivitySession:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x0010000000129614
- (oneway void)addRemoteMembers:(id)arg1 otherInvitedHandles:(id)arg2 toConversationWithUUID:(id)arg3;	// IMP=0x0010000000129544
- (oneway void)activatedConversationLinks:(CDUnknownBlockType)arg1;	// IMP=0x0010000000129493
- (oneway void)activitySuggestions:(CDUnknownBlockType)arg1;	// IMP=0x00100000001293e2
- (oneway void)activityAuthorizedBundleIdentifierState:(CDUnknownBlockType)arg1;	// IMP=0x0010000000129331
- (oneway void)pseudonymsByCallUUID:(CDUnknownBlockType)arg1;	// IMP=0x0010000000129280
- (oneway void)incomingPendingConversationsByGroupUUID:(CDUnknownBlockType)arg1;	// IMP=0x00100000001291cf
- (oneway void)conversationsByGroupUUID:(CDUnknownBlockType)arg1;	// IMP=0x001000000012911e
- (void)notifyClientsToConnectIfNecessary;	// IMP=0x001000000012904e
- (void)invalidate;	// IMP=0x0010000000128f9c
- (void)dealloc;	// IMP=0x0010000000128f63
- (id)initWithConversationManager:(id)arg1;	// IMP=0x00100000001289a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
