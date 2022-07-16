//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMApplicationControlDeclaration_InstallSchedule, CEMApplicationControlDeclaration_UpdateSchedule, NSString;

@interface CEMApplicationControlDeclaration <CEMRegisteredTypeProtocol>
{
    CEMApplicationControlDeclaration_InstallSchedule *_payloadInstallSchedule;	// 16 = 0x10
    NSString *_payloadUpdatePolicy;	// 24 = 0x18
    CEMApplicationControlDeclaration_UpdateSchedule *_payloadUpdateSchedule;	// 32 = 0x20
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x0000000000013cec
+ (id)buildWithIdentifier:(id)arg1 withInstallSchedule:(id)arg2 withUpdatePolicy:(id)arg3 withUpdateSchedule:(id)arg4;	// IMP=0x0000000000013b7d
+ (id)restrictionPayloadKeys;	// IMP=0x0000000000013b35
+ (id)allowedPayloadKeys;	// IMP=0x0000000000013a7c
+ (id)profileType;	// IMP=0x0000000000013a6f
+ (id)registeredIdentifier;	// IMP=0x0000000000013a62
+ (id)registeredClassName;	// IMP=0x0000000000013a55
- (void).cxx_destruct;	// IMP=0x0000000000014358
@property(copy, nonatomic) CEMApplicationControlDeclaration_UpdateSchedule *payloadUpdateSchedule; // @synthesize payloadUpdateSchedule=_payloadUpdateSchedule;
@property(copy, nonatomic) NSString *payloadUpdatePolicy; // @synthesize payloadUpdatePolicy=_payloadUpdatePolicy;
@property(copy, nonatomic) CEMApplicationControlDeclaration_InstallSchedule *payloadInstallSchedule; // @synthesize payloadInstallSchedule=_payloadInstallSchedule;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014240
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000014059
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000013dd3
- (id)assetReferences;	// IMP=0x0000000000013b70
- (int)activationLevel;	// IMP=0x0000000000013b65
- (_Bool)mustBeSupervised;	// IMP=0x0000000000013b5d
- (_Bool)multipleAllowed;	// IMP=0x0000000000013b55

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
