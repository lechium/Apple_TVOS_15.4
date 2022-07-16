//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TVSettingKit/TSKPreviewingDelegate-Protocol.h>
#import <TVSettingKit/UINavigationControllerDelegate-Protocol.h>
#import <TVSettingKit/_TSKAnimatorDelegate-Protocol.h>

@class NSString, UINavigationController, UIView;
@protocol TSKPreviewing;

@interface _TSKSplitViewController : UIViewController <TSKPreviewingDelegate, _TSKAnimatorDelegate, UINavigationControllerDelegate>
{
    _Bool _isAnimatingTransition;	// 8 = 0x8
    UINavigationController *_navigationController;	// 16 = 0x10
    UIViewController *_previewViewController;	// 24 = 0x18
    UIView *_previewContainerView;	// 32 = 0x20
    UIViewController<TSKPreviewing> *_previewProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000023020
@property(retain, nonatomic) UIViewController<TSKPreviewing> *previewProvider; // @synthesize previewProvider=_previewProvider;
@property(readonly, nonatomic) UIView *previewContainerView; // @synthesize previewContainerView=_previewContainerView;
@property(nonatomic) _Bool isAnimatingTransition; // @synthesize isAnimatingTransition=_isAnimatingTransition;
@property(readonly, nonatomic) UIViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)_updatePreviewingWithViewController:(id)arg1;	// IMP=0x0000000000022d80
- (void)animatorDidCompleteTransition:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;	// IMP=0x0000000000022c90
- (void)animatorWillBeginTransition:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;	// IMP=0x0000000000022be0
- (void)animator:(id)arg1 transitionToPreview:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000022b50
- (id)animator:(id)arg1 previewViewControllerForViewController:(id)arg2;	// IMP=0x0000000000022a00
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000022950
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x00000000000226c0
- (void)previewing:(id)arg1 needsUpdateForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000225f0
- (void)setPreviewViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000212c0
- (id)preferredFocusEnvironments;	// IMP=0x0000000000021280
- (void)viewDidLoad;	// IMP=0x0000000000020fb0
- (id)initWithNavigationController:(id)arg1;	// IMP=0x0000000000020ec0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
