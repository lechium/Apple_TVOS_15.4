//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/NSCopying-Protocol.h>

@interface PGMoodVector : NSObject <NSCopying>
{
    double _vector[10];	// 8 = 0x8
}

- (id)description;	// IMP=0x000000000021c435
- (id)moodArray;	// IMP=0x000000000021c391
- (double)sum;	// IMP=0x000000000021c374
- (unsigned long long)weightedRandomMoodWithSeed:(unsigned long long)arg1;	// IMP=0x000000000021c2e3
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000021c2a1
- (unsigned long long)moodsWithThreshold:(double)arg1;	// IMP=0x000000000021c271
- (void)normalize;	// IMP=0x000000000021c1d2
- (void)filterWithMoods:(unsigned long long)arg1;	// IMP=0x000000000021c1b2
- (void)multiplyByWeight:(double)arg1;	// IMP=0x000000000021c18b
- (void)multiplyMoodVector:(id)arg1;	// IMP=0x000000000021c163
- (void)substractMoodVector:(id)arg1;	// IMP=0x000000000021c13b
- (void)addMoodVector:(id)arg1;	// IMP=0x000000000021c113
- (void)multiplyByWeight:(double)arg1 forMood:(unsigned long long)arg2;	// IMP=0x000000000021c0e4
- (void)addValue:(double)arg1 forMoods:(unsigned long long)arg2;	// IMP=0x000000000021c0bd
- (void)addValue:(double)arg1 forMood:(unsigned long long)arg2;	// IMP=0x000000000021c08e
- (void)setValue:(double)arg1 forMood:(unsigned long long)arg2;	// IMP=0x000000000021c065
- (double)valueForMood:(unsigned long long)arg1;	// IMP=0x000000000021c034
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021c00c
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;	// IMP=0x000000000021bfc6
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x000000000021bef9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021be8d
- (id)initWithArray:(id)arg1;	// IMP=0x000000000021bda9
- (id)init;	// IMP=0x000000000021bd5e

@end

