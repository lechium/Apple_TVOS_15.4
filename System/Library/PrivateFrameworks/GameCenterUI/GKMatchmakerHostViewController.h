//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/GKMatchmakerHostProtocol-Protocol.h>
#import <GameCenterUI/GKMatchmakerServiceProtocol-Protocol.h>

@class GKGame, GKMatchmakerViewController, NSString;

@interface GKMatchmakerHostViewController <GKMatchmakerHostProtocol, GKMatchmakerServiceProtocol>
{
    GKMatchmakerViewController *_delegate;	// 8 = 0x8
}

+ (_Bool)dismissAutomaticallyAfterExtensionCompletion;	// IMP=0x0000000000048176
+ (id)matchmakerExtension;	// IMP=0x0000000000047fc8
- (void).cxx_destruct;	// IMP=0x00000000000498fc
@property(nonatomic) __weak GKMatchmakerViewController *delegate; // @synthesize delegate=_delegate;
- (void)extensionIsCanceling;	// IMP=0x0000000000049892
- (void)shareMatchWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004980c
- (void)messageFromExtension:(id)arg1;	// IMP=0x0000000000049312
- (void)applicationWillEnterForeground;	// IMP=0x0000000000049273
- (void)setNearbyPlayer:(id)arg1 reachable:(_Bool)arg2;	// IMP=0x0000000000049159
- (void)inviterCancelled;	// IMP=0x00000000000490ba
- (void)setFailedWithError:(id)arg1;	// IMP=0x0000000000049018
- (void)setAutomatchFailedWithError:(id)arg1;	// IMP=0x0000000000048f76
- (void)setInvitesFailedWithError:(id)arg1;	// IMP=0x0000000000048ed4
- (void)setPlayer:(id)arg1 sentData:(id)arg2;	// IMP=0x0000000000048dcc
- (void)setPlayer:(id)arg1 connected:(_Bool)arg2;	// IMP=0x0000000000048cb2
- (void)setConnectingStateForPlayer:(id)arg1;	// IMP=0x0000000000048bd6
- (void)setPlayer:(id)arg1 responded:(long long)arg2;	// IMP=0x0000000000048abc
- (void)setAutomatchPlayerCount:(long long)arg1;	// IMP=0x00000000000489d3
- (void)setDefaultInvitationMessage:(id)arg1;	// IMP=0x00000000000488f7
- (void)setExistingPlayers:(id)arg1;	// IMP=0x000000000004881b
- (void)setCanStartWithMinimumPlayers:(_Bool)arg1;	// IMP=0x0000000000048732
- (void)setMatchmakingMode:(long long)arg1;	// IMP=0x0000000000048649
- (void)setHosted:(_Bool)arg1;	// IMP=0x0000000000048560
- (void)setAcceptedInviteInternal:(id)arg1;	// IMP=0x000000000004847c
- (void)setMatchRequestInternal:(id)arg1;	// IMP=0x0000000000048398
- (id)extensionObjectProxy;	// IMP=0x000000000004817e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
