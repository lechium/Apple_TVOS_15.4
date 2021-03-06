//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServicesUI/AMSBagConsumer-Protocol.h>
#import <AppleMediaServicesUI/AMSUIDynamicViewControllerDelegate-Protocol.h>

@class ACAccount, AMSProcessInfo, AMSUIDynamicViewControllerDelegateProxy, NSDictionary, NSString;
@protocol AMSBagProtocol, AMSUIDynamicViewControllerDelegate;

@interface AMSUIDynamicViewController <AMSUIDynamicViewControllerDelegate, AMSBagConsumer>
{
    AMSUIDynamicViewControllerDelegateProxy *_delegateProxy;	// 8 = 0x8
    AMSUIDynamicViewController *_dynamicViewController;	// 16 = 0x10
}

+ (id)createBagForSubProfile;	// IMP=0x00000000000109c0
+ (id)bagSubProfileVersion;	// IMP=0x00000000000109b3
+ (id)bagSubProfile;	// IMP=0x00000000000109a6
+ (id)bagKeySet;	// IMP=0x0000000000010902
- (void).cxx_destruct;	// IMP=0x0000000000010b29
@property(readonly, nonatomic) AMSUIDynamicViewController *dynamicViewController; // @synthesize dynamicViewController=_dynamicViewController;
@property(readonly, nonatomic) AMSUIDynamicViewControllerDelegateProxy *delegateProxy; // @synthesize delegateProxy=_delegateProxy;
- (void)_setupContentSize;	// IMP=0x0000000000010b01
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000010814
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000107e5
- (void)viewDidLoad;	// IMP=0x0000000000010774
- (void)setTitle:(id)arg1;	// IMP=0x00000000000106b9
- (id)title;	// IMP=0x0000000000010603
- (id)navigationItem;	// IMP=0x0000000000010504
- (_Bool)isMovingFromParentViewController;	// IMP=0x0000000000010465
- (_Bool)isBeingDismissed;	// IMP=0x00000000000103c6
- (void)_setup;	// IMP=0x000000000001035c
- (void)reloadContentViewImpressionItems;	// IMP=0x000000000001031f
- (id)preload;	// IMP=0x00000000000102cf
@property(retain, nonatomic) NSDictionary *metricsOverlay;
@property(retain, nonatomic) NSString *mediaClientIdentifier;
@property(retain, nonatomic) NSDictionary *internalClientOptions;
@property(nonatomic) __weak id <AMSUIDynamicViewControllerDelegate> delegate;
@property(retain, nonatomic) NSDictionary *clientOptions;
@property(retain, nonatomic) AMSProcessInfo *clientInfo;
@property(retain, nonatomic) id <AMSBagProtocol> bag;
@property(nonatomic) _Bool anonymousMetrics;
@property(retain, nonatomic) ACAccount *account;
- (id)initWithBag:(id)arg1 javaScriptURL:(id)arg2;	// IMP=0x000000000000fc1d
- (id)initWithBag:(id)arg1 javaScriptBagValue:(id)arg2;	// IMP=0x000000000000fc0b
- (id)initWithBag:(id)arg1 URL:(id)arg2;	// IMP=0x000000000000fb4b
- (id)initWithBag:(id)arg1 bagValue:(id)arg2;	// IMP=0x000000000000f9d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

