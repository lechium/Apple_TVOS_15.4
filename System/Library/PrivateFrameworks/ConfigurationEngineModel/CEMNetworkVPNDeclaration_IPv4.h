//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface CEMNetworkVPNDeclaration_IPv4
{
    NSNumber *_payloadOverridePrimary;	// 16 = 0x10
}

+ (id)buildRequiredOnly;	// IMP=0x0000000000071ae1
+ (id)buildWithOverridePrimary:(id)arg1;	// IMP=0x0000000000071a89
+ (id)allowedPayloadKeys;	// IMP=0x00000000000719e6
- (void).cxx_destruct;	// IMP=0x0000000000071d85
@property(copy, nonatomic) NSNumber *payloadOverridePrimary; // @synthesize payloadOverridePrimary=_payloadOverridePrimary;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000071cfe
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000071c73
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000071afa

@end

