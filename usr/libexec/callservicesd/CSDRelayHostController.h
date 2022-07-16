//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSDRelayHostController
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000146708
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)pushHostedCallsForRemoteInviteDictionary:(id)arg1 destination:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000145ebf
- (void)handlePickRouteMessageFromClient:(id)arg1;	// IMP=0x0010000000145e07
- (void)handlePushRelayingCallsMessageFromClient:(id)arg1;	// IMP=0x001000000014589a
- (void)handlePullHostedCallsMessageFromClient:(id)arg1 destination:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001457ec
- (void)handleRequestCallContextMessageFromClient:(id)arg1;	// IMP=0x001000000014572c
- (void)handleSendHardPauseDigitsMessageFromClient:(id)arg1;	// IMP=0x00100000001454cc
- (void)handleDisconnectAllCallsMessageFromClient:(id)arg1;	// IMP=0x001000000014540d
- (void)handleDisconnectCurrentCallAndActivateHeldMessageFromClient:(id)arg1;	// IMP=0x001000000014534e
- (void)handleHoldActiveAndAnswerMessageFromClient:(id)arg1;	// IMP=0x001000000014513f
- (void)handleEndHeldAndAnswerMessageFromClient:(id)arg1;	// IMP=0x0010000000144f30
- (void)handleEndActiveAndAnswerMessageFromClient:(id)arg1;	// IMP=0x0010000000144d21
- (void)handleSwapCallsMessageFromClient:(id)arg1;	// IMP=0x0010000000144cdd
- (void)handleUngroupCallMessageFromClient:(id)arg1;	// IMP=0x0010000000144b5d
- (void)handleGroupCallMessageFromClient:(id)arg1;	// IMP=0x001000000014465a
- (void)handleUnholdCallMessageFromClient:(id)arg1;	// IMP=0x00100000001444da
- (void)handleHoldCallMessageFromClient:(id)arg1;	// IMP=0x001000000014435a
- (void)handleDisconnectCallMessageFromClient:(id)arg1;	// IMP=0x001000000014415c
- (void)handleAnswerCallMessageFromClient:(id)arg1 destination:(id)arg2 device:(id)arg3;	// IMP=0x0010000000143b3c
- (void)handleDialCallMessageFromClient:(id)arg1 destination:(id)arg2 device:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000142a42
- (void)_launchInCallApplicationForOutgoingCallOnHostIfNecessary;	// IMP=0x0010000000142928
- (void)_conferenceTransport:(id)arg1 didStopForCall:(id)arg2 cleanly:(_Bool)arg3 error:(id)arg4;	// IMP=0x0010000000142647
- (void)_answerHostedCall:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000014212f
- (id)callWithUniqueProxyIdentifier:(id)arg1;	// IMP=0x001000000014207e
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000142010

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

