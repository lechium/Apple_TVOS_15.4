//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface CEMNetwork8021XSecondActiveEthernetDeclaration <CEMRegisteredTypeProtocol>
{
    NSDictionary *_payloadANY;	// 16 = 0x10
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x000000000005c41d
+ (id)buildWithIdentifier:(id)arg1;	// IMP=0x000000000005c336
+ (id)restrictionPayloadKeys;	// IMP=0x000000000005c2f1
+ (id)allowedPayloadKeys;	// IMP=0x000000000005c2d1
+ (id)profileType;	// IMP=0x000000000005c2c4
+ (id)registeredIdentifier;	// IMP=0x000000000005c2b7
+ (id)registeredClassName;	// IMP=0x000000000005c2aa
- (void).cxx_destruct;	// IMP=0x000000000005ca54
@property(copy, nonatomic) NSDictionary *payloadANY; // @synthesize payloadANY=_payloadANY;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005c9cd
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000005c7cd
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005c504
- (id)assetReferences;	// IMP=0x000000000005c329
- (int)activationLevel;	// IMP=0x000000000005c321
- (_Bool)mustBeSupervised;	// IMP=0x000000000005c319
- (_Bool)multipleAllowed;	// IMP=0x000000000005c311

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

