//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <StoreKit/SKRemoteReviewViewControllerDelegate-Protocol.h>

@class NSString, SKInvocationQueueProxy, SKRemoteReviewViewController, _UIAsyncInvocation;
@protocol SKUIServiceReviewViewController;

__attribute__((visibility("hidden")))
@interface SKStoreReviewViewController : UIViewController <SKRemoteReviewViewControllerDelegate>
{
    SKInvocationQueueProxy<SKUIServiceReviewViewController> *_serviceProxy;	// 8 = 0x8
    _UIAsyncInvocation *_cancelRequest;	// 16 = 0x10
    SKRemoteReviewViewController *_remoteViewController;	// 24 = 0x18
    NSString *_reviewRequestToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001b7fa
@property(retain, nonatomic) NSString *reviewRequestToken; // @synthesize reviewRequestToken=_reviewRequestToken;
@property(retain, nonatomic) SKRemoteReviewViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) _UIAsyncInvocation *cancelRequest; // @synthesize cancelRequest=_cancelRequest;
@property(retain, nonatomic) SKInvocationQueueProxy<SKUIServiceReviewViewController> *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
- (void)_addRemoteView;	// IMP=0x000000000001b5fa
- (void)_requestRemoteViewController;	// IMP=0x000000000001b1c3
- (void)remoteReviewViewControllerTerminatedWithError:(id)arg1;	// IMP=0x000000000001b1ad
- (void)_didFinishWithResult:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x000000000001b0ad
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000001b00c
- (void)viewDidLoad;	// IMP=0x000000000001af60
- (void)dealloc;	// IMP=0x000000000001aec5
- (id)initWithReviewRequestToken:(id)arg1;	// IMP=0x000000000001addd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

