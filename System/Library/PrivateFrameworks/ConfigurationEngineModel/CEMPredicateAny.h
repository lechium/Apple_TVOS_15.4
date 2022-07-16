//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMPredicateAny <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadPredicates;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithPredicates:(id)arg1;	// IMP=0x00000000000938a6
+ (id)buildWithPredicates:(id)arg1;	// IMP=0x0000000000093838
+ (id)allowedPayloadKeys;	// IMP=0x000000000009378a
+ (id)registeredIdentifier;	// IMP=0x000000000009377d
+ (id)registeredClassName;	// IMP=0x0000000000093770
- (void).cxx_destruct;	// IMP=0x0000000000094077
@property(copy, nonatomic) NSArray *payloadPredicates; // @synthesize payloadPredicates=_payloadPredicates;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000093fbf
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000093d43
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000093914

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
