//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSystemTVProviderDeclaration <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowTVProviderModification;	// 16 = 0x10
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x00000000000c5366
+ (id)buildWithIdentifier:(id)arg1 withAllowTVProviderModification:(id)arg2;	// IMP=0x00000000000c5241
+ (id)restrictionPayloadKeys;	// IMP=0x00000000000c5176
+ (id)allowedPayloadKeys;	// IMP=0x00000000000c50d3
+ (id)profileType;	// IMP=0x00000000000c50c6
+ (id)registeredIdentifier;	// IMP=0x00000000000c50b9
+ (id)registeredClassName;	// IMP=0x00000000000c50ac
- (void).cxx_destruct;	// IMP=0x00000000000c56d8
@property(copy, nonatomic) NSNumber *payloadAllowTVProviderModification; // @synthesize payloadAllowTVProviderModification=_payloadAllowTVProviderModification;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c5651
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000c55c6
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c544d
- (id)assetReferences;	// IMP=0x00000000000c5234
- (int)activationLevel;	// IMP=0x00000000000c5229
- (_Bool)mustBeSupervised;	// IMP=0x00000000000c5221
- (_Bool)multipleAllowed;	// IMP=0x00000000000c5219

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
