//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAGrandSlamSigner, ACAccount, ACAccountStore, AIDAServiceOwnersManager, AKAppleIDAuthenticationContext, AKAppleIDServerResourceLoadDelegate, AKAppleIDSigningController, NSData;

@interface FARequestConfigurator : NSObject
{
    ACAccount *_account;	// 8 = 0x8
    ACAccountStore *_accountStore;	// 16 = 0x10
    ACAccount *_grandSlamAccount;	// 24 = 0x18
    AAGrandSlamSigner *_grandSlamSigner;	// 32 = 0x20
    AAGrandSlamSigner *_familyGrandSlamSigner;	// 40 = 0x28
    AIDAServiceOwnersManager *_serviceOwnersManager;	// 48 = 0x30
    AKAppleIDSigningController *_akSigningController;	// 56 = 0x38
    AKAppleIDServerResourceLoadDelegate *_resourceLoadDelegate;	// 64 = 0x40
    NSData *_pushToken;	// 72 = 0x48
    _Bool _attachSetupHeader;	// 80 = 0x50
    AKAppleIDAuthenticationContext *_authContext;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000000976c
@property(retain, nonatomic) AKAppleIDAuthenticationContext *authContext; // @synthesize authContext=_authContext;
@property(nonatomic) _Bool attachSetupHeader; // @synthesize attachSetupHeader=_attachSetupHeader;
- (id)_serviceOwnersManager;	// IMP=0x00000000000096c1
- (id)_familyTokenForGrandSlamAccount:(id)arg1 andTokenID:(id)arg2;	// IMP=0x000000000000955b
- (void)_addAccountForServiceType:(id)arg1 toPayload:(id)arg2 forKey:(id)arg3;	// IMP=0x00000000000091b9
- (id)_fresnoPayloadWithAdditionalPayload:(id)arg1;	// IMP=0x000000000000910e
- (id)_authContext;	// IMP=0x0000000000009065
- (void)_resourceLoadDelegate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008df2
- (id)_akSigningController;	// IMP=0x0000000000008db7
- (id)_familyGrandSlamSigner;	// IMP=0x0000000000008ce9
- (id)_grandSlamSigner;	// IMP=0x0000000000008c33
- (id)_grandSlamAccount;	// IMP=0x0000000000008b9e
- (id)_accountStore;	// IMP=0x0000000000008b63
- (id)_account;	// IMP=0x0000000000008aee
- (void)renewCredentialsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008802
- (void)addPayload:(id)arg1 toRequest:(id)arg2;	// IMP=0x00000000000087a2
- (void)addFresnoPayloadToRequest:(id)arg1 additionalPayload:(id)arg2;	// IMP=0x00000000000085e2
- (void)pushTokenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000082e7
- (void)addFresnoHeadersToRequest:(id)arg1;	// IMP=0x00000000000081d6
- (void)addFresnoHeadersToRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007a5c
- (id)initWithAccount:(id)arg1;	// IMP=0x00000000000079fe

@end

