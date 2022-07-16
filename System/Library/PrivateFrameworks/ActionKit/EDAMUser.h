//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDAMAccountLimits, EDAMAccounting, EDAMBusinessUserInfo, EDAMPremiumInfo, EDAMPricingModel, EDAMSubscriptionInfo, EDAMUserAttributes, NSNumber, NSString;

@interface EDAMUser
{
    NSNumber *_id;	// 8 = 0x8
    NSString *_username;	// 16 = 0x10
    NSString *_email;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_timezone;	// 40 = 0x28
    NSNumber *_privilege;	// 48 = 0x30
    NSNumber *_serviceLevel;	// 56 = 0x38
    NSNumber *_created;	// 64 = 0x40
    NSNumber *_updated;	// 72 = 0x48
    NSNumber *_deleted;	// 80 = 0x50
    NSNumber *_active;	// 88 = 0x58
    NSString *_shardId;	// 96 = 0x60
    EDAMUserAttributes *_attributes;	// 104 = 0x68
    EDAMAccounting *_accounting;	// 112 = 0x70
    EDAMPremiumInfo *_premiumInfo;	// 120 = 0x78
    EDAMBusinessUserInfo *_businessUserInfo;	// 128 = 0x80
    NSString *_photoUrl;	// 136 = 0x88
    NSNumber *_photoLastUpdated;	// 144 = 0x90
    EDAMAccountLimits *_accountLimits;	// 152 = 0x98
    EDAMSubscriptionInfo *_subscriptionInfo;	// 160 = 0xa0
    EDAMPricingModel *_pricingModel;	// 168 = 0xa8
}

+ (id)structFields;	// IMP=0x0000000000221bc0
+ (id)structName;	// IMP=0x0000000000221bb3
- (void).cxx_destruct;	// IMP=0x0000000000222542
@property(retain, nonatomic) EDAMPricingModel *pricingModel; // @synthesize pricingModel=_pricingModel;
@property(retain, nonatomic) EDAMSubscriptionInfo *subscriptionInfo; // @synthesize subscriptionInfo=_subscriptionInfo;
@property(retain, nonatomic) EDAMAccountLimits *accountLimits; // @synthesize accountLimits=_accountLimits;
@property(retain, nonatomic) NSNumber *photoLastUpdated; // @synthesize photoLastUpdated=_photoLastUpdated;
@property(retain, nonatomic) NSString *photoUrl; // @synthesize photoUrl=_photoUrl;
@property(retain, nonatomic) EDAMBusinessUserInfo *businessUserInfo; // @synthesize businessUserInfo=_businessUserInfo;
@property(retain, nonatomic) EDAMPremiumInfo *premiumInfo; // @synthesize premiumInfo=_premiumInfo;
@property(retain, nonatomic) EDAMAccounting *accounting; // @synthesize accounting=_accounting;
@property(retain, nonatomic) EDAMUserAttributes *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSString *shardId; // @synthesize shardId=_shardId;
@property(retain, nonatomic) NSNumber *active; // @synthesize active=_active;
@property(retain, nonatomic) NSNumber *deleted; // @synthesize deleted=_deleted;
@property(retain, nonatomic) NSNumber *updated; // @synthesize updated=_updated;
@property(retain, nonatomic) NSNumber *created; // @synthesize created=_created;
@property(retain, nonatomic) NSNumber *serviceLevel; // @synthesize serviceLevel=_serviceLevel;
@property(retain, nonatomic) NSNumber *privilege; // @synthesize privilege=_privilege;
@property(retain, nonatomic) NSString *timezone; // @synthesize timezone=_timezone;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;

@end

