//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/AMSUIDynamicViewControllerDelegate-Protocol.h>

@class AMSUIDynamicViewController, NSString;
@protocol AMSUIDynamicViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AMSUIDynamicViewControllerDelegateProxy : NSObject <AMSUIDynamicViewControllerDelegate>
{
    id <AMSUIDynamicViewControllerDelegate> _delegate;	// 8 = 0x8
    AMSUIDynamicViewController *_dynamicViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000011447
@property(nonatomic) __weak AMSUIDynamicViewController *dynamicViewController; // @synthesize dynamicViewController=_dynamicViewController;
@property(nonatomic) __weak id <AMSUIDynamicViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)dynamicViewControllerShouldDismiss:(id)arg1;	// IMP=0x000000000001134d
- (void)dynamicViewController:(id)arg1 didResolveWithResult:(id)arg2 error:(id)arg3;	// IMP=0x0000000000011261
- (void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3;	// IMP=0x0000000000011175
- (void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;	// IMP=0x0000000000011089
- (void)dynamicViewController:(id)arg1 didFinishCarrierLinkingWithResult:(id)arg2 error:(id)arg3;	// IMP=0x0000000000010e8b
- (id)dynamicViewController:(id)arg1 contentViewWithDictionary:(id)arg2 frame:(struct CGRect)arg3;	// IMP=0x0000000000010d94
- (id)dynamicViewController:(id)arg1 contentViewControllerWithDictionary:(id)arg2;	// IMP=0x0000000000010cb4
- (id)initWithDynamicViewController:(id)arg1;	// IMP=0x0000000000010c50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

