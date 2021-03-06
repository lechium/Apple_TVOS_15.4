//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/GKTurnBasedMatchmakerHostProtocol-Protocol.h>
#import <GameCenterUI/GKTurnBasedMatchmakerServiceProtocol-Protocol.h>

@class GKGame, GKTurnBasedMatchmakerViewController, NSString;

@interface GKTurnBasedMatchmakerHostViewController <GKTurnBasedMatchmakerHostProtocol, GKTurnBasedMatchmakerServiceProtocol>
{
    GKTurnBasedMatchmakerViewController *_delegate;	// 8 = 0x8
}

+ (_Bool)dismissAutomaticallyAfterExtensionCompletion;	// IMP=0x0000000000036276
+ (id)turnBasedMatchmakerExtension;	// IMP=0x00000000000360c8
- (void).cxx_destruct;	// IMP=0x0000000000036c6f
@property(nonatomic) __weak GKTurnBasedMatchmakerViewController *delegate; // @synthesize delegate=_delegate;
- (void)extensionIsCanceling;	// IMP=0x0000000000036c05
- (void)messageFromExtension:(id)arg1;	// IMP=0x00000000000368d6
- (void)refreshMatches;	// IMP=0x0000000000036837
- (void)setShowQuit:(_Bool)arg1;	// IMP=0x000000000003674e
- (void)setShowPlay:(_Bool)arg1;	// IMP=0x0000000000036665
- (void)setShowExistingMatches:(_Bool)arg1;	// IMP=0x000000000003657c
- (void)setMatchRequestInternal:(id)arg1;	// IMP=0x0000000000036498
- (id)extensionObjectProxy;	// IMP=0x000000000003627e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

