//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GKClampNoiseModifier
{
    double _lowerBound;	// 16 = 0x10
    double _upperBound;	// 24 = 0x18
}

- (id)cloneModule;	// IMP=0x000000000003630b
- (double)valueAt: /* Error: Ran out of types for this method. */;	// IMP=0x000000000003624b
- (int)requiredInputModuleCount;	// IMP=0x0000000000036240
- (id)initWithLowerBound:(double)arg1 upperBound:(double)arg2;	// IMP=0x00000000000361db
- (id)initWithInputModuleCount:(unsigned long long)arg1;	// IMP=0x00000000000361b8
- (id)init;	// IMP=0x0000000000036195

@end

