//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKInheritanceContext;

@interface AKInheritanceRequestProvider
{
    _Bool _signWithIdentityToken;	// 8 = 0x8
    AKInheritanceContext *_context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001d689
@property(nonatomic) _Bool signWithIdentityToken; // @synthesize signWithIdentityToken=_signWithIdentityToken;
@property(retain, nonatomic) AKInheritanceContext *inheritanceContext; // @synthesize inheritanceContext=_context;
- (_Bool)validateResponseData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001d41a
- (id)_bodyForBeneficiaryAliasEndpoint;	// IMP=0x001000000001d1b7
- (id)_bodyForBeneficiaryEndpoint;	// IMP=0x001000000001cea3
- (_Bool)signRequest:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001cb76
- (id)authKitBody;	// IMP=0x001000000001ca12
- (unsigned long long)requestBodyType;	// IMP=0x001000000001ca07
- (unsigned long long)expectedResponseType;	// IMP=0x001000000001c9fc
- (id)initWithContext:(id)arg1 urlBagKey:(id)arg2;	// IMP=0x001000000001c9ca
- (id)initWithContext:(id)arg1;	// IMP=0x001000000001c95f

@end
