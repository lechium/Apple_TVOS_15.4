//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMApplicationSettingsManagedDeclaration <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowOpenFromManagedToUnmanaged;	// 16 = 0x10
    NSNumber *_payloadAllowOpenFromUnmanagedToManaged;	// 24 = 0x18
    NSNumber *_payloadForceAirDropUnmanaged;	// 32 = 0x20
    NSNumber *_payloadAllowManagedAppsCloudSync;	// 40 = 0x28
    NSNumber *_payloadAllowManagedToWriteUnmanagedContacts;	// 48 = 0x30
    NSNumber *_payloadAllowUnmanagedToReadManagedContacts;	// 56 = 0x38
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x0000000000022f1d
+ (id)buildWithIdentifier:(id)arg1 withAllowOpenFromManagedToUnmanaged:(id)arg2 withAllowOpenFromUnmanagedToManaged:(id)arg3 withForceAirDropUnmanaged:(id)arg4 withAllowManagedAppsCloudSync:(id)arg5 withAllowManagedToWriteUnmanagedContacts:(id)arg6 withAllowUnmanagedToReadManagedContacts:(id)arg7;	// IMP=0x0000000000022cf3
+ (id)restrictionPayloadKeys;	// IMP=0x0000000000022bf1
+ (id)allowedPayloadKeys;	// IMP=0x0000000000022b17
+ (id)profileType;	// IMP=0x0000000000022b0a
+ (id)registeredIdentifier;	// IMP=0x0000000000022afd
+ (id)registeredClassName;	// IMP=0x0000000000022af0
- (void).cxx_destruct;	// IMP=0x0000000000023712
@property(copy, nonatomic) NSNumber *payloadAllowUnmanagedToReadManagedContacts; // @synthesize payloadAllowUnmanagedToReadManagedContacts=_payloadAllowUnmanagedToReadManagedContacts;
@property(copy, nonatomic) NSNumber *payloadAllowManagedToWriteUnmanagedContacts; // @synthesize payloadAllowManagedToWriteUnmanagedContacts=_payloadAllowManagedToWriteUnmanagedContacts;
@property(copy, nonatomic) NSNumber *payloadAllowManagedAppsCloudSync; // @synthesize payloadAllowManagedAppsCloudSync=_payloadAllowManagedAppsCloudSync;
@property(copy, nonatomic) NSNumber *payloadForceAirDropUnmanaged; // @synthesize payloadForceAirDropUnmanaged=_payloadForceAirDropUnmanaged;
@property(copy, nonatomic) NSNumber *payloadAllowOpenFromUnmanagedToManaged; // @synthesize payloadAllowOpenFromUnmanagedToManaged=_payloadAllowOpenFromUnmanagedToManaged;
@property(copy, nonatomic) NSNumber *payloadAllowOpenFromManagedToUnmanaged; // @synthesize payloadAllowOpenFromManagedToUnmanaged=_payloadAllowOpenFromManagedToUnmanaged;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000023526
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000233c6
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000023004
- (id)assetReferences;	// IMP=0x0000000000022ce6
- (int)activationLevel;	// IMP=0x0000000000022cdb
- (_Bool)mustBeSupervised;	// IMP=0x0000000000022cd3
- (_Bool)multipleAllowed;	// IMP=0x0000000000022ccb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

