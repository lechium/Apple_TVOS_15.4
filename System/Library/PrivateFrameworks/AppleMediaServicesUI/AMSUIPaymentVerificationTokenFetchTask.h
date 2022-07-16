//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServicesUI/AMSBagConsumer-Protocol.h>
#import <AppleMediaServicesUI/AMSUIWebDelegate-Protocol.h>

@class ACAccount, AMSProcessInfo, NSDictionary, NSString, UIViewController;
@protocol AMSBagProtocol;

@interface AMSUIPaymentVerificationTokenFetchTask : AMSTask <AMSBagConsumer, AMSUIWebDelegate>
{
    ACAccount *_account;	// 8 = 0x8
    NSDictionary *_accountParameters;	// 16 = 0x10
    id <AMSBagProtocol> _bag;	// 24 = 0x18
    AMSProcessInfo *_clientInfo;	// 32 = 0x20
    NSString *_displayName;	// 40 = 0x28
    unsigned long long _mode;	// 48 = 0x30
    NSDictionary *_userInfo;	// 56 = 0x38
    UIViewController *_viewController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000003549e
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) NSDictionary *accountParameters; // @synthesize accountParameters=_accountParameters;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

