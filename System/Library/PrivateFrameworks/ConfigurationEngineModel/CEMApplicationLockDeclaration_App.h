//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CEMApplicationLockDeclaration_AppOptions, CEMApplicationLockDeclaration_AppUserEnabledOptions, NSString;

@interface CEMApplicationLockDeclaration_App
{
    NSString *_payloadIdentifier;	// 16 = 0x10
    CEMApplicationLockDeclaration_AppOptions *_payloadOptions;	// 24 = 0x18
    CEMApplicationLockDeclaration_AppUserEnabledOptions *_payloadUserEnabledOptions;	// 32 = 0x20
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x000000000001e049
+ (id)buildWithIdentifier:(id)arg1 withOptions:(id)arg2 withUserEnabledOptions:(id)arg3;	// IMP=0x000000000001df95
+ (id)allowedPayloadKeys;	// IMP=0x000000000001dedc
- (void).cxx_destruct;	// IMP=0x000000000001e691
@property(copy, nonatomic) CEMApplicationLockDeclaration_AppUserEnabledOptions *payloadUserEnabledOptions; // @synthesize payloadUserEnabledOptions=_payloadUserEnabledOptions;
@property(copy, nonatomic) CEMApplicationLockDeclaration_AppOptions *payloadOptions; // @synthesize payloadOptions=_payloadOptions;
@property(copy, nonatomic) NSString *payloadIdentifier; // @synthesize payloadIdentifier=_payloadIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001e579
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000001e31d
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001e09f

@end

