//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <StoreKit/SKStoreProductViewControllerDelegate-Protocol.h>

@class NSString, SKInvocationQueueProxy, SKRemoteStorePageViewController, SKStoreProductViewController, _UIAsyncInvocation;
@protocol SKUIServiceStorePageViewController;

@interface SKStorePageViewController : UIViewController <SKStoreProductViewControllerDelegate>
{
    _UIAsyncInvocation *_cancelRequest;	// 8 = 0x8
    CDUnknownBlockType _loadBlock;	// 16 = 0x10
    SKStoreProductViewController *_productPageViewController;	// 24 = 0x18
    SKRemoteStorePageViewController *_remoteViewController;	// 32 = 0x20
    SKInvocationQueueProxy<SKUIServiceStorePageViewController> *_serviceProxy;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000343b7
- (void)_requestRemoteViewController;	// IMP=0x0000000000034119
- (void)_prepareToLoadWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000034096
- (void)_dismissProductPageViewController;	// IMP=0x000000000003403a
- (void)_didLoadWithResult:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000000033f92
- (void)_addRemoteView;	// IMP=0x0000000000033e99
- (void)_showProductPageWithItemIdentifier:(id)arg1;	// IMP=0x0000000000033cee
- (void)_didFinishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000033c8d
- (void)productViewControllerDidFinish:(id)arg1;	// IMP=0x0000000000033c7b
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000033c13
- (void)loadView;	// IMP=0x0000000000033bc0
- (void)loadPageWithURLBagKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033b57
- (void)loadPageWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033aee
- (void)dealloc;	// IMP=0x0000000000033a50
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000339dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
