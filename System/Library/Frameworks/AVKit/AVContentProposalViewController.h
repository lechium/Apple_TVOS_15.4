//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AVContentProposal, AVFocusProxyView, AVPlayerViewController, NSDate, NSTimer, UIFocusGuide, UILayoutGuide, UITapGestureRecognizer;
@protocol AVContentProposalViewControllerDelegate;

@interface AVContentProposalViewController : UIViewController
{
    UIFocusGuide *_playerFocusGuide;	// 8 = 0x8
    AVContentProposal *_contentProposal;	// 16 = 0x10
    AVPlayerViewController *_playerViewController;	// 24 = 0x18
    NSDate *_dateOfAutomaticAcceptance;	// 32 = 0x20
    id <AVContentProposalViewControllerDelegate> _contentProposalViewControllerDelegate;	// 40 = 0x28
    NSTimer *_acceptanceTimer;	// 48 = 0x30
    AVFocusProxyView *_playerFocusProxyView;	// 56 = 0x38
    UITapGestureRecognizer *_selectPlayerGestureRecognizer;	// 64 = 0x40
    UITapGestureRecognizer *_menuGestureRecognizer;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000106e5d
@property(retain, nonatomic) UITapGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *selectPlayerGestureRecognizer; // @synthesize selectPlayerGestureRecognizer=_selectPlayerGestureRecognizer;
@property(retain, nonatomic) AVFocusProxyView *playerFocusProxyView; // @synthesize playerFocusProxyView=_playerFocusProxyView;
@property(retain, nonatomic) NSTimer *acceptanceTimer; // @synthesize acceptanceTimer=_acceptanceTimer;
@property(nonatomic) __weak id <AVContentProposalViewControllerDelegate> contentProposalViewControllerDelegate; // @synthesize contentProposalViewControllerDelegate=_contentProposalViewControllerDelegate;
@property(retain, nonatomic) NSDate *dateOfAutomaticAcceptance; // @synthesize dateOfAutomaticAcceptance=_dateOfAutomaticAcceptance;
@property(nonatomic) __weak AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(retain, nonatomic) AVContentProposal *contentProposal; // @synthesize contentProposal=_contentProposal;
- (void)rejectProposalAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000106d31
- (void)acceptProposalAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000106d18
- (void)hideProposalAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000106cfc
- (void)dismissContentProposalForAction:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000106c1a
@property(readonly, nonatomic) struct CGRect preferredPlayerViewFrame;
- (void)autoAcceptProposal;	// IMP=0x0000000000106a97
- (void)_acceptanceTimerFired:(id)arg1;	// IMP=0x0000000000106a85
- (void)_didPressMenuButton:(id)arg1;	// IMP=0x00000000001069c4
- (void)_didSelectPlayerView:(id)arg1;	// IMP=0x00000000001069a5
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000106962
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000106781
- (void)_ensureFocusProxyViewInstalled;	// IMP=0x00000000001066b3
- (void)viewDidLoad;	// IMP=0x0000000000106672
- (void)loadView;	// IMP=0x0000000000106631
- (id)_dateMainContentWillEnd;	// IMP=0x0000000000106482
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x0000000000106433
@property(readonly, nonatomic) UILayoutGuide *playerLayoutGuide;
- (void)setPlayerFocusGuide:(id)arg1;	// IMP=0x0000000000106241
- (id)playerFocusGuide;	// IMP=0x000000000010622c
- (void)_addPlayerFocusShadowView;	// IMP=0x000000000010619d
- (void)setPlayerLayerView:(id)arg1;	// IMP=0x000000000010612b
- (id)playerLayerView;	// IMP=0x00000000001060d7
- (_Bool)isUserInteractionAllowed;	// IMP=0x00000000001060cf
- (void)dealloc;	// IMP=0x0000000000106086
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000106042
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000105ffe

@end

