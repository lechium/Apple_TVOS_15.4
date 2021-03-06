//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKContentContainerObserver-Protocol.h>
#import <PassKitUI/PKViewWindowObserver-Protocol.h>
#import <PassKitUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PassKitUI/UINavigationControllerDelegate-Protocol.h>
#import <PassKitUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, PKCompactNavigationContainedNavigationController, PKCompactNavigationContainedNavigationWrapperViewController, UITapGestureRecognizer, UIView;
@protocol PKCompactNavigationContainerControllerDelegate, UICoordinateSpace;

@interface PKCompactNavigationContainerController : UIViewController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, PKContentContainerObserver, PKViewWindowObserver>
{
    _Bool _centeredCard;	// 8 = 0x8
    _Bool _hasExplicitlyDefinedSupportedInterfaceOrientations;	// 9 = 0x9
    unsigned long long _explicitlyDefinedSupportedInterfaceOrientations;	// 16 = 0x10
    _Bool _requiresMasking;	// 24 = 0x18
    UIView *_maskingContainerView;	// 32 = 0x20
    struct CGRect _maximumModalPresentationFrame;	// 40 = 0x28
    PKCompactNavigationContainedNavigationWrapperViewController *_presentationContextVC;	// 72 = 0x48
    CDStruct_47050b7f _topVCInfo;	// 80 = 0x50
    struct CGRect _statusBarFrame;	// 112 = 0x70
    unsigned short _layoutGroupCounter;	// 144 = 0x90
    unsigned short _contentSizeUpdateDeferralCounter;	// 146 = 0x92
    _Bool _deferredContentSizeUpdate;	// 148 = 0x94
    _Bool _deferredContentSizeUpdateIsAnimated;	// 149 = 0x95
    _Bool _deferredContentSizeUpdateIsForced;	// 150 = 0x96
    UIViewController *_topVC;	// 152 = 0x98
    _Bool _topVCIsExpectedClass;	// 160 = 0xa0
    _Bool _topVCIsInInitialLayout;	// 161 = 0xa1
    UIViewController *_pendingTopVC;	// 168 = 0xa8
    unsigned long long _pendingTopVCIdentifier;	// 176 = 0xb0
    unsigned long long _updateChildViewControllerSizeCounter;	// 184 = 0xb8
    UITapGestureRecognizer *_tapGestureRecognizer;	// 192 = 0xc0
    unsigned char _visibility;	// 200 = 0xc8
    _Bool _keyboardVisible;	// 201 = 0xc9
    struct CGRect _keyboardFrame;	// 208 = 0xd0
    struct CGRect _lastKeyboardFrame;	// 240 = 0xf0
    _Bool _didMoveToWindowDirtiesLayout;	// 272 = 0x110
    _Bool _presentingNavigationController;	// 273 = 0x111
    PKCompactNavigationContainedNavigationController *_containedNavigationController;	// 280 = 0x118
    unsigned long long _style;	// 288 = 0x120
    id <UICoordinateSpace> _exclusionCoordinateSpace;	// 296 = 0x128
    id <PKCompactNavigationContainerControllerDelegate> _delegate;	// 304 = 0x130
    struct CGRect _exclusionRect;	// 312 = 0x138
}

