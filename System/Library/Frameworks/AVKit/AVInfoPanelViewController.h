//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AVKit/AVInfoMenuDelegate-Protocol.h>
#import <AVKit/UITabBarControllerDelegate-Protocol.h>

@class AVInfoMenuController, AVInfoPanelAudioViewController, AVInfoPanelDescriptionViewController, AVInfoPanelMetadataViewController, AVInfoPanelNavigationCollectionViewController, AVInfoPanelSubtitlesViewController, AVNowPlayingInfoHintView, AVUnifiedPlayerNavigationContentViewController, NSArray, NSLayoutConstraint, NSString, UIView, UIVisualEffectView, _UIVisualEffectBackdropView;
@protocol AVInfoPanelViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AVInfoPanelViewController : UIViewController <UITabBarControllerDelegate, AVInfoMenuDelegate>
{
    AVInfoMenuController *_tabBarController;	// 8 = 0x8
    AVInfoPanelMetadataViewController *_metadataViewController;	// 16 = 0x10
    AVInfoPanelSubtitlesViewController *_subtitlesViewController;	// 24 = 0x18
    AVInfoPanelAudioViewController *_audioViewController;	// 32 = 0x20
    AVUnifiedPlayerNavigationContentViewController *_navigationViewController;	// 40 = 0x28
    UIVisualEffectView *_tabBarBackgroundView;	// 48 = 0x30
    _UIVisualEffectBackdropView *_infoPanelCaptureView;	// 56 = 0x38
    NSLayoutConstraint *_infoPanelCaptureViewHeightConstraint;	// 64 = 0x40
    _Bool _panelContentIsFocused;	// 72 = 0x48
    NSArray *_customViewControllers;	// 80 = 0x50
    AVNowPlayingInfoHintView *_infoHintView;	// 88 = 0x58
    id <AVInfoPanelViewControllerDelegate> _delegate;	// 96 = 0x60
    long long _dismissalReason;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000004640b
@property(readonly, nonatomic) long long dismissalReason; // @synthesize dismissalReason=_dismissalReason;
@property(nonatomic) __weak id <AVInfoPanelViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AVNowPlayingInfoHintView *infoHintView; // @synthesize infoHintView=_infoHintView;
@property(retain, nonatomic) NSArray *customViewControllers; // @synthesize customViewControllers=_customViewControllers;
@property(readonly) AVInfoPanelSubtitlesViewController *subtitlesViewController; // @synthesize subtitlesViewController=_subtitlesViewController;
@property(readonly) AVInfoPanelAudioViewController *audioViewController; // @synthesize audioViewController=_audioViewController;
- (void)_playPauseButtonGestureDetected:(id)arg1;	// IMP=0x0000000000046306
- (void)_menuButtonGestureDetected:(id)arg1;	// IMP=0x0000000000046250
- (void)_upArrowGestureDetected:(id)arg1;	// IMP=0x000000000004619a
- (void)_swipeUpGestureDetected:(id)arg1;	// IMP=0x00000000000460e4
- (void)_dismissForTimeout:(_Bool)arg1;	// IMP=0x0000000000045e9a
- (void)_dismissForTimeoutNSNumber:(id)arg1;	// IMP=0x0000000000045e66
- (void)_cancelDismissTimer;	// IMP=0x0000000000045e05
- (void)_setupTabs;	// IMP=0x0000000000045b35
- (id)_findWrapperForCustomViewController:(id)arg1;	// IMP=0x0000000000045a7f
- (void)infoMenuControllerDidSwipeUp:(id)arg1;	// IMP=0x0000000000045a6b
- (void)infoMenuController:(id)arg1 didSelectViewController:(id)arg2;	// IMP=0x00000000000459f6
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000045706
- (void)recalculateVisibleTabs;	// IMP=0x00000000000456f4
- (void)recalculateContentHeight;	// IMP=0x00000000000456d7
@property(nonatomic, getter=isContentHidden) _Bool contentHidden;
- (void)setContentHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000004549f
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) struct CGRect viewBoundsOccluded;
@property(readonly, nonatomic) UIView *panelContainerView;
@property(nonatomic) _Bool suppressDescriptionSubpanel;
@property(readonly) AVInfoPanelNavigationCollectionViewController *navigationViewController;
@property(readonly) AVInfoPanelDescriptionViewController *descriptionViewController;
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000044dc6
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000044acd
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000044972
- (void)viewDidLoad;	// IMP=0x0000000000044045
- (void)dealloc;	// IMP=0x0000000000043ffd
- (id)init;	// IMP=0x0000000000043eb9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

