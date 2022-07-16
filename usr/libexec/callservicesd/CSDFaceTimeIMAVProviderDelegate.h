//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CXProvider, NSMutableOrderedSet, NSString;
@protocol CSDFaceTimeProviderDelegateManagerDelegate, OS_dispatch_queue;

@interface CSDFaceTimeIMAVProviderDelegate : NSObject
{
    struct os_unfair_lock_s _accessorLock;	// 8 = 0x8
    id <CSDFaceTimeProviderDelegateManagerDelegate> _faceTimeDemuxerDelegate;	// 16 = 0x10
    CDUnknownBlockType _providerDidBegin;	// 24 = 0x18
    CDUnknownBlockType _imAccountForActionBlock;	// 32 = 0x20
    CXProvider *_provider;	// 40 = 0x28
    NSMutableOrderedSet *_cachedChats;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000001c2ec
@property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableOrderedSet *cachedChats; // @synthesize cachedChats=_cachedChats;
@property(retain, nonatomic) CXProvider *provider; // @synthesize provider=_provider;
@property(copy, nonatomic) CDUnknownBlockType imAccountForActionBlock; // @synthesize imAccountForActionBlock=_imAccountForActionBlock;
@property(copy, nonatomic) CDUnknownBlockType providerDidBegin; // @synthesize providerDidBegin=_providerDidBegin;
@property(nonatomic) __weak id <CSDFaceTimeProviderDelegateManagerDelegate> faceTimeDemuxerDelegate; // @synthesize faceTimeDemuxerDelegate=_faceTimeDemuxerDelegate;
- (void)provider:(id)arg1 performSetMutedCallAction:(id)arg2;	// IMP=0x001000000001bfd8
- (void)provider:(id)arg1 performSetRelayingCallAction:(id)arg2;	// IMP=0x001000000001bd66
- (void)provider:(id)arg1 performSetVideoPresentationStateCallAction:(id)arg2;	// IMP=0x001000000001bacf
- (void)provider:(id)arg1 performSetVideoPresentationSizeCallAction:(id)arg2;	// IMP=0x001000000001b841
- (void)provider:(id)arg1 performEnableVideoCallAction:(id)arg2;	// IMP=0x001000000001b78c
- (void)provider:(id)arg1 performSetSharingScreenCallAction:(id)arg2;	// IMP=0x001000000001b6d7
- (void)provider:(id)arg1 performSetSendingVideoCallAction:(id)arg2;	// IMP=0x001000000001b465
- (void)provider:(id)arg1 performSetHeldCallAction:(id)arg2;	// IMP=0x001000000001b1a6
- (void)provider:(id)arg1 performEndCallAction:(id)arg2;	// IMP=0x001000000001afc4
- (void)provider:(id)arg1 performAnswerCallAction:(id)arg2;	// IMP=0x001000000001acac
- (void)providerDidReset:(id)arg1;	// IMP=0x001000000001aa7d
- (void)providerDidBegin:(id)arg1;	// IMP=0x001000000001a875
- (void)invitedToIMAVChat:(id)arg1;	// IMP=0x001000000001a406
- (void)handleChatOutFrequencyChangedNotification:(id)arg1;	// IMP=0x001000000001a23b
- (void)handleChatInFrequencyChangedNotification:(id)arg1;	// IMP=0x001000000001a070
- (void)handleChatMayRequireBreakBeforeMakeChanged:(id)arg1;	// IMP=0x0010000000019e26
- (void)handleChatConferenceMetadataUpdated:(id)arg1;	// IMP=0x0010000000019be9
- (void)handleChatConferenceIDChangedNotification:(id)arg1;	// IMP=0x0010000000019977
- (void)handleChatCallInfoChangedNotification:(id)arg1;	// IMP=0x00100000000196e1
- (void)handleChatInvitationSent:(id)arg1;	// IMP=0x00100000000194e4
- (void)handleChatFirstRemoteFrameArrived:(id)arg1;	// IMP=0x001000000001933d
- (id)failureContextForChat:(id)arg1;	// IMP=0x0010000000018672
- (void)handleChatStateChanged:(id)arg1;	// IMP=0x0010000000017fb9
- (void)daemonConnected:(id)arg1;	// IMP=0x0010000000017ef5
- (void)_updateProviderForEndedChat:(id)arg1;	// IMP=0x0010000000017c14
- (void)_updateProviderForConnectedChat:(id)arg1;	// IMP=0x00100000000176eb
- (void)_updateProviderForConnectingChat:(id)arg1;	// IMP=0x001000000001749a
- (unsigned int)IMAVChatRemoteVideoPresentationStateFromCXVideoPresentationState:(long long)arg1;	// IMP=0x001000000001747f
- (void)_setLocalLandscapeAspectRatio:(struct CGSize)arg1 localPortraitAspectRatio:(struct CGSize)arg2 forChat:(id)arg3;	// IMP=0x0010000000017479
- (void)inviteIMAVPeersWithAction:(id)arg1 tokensToExclude:(id)arg2 joinCallActionToFulfill:(id)arg3;	// IMP=0x0010000000016b01
- (_Bool)hasCallStartedConnectingWithUUID:(id)arg1;	// IMP=0x0010000000016a60
- (void)_endChatWithUUID:(id)arg1 withEndedReason:(unsigned int)arg2;	// IMP=0x001000000001682f
- (void)endCallWithUUID:(id)arg1;	// IMP=0x00100000000167b0
- (void)endCallWithUUIDAsLocalHangup:(id)arg1;	// IMP=0x0010000000016731
- (void)endCallWithUUIDAsDeclinedElsewhere:(id)arg1;	// IMP=0x00100000000166b2
- (void)endCallWithUUIDAsAnsweredElsewhere:(id)arg1;	// IMP=0x0010000000016633
- (void)registerChat:(id)arg1;	// IMP=0x0010000000016560
- (id)upgradeSessionUUIDForCallWithUUID:(id)arg1;	// IMP=0x0010000000016558
- (_Bool)isManagingCallWithUUID:(id)arg1;	// IMP=0x00100000000164c4
- (id)chatWithUUID:(id)arg1;	// IMP=0x001000000001624b
- (void)_requestPendingInvites;	// IMP=0x0010000000016165
- (void)_setUpListeners;	// IMP=0x001000000001569f
- (void)dealloc;	// IMP=0x001000000001562a
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000000154c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

