//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <SetupAssistantUI/UINavigationControllerDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, UIColor;

@interface BFFNavigationController : UINavigationController <UINavigationControllerDelegate>
{
    NSMutableArray *_observers;	// 8 = 0x8
    NSMutableDictionary *_appearanceHandlers;	// 16 = 0x10
    long long _pendingShowOperation;	// 24 = 0x18
    UIColor *_backgroundColor;	// 32 = 0x20
    _Bool _animating;	// 40 = 0x28
    _Bool _pushWithoutDeferringTransitionsWhileInBackground;	// 41 = 0x29
    _Bool _inBackground;	// 42 = 0x2a
    _Bool _ignoreDismissals;	// 43 = 0x2b
    struct CGSize _forcedPreferredContentSize;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000da46
@property(nonatomic) _Bool ignoreDismissals; // @synthesize ignoreDismissals=_ignoreDismissals;
@property(nonatomic, getter=isInBackground) _Bool inBackground; // @synthesize inBackground=_inBackground;
@property(nonatomic) _Bool pushWithoutDeferringTransitionsWhileInBackground; // @synthesize pushWithoutDeferringTransitionsWhileInBackground=_pushWithoutDeferringTransitionsWhileInBackground;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) struct CGSize forcedPreferredContentSize; // @synthesize forcedPreferredContentSize=_forcedPreferredContentSize;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000000d5e6
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000000d2e2
- (void)removeDelegateObserver:(id)arg1;	// IMP=0x000000000000d1e6
- (void)addDelegateObserver:(id)arg1;	// IMP=0x000000000000d18b
- (void)_reapObservers;	// IMP=0x000000000000d0f7
- (void)setDelegate:(id)arg1;	// IMP=0x000000000000d094
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000cfed
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000cbd5
- (void)popToViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000cadd
- (void)pushViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c9f5
- (id)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000000000c958
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000c886
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000000000c839
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000c45f
- (struct CGSize)preferredContentSize;	// IMP=0x000000000000c3ee
- (_Bool)prefersStatusBarHidden;	// IMP=0x000000000000c3aa
- (long long)preferredStatusBarStyle;	// IMP=0x000000000000c319
@property(retain, nonatomic) UIColor *backgroundColor;
- (_Bool)_canShowTextServices;	// IMP=0x000000000000c1ef
- (_Bool)_usesTransitionController;	// IMP=0x000000000000c1e7
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000000c18d
- (id)initIgnoringDismissals:(_Bool)arg1;	// IMP=0x000000000000c162
- (id)init;	// IMP=0x000000000000c0af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

