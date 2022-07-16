//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <PhotosUICore/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UIViewController;

@interface _PXMiroMovieNavigationController : UINavigationController <UIViewControllerTransitioningDelegate>
{
    UIViewController *_miroMoviePresentingViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000008a5376
@property(retain, nonatomic) UIViewController *miroMoviePresentingViewController; // @synthesize miroMoviePresentingViewController=_miroMoviePresentingViewController;
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000000008a533f
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00000000008a532d
- (id)_transitionForPresentedOrDismissedViewController:(id)arg1;	// IMP=0x00000000008a5238
- (void)dismiss:(id)arg1;	// IMP=0x00000000008a51f4
- (id)initWithRootViewController:(id)arg1;	// IMP=0x00000000008a51a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
