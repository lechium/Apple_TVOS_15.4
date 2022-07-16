//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <StoreKit/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSDictionary, NSString, SKInvocationQueueProxy, SKRemoteProductActivityViewController, _SKStoreProductActivityAnimationController, _UIAsyncInvocation;
@protocol SKStoreProductActivityViewControllerDelegate, SKUIServiceProductActivityViewController;

@interface SKStoreProductActivityViewController : UIViewController <UIViewControllerTransitioningDelegate>
{
    SKInvocationQueueProxy<SKUIServiceProductActivityViewController> *_serviceProxy;	// 8 = 0x8
    _UIAsyncInvocation *_cancelRequest;	// 16 = 0x10
    SKRemoteProductActivityViewController *_remoteViewController;	// 24 = 0x18
    NSDictionary *_parameters;	// 32 = 0x20
    _SKStoreProductActivityAnimationController *_animationController;	// 40 = 0x28
    id <SKStoreProductActivityViewControllerDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000032f7a
@property(nonatomic) __weak id <SKStoreProductActivityViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x0000000000032efe
- (void)_viewTapped:(id)arg1;	// IMP=0x0000000000032ee5
- (void)_addRemoteView;	// IMP=0x0000000000032db7
- (void)_requestRemoteViewController;	// IMP=0x0000000000032b85
- (void)_didFinishWithResult:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x000000000003291d
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000032893
- (void)viewDidLoad;	// IMP=0x000000000003275d
- (void)dealloc;	// IMP=0x00000000000326d6
- (id)initWithParameters:(id)arg1;	// IMP=0x00000000000325de
- (id)init;	// IMP=0x00000000000325c5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000325ac
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000032593

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

