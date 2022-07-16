//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber;

@interface CEMPredicateBudget_TimeBudgetItem
{
    NSNumber *_payloadSeconds;	// 16 = 0x10
    NSArray *_payloadDays;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithSeconds:(id)arg1;	// IMP=0x0000000000095381
+ (id)buildWithSeconds:(id)arg1 withDays:(id)arg2;	// IMP=0x00000000000952f5
+ (id)allowedPayloadKeys;	// IMP=0x0000000000095247
- (void).cxx_destruct;	// IMP=0x00000000000957c2
@property(copy, nonatomic) NSArray *payloadDays; // @synthesize payloadDays=_payloadDays;
@property(copy, nonatomic) NSNumber *payloadSeconds; // @synthesize payloadSeconds=_payloadSeconds;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000956e9
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000095613
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000953d7

@end

