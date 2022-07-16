//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMNetworkBluetoothDeclaration <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowBluetoothModification;	// 16 = 0x10
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x000000000005edec
+ (id)buildWithIdentifier:(id)arg1 withAllowBluetoothModification:(id)arg2;	// IMP=0x000000000005ecc7
+ (id)restrictionPayloadKeys;	// IMP=0x000000000005ebfc
+ (id)allowedPayloadKeys;	// IMP=0x000000000005eb59
+ (id)profileType;	// IMP=0x000000000005eb4c
+ (id)registeredIdentifier;	// IMP=0x000000000005eb3f
+ (id)registeredClassName;	// IMP=0x000000000005eb32
- (void).cxx_destruct;	// IMP=0x000000000005f15e
@property(copy, nonatomic) NSNumber *payloadAllowBluetoothModification; // @synthesize payloadAllowBluetoothModification=_payloadAllowBluetoothModification;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005f0d7
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000005f04c
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005eed3
- (id)assetReferences;	// IMP=0x000000000005ecba
- (int)activationLevel;	// IMP=0x000000000005ecaf
- (_Bool)mustBeSupervised;	// IMP=0x000000000005eca7
- (_Bool)multipleAllowed;	// IMP=0x000000000005ec9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