+ (id)dimmingColor;	// IMP=0x00000000002f5ce6
- (void).cxx_destruct;	// IMP=0x00000000002f91f1
@property(nonatomic, getter=isPresentingNavigationController) _Bool presentingNavigationController; // @synthesize presentingNavigationController=_presentingNavigationController;
@property(nonatomic) __weak id <PKCompactNavigationContainerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <UICoordinateSpace> exclusionCoordinateSpace; // @synthesize exclusionCoordinateSpace=_exclusionCoordinateSpace;
@property(readonly, nonatomic) struct CGRect exclusionRect; // @synthesize exclusionRect=_exclusionRect;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) PKCompactNavigationContainedNavigationController *containedNavigationController; // @synthesize containedNavigationController=_containedNavigationController;
@property(nonatomic) _Bool didMoveToWindowDirtiesLayout; // @synthesize didMoveToWindowDirtiesLayout=_didMoveToWindowDirtiesLayout;
- (id)childViewControllerForWhitePointAdaptivityStyle;	// IMP=0x00000000002f912c
- (id)childViewControllerForUserInterfaceStyle;	// IMP=0x00000000002f9117
- (long long)preferredUserInterfaceStyle;	// IMP=0x00000000002f90c3
- (id)childViewControllerForStatusBarHidden;	// IMP=0x00000000002f90ae
- (id)childViewControllerForStatusBarStyle;	// IMP=0x00000000002f9099
- (void)_updateLayoutForKeyboardAction:(CDUnknownBlockType)arg1;	// IMP=0x00000000002f8f4f
- (void)keyboardWillHide:(id)arg1;	// IMP=0x00000000002f8e77
- (void)keyboardWillChange:(id)arg1;	// IMP=0x00000000002f8ce3
- (void)keyboardWillShow:(id)arg1;	// IMP=0x00000000002f8b4a
- (void)_updateForKeyboardIfNecessary;	// IMP=0x00000000002f8afb
- (void)tapGestureRecognized:(id)arg1;	// IMP=0x00000000002f8aa4
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000002f8866
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000002f8817
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000000002f87ec
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00000000002f87be
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x00000000002f8743
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000002f872b
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000002f849b
- (void)_updateStatusBarFrame;	// IMP=0x00000000002f836e
- (void)observedView:(id)arg1 didMoveToWindow:(id)arg2;	// IMP=0x00000000002f8305
- (void)contentContainer:(id)arg1 preferredContentSizeDidChangeForChildContentContainer:(id)arg2;	// IMP=0x00000000002f8290
- (struct CGSize)_navigationControllerSizeForChildViewControllerInfo:(CDStruct_47050b7f)arg1 withCurrentInfo:(CDStruct_47050b7f)arg2;	// IMP=0x00000000002f7e97
- (CDStruct_47050b7f)_infoForViewController:(id)arg1;	// IMP=0x00000000002f7d57
- (void)_updateTopViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002f7c79
- (void)_updateTopViewControllerAsync:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002f7b85
- (void)updateChildViewControllerSizeAnimated:(_Bool)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x00000000002f7964
- (void)updateChildViewControllerSizeAnimated:(_Bool)arg1;	// IMP=0x00000000002f7950
- (id)_backgroundColor;	// IMP=0x00000000002f7906
- (void)setExclusionRect:(struct CGRect)arg1 withCoordinateSpace:(id)arg2;	// IMP=0x00000000002f7740
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;	// IMP=0x00000000002f7724
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000000002f76b6
- (struct CGSize)modalPresentationSize;	// IMP=0x00000000002f761e
- (struct CGSize)childViewControllerSizeForNavigationControllerSize:(struct CGSize)arg1;	// IMP=0x00000000002f74f2
- (struct CGSize)navigationControllerSizeForChildViewControllerPreferredContentSize:(struct CGSize)arg1 isRoot:(_Bool)arg2;	// IMP=0x00000000002f7497
- (struct CGSize)childViewControllerPreferredContentSizeForSize:(struct CGSize)arg1 isRoot:(_Bool)arg2;	// IMP=0x00000000002f7464
- (void)insertBackgroundLevelView:(id)arg1;	// IMP=0x00000000002f73eb
- (void)_endLayoutGroup;	// IMP=0x00000000002f73cd
- (void)_beginLayoutGroup;	// IMP=0x00000000002f73bc
- (struct CGRect)_targetNavigationControllerFrameForInfo:(CDStruct_47050b7f)arg1;	// IMP=0x00000000002f7079
- (void)viewDidLayoutSubviews;	// IMP=0x00000000002f6ff8
- (void)viewWillLayoutSubviews;	// IMP=0x00000000002f6890
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000002f6844
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000002f67f8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000002f67ac
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002f6760
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000002f671f
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000002f6717
- (void)viewDidLoad;	// IMP=0x00000000002f655a
- (void)loadView;	// IMP=0x00000000002f6131
- (void)dealloc;	// IMP=0x00000000002f6071
- (id)initWithNavigationController:(id)arg1 style:(unsigned long long)arg2;	// IMP=0x00000000002f5da9
- (id)initWithNavigationController:(id)arg1;	// IMP=0x00000000002f5d4d
- (id)init;	// IMP=0x00000000002f5d39
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000002f5d27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

