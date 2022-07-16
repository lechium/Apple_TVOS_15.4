//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface CEMNetworkCellularDeclaration_AttachAPN
{
    NSString *_payloadName;	// 16 = 0x10
    NSString *_payloadAuthenticationType;	// 24 = 0x18
    NSString *_payloadUsername;	// 32 = 0x20
    NSString *_payloadPassword;	// 40 = 0x28
    NSNumber *_payloadAllowedProtocolMask;	// 48 = 0x30
}

+ (id)buildRequiredOnlyWithName:(id)arg1;	// IMP=0x000000000005fdba
+ (id)buildWithName:(id)arg1 withAuthenticationType:(id)arg2 withUsername:(id)arg3 withPassword:(id)arg4 withAllowedProtocolMask:(id)arg5;	// IMP=0x000000000005fca4
+ (id)allowedPayloadKeys;	// IMP=0x000000000005fbd5
- (void).cxx_destruct;	// IMP=0x0000000000060448
@property(copy, nonatomic) NSNumber *payloadAllowedProtocolMask; // @synthesize payloadAllowedProtocolMask=_payloadAllowedProtocolMask;
@property(copy, nonatomic) NSString *payloadPassword; // @synthesize payloadPassword=_payloadPassword;
@property(copy, nonatomic) NSString *payloadUsername; // @synthesize payloadUsername=_payloadUsername;
@property(copy, nonatomic) NSString *payloadAuthenticationType; // @synthesize payloadAuthenticationType=_payloadAuthenticationType;
@property(copy, nonatomic) NSString *payloadName; // @synthesize payloadName=_payloadName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006029e
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000006016a
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005fe10

@end

