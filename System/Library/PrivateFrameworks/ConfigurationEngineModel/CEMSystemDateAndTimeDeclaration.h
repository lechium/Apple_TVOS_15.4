//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSystemDateAndTimeDeclaration <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadForceAutomaticDateAndTime;	// 16 = 0x10
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x00000000000b5535
+ (id)buildWithIdentifier:(id)arg1 withForceAutomaticDateAndTime:(id)arg2;	// IMP=0x00000000000b5410
+ (id)restrictionPayloadKeys;	// IMP=0x00000000000b5345
+ (id)allowedPayloadKeys;	// IMP=0x00000000000b52a2
+ (id)profileType;	// IMP=0x00000000000b5295
+ (id)registeredIdentifier;	// IMP=0x00000000000b5288
+ (id)registeredClassName;	// IMP=0x00000000000b527b
- (void).cxx_destruct;	// IMP=0x00000000000b58a7
@property(copy, nonatomic) NSNumber *payloadForceAutomaticDateAndTime; // @synthesize payloadForceAutomaticDateAndTime=_payloadForceAutomaticDateAndTime;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b5820
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000b5795
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b561c
- (id)assetReferences;	// IMP=0x00000000000b5403
- (int)activationLevel;	// IMP=0x00000000000b53f8
- (_Bool)mustBeSupervised;	// IMP=0x00000000000b53f0
- (_Bool)multipleAllowed;	// IMP=0x00000000000b53e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

