//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MDLAnimatedScalar
{
}

- (unsigned long long)getDoubleArray:(double *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000040e1fc
- (unsigned long long)getFloatArray:(float *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000040e0f3
- (void)resetWithDoubleArray:(const double *)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000040e014
- (void)resetWithFloatArray:(const float *)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000040df35
- (double)doubleAtTime:(double)arg1;	// IMP=0x000000000040dcf5
- (float)floatAtTime:(double)arg1;	// IMP=0x000000000040dafe
- (void)setDouble:(double)arg1 atTime:(double)arg2;	// IMP=0x000000000040d9d1
- (void)setFloat:(float)arg1 atTime:(double)arg2;	// IMP=0x000000000040d8a4
- (void)resetWithUsdAttribute:(const void *)arg1 timeScale:(double)arg2 time:(double)arg3;	// IMP=0x000000000040d7bd
- (void)resetWithUsdAttribute:(const void *)arg1 timeScale:(double)arg2;	// IMP=0x000000000040d570
- (struct VtValue)defaultVtValue;	// IMP=0x000000000040d477
- (unsigned long long)precision;	// IMP=0x000000000040d3ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000040d39b

@end

