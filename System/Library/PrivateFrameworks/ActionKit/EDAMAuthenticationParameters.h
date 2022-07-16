//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface EDAMAuthenticationParameters
{
    NSString *_usernameOrEmail;	// 8 = 0x8
    NSString *_password;	// 16 = 0x10
    NSString *_ssoLoginToken;	// 24 = 0x18
    NSString *_consumerKey;	// 32 = 0x20
    NSString *_consumerSecret;	// 40 = 0x28
    NSString *_deviceIdentifier;	// 48 = 0x30
    NSString *_deviceDescription;	// 56 = 0x38
    NSNumber *_supportsTwoFactor;	// 64 = 0x40
    NSNumber *_supportsBusinessOnlyAccounts;	// 72 = 0x48
}

+ (id)structFields;	// IMP=0x0000000000289c2d
+ (id)structName;	// IMP=0x0000000000289c20
- (void).cxx_destruct;	// IMP=0x000000000028a048
@property(retain, nonatomic) NSNumber *supportsBusinessOnlyAccounts; // @synthesize supportsBusinessOnlyAccounts=_supportsBusinessOnlyAccounts;
@property(retain, nonatomic) NSNumber *supportsTwoFactor; // @synthesize supportsTwoFactor=_supportsTwoFactor;
@property(retain, nonatomic) NSString *deviceDescription; // @synthesize deviceDescription=_deviceDescription;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) NSString *consumerSecret; // @synthesize consumerSecret=_consumerSecret;
@property(retain, nonatomic) NSString *consumerKey; // @synthesize consumerKey=_consumerKey;
@property(retain, nonatomic) NSString *ssoLoginToken; // @synthesize ssoLoginToken=_ssoLoginToken;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *usernameOrEmail; // @synthesize usernameOrEmail=_usernameOrEmail;

@end

