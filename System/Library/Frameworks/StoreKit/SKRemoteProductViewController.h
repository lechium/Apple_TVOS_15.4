//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <StoreKit/SKUIClientProductPageViewController-Protocol.h>

@class NSString, SKStoreProductViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteProductViewController : _UIRemoteViewController <SKUIClientProductPageViewController>
{
    SKStoreProductViewController *_productViewController;	// 8 = 0x8
}

+ (id)serviceViewControllerInterface;	// IMP=0x000000000002c0c1
+ (id)exportedInterface;	// IMP=0x000000000002c0a1
- (void).cxx_destruct;	// IMP=0x000000000002c6d6
@property(nonatomic) __weak SKStoreProductViewController *productViewController; // @synthesize productViewController=_productViewController;
- (void)setStatusBarStyle:(id)arg1 animated:(id)arg2;	// IMP=0x000000000002c5f8
- (void)setStatusBarHidden:(id)arg1 withAnimation:(id)arg2;	// IMP=0x000000000002c545
- (void)promptForStarRating;	// IMP=0x000000000002c3a3
- (void)presentPageWithRequest:(id)arg1 animated:(id)arg2;	// IMP=0x000000000002c2e3
- (void)loadDidFinishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000002c253
- (void)didReceiveTitle:(id)arg1;	// IMP=0x000000000002c1f6
- (void)didFinishWithResult:(id)arg1;	// IMP=0x000000000002c17d
- (void)didFinishDismissal;	// IMP=0x000000000002c149
- (void)didFinish;	// IMP=0x000000000002c115
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x000000000002c0e1
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x000000000002c061

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
