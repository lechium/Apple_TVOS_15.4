//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameplayKit/GKRandom-Protocol.h>

@protocol GKRandom;

@interface GKRandomDistribution : NSObject <GKRandom>
{
    id <GKRandom> _source;	// 8 = 0x8
    long long _lowest;	// 16 = 0x10
    long long _highest;	// 24 = 0x18
}

+ (id)d20;	// IMP=0x0000000000011f5c
+ (id)d6;	// IMP=0x0000000000011f05
+ (id)distributionForDieWithSideCount:(long long)arg1;	// IMP=0x0000000000011ea5
+ (id)distributionWithLowestValue:(long long)arg1 highestValue:(long long)arg2;	// IMP=0x0000000000011e45
- (void).cxx_destruct;	// IMP=0x0000000000011fc7
@property(readonly, nonatomic) long long highestValue; // @synthesize highestValue=_highest;
@property(readonly, nonatomic) long long lowestValue; // @synthesize lowestValue=_lowest;
- (_Bool)nextBool;	// IMP=0x0000000000011e2f
- (float)nextUniform;	// IMP=0x0000000000011e03
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;	// IMP=0x0000000000011c3d
- (long long)nextInt;	// IMP=0x0000000000011c0b
@property(readonly, nonatomic) unsigned long long numberOfPossibleOutcomes;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3;	// IMP=0x0000000000011b79
- (id)init;	// IMP=0x0000000000011b1a

@end

