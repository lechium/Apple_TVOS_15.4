//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface AMSUIWebCampaignAttributionAction
{
    ACAccount *_account;	// 8 = 0x8
    NSArray *_additionalQueryItems;	// 16 = 0x10
    NSURL *_URL;	// 24 = 0x18
}

+ (id)_campaignAttributionTaskForURL:(id)arg1;	// IMP=0x0000000000049987
- (void).cxx_destruct;	// IMP=0x0000000000049a84
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSArray *additionalQueryItems; // @synthesize additionalQueryItems=_additionalQueryItems;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)runAction;	// IMP=0x0000000000048fc5
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000048af1

@end

