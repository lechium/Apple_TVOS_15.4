//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMSystemTVRemoteDeclaration <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadAllowedRemotes;	// 16 = 0x10
    NSArray *_payloadAllowedTVs;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x00000000000c5baf
+ (id)buildWithIdentifier:(id)arg1 withAllowedRemotes:(id)arg2 withAllowedTVs:(id)arg3;	// IMP=0x00000000000c5a6a
+ (id)restrictionPayloadKeys;	// IMP=0x00000000000c5a25
+ (id)allowedPayloadKeys;	// IMP=0x00000000000c5977
+ (id)profileType;	// IMP=0x00000000000c596a
+ (id)registeredIdentifier;	// IMP=0x00000000000c595d
+ (id)registeredClassName;	// IMP=0x00000000000c5950
- (void).cxx_destruct;	// IMP=0x00000000000c6121
@property(copy, nonatomic) NSArray *payloadAllowedTVs; // @synthesize payloadAllowedTVs=_payloadAllowedTVs;
@property(copy, nonatomic) NSArray *payloadAllowedRemotes; // @synthesize payloadAllowedRemotes=_payloadAllowedRemotes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c6048
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000c5e9b
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c5c96
- (id)assetReferences;	// IMP=0x00000000000c5a5d
- (int)activationLevel;	// IMP=0x00000000000c5a55
- (_Bool)mustBeSupervised;	// IMP=0x00000000000c5a4d
- (_Bool)multipleAllowed;	// IMP=0x00000000000c5a45

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

