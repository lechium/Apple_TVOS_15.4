//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, NSArray, NSDictionary, NSSet, NSString;

@interface AAAccount : NSObject
{
    ACAccount *_account;	// 8 = 0x8
    NSString *_fmipToken;	// 16 = 0x10
    NSArray *_appleIDAliases;	// 24 = 0x18
    NSString *_protocolVersion;	// 32 = 0x20
}

+ (id)accountTypeString;	// IMP=0x0000000000065be1
- (void).cxx_destruct;	// IMP=0x00000000000670bc
@property(readonly, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(readonly, nonatomic) NSArray *appleIDAliases; // @synthesize appleIDAliases=_appleIDAliases;
@property(copy, nonatomic) NSString *fmipToken; // @synthesize fmipToken=_fmipToken;
@property(nonatomic) _Bool needsToVerifyTerms;
- (void)renewCredentialsForAppleIDWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000066f2e
- (void)setupChildMailAccountAndEnable:(_Bool)arg1 withEmail:(id)arg2;	// IMP=0x0000000000066f28
- (void)authenticateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000066e16
- (void)updateAccountPropertiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000066cd0
- (void)flushCachedPassword;	// IMP=0x0000000000066cca
- (void)flushCachedTokens;	// IMP=0x0000000000066cc4
- (void)removePasswordFromKeychain;	// IMP=0x0000000000066cbe
- (void)removeTokensFromKeychain;	// IMP=0x0000000000066cb8
- (void)saveFMIPTokenInKeychain;	// IMP=0x0000000000066cb2
- (void)savePasswordInKeychain;	// IMP=0x0000000000066cac
- (void)saveTokensInKeychain;	// IMP=0x0000000000066ca6
- (_Bool)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1;	// IMP=0x0000000000066c92
- (_Bool)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000066c03
- (void)presentQuotaDepletionAlertForDataclass:(id)arg1;	// IMP=0x0000000000066bef
- (void)presentQuotaDepletionAlertForDataclass:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000066b63
- (void)notifyUserOfQuotaDepletion;	// IMP=0x0000000000066b2d
@property(readonly, nonatomic) NSArray *supportedDataclasses;
- (id)_childAccounts;	// IMP=0x0000000000066a76
@property(readonly, nonatomic) NSString *syncStoreIdentifier;
- (int)mobileMeAccountStatus;	// IMP=0x0000000000066a63
@property(readonly, nonatomic) _Bool needsEmailConfiguration;
- (id)_mailChildAccount;	// IMP=0x000000000006674f
- (void)setUseCellular:(_Bool)arg1 forDataclass:(id)arg2;	// IMP=0x000000000006667f
- (_Bool)useCellularForDataclass:(id)arg1;	// IMP=0x000000000006660a
@property(readonly, nonatomic) _Bool needsRegistration;
@property(readonly, nonatomic) NSDictionary *serviceUnavailableInfo;
@property(readonly, nonatomic) _Bool serviceUnavailable;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000664a9
- (id)accountPropertyForKey:(id)arg1;	// IMP=0x0000000000066493
- (void)updateAccountWithProvisioningResponse:(id)arg1;	// IMP=0x0000000000066421
- (id)propertiesForDataclass:(id)arg1;	// IMP=0x000000000006639d
- (_Bool)isProvisionedForDataclass:(id)arg1;	// IMP=0x0000000000066325
@property(readonly, nonatomic) NSDictionary *accountFirstDisplayAlert;
@property(readonly, nonatomic) NSDictionary *accountFooterButton;
@property(readonly, nonatomic) NSString *accountFooterText;
@property(copy, nonatomic) NSString *password;
@property(copy, nonatomic) NSString *authToken;
- (_Bool)isEnabledForDataclass:(id)arg1;	// IMP=0x0000000000065e87
- (void)setEnabled:(_Bool)arg1 forDataclass:(id)arg2;	// IMP=0x0000000000065e71
@property(readonly, nonatomic) NSSet *enabledDataclasses;
@property(readonly, nonatomic) NSSet *provisionedDataclasses;
@property(readonly, nonatomic) NSDictionary *dataclassProperties;
@property(readonly, nonatomic) _Bool primaryEmailVerified;
@property(nonatomic) _Bool primaryAccount;
@property(readonly, nonatomic) NSString *primaryEmail;
@property(readonly, nonatomic) NSString *personID;
@property(readonly, nonatomic) NSString *lastName;
@property(readonly, nonatomic) NSString *firstName;
@property(readonly, nonatomic) int accountServiceType;
@property(copy, nonatomic) NSString *accountDescription;
@property(copy, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *displayName;
- (id)account;	// IMP=0x0000000000065bd3
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithAccount:(id)arg1;	// IMP=0x0000000000065b3c
- (id)initWithAccountIdentifier:(id)arg1;	// IMP=0x0000000000065a7b
- (id)init;	// IMP=0x00000000000659c1

@end
