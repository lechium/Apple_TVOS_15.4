//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMSecurityTimeLimitsDeclaration_TimeLimits, NSNumber, NSString;

@interface CEMSecurityTimeLimitsDeclaration <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadFamilyControlsEnabled;	// 16 = 0x10
    CEMSecurityTimeLimitsDeclaration_TimeLimits *_payloadTimeLimits;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withFamilyControlsEnabled:(id)arg2;	// IMP=0x00000000000a7e00
+ (id)buildWithIdentifier:(id)arg1 withFamilyControlsEnabled:(id)arg2 withTimeLimits:(id)arg3;	// IMP=0x00000000000a7cbb
+ (id)restrictionPayloadKeys;	// IMP=0x00000000000a7c73
+ (id)allowedPayloadKeys;	// IMP=0x00000000000a7bc5
+ (id)profileType;	// IMP=0x00000000000a7bb8
+ (id)registeredIdentifier;	// IMP=0x00000000000a7bab
+ (id)registeredClassName;	// IMP=0x00000000000a7b9e
- (void).cxx_destruct;	// IMP=0x00000000000a8331
@property(copy, nonatomic) CEMSecurityTimeLimitsDeclaration_TimeLimits *payloadTimeLimits; // @synthesize payloadTimeLimits=_payloadTimeLimits;
@property(copy, nonatomic) NSNumber *payloadFamilyControlsEnabled; // @synthesize payloadFamilyControlsEnabled=_payloadFamilyControlsEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a8258
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000a8114
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a7f19
- (id)assetReferences;	// IMP=0x00000000000a7cae
- (int)activationLevel;	// IMP=0x00000000000a7ca3
- (_Bool)mustBeSupervised;	// IMP=0x00000000000a7c9b
- (_Bool)multipleAllowed;	// IMP=0x00000000000a7c93

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

