//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <TVMLKit/_TVModalPresenterFocusing-Protocol.h>

@class NSArray, NSHashTable, NSMapTable, NSString, TVModalPresentationConfiguration, UIAlertController, UIView, UIViewController;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface TVModalPresentationNavigationController : UINavigationController <_TVModalPresenterFocusing>
{
    NSHashTable *_presentedViewControllers;	// 8 = 0x8
    UIViewController *_rootViewController;	// 16 = 0x10
    NSArray *_previousViewControllers;	// 24 = 0x18
    NSMapTable *_pushCompletionBlocks;	// 32 = 0x20
    NSMapTable *_popCompletionBlocks;	// 40 = 0x28
    UIAlertController *_containingAlertController;	// 48 = 0x30
    TVModalPresentationConfiguration *_configuration;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000308e9
@property(retain, nonatomic) TVModalPresentationConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak UIAlertController *containingAlertController; // @synthesize containingAlertController=_containingAlertController;
- (void)updatePreferredFocusedViewStateForFocus:(_Bool)arg1;	// IMP=0x0000000000030823
- (void)_dismissForLastViewController:(_Bool)arg1;	// IMP=0x00000000000306c9
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000000003056c
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000304c2
- (id)popViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030400
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000030375
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000030144
- (void)_updateConfiguration;	// IMP=0x000000000002ffdf
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000002fdef
@property(readonly, nonatomic) NSHashTable *presentedViewControllers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

