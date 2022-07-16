//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface CEMNetwork8021XSecondEthernetDeclaration <CEMRegisteredTypeProtocol>
{
    NSDictionary *_payloadANY;	// 16 = 0x10
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x000000000005ce3f
+ (id)buildWithIdentifier:(id)arg1;	// IMP=0x000000000005cd58
+ (id)restrictionPayloadKeys;	// IMP=0x000000000005cd13
+ (id)allowedPayloadKeys;	// IMP=0x000000000005ccf3
+ (id)profileType;	// IMP=0x000000000005cce6
+ (id)registeredIdentifier;	// IMP=0x000000000005ccd9
+ (id)registeredClassName;	// IMP=0x000000000005cccc
- (void).cxx_destruct;	// IMP=0x000000000005d476
@property(copy, nonatomic) NSDictionary *payloadANY; // @synthesize payloadANY=_payloadANY;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005d3ef
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000005d1ef
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005cf26
- (id)assetReferences;	// IMP=0x000000000005cd4b
- (int)activationLevel;	// IMP=0x000000000005cd43
- (_Bool)mustBeSupervised;	// IMP=0x000000000005cd3b
- (_Bool)multipleAllowed;	// IMP=0x000000000005cd33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
