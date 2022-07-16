//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSDate, NSString, PBPIPControlsViewController, PGPictureInPictureViewController, _PBPIPHintView;
@protocol PBPIPContainerViewControllerAnimationDelegate;

@interface PBPIPContainerViewController : UIViewController
{
    PGPictureInPictureViewController *_pictureInPictureViewController;	// 8 = 0x8
    id <PBPIPContainerViewControllerAnimationDelegate> _animationDelegate;	// 16 = 0x10
    PBPIPControlsViewController *_controlsViewController;	// 24 = 0x18
    _PBPIPHintView *_hintView;	// 32 = 0x20
    NSDate *_editingStartDate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000053fd0
@property(retain, nonatomic) NSDate *editingStartDate; // @synthesize editingStartDate=_editingStartDate;
@property(retain, nonatomic) _PBPIPHintView *hintView; // @synthesize hintView=_hintView;
@property(readonly, nonatomic) PBPIPControlsViewController *controlsViewController; // @synthesize controlsViewController=_controlsViewController;
@property(nonatomic) __weak id <PBPIPContainerViewControllerAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(retain, nonatomic) PGPictureInPictureViewController *pictureInPictureViewController; // @synthesize pictureInPictureViewController=_pictureInPictureViewController;
- (void)performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000053d60
- (void)prepareStopAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000053ce0
- (void)performStartAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000053c60
- (void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000053bb0
- (void)preferredContentSizeDidChangeForPictureInPictureViewController;	// IMP=0x0010000000053b50
- (void)hideControlsHint;	// IMP=0x0010000000053840
- (void)showControlsHint;	// IMP=0x0010000000052e30
- (void)_hideControlsUsingAnimationStyle:(long long)arg1;	// IMP=0x0010000000052d00
- (void)_showControlsUsingAnimationStyle:(long long)arg1 inQuadrant:(long long)arg2;	// IMP=0x0010000000052820
- (void)setEditing:(_Bool)arg1 animationStyle:(long long)arg2 inQuadrant:(long long)arg3;	// IMP=0x0010000000052690
- (id)preferredFocusEnvironments;	// IMP=0x00100000000525a0
- (void)viewDidLoad;	// IMP=0x0010000000051f10
- (void)dealloc;	// IMP=0x0010000000051e90
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000051da0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000051c90
- (id)initWithPictureInPictureViewController:(id)arg1;	// IMP=0x0010000000051ba0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

