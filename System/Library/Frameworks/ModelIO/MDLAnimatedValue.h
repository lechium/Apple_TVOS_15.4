//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ModelIO/NSCopying-Protocol.h>

@class NSArray;

@interface MDLAnimatedValue : NSObject <NSCopying>
{
    struct vector<(anonymous namespace)::TimeSampledVtValue, std::allocator<(anonymous namespace)::TimeSampledVtValue>> _timeSampledData;	// 8 = 0x8
    unsigned long long _interpolation;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000004074c8
- (void).cxx_destruct;	// IMP=0x000000000040746d
@property(nonatomic) unsigned long long interpolation; // @synthesize interpolation=_interpolation;
- (_Bool)isAnimated;	// IMP=0x0000000000407432
- (void)resetWithUsdAttribute:(const void *)arg1 timeScale:(double)arg2 time:(double)arg3;	// IMP=0x000000000040742c
- (void)resetWithUsdAttribute:(const void *)arg1 timeScale:(double)arg2;	// IMP=0x0000000000407426
- (unsigned long long)getTimes:(double *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x00000000004073e0
@property(readonly, nonatomic) NSArray *keyTimes;
- (void)clear;	// IMP=0x00000000004072b3
@property(readonly, nonatomic) double maximumTime;
@property(readonly, nonatomic) double minimumTime;
@property(readonly, nonatomic) unsigned long long timeSampleCount;
- (struct VtValue)defaultVtValue;	// IMP=0x0000000000407226
@property(readonly, nonatomic) unsigned long long precision;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004071ab
- (void)resetWithAnimatedValue:(id)arg1;	// IMP=0x0000000000406ee9
- (id)init;	// IMP=0x0000000000406e70

@end
