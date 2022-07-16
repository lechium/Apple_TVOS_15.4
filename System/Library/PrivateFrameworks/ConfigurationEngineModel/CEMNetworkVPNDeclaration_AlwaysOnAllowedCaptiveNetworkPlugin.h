//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CEMNetworkVPNDeclaration_AlwaysOnAllowedCaptiveNetworkPlugin
{
    NSString *_payloadBundleIdentifier;	// 16 = 0x10
}

+ (id)buildRequiredOnlyWithBundleIdentifier:(id)arg1;	// IMP=0x000000000007b545
+ (id)buildWithBundleIdentifier:(id)arg1;	// IMP=0x000000000007b4ef
+ (id)allowedPayloadKeys;	// IMP=0x000000000007b44c
- (void).cxx_destruct;	// IMP=0x000000000007b825
@property(copy, nonatomic) NSString *payloadBundleIdentifier; // @synthesize payloadBundleIdentifier=_payloadBundleIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007b79e
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000007b713
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007b59b

@end
