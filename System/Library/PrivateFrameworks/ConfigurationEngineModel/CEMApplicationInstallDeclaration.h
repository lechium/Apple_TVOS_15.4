//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMAnyPayload, NSNumber, NSString;

@interface CEMApplicationInstallDeclaration <CEMRegisteredTypeProtocol>
{
    NSString *_payloadApplication;	// 16 = 0x10
    NSNumber *_payloadMandatory;	// 24 = 0x18
    NSNumber *_payloadInstallWhenActivated;	// 32 = 0x20
    NSNumber *_payloadRemoveWhenDeactivated;	// 40 = 0x28
    NSNumber *_payloadManageData;	// 48 = 0x30
    NSString *_payloadVPNUUID;	// 56 = 0x38
    NSNumber *_payloadPreventDataBackup;	// 64 = 0x40
    CEMAnyPayload *_payloadConfiguration;	// 72 = 0x48
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withApplication:(id)arg2 withMandatory:(id)arg3;	// IMP=0x000000000001822d
+ (id)buildWithIdentifier:(id)arg1 withApplication:(id)arg2 withMandatory:(id)arg3 withInstallWhenActivated:(id)arg4 withRemoveWhenDeactivated:(id)arg5 withManageData:(id)arg6 withVPNUUID:(id)arg7 withPreventDataBackup:(id)arg8 withConfiguration:(id)arg9;	// IMP=0x0000000000017fca
+ (id)restrictionPayloadKeys;	// IMP=0x0000000000017ec7
+ (id)allowedPayloadKeys;	// IMP=0x0000000000017dd7
+ (id)profileType;	// IMP=0x0000000000017dca
+ (id)registeredIdentifier;	// IMP=0x0000000000017dbd
+ (id)registeredClassName;	// IMP=0x0000000000017db0
- (void).cxx_destruct;	// IMP=0x0000000000018d0a
@property(copy, nonatomic) CEMAnyPayload *payloadConfiguration; // @synthesize payloadConfiguration=_payloadConfiguration;
@property(copy, nonatomic) NSNumber *payloadPreventDataBackup; // @synthesize payloadPreventDataBackup=_payloadPreventDataBackup;
@property(copy, nonatomic) NSString *payloadVPNUUID; // @synthesize payloadVPNUUID=_payloadVPNUUID;
@property(copy, nonatomic) NSNumber *payloadManageData; // @synthesize payloadManageData=_payloadManageData;
@property(copy, nonatomic) NSNumber *payloadRemoveWhenDeactivated; // @synthesize payloadRemoveWhenDeactivated=_payloadRemoveWhenDeactivated;
@property(copy, nonatomic) NSNumber *payloadInstallWhenActivated; // @synthesize payloadInstallWhenActivated=_payloadInstallWhenActivated;
@property(copy, nonatomic) NSNumber *payloadMandatory; // @synthesize payloadMandatory=_payloadMandatory;
@property(copy, nonatomic) NSString *payloadApplication; // @synthesize payloadApplication=_payloadApplication;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000018aa5
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000001882e
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000018372
- (id)assetReferences;	// IMP=0x0000000000017f02
- (int)activationLevel;	// IMP=0x0000000000017ef7
- (_Bool)mustBeSupervised;	// IMP=0x0000000000017eef
- (_Bool)multipleAllowed;	// IMP=0x0000000000017ee7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
