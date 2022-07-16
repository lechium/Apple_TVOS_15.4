//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMPolicyCategoryDeclaration <CEMRegisteredTypeProtocol>
{
    NSString *_payloadMode;	// 16 = 0x10
    NSArray *_payloadCategories;	// 24 = 0x18
    NSArray *_payloadCategoriesVersion2;	// 32 = 0x20
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withMode:(id)arg2;	// IMP=0x00000000000902d7
+ (id)buildWithIdentifier:(id)arg1 withMode:(id)arg2 withCategories:(id)arg3;	// IMP=0x0000000000090192
+ (id)buildWithIdentifier:(id)arg1 withMode:(id)arg2 withCategories:(id)arg3 withCategoriesVersion2:(id)arg4;	// IMP=0x000000000009002f
+ (id)restrictionPayloadKeys;	// IMP=0x000000000008ffe7
+ (id)allowedPayloadKeys;	// IMP=0x000000000008ff2e
+ (id)profileType;	// IMP=0x000000000008ff21
+ (id)registeredIdentifier;	// IMP=0x000000000008ff14
+ (id)registeredClassName;	// IMP=0x000000000008ff07
- (void).cxx_destruct;	// IMP=0x000000000009092d
@property(copy, nonatomic) NSArray *payloadCategoriesVersion2; // @synthesize payloadCategoriesVersion2=_payloadCategoriesVersion2;
@property(copy, nonatomic) NSArray *payloadCategories; // @synthesize payloadCategories=_payloadCategories;
@property(copy, nonatomic) NSString *payloadMode; // @synthesize payloadMode=_payloadMode;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000090815
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000906f0
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000903f0
- (id)assetReferences;	// IMP=0x0000000000090022
- (int)activationLevel;	// IMP=0x0000000000090017
- (_Bool)mustBeSupervised;	// IMP=0x000000000009000f
- (_Bool)multipleAllowed;	// IMP=0x0000000000090007

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

