//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomePubSub/NSSecureCoding-Protocol.h>

@interface BPSApproximateDistinctCount : NSObject <NSSecureCoding>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    struct hll_state *_hllState;	// 16 = 0x10
    _Bool _countMapFull;	// 24 = 0x18
    double _approximateDistinctCount;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000eddf
@property(nonatomic) _Bool countMapFull; // @synthesize countMapFull=_countMapFull;
@property(nonatomic) double approximateDistinctCount; // @synthesize approximateDistinctCount=_approximateDistinctCount;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ee84
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ede7
- (void)printState;	// IMP=0x000000000000ed8e
- (void)addData:(id)arg1;	// IMP=0x000000000000ebaf
- (void)addValue:(unsigned int)arg1;	// IMP=0x000000000000eb41
- (void)dealloc;	// IMP=0x000000000000eb07
- (id)init;	// IMP=0x000000000000eaf3
- (id)initWithHllState:(struct hll_state *)arg1;	// IMP=0x000000000000ea77

@end
