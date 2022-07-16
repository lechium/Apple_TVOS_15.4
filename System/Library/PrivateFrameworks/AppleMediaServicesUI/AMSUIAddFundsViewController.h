//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, AMSProcessInfo, AMSUIWebViewController, NSDictionary;
@protocol AMSBagProtocol;

@interface AMSUIAddFundsViewController
{
    AMSUIWebViewController *_webViewController;	// 8 = 0x8
}

+ (id)createBagForSubProfile;	// IMP=0x00000000000036a2
+ (id)bagSubProfileVersion;	// IMP=0x0000000000003695
+ (id)bagSubProfile;	// IMP=0x0000000000003688
+ (id)bagKeySet;	// IMP=0x0000000000003608
- (void).cxx_destruct;	// IMP=0x00000000000037cc
@property(readonly, nonatomic) AMSUIWebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (void)viewWillLayoutSubviews;	// IMP=0x000000000000351a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000003456
- (void)loadView;	// IMP=0x00000000000033e5
@property(retain, nonatomic) NSDictionary *metricsOverlay;
@property(retain, nonatomic) AMSProcessInfo *clientInfo;
@property(retain, nonatomic) id <AMSBagProtocol> bag;
@property(retain, nonatomic) ACAccount *account;
- (id)initWithAccount:(id)arg1 bag:(id)arg2 clientInfo:(id)arg3;	// IMP=0x0000000000003013
- (id)initWithAccount:(id)arg1 bag:(id)arg2;	// IMP=0x0000000000002f7c

@end
