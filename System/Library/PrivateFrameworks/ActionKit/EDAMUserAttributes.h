//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString;

@interface EDAMUserAttributes
{
    NSString *_defaultLocationName;	// 8 = 0x8
    NSNumber *_defaultLatitude;	// 16 = 0x10
    NSNumber *_defaultLongitude;	// 24 = 0x18
    NSNumber *_preactivation;	// 32 = 0x20
    NSArray *_viewedPromotions;	// 40 = 0x28
    NSString *_incomingEmailAddress;	// 48 = 0x30
    NSArray *_recentMailedAddresses;	// 56 = 0x38
    NSString *_comments;	// 64 = 0x40
    NSNumber *_dateAgreedToTermsOfService;	// 72 = 0x48
    NSNumber *_maxReferrals;	// 80 = 0x50
    NSNumber *_referralCount;	// 88 = 0x58
    NSString *_refererCode;	// 96 = 0x60
    NSNumber *_sentEmailDate;	// 104 = 0x68
    NSNumber *_sentEmailCount;	// 112 = 0x70
    NSNumber *_dailyEmailLimit;	// 120 = 0x78
    NSNumber *_emailOptOutDate;	// 128 = 0x80
    NSNumber *_partnerEmailOptInDate;	// 136 = 0x88
    NSString *_preferredLanguage;	// 144 = 0x90
    NSString *_preferredCountry;	// 152 = 0x98
    NSNumber *_clipFullPage;	// 160 = 0xa0
    NSString *_twitterUserName;	// 168 = 0xa8
    NSString *_twitterId;	// 176 = 0xb0
    NSString *_groupName;	// 184 = 0xb8
    NSString *_recognitionLanguage;	// 192 = 0xc0
    NSString *_referralProof;	// 200 = 0xc8
    NSNumber *_educationalDiscount;	// 208 = 0xd0
    NSString *_businessAddress;	// 216 = 0xd8
    NSNumber *_hideSponsorBilling;	// 224 = 0xe0
    NSNumber *_taxExempt;	// 232 = 0xe8
    NSNumber *_useEmailAutoFiling;	// 240 = 0xf0
    NSNumber *_reminderEmailConfig;	// 248 = 0xf8
    NSNumber *_emailAddressLastConfirmed;	// 256 = 0x100
    NSNumber *_passwordUpdated;	// 264 = 0x108
    NSNumber *_salesforcePushEnabled;	// 272 = 0x110
    NSNumber *_shouldLogClientEvent;	// 280 = 0x118
    NSNumber *_optOutMachineLearning;	// 288 = 0x120
}

+ (id)structFields;	// IMP=0x000000000021dfc6
+ (id)structName;	// IMP=0x000000000021dfb9
- (void).cxx_destruct;	// IMP=0x000000000021ef6e
@property(retain, nonatomic) NSNumber *optOutMachineLearning; // @synthesize optOutMachineLearning=_optOutMachineLearning;
@property(retain, nonatomic) NSNumber *shouldLogClientEvent; // @synthesize shouldLogClientEvent=_shouldLogClientEvent;
@property(retain, nonatomic) NSNumber *salesforcePushEnabled; // @synthesize salesforcePushEnabled=_salesforcePushEnabled;
@property(retain, nonatomic) NSNumber *passwordUpdated; // @synthesize passwordUpdated=_passwordUpdated;
@property(retain, nonatomic) NSNumber *emailAddressLastConfirmed; // @synthesize emailAddressLastConfirmed=_emailAddressLastConfirmed;
@property(retain, nonatomic) NSNumber *reminderEmailConfig; // @synthesize reminderEmailConfig=_reminderEmailConfig;
@property(retain, nonatomic) NSNumber *useEmailAutoFiling; // @synthesize useEmailAutoFiling=_useEmailAutoFiling;
@property(retain, nonatomic) NSNumber *taxExempt; // @synthesize taxExempt=_taxExempt;
@property(retain, nonatomic) NSNumber *hideSponsorBilling; // @synthesize hideSponsorBilling=_hideSponsorBilling;
@property(retain, nonatomic) NSString *businessAddress; // @synthesize businessAddress=_businessAddress;
@property(retain, nonatomic) NSNumber *educationalDiscount; // @synthesize educationalDiscount=_educationalDiscount;
@property(retain, nonatomic) NSString *referralProof; // @synthesize referralProof=_referralProof;
@property(retain, nonatomic) NSString *recognitionLanguage; // @synthesize recognitionLanguage=_recognitionLanguage;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSString *twitterId; // @synthesize twitterId=_twitterId;
@property(retain, nonatomic) NSString *twitterUserName; // @synthesize twitterUserName=_twitterUserName;
@property(retain, nonatomic) NSNumber *clipFullPage; // @synthesize clipFullPage=_clipFullPage;
@property(retain, nonatomic) NSString *preferredCountry; // @synthesize preferredCountry=_preferredCountry;
@property(retain, nonatomic) NSString *preferredLanguage; // @synthesize preferredLanguage=_preferredLanguage;
@property(retain, nonatomic) NSNumber *partnerEmailOptInDate; // @synthesize partnerEmailOptInDate=_partnerEmailOptInDate;
@property(retain, nonatomic) NSNumber *emailOptOutDate; // @synthesize emailOptOutDate=_emailOptOutDate;
@property(retain, nonatomic) NSNumber *dailyEmailLimit; // @synthesize dailyEmailLimit=_dailyEmailLimit;
@property(retain, nonatomic) NSNumber *sentEmailCount; // @synthesize sentEmailCount=_sentEmailCount;
@property(retain, nonatomic) NSNumber *sentEmailDate; // @synthesize sentEmailDate=_sentEmailDate;
@property(retain, nonatomic) NSString *refererCode; // @synthesize refererCode=_refererCode;
@property(retain, nonatomic) NSNumber *referralCount; // @synthesize referralCount=_referralCount;
@property(retain, nonatomic) NSNumber *maxReferrals; // @synthesize maxReferrals=_maxReferrals;
@property(retain, nonatomic) NSNumber *dateAgreedToTermsOfService; // @synthesize dateAgreedToTermsOfService=_dateAgreedToTermsOfService;
@property(retain, nonatomic) NSString *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) NSArray *recentMailedAddresses; // @synthesize recentMailedAddresses=_recentMailedAddresses;
@property(retain, nonatomic) NSString *incomingEmailAddress; // @synthesize incomingEmailAddress=_incomingEmailAddress;
@property(retain, nonatomic) NSArray *viewedPromotions; // @synthesize viewedPromotions=_viewedPromotions;
@property(retain, nonatomic) NSNumber *preactivation; // @synthesize preactivation=_preactivation;
@property(retain, nonatomic) NSNumber *defaultLongitude; // @synthesize defaultLongitude=_defaultLongitude;
@property(retain, nonatomic) NSNumber *defaultLatitude; // @synthesize defaultLatitude=_defaultLatitude;
@property(retain, nonatomic) NSString *defaultLocationName; // @synthesize defaultLocationName=_defaultLocationName;

@end
