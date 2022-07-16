//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServicesUI/AMSBagConsumer-Protocol.h>
#import <AppleMediaServicesUI/AMSUIDynamicViewControllerDelegate-Protocol.h>
#import <AppleMediaServicesUI/AMSUIWebDelegate-Protocol.h>
#import <AppleMediaServicesUI/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <AppleMediaServicesUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class AMSEngagementRequest, AMSEngagementResult, AMSProcessInfo, AMSPromise, NSError, NSString, UIViewController;
@protocol AMSBagProtocol;

@interface AMSUIEngagementTaskViewController <AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, UIAdaptivePresentationControllerDelegate, UIViewControllerTransitioningDelegate, AMSBagConsumer>
{
    _Bool _presented;	// 8 = 0x8
    _Bool _ignoresDismissDetection;	// 9 = 0x9
    AMSProcessInfo *_clientInfo;	// 16 = 0x10
    id <AMSBagProtocol> _bag;	// 24 = 0x18
    UIViewController *_childController;	// 32 = 0x20
    AMSPromise *_childPromise;	// 40 = 0x28
    CDUnknownBlockType _dismissBlock;	// 48 = 0x30
    NSError *_error;	// 56 = 0x38
    AMSEngagementRequest *_request;	// 64 = 0x40
    AMSEngagementResult *_result;	// 72 = 0x48
}

+ (id)createBagForSubProfile;	// IMP=0x0000000000017a3c
+ (id)bagSubProfileVersion;	// IMP=0x0000000000017a23
+ (id)bagSubProfile;	// IMP=0x0000000000017a0a
+ (id)bagKeySet;	// IMP=0x00000000000179f1
- (void).cxx_destruct;	// IMP=0x0000000000018651
@property(nonatomic) _Bool ignoresDismissDetection; // @synthesize ignoresDismissDetection=_ignoresDismissDetection;
@property(retain, nonatomic) AMSEngagementResult *result; // @synthesize result=_result;
@property(retain, nonatomic) AMSEngagementRequest *request; // @synthesize request=_request;
@property(nonatomic) _Bool presented; // @synthesize presented=_presented;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) AMSPromise *childPromise; // @synthesize childPromise=_childPromise;
@property(retain, nonatomic) UIViewController *childController; // @synthesize childController=_childController;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
- (void)webViewController:(id)arg1 didResolveWithResult:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000182dc
- (void)webViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;	// IMP=0x0000000000018188
- (_Bool)dynamicViewControllerShouldDismiss:(id)arg1;	// IMP=0x0000000000018004
- (void)dynamicViewController:(id)arg1 didResolveWithResult:(id)arg2 error:(id)arg3;	// IMP=0x0000000000017e36
- (void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3;	// IMP=0x0000000000017ba9
- (void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;	// IMP=0x0000000000017a55
- (id)_viewControllerForType:(id)arg1;	// IMP=0x000000000001742a
- (void)_updateChildViewController:(id)arg1;	// IMP=0x00000000000172bf
- (void)_receivedPurchaseResult:(id)arg1;	// IMP=0x0000000000017221
- (id)_preloadChild;	// IMP=0x0000000000016d1c
- (long long)_modalPresentationStyle;	// IMP=0x0000000000016cbe
- (_Bool)_isURLTrusted:(id)arg1 inDomains:(id)arg2;	// IMP=0x0000000000016a92
- (id)_isOriginatingURLTrusted;	// IMP=0x0000000000016709
- (void)_finishWithResultInfo:(id)arg1 error:(id)arg2;	// IMP=0x00000000000164f8
- (void)_setupContentSize;	// IMP=0x00000000000164f2
- (void)_setup;	// IMP=0x0000000000016490
- (id)startEngagement;	// IMP=0x00000000000151f5
- (id)canPresent;	// IMP=0x0000000000015117
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000000015080
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000014f92
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000014e3e
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000014e0f
- (void)loadView;	// IMP=0x0000000000014d33
- (void)dealloc;	// IMP=0x0000000000014c84
- (id)initWithRequest:(id)arg1 bag:(id)arg2;	// IMP=0x0000000000014bce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
