//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <GameCenterUI/GKExtensionParentViewControllerProtocol-Protocol.h>
#import <GameCenterUI/GKLocalPlayerListener-Protocol.h>
#import <GameCenterUI/GKTurnBasedEventListener-Protocol.h>

@class GKMatchRequest, GKTurnBasedMatchmakerHostViewController, NSString, UIAlertController;
@protocol GKTurnBasedMatchmakerViewControllerDelegate;

@interface GKTurnBasedMatchmakerViewController : UINavigationController <GKLocalPlayerListener, GKTurnBasedEventListener, GKExtensionParentViewControllerProtocol>
{
    _Bool _showExistingMatches;	// 8 = 0x8
    id <GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate;	// 16 = 0x10
    GKTurnBasedMatchmakerHostViewController *_remoteViewController;	// 24 = 0x18
    GKMatchRequest *_matchRequest;	// 32 = 0x20
    UIAlertController *_alertController;	// 40 = 0x28
    long long _matchmakingMode;	// 48 = 0x30
}

+ (_Bool)_preventsAppearanceProxyCustomization;	// IMP=0x000000000000b82c
- (void).cxx_destruct;	// IMP=0x000000000000cfdd
@property(nonatomic) long long matchmakingMode; // @synthesize matchmakingMode=_matchmakingMode;
@property(nonatomic) _Bool showExistingMatches; // @synthesize showExistingMatches=_showExistingMatches;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) GKMatchRequest *matchRequest; // @synthesize matchRequest=_matchRequest;
@property(retain, nonatomic) GKTurnBasedMatchmakerHostViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) __weak id <GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate; // @synthesize turnBasedMatchmakerDelegate;
- (void)authenticationChanged:(id)arg1;	// IMP=0x000000000000cdcf
- (void)playerQuitMatch:(id)arg1;	// IMP=0x000000000000ccf2
- (void)finishWithMatch:(id)arg1;	// IMP=0x000000000000cbd7
- (void)finishWithError:(id)arg1;	// IMP=0x000000000000cb2d
- (void)cancel;	// IMP=0x000000000000caa7
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000000ca75
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x000000000000ca6d
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000000c9eb
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000000c93c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000c6f0
- (void)viewDidLoad;	// IMP=0x000000000000c6aa
- (_Bool)shouldShowQuitForTurnBasedMatch;	// IMP=0x000000000000c5e4
- (_Bool)shouldShowPlayForTurnBasedMatch;	// IMP=0x000000000000c51e
- (void)extensionDidFinishWithError:(id)arg1;	// IMP=0x000000000000c1c7
- (void)_setupRemoteViewController;	// IMP=0x000000000000bd6e
- (void)_setupChildViewController;	// IMP=0x000000000000bbf2
- (void)loadView;	// IMP=0x000000000000bbc3
- (void)dealloc;	// IMP=0x000000000000b9ec
- (id)init;	// IMP=0x000000000000b9a7
- (void)player:(id)arg1 receivedTurnEventForMatch:(id)arg2 didBecomeActive:(_Bool)arg3;	// IMP=0x000000000000b98a
- (id)initWithMatchRequest:(id)arg1;	// IMP=0x000000000000b834

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

