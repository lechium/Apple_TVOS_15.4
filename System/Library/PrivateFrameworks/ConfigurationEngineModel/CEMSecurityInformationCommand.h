//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMSecurityInformationCommand <CEMRegisteredTypeProtocol>
{
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x00000000000a1a19
+ (id)buildWithIdentifier:(id)arg1;	// IMP=0x00000000000a1942
+ (id)allowedPayloadKeys;	// IMP=0x00000000000a1919
+ (id)registeredIdentifier;	// IMP=0x00000000000a190c
+ (id)registeredClassName;	// IMP=0x00000000000a18ff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a1c09
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000a1bba
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a1af0
- (int)executionLevel;	// IMP=0x00000000000a193a
- (_Bool)mustBeSupervised;	// IMP=0x00000000000a1932

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

