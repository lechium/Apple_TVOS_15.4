//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface CEMSecurityTimeLimitsDeclaration_Allowance
{
    NSNumber *_payloadEnabled;	// 16 = 0x10
    NSNumber *_payloadRangeType;	// 24 = 0x18
    NSString *_payloadStart;	// 32 = 0x20
    NSString *_payloadEnd;	// 40 = 0x28
    NSNumber *_payloadSecondsPerDay;	// 48 = 0x30
}

+ (id)buildRequiredOnlyWithEnabled:(id)arg1 withRangeType:(id)arg2;	// IMP=0x00000000000a8e9c
+ (id)buildWithEnabled:(id)arg1 withRangeType:(id)arg2 withStart:(id)arg3 withEnd:(id)arg4 withSecondsPerDay:(id)arg5;	// IMP=0x00000000000a8d91
+ (id)allowedPayloadKeys;	// IMP=0x00000000000a8cc2
- (void).cxx_destruct;	// IMP=0x00000000000a9546
@property(copy, nonatomic) NSNumber *payloadSecondsPerDay; // @synthesize payloadSecondsPerDay=_payloadSecondsPerDay;
@property(copy, nonatomic) NSString *payloadEnd; // @synthesize payloadEnd=_payloadEnd;
@property(copy, nonatomic) NSString *payloadStart; // @synthesize payloadStart=_payloadStart;
@property(copy, nonatomic) NSNumber *payloadRangeType; // @synthesize payloadRangeType=_payloadRangeType;
@property(copy, nonatomic) NSNumber *payloadEnabled; // @synthesize payloadEnabled=_payloadEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a939c
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000a9264
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a8f28

@end

