//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMDevicePlayLostModeSoundCommand <CEMRegisteredTypeProtocol>
{
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x000000000004b2a6
+ (id)buildWithIdentifier:(id)arg1;	// IMP=0x000000000004b1cf
+ (id)allowedPayloadKeys;	// IMP=0x000000000004b1a6
+ (id)registeredIdentifier;	// IMP=0x000000000004b199
+ (id)registeredClassName;	// IMP=0x000000000004b18c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004b496
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000004b447
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004b37d
- (int)executionLevel;	// IMP=0x000000000004b1c7
- (_Bool)mustBeSupervised;	// IMP=0x000000000004b1bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

