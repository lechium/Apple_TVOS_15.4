//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMEventSubscriptionDeclaration_Schedule, NSArray, NSString;

@interface CEMEventSubscriptionDeclaration <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadEvents;	// 16 = 0x10
    CEMEventSubscriptionDeclaration_Schedule *_payloadSchedule;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEvents:(id)arg2;	// IMP=0x000000000004d316
+ (id)buildWithIdentifier:(id)arg1 withEvents:(id)arg2 withSchedule:(id)arg3;	// IMP=0x000000000004d1d1
+ (id)restrictionPayloadKeys;	// IMP=0x000000000004d189
+ (id)allowedPayloadKeys;	// IMP=0x000000000004d0db
+ (id)profileType;	// IMP=0x000000000004d0ce
+ (id)registeredIdentifier;	// IMP=0x000000000004d0c1
+ (id)registeredClassName;	// IMP=0x000000000004d0b4
- (void).cxx_destruct;	// IMP=0x000000000004dc56
@property(copy, nonatomic) CEMEventSubscriptionDeclaration_Schedule *payloadSchedule; // @synthesize payloadSchedule=_payloadSchedule;
@property(copy, nonatomic) NSArray *payloadEvents; // @synthesize payloadEvents=_payloadEvents;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004db7d
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000004d866
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004d42f
- (id)assetReferences;	// IMP=0x000000000004d1c4
- (int)activationLevel;	// IMP=0x000000000004d1b9
- (_Bool)mustBeSupervised;	// IMP=0x000000000004d1b1
- (_Bool)multipleAllowed;	// IMP=0x000000000004d1a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

