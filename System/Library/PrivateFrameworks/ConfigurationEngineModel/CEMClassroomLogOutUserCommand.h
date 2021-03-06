//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMClassroomLogOutUserCommand <CEMRegisteredTypeProtocol>
{
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x000000000002ae2f
+ (id)buildWithIdentifier:(id)arg1;	// IMP=0x000000000002ad58
+ (id)allowedPayloadKeys;	// IMP=0x000000000002ad2c
+ (id)registeredIdentifier;	// IMP=0x000000000002ad1f
+ (id)registeredClassName;	// IMP=0x000000000002ad12
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002b01f
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000002afd0
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002af06
- (int)executionLevel;	// IMP=0x000000000002ad4d
- (_Bool)mustBeSupervised;	// IMP=0x000000000002ad45

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

