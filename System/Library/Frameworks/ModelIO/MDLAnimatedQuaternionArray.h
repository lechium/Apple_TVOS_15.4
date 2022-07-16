//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MDLAnimatedQuaternionArray
{
    unsigned long long _elementCount;	// 40 = 0x28
}

@property(nonatomic) unsigned long long elementCount; // @synthesize elementCount=_elementCount;
- (unsigned long long)getDoubleQuaternionArray:(struct *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000040d161
- (unsigned long long)getFloatQuaternionArray:(struct *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000040cf44
- (void)resetWithDoubleQuaternionArray:(const struct *)arg1 count:(unsigned long long)arg2 atTimes:(const double *)arg3 count:(unsigned long long)arg4;	// IMP=0x000000000040cd0c
- (void)resetWithFloatQuaternionArray:(const struct *)arg1 count:(unsigned long long)arg2 atTimes:(const double *)arg3 count:(unsigned long long)arg4;	// IMP=0x000000000040cae9
- (unsigned long long)getDoubleQuaternionArray:(struct *)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;	// IMP=0x000000000040c5e5
- (unsigned long long)getFloatQuaternionArray:(struct *)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;	// IMP=0x000000000040c1bf
- (void)setDoubleQuaternionArray:(const struct *)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;	// IMP=0x000000000040bf7c
- (void)setFloatQuaternionArray:(const struct *)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;	// IMP=0x000000000040bd52
- (void)resetWithUsdAttribute:(const void *)arg1 timeScale:(double)arg2 time:(double)arg3;	// IMP=0x000000000040bc6b
- (void)resetWithUsdAttribute:(const void *)arg1 timeScale:(double)arg2;	// IMP=0x000000000040ba1e
- (struct VtValue)defaultVtValue;	// IMP=0x000000000040b83d
- (unsigned long long)precision;	// IMP=0x000000000040b788
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000040b737
- (id)initWithElementCount:(unsigned long long)arg1;	// IMP=0x000000000040b6d7

@end
