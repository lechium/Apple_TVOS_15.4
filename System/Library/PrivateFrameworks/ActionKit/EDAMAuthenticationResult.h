//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDAMPublicUserInfo, EDAMUser, EDAMUserUrls, NSNumber, NSString;

@interface EDAMAuthenticationResult
{
    NSNumber *_currentTime;	// 8 = 0x8
    NSString *_authenticationToken;	// 16 = 0x10
    NSNumber *_expiration;	// 24 = 0x18
    EDAMUser *_user;	// 32 = 0x20
    EDAMPublicUserInfo *_publicUserInfo;	// 40 = 0x28
    NSString *_noteStoreUrl;	// 48 = 0x30
    NSString *_webApiUrlPrefix;	// 56 = 0x38
    NSNumber *_secondFactorRequired;	// 64 = 0x40
    NSString *_secondFactorDeliveryHint;	// 72 = 0x48
    EDAMUserUrls *_urls;	// 80 = 0x50
}

+ (id)structFields;	// IMP=0x00000000002888eb
+ (id)structName;	// IMP=0x00000000002888de
- (void).cxx_destruct;	// IMP=0x0000000000288db9
@property(retain, nonatomic) EDAMUserUrls *urls; // @synthesize urls=_urls;
@property(retain, nonatomic) NSString *secondFactorDeliveryHint; // @synthesize secondFactorDeliveryHint=_secondFactorDeliveryHint;
@property(retain, nonatomic) NSNumber *secondFactorRequired; // @synthesize secondFactorRequired=_secondFactorRequired;
@property(retain, nonatomic) NSString *webApiUrlPrefix; // @synthesize webApiUrlPrefix=_webApiUrlPrefix;
@property(retain, nonatomic) NSString *noteStoreUrl; // @synthesize noteStoreUrl=_noteStoreUrl;
@property(retain, nonatomic) EDAMPublicUserInfo *publicUserInfo; // @synthesize publicUserInfo=_publicUserInfo;
@property(retain, nonatomic) EDAMUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NSNumber *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(retain, nonatomic) NSNumber *currentTime; // @synthesize currentTime=_currentTime;

@end

