//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFNumberRange, NSNumber;

@interface HFRangeControlItemValue : NSObject
{
    unsigned long long _mode;	// 8 = 0x8
    NSNumber *_minimumValue;	// 16 = 0x10
    NSNumber *_maximumValue;	// 24 = 0x18
    NSNumber *_targetValue;	// 32 = 0x20
}

+ (id)targetValueWithValue:(id)arg1;	// IMP=0x00000000000f53e9
+ (id)thresholdValueWithMinimumValue:(id)arg1 maximumValue:(id)arg2;	// IMP=0x00000000000f5347
- (void).cxx_destruct;	// IMP=0x00000000000f5aee
@property(copy, nonatomic) NSNumber *targetValue; // @synthesize targetValue=_targetValue;
@property(copy, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(copy, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (id)description;	// IMP=0x00000000000f59dc
- (unsigned long long)hash;	// IMP=0x00000000000f5908
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f5617
@property(readonly, nonatomic) HFNumberRange *numberRange;

@end
