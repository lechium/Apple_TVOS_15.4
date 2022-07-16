//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/IKAppDocumentDelegate-Protocol.h>
#import <TVMLKit/UIGestureRecognizerDelegate-Protocol.h>
#import <TVMLKit/_TVApplicationInspectorDocumentProvider-Protocol.h>
#import <TVMLKit/_TVIKAppDocumentDelegate-Protocol.h>
#import <TVMLKit/_TVModalPresenterFocusing-Protocol.h>
#import <TVMLKit/_TVPagePerformanceDelegate-Protocol.h>

@class IKAppDocument, NSArray, NSString, TVMediaQueryEvaluator, UITapGestureRecognizer, UIView, UIViewController, _TVPagePerformanceController;
@protocol UIFocusEnvironment, UIFocusItemContainer, _TVAppDocumentControllerDelegate;

@interface _TVAppDocumentController <UIGestureRecognizerDelegate, _TVModalPresenterFocusing, _TVPagePerformanceDelegate, _TVApplicationInspectorDocumentProvider, _TVIKAppDocumentDelegate, IKAppDocumentDelegate>
{
    struct {
        _Bool hasMediaQueryEvaluator;
        _Bool hasWillHostTemplateViewController;
        _Bool hasDidHostTemplateViewController;
    } _delegateFlags;	// 8 = 0x8
    _Bool _opaque;	// 11 = 0xb
    _Bool _dismissAppOnMenu;	// 12 = 0xc
    _Bool _applicationDeactivatedOnMenu;	// 13 = 0xd
    _Bool _transitioning;	// 14 = 0xe
    _Bool _visualEffectDisablementNeeded;	// 15 = 0xf
    _Bool _presentedModal;	// 16 = 0x10
    _Bool _adoptsContext;	// 17 = 0x11
    IKAppDocument *_appDocument;	// 24 = 0x18
    id <_TVAppDocumentControllerDelegate> _appDelegate;	// 32 = 0x20
    UIViewController *_templateViewController;	// 40 = 0x28
    CDUnknownBlockType _menuGestureHandler;	// 48 = 0x30
    TVMediaQueryEvaluator *_mediaQueryEvaluator;	// 56 = 0x38
    UITapGestureRecognizer *_menuGestureRecognizer;	// 64 = 0x40
    _TVPagePerformanceController *_pagePerformance;	// 72 = 0x48
    UIView *_pagePerformanceView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000143604
@property(nonatomic) _Bool adoptsContext; // @synthesize adoptsContext=_adoptsContext;
@property(nonatomic, getter=isPresentedModal) _Bool presentedModal; // @synthesize presentedModal=_presentedModal;
@property(retain, nonatomic) UIView *pagePerformanceView; // @synthesize pagePerformanceView=_pagePerformanceView;
@property(retain, nonatomic) _TVPagePerformanceController *pagePerformance; // @synthesize pagePerformance=_pagePerformance;
@property(nonatomic, getter=isVisualEffectDisablementNeeded) _Bool visualEffectDisablementNeeded; // @synthesize visualEffectDisablementNeeded=_visualEffectDisablementNeeded;
@property(nonatomic) __weak UITapGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(retain, nonatomic) TVMediaQueryEvaluator *mediaQueryEvaluator; // @synthesize mediaQueryEvaluator=_mediaQueryEvaluator;
@property(readonly, nonatomic) _Bool applicationDeactivatedOnMenu; // @synthesize applicationDeactivatedOnMenu=_applicationDeactivatedOnMenu;
@property(nonatomic) _Bool dismissAppOnMenu; // @synthesize dismissAppOnMenu=_dismissAppOnMenu;
@property(copy, nonatomic) CDUnknownBlockType menuGestureHandler; // @synthesize menuGestureHandler=_menuGestureHandler;
@property(nonatomic) _Bool opaque; // @synthesize opaque=_opaque;
@property(retain, nonatomic) UIViewController *templateViewController; // @synthesize templateViewController=_templateViewController;
@property(nonatomic) __weak id <_TVAppDocumentControllerDelegate> appDelegate; // @synthesize appDelegate=_appDelegate;
@property(retain, nonatomic) IKAppDocument *appDocument; // @synthesize appDocument=_appDocument;
- (void)snapshotImpressions;	// IMP=0x00000000001433c4
- (id)currentImpressionableElements;	// IMP=0x0000000000143365
- (id)activeDocument;	// IMP=0x00000000001432a0
- (_Bool)ppt_isLoading;	// IMP=0x00000000001431a8
- (void)pagePerformanceController:(id)arg1 didUpdateMetrics:(id)arg2;	// IMP=0x000000000014302f
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000143027
- (void)_menuGestureHandler:(id)arg1;	// IMP=0x0000000000142fe8
- (void)updatePreferredFocusedViewStateForFocus:(_Bool)arg1;	// IMP=0x0000000000142c0f
- (struct CGSize)formSize;	// IMP=0x0000000000142b7b
- (id)_mediaQueryEvaluator;	// IMP=0x000000000014282b
- (_Bool)_tvTabBarShouldOverlap;	// IMP=0x0000000000142816
- (_Bool)_isFlowcaseStack;	// IMP=0x000000000014279e
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x0000000000142789
- (void)_didHostTemplateViewController:(id)arg1 usedTransitions:(_Bool)arg2;	// IMP=0x00000000001426b0
- (void)_willHostTemplateViewController:(id)arg1 usesTransitions:(_Bool *)arg2;	// IMP=0x0000000000142607
- (void)_updateTemplateViewController;	// IMP=0x0000000000140614
- (void)_updateModalPresentationStateWithTemplateView:(id)arg1;	// IMP=0x000000000013fe83
- (id)_alertControllerWithError:(id)arg1;	// IMP=0x000000000013fcba
- (void)_updateIdleModeStatus;	// IMP=0x000000000013fb1c
- (void)_markAndNotifyStylesDirty;	// IMP=0x000000000013f8f8
- (void)didHostTemplateViewController:(id)arg1 usedTransitions:(_Bool)arg2;	// IMP=0x000000000013f8f2
- (void)willHostTemplateViewController:(id)arg1 usesTransitions:(_Bool *)arg2;	// IMP=0x000000000013f8ec
- (void)scrollToTop;	// IMP=0x000000000013f852
- (void)documentDidUpdateImplicitly:(id)arg1;	// IMP=0x000000000013f737
- (id)impressionableViewElementsForDocument:(id)arg1;	// IMP=0x000000000013f66f
- (_Bool)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2;	// IMP=0x000000000013f5f8
- (void)documentDidUpdate:(id)arg1;	// IMP=0x000000000013f042
- (void)documentNeedsUpdate:(id)arg1;	// IMP=0x000000000013eff9
- (_Bool)tv_isPresentedModalForDocument:(id)arg1;	// IMP=0x000000000013efe7
- (struct CGSize)tv_adjustedWindowSizeForDocument:(id)arg1;	// IMP=0x000000000013ee38
- (id)childViewControllerForStatusBarHidden;	// IMP=0x000000000013ee26
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000013eb5d
- (id)overrideTraitCollectionForChildViewController:(id)arg1;	// IMP=0x000000000013e953
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2;	// IMP=0x000000000013e69d
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;	// IMP=0x000000000013e4b5
- (long long)preferredStatusBarStyle;	// IMP=0x000000000013e413
- (void)viewDidLayoutSubviews;	// IMP=0x000000000013e27d
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000013e1b1
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000013e0bd
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000013df0a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000013ddd7
- (void)viewDidLoad;	// IMP=0x000000000013dc15
- (void)loadView;	// IMP=0x000000000013dade
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
- (void)dealloc;	// IMP=0x000000000013d658
- (void)replaceAppDocumentWithAppDocument:(id)arg1;	// IMP=0x000000000013d494
- (id)initWithAppDocument:(id)arg1;	// IMP=0x000000000013d370

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end
