//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMNetworkUsageRulesDeclaration <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadApplicationRules;	// 16 = 0x10
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withApplicationRules:(id)arg2;	// IMP=0x000000000006c077
+ (id)buildWithIdentifier:(id)arg1 withApplicationRules:(id)arg2;	// IMP=0x000000000006bf5e
+ (id)restrictionPayloadKeys;	// IMP=0x000000000006bf19
+ (id)allowedPayloadKeys;	// IMP=0x000000000006be76
+ (id)profileType;	// IMP=0x000000000006be69
+ (id)registeredIdentifier;	// IMP=0x000000000006be5c
+ (id)registeredClassName;	// IMP=0x000000000006be4f
- (void).cxx_destruct;	// IMP=0x000000000006c4b7
@property(copy, nonatomic) NSArray *payloadApplicationRules; // @synthesize payloadApplicationRules=_payloadApplicationRules;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006c430
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000006c321
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006c190
- (id)assetReferences;	// IMP=0x000000000006bf51
- (int)activationLevel;	// IMP=0x000000000006bf49
- (_Bool)mustBeSupervised;	// IMP=0x000000000006bf41
- (_Bool)multipleAllowed;	// IMP=0x000000000006bf39

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
