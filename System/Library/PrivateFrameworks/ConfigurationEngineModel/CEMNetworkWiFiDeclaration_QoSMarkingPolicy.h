//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber;

@interface CEMNetworkWiFiDeclaration_QoSMarkingPolicy
{
    NSArray *_payloadQoSMarkingWhitelistedAppIdentifiers;	// 16 = 0x10
    NSNumber *_payloadQoSMarkingAppleAudioVideoCalls;	// 24 = 0x18
    NSNumber *_payloadQoSMarkingEnabled;	// 32 = 0x20
}

+ (id)buildRequiredOnly;	// IMP=0x0000000000082f20
+ (id)buildWithQoSMarkingWhitelistedAppIdentifiers:(id)arg1 withQoSMarkingAppleAudioVideoCalls:(id)arg2 withQoSMarkingEnabled:(id)arg3;	// IMP=0x0000000000082e53
+ (id)allowedPayloadKeys;	// IMP=0x0000000000082d9a
- (void).cxx_destruct;	// IMP=0x000000000008340f
@property(copy, nonatomic) NSNumber *payloadQoSMarkingEnabled; // @synthesize payloadQoSMarkingEnabled=_payloadQoSMarkingEnabled;
@property(copy, nonatomic) NSNumber *payloadQoSMarkingAppleAudioVideoCalls; // @synthesize payloadQoSMarkingAppleAudioVideoCalls=_payloadQoSMarkingAppleAudioVideoCalls;
@property(copy, nonatomic) NSArray *payloadQoSMarkingWhitelistedAppIdentifiers; // @synthesize payloadQoSMarkingWhitelistedAppIdentifiers=_payloadQoSMarkingWhitelistedAppIdentifiers;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000832f7
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000831ea
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000082f39

@end

