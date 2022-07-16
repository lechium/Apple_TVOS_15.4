//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMApplicationListInstalledApplicationsCommand <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadBundleIdentifiers;	// 16 = 0x10
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x000000000001b414
+ (id)buildWithIdentifier:(id)arg1 withBundleIdentifiers:(id)arg2;	// IMP=0x000000000001b30c
+ (id)allowedPayloadKeys;	// IMP=0x000000000001b256
+ (id)registeredIdentifier;	// IMP=0x000000000001b249
+ (id)registeredClassName;	// IMP=0x000000000001b23c
- (void).cxx_destruct;	// IMP=0x000000000001b7d9
@property(copy, nonatomic) NSArray *payloadBundleIdentifiers; // @synthesize payloadBundleIdentifiers=_payloadBundleIdentifiers;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b752
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000001b6b0
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001b4eb
- (int)executionLevel;	// IMP=0x000000000001b301
- (_Bool)mustBeSupervised;	// IMP=0x000000000001b2f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
