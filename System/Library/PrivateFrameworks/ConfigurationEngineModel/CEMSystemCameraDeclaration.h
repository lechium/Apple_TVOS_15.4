//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSystemCameraDeclaration <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowCamera;	// 16 = 0x10
    NSNumber *_payloadAllowScreenShot;	// 24 = 0x18
    NSNumber *_payloadAllowScreenRecording;	// 32 = 0x20
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x00000000000b3227
+ (id)buildWithIdentifier:(id)arg1 withAllowCamera:(id)arg2 withAllowScreenShot:(id)arg3 withAllowScreenRecording:(id)arg4;	// IMP=0x00000000000b309e
+ (id)restrictionPayloadKeys;	// IMP=0x00000000000b2fbd
+ (id)allowedPayloadKeys;	// IMP=0x00000000000b2f04
+ (id)profileType;	// IMP=0x00000000000b2ef7
+ (id)registeredIdentifier;	// IMP=0x00000000000b2eea
+ (id)registeredClassName;	// IMP=0x00000000000b2edd
- (void).cxx_destruct;	// IMP=0x00000000000b3766
@property(copy, nonatomic) NSNumber *payloadAllowScreenRecording; // @synthesize payloadAllowScreenRecording=_payloadAllowScreenRecording;
@property(copy, nonatomic) NSNumber *payloadAllowScreenShot; // @synthesize payloadAllowScreenShot=_payloadAllowScreenShot;
@property(copy, nonatomic) NSNumber *payloadAllowCamera; // @synthesize payloadAllowCamera=_payloadAllowCamera;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b364e
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000b356e
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b330e
- (id)assetReferences;	// IMP=0x00000000000b3091
- (int)activationLevel;	// IMP=0x00000000000b3086
- (_Bool)mustBeSupervised;	// IMP=0x00000000000b307e
- (_Bool)multipleAllowed;	// IMP=0x00000000000b3076

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

