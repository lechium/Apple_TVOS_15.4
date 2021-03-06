//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TVKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, TVRelatedContent, UIGestureRecognizer;
@protocol TVRelatedContentViewControllerDelegate;

@interface TVRelatedContentViewController : UIViewController <UIGestureRecognizerDelegate>
{
    id <TVRelatedContentViewControllerDelegate> _delegate;	// 8 = 0x8
    UIViewController *_primaryViewController;	// 16 = 0x10
    TVRelatedContent *_relatedContent;	// 24 = 0x18
    unsigned long long _preferredDisplayMode;	// 32 = 0x20
    unsigned long long _displayMode;	// 40 = 0x28
    UIGestureRecognizer *_interactionGestureRecognizer;	// 48 = 0x30
    unsigned long long _numberOfAppearanceTransitions;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000070b2d
@property(nonatomic) unsigned long long numberOfAppearanceTransitions; // @synthesize numberOfAppearanceTransitions=_numberOfAppearanceTransitions;
@property(retain, nonatomic) UIGestureRecognizer *interactionGestureRecognizer; // @synthesize interactionGestureRecognizer=_interactionGestureRecognizer;
@property(readonly, nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) unsigned long long preferredDisplayMode; // @synthesize preferredDisplayMode=_preferredDisplayMode;
@property(retain, nonatomic) TVRelatedContent *relatedContent; // @synthesize relatedContent=_relatedContent;
@property(retain, nonatomic) UIViewController *primaryViewController; // @synthesize primaryViewController=_primaryViewController;
@property(nonatomic) __weak id <TVRelatedContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000007091d
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000707b2
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000007065a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000704ec
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x00000000000704e4
- (void)viewDidLoad;	// IMP=0x00000000000701f9
- (void)loadView;	// IMP=0x000000000007013f
- (id)preferredFocusEnvironments;	// IMP=0x000000000006ff9f
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;	// IMP=0x000000000006feac
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x000000000006fce1
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000006fc83
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000006fc6a
- (void)setPreferredDisplayMode:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000006fbc2
- (void)setRelatedContent:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000006fb37
- (void)_menuButtonTapRecognized:(id)arg1;	// IMP=0x000000000006f957
- (void)_userInteractionBegan:(id)arg1;	// IMP=0x000000000006f8d6
- (unsigned long long)_actualDisplayModeForPreferredDisplayMode:(unsigned long long)arg1 withRelatedContent:(id)arg2;	// IMP=0x000000000006f894
- (void)_setDisplayMode:(unsigned long long)arg1 relatedContent:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000006e6b7
- (id)_visibleViewControllers;	// IMP=0x000000000006e646
- (void)_augmentOverrideTraitCollectionForChildViewController:(id)arg1 withContentType:(long long)arg2;	// IMP=0x000000000006e4ff
- (id)_viewControllersForDisplayMode:(unsigned long long)arg1 withRelatedContent:(id)arg2;	// IMP=0x000000000006e3cd
- (void)_performViewAnimations:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006e2df
- (double)_heightForContentType:(long long)arg1 withRelatedContent:(id)arg2 displayMode:(unsigned long long)arg3 parentContainerSize:(struct CGSize)arg4;	// IMP=0x000000000006e194
- (double)_widthForContentType:(long long)arg1 withRelatedContent:(id)arg2 displayMode:(unsigned long long)arg3 parentContainerSize:(struct CGSize)arg4;	// IMP=0x000000000006e05f
- (id)_viewControllerForContentType:(long long)arg1 withRelatedContent:(id)arg2;	// IMP=0x000000000006dfe3
- (long long)_contentTypeForContainer:(id)arg1 withRelatedContent:(id)arg2;	// IMP=0x000000000006def1
- (double)_presentationProgressForDisplayMode:(unsigned long long)arg1;	// IMP=0x000000000006dedb
- (void)_didTransitionToDisplayMode:(unsigned long long)arg1;	// IMP=0x000000000006dd9f
- (void)_willTransitionToDisplayMode:(unsigned long long)arg1;	// IMP=0x000000000006dd3d
- (void)_decrementNumberOfAppearanceTransitions;	// IMP=0x000000000006dd0b
- (void)_incrementNumberOfAppearanceTransitions;	// IMP=0x000000000006dcd9
- (id)_relatedContentView;	// IMP=0x000000000006dcc7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

