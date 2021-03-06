//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PETAggregateStateStorage;

@interface PETAggregateState : NSObject
{
    PETAggregateStateStorage *_storage;	// 8 = 0x8
    CDStruct_9981aeec _rng;	// 16 = 0x10
}

+ (unsigned char)hashForString:(id)arg1;	// IMP=0x00000000000144fe
- (void).cxx_destruct;	// IMP=0x0000000000012ecf
- (_Bool)checkIntegrity;	// IMP=0x0000000000012e21
- (id)description;	// IMP=0x0000000000012d27
- (void)enumerateAndResetCounters:(CDUnknownBlockType)arg1 distributions:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012c5e
- (void)reset;	// IMP=0x0000000000012c32
- (void)enumerateCounters:(CDUnknownBlockType)arg1 distributions:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012b72
- (void)updateDistributionWithValue:(double)arg1 forKey:(id)arg2 maxSampleSize:(unsigned short)arg3;	// IMP=0x0000000000012b22
- (void)updateCounterTo:(double)arg1 forKey:(id)arg2;	// IMP=0x0000000000012ad6
- (void)incrementCounterBy:(double)arg1 forKey:(id)arg2;	// IMP=0x0000000000012a8a
- (void)updateDistributionWithValue:(double)arg1 forKey:(const void *)arg2 keyLength:(unsigned short)arg3 maxSampleSize:(unsigned short)arg4;	// IMP=0x0000000000012a19
- (void)updateCounterTo:(double)arg1 forKey:(const void *)arg2 keyLength:(unsigned short)arg3;	// IMP=0x00000000000129bf
- (void)incrementCounterBy:(double)arg1 forKey:(const void *)arg2 keyLength:(unsigned short)arg3;	// IMP=0x0000000000012965
- (id)initWithPath:(id)arg1;	// IMP=0x00000000000128ee
- (id)initInMemory;	// IMP=0x0000000000012877
- (id)initWithStorage:(id)arg1;	// IMP=0x0000000000012786
- (id)init;	// IMP=0x0000000000012780

@end

