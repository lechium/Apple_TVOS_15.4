//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, UIViewController;

@interface _TtC8VideosUI22DocumentViewController
{
    MISSING_TYPE *viewWillAppearAfterTabSwitch;	// 8 = 0x8
    MISSING_TYPE *templateViewController;	// 16 = 0x10
    MISSING_TYPE *deferLoadingTemplateController;	// 24 = 0x18
    MISSING_TYPE *documentDelegate;	// 32 = 0x20
    MISSING_TYPE *ignoreDidMoveToNilParent;	// 48 = 0x30
    MISSING_TYPE *rebaseIdentifier;	// 56 = 0x38
    MISSING_TYPE *document;	// 72 = 0x48
    MISSING_TYPE *isTransitioning;	// 80 = 0x50
    MISSING_TYPE *loadingView;	// 88 = 0x58
    MISSING_TYPE *needsConfigurationWhenMovesToParent;	// 96 = 0x60
    MISSING_TYPE *pagePerformanceReporter;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000438630
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000043aeb0
- (void)scrollToTop;	// IMP=0x000000000043ad70
@property(nonatomic, readonly) _Bool vuiShouldAutomaticallyForwardAppearanceMethods;
@property(nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000439b60
- (id)overrideTraitCollectionForChildViewController:(id)arg1;	// IMP=0x0000000000439a20
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)vui_didMoveToParentViewController:(id)arg1;	// IMP=0x00000000004395e0
- (void)vui_viewDidLayoutSubviews;	// IMP=0x00000000004393f0
- (void)vui_viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000439110
- (void)vui_viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000438e80
- (void)vui_viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000438df0
- (void)willResignActive:(id)arg1;	// IMP=0x0000000000438900
- (void)didBecomeActive:(id)arg1;	// IMP=0x0000000000438730
- (void)vui_viewWillAppear:(_Bool)arg1;	// IMP=0x00000000004386f0
- (void)dealloc;	// IMP=0x00000000004385a0
- (void)vui_viewDidLoad;	// IMP=0x0000000000438480
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000438290

@end
