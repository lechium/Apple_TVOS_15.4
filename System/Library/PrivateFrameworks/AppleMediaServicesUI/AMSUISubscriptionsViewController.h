//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AppleMediaServicesUI/AMSBagConsumer-Protocol.h>

@class ACAccount, AMSProcessInfo, AMSUIWebViewController, NSDictionary, NSString;
@protocol AMSBagProtocol;

@interface AMSUISubscriptionsViewController : UIViewController <AMSBagConsumer>
{
    NSString *_subscriptionType;	// 8 = 0x8
    AMSUIWebViewController *_webViewController;	// 16 = 0x10
}

+ (id)createBagForSubProfile;	// IMP=0x0000000000038957
+ (id)bagSubProfileVersion;	// IMP=0x000000000003894a
+ (id)bagSubProfile;	// IMP=0x000000000003893d
+ (id)bagKeySet;	// IMP=0x00000000000388bd
- (void).cxx_destruct;	// IMP=0x0000000000038faa
@property(readonly, nonatomic) AMSUIWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) NSString *subscriptionType; // @synthesize subscriptionType=_subscriptionType;
- (void)_startLoading;	// IMP=0x0000000000038c4d
- (void)_setupLayout;	// IMP=0x0000000000038b80
- (void)_setChildViewController:(id)arg1;	// IMP=0x0000000000038ace
- (void)_setupChildViewController;	// IMP=0x0000000000038a82
- (void)_setup;	// IMP=0x0000000000038a70
- (void)viewWillLayoutSubviews;	// IMP=0x000000000003887c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000003883b
- (void)viewDidLoad;	// IMP=0x00000000000387fa
@property(retain, nonatomic) NSDictionary *metricsOverlay;
@property(retain, nonatomic) AMSProcessInfo *clientInfo;
@property(retain, nonatomic) id <AMSBagProtocol> bag;
@property(retain, nonatomic) ACAccount *account;
- (id)initWithAccount:(id)arg1 bag:(id)arg2 clientInfo:(id)arg3;	// IMP=0x0000000000038428
- (id)initWithAccount:(id)arg1 bag:(id)arg2;	// IMP=0x0000000000038413

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

