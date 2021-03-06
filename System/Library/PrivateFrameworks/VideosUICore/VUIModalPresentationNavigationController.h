//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class NSArray, NSHashTable, NSMapTable, UIAlertController, UIViewController, VUIModalPresentationConfiguration;

@interface VUIModalPresentationNavigationController : UINavigationController
{
    NSHashTable *_presentedViewControllers;	// 8 = 0x8
    UIViewController *_rootViewController;	// 16 = 0x10
    NSArray *_previousViewControllers;	// 24 = 0x18
    NSMapTable *_pushCompletionBlocks;	// 32 = 0x20
    NSMapTable *_popCompletionBlocks;	// 40 = 0x28
    VUIModalPresentationConfiguration *_configuration;	// 48 = 0x30
    UIAlertController *_containingAlertController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000008760
@property(nonatomic) __weak UIAlertController *containingAlertController; // @synthesize containingAlertController=_containingAlertController;
@property(retain, nonatomic) VUIModalPresentationConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)updatePreferredFocusedViewStateForFocus:(_Bool)arg1;	// IMP=0x000000000000869a
- (void)_dismissForLastViewController:(_Bool)arg1;	// IMP=0x0000000000008540
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x00000000000083e3
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000008339
- (id)popViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008277
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000081ec
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000007fbb
- (void)_updateConfiguration;	// IMP=0x0000000000007e56
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000007c66
@property(readonly, nonatomic) NSHashTable *presentedViewControllers;

@end

