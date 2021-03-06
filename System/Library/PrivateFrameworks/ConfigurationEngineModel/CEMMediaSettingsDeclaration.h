//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMMediaSettingsDeclaration <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowBookstore;	// 16 = 0x10
    NSNumber *_payloadAllowBookstoreErotica;	// 24 = 0x18
    NSNumber *_payloadAllowEnterpriseBookBackup;	// 32 = 0x20
    NSNumber *_payloadAllowEnterpriseBookMetadataSync;	// 40 = 0x28
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x0000000000058815
+ (id)buildWithIdentifier:(id)arg1 withAllowBookstore:(id)arg2 withAllowBookstoreErotica:(id)arg3 withAllowEnterpriseBookBackup:(id)arg4 withAllowEnterpriseBookMetadataSync:(id)arg5;	// IMP=0x0000000000058647
+ (id)restrictionPayloadKeys;	// IMP=0x000000000005855b
+ (id)allowedPayloadKeys;	// IMP=0x0000000000058497
+ (id)profileType;	// IMP=0x000000000005848a
+ (id)registeredIdentifier;	// IMP=0x000000000005847d
+ (id)registeredClassName;	// IMP=0x0000000000058470
- (void).cxx_destruct;	// IMP=0x0000000000058e31
@property(copy, nonatomic) NSNumber *payloadAllowEnterpriseBookMetadataSync; // @synthesize payloadAllowEnterpriseBookMetadataSync=_payloadAllowEnterpriseBookMetadataSync;
@property(copy, nonatomic) NSNumber *payloadAllowEnterpriseBookBackup; // @synthesize payloadAllowEnterpriseBookBackup=_payloadAllowEnterpriseBookBackup;
@property(copy, nonatomic) NSNumber *payloadAllowBookstoreErotica; // @synthesize payloadAllowBookstoreErotica=_payloadAllowBookstoreErotica;
@property(copy, nonatomic) NSNumber *payloadAllowBookstore; // @synthesize payloadAllowBookstore=_payloadAllowBookstore;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000058cd4
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000058bcf
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000588fc
- (id)assetReferences;	// IMP=0x000000000005863a
- (int)activationLevel;	// IMP=0x000000000005862f
- (_Bool)mustBeSupervised;	// IMP=0x0000000000058627
- (_Bool)multipleAllowed;	// IMP=0x000000000005861f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

