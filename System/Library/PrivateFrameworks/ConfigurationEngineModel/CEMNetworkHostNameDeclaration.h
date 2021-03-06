//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMNetworkHostNameDeclaration <CEMRegisteredTypeProtocol>
{
    NSString *_payloadName;	// 16 = 0x10
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withName:(id)arg2;	// IMP=0x000000000006ae2f
+ (id)buildWithIdentifier:(id)arg1 withName:(id)arg2;	// IMP=0x000000000006ad16
+ (id)restrictionPayloadKeys;	// IMP=0x000000000006acd1
+ (id)allowedPayloadKeys;	// IMP=0x000000000006ac2e
+ (id)profileType;	// IMP=0x000000000006ac21
+ (id)registeredIdentifier;	// IMP=0x000000000006ac14
+ (id)registeredClassName;	// IMP=0x000000000006ac07
- (void).cxx_destruct;	// IMP=0x000000000006b1d2
@property(copy, nonatomic) NSString *payloadName; // @synthesize payloadName=_payloadName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006b14b
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000006b0c0
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006af48
- (id)assetReferences;	// IMP=0x000000000006ad09
- (int)activationLevel;	// IMP=0x000000000006ad01
- (_Bool)mustBeSupervised;	// IMP=0x000000000006acf9
- (_Bool)multipleAllowed;	// IMP=0x000000000006acf1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

