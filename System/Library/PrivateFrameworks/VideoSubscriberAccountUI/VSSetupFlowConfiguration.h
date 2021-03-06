//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, VSAppDescription, VSIdentityProvider;

__attribute__((visibility("hidden")))
@interface VSSetupFlowConfiguration : NSObject
{
    _Bool _shouldSkipSetupEntirely;	// 8 = 0x8
    _Bool _shouldOfferAuthenticationFlow;	// 9 = 0x9
    _Bool _shouldOfferSoleAuthenticationFlow;	// 10 = 0xa
    _Bool _shouldOfferSTBAuthenticationFlow;	// 11 = 0xb
    _Bool _canShowSupportedAppsButton;	// 12 = 0xc
    VSIdentityProvider *_identityProvider;	// 16 = 0x10
    NSString *_providerAccountUsername;	// 24 = 0x18
    NSString *_preferredAppID;	// 32 = 0x20
    VSAppDescription *_msoAppDescription;	// 40 = 0x28
    NSArray *_bundlesIDsToConsent;	// 48 = 0x30
    NSDictionary *_vouchersByBundleID;	// 56 = 0x38
    NSArray *_supportedApps;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000080f42
- (void).cxx_destruct;	// IMP=0x00000000000811d7
@property(retain, nonatomic) NSArray *supportedApps; // @synthesize supportedApps=_supportedApps;
@property(nonatomic) _Bool canShowSupportedAppsButton; // @synthesize canShowSupportedAppsButton=_canShowSupportedAppsButton;
@property(copy, nonatomic) NSDictionary *vouchersByBundleID; // @synthesize vouchersByBundleID=_vouchersByBundleID;
@property(copy, nonatomic) NSArray *bundlesIDsToConsent; // @synthesize bundlesIDsToConsent=_bundlesIDsToConsent;
@property(retain, nonatomic) VSAppDescription *msoAppDescription; // @synthesize msoAppDescription=_msoAppDescription;
@property(copy, nonatomic) NSString *preferredAppID; // @synthesize preferredAppID=_preferredAppID;
@property(copy, nonatomic) NSString *providerAccountUsername; // @synthesize providerAccountUsername=_providerAccountUsername;
@property(retain, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
@property(nonatomic) _Bool shouldOfferSTBAuthenticationFlow; // @synthesize shouldOfferSTBAuthenticationFlow=_shouldOfferSTBAuthenticationFlow;
@property(nonatomic) _Bool shouldOfferSoleAuthenticationFlow; // @synthesize shouldOfferSoleAuthenticationFlow=_shouldOfferSoleAuthenticationFlow;
@property(nonatomic) _Bool shouldOfferAuthenticationFlow; // @synthesize shouldOfferAuthenticationFlow=_shouldOfferAuthenticationFlow;
@property(nonatomic) _Bool shouldSkipSetupEntirely; // @synthesize shouldSkipSetupEntirely=_shouldSkipSetupEntirely;
- (id)description;	// IMP=0x0000000000081083
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000081029
- (unsigned long long)hash;	// IMP=0x0000000000080ff0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000080fa0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000080f4a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000080ec2
- (id)init;	// IMP=0x0000000000080e5e

@end

