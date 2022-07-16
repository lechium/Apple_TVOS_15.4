//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CopresenceCore/CPCoreSessionControlling-Protocol.h>
#import <CopresenceCore/CPIDSMessageHandler-Protocol.h>
#import <CopresenceCore/TUConversationManagerDelegate-Protocol.h>

@class CPIDSHelper, IDSMessenger, NSMutableDictionary, NSString, TUConversationManager;
@protocol CPCoreSessionControllerDelegate, OS_dispatch_queue;

@interface TUSessionController : NSObject <TUConversationManagerDelegate, CPIDSMessageHandler, CPCoreSessionControlling>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CPIDSHelper *_idsHelper;	// 16 = 0x10
    IDSMessenger *_messenger;	// 24 = 0x18
    NSMutableDictionary *_groupParticipants;	// 32 = 0x20
    NSString *_idsGroupSessionUUID;	// 40 = 0x28
    id <CPCoreSessionControllerDelegate> _delegate;	// 48 = 0x30
    TUConversationManager *_conversationManager;	// 56 = 0x38
    NSString *_localAccountName;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000002d934
@property(nonatomic) NSString *localAccountName; // @synthesize localAccountName=_localAccountName;
@property(retain, nonatomic) TUConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property(nonatomic) __weak id <CPCoreSessionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *idsGroupSessionUUID; // @synthesize idsGroupSessionUUID=_idsGroupSessionUUID;
- (void)didReceiveMessage:(id)arg1;	// IMP=0x000000000002d7f1
- (void)conversationManager:(id)arg1 addedActiveConversation:(id)arg2;	// IMP=0x000000000002d74c
- (void)serverDisconnectedForConversationManager:(id)arg1;	// IMP=0x000000000002d70b
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;	// IMP=0x000000000002d2d8
- (void)conversationsChangedForConversationManager:(id)arg1;	// IMP=0x000000000002d27c
- (void)_incomingAppSharingRequest:(id)arg1;	// IMP=0x000000000002cfd5
- (void)_incomingAppLaunchBroadcast:(id)arg1;	// IMP=0x000000000002cb8a
- (void)_processConversation:(id)arg1;	// IMP=0x000000000002c661
- (void)_tearDown;	// IMP=0x000000000002c59b
- (id)broadcastParamFor:(id)arg1;	// IMP=0x000000000002c4bd
- (id)unicastParamFor:(id)arg1 clientID:(unsigned long long)arg2 idsMode:(long long)arg3;	// IMP=0x000000000002c2b7
- (void)stopListeningForInvites;	// IMP=0x000000000002c276
- (void)stopIDSSession;	// IMP=0x000000000002c235
- (void)startIDSSession:(id)arg1 userContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002c1cf
- (void)setAudioEnabled:(_Bool)arg1 forParticipant:(id)arg2;	// IMP=0x000000000002c185
- (void)sendAppSharingRequest:(id)arg1;	// IMP=0x000000000002bf7c
- (id)listSentInvitationsForCurrentSession;	// IMP=0x000000000002bf3b
- (id)listReceivedSessionInvitations;	// IMP=0x000000000002bed7
- (id)listReceivedInvitations;	// IMP=0x000000000002be73
- (void)isAudioEnabledForParticipant:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002be32
- (void)inviteParticipants:(id)arg1;	// IMP=0x000000000002bdf1
- (_Bool)hasActiveSession;	// IMP=0x000000000002bdbe
- (id)getConnectedParticipantsWithReply;	// IMP=0x000000000002bd95
- (void)declineInvite:(id)arg1;	// IMP=0x000000000002bd54
- (void)broadcastAppLaunch:(id)arg1;	// IMP=0x000000000002bb9e
- (id)activeSession;	// IMP=0x000000000002bb1d
- (void)acceptInvite:(id)arg1;	// IMP=0x000000000002bad3
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000002b843

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

