//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKQuantitySample;

@interface HKQuantitySeriesSampleEditorTaskServerConfiguration
{
    HKQuantitySample *_quantitySample;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000149f6a
- (void).cxx_destruct;	// IMP=0x000000000014a0d6
@property(copy, nonatomic) HKQuantitySample *quantitySample; // @synthesize quantitySample=_quantitySample;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000014a037
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000149f72
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000149f14
- (id)initWithQuantitySample:(id)arg1;	// IMP=0x0000000000149e9a

@end

