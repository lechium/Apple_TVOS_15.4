//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GKCurveNoiseModifier
{
    double *_parameters;	// 16 = 0x10
    double *_controlPoints;	// 24 = 0x18
    int _count;	// 32 = 0x20
}

- (id)cloneModule;	// IMP=0x0000000000037252
- (double)valueAt: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000036f18
- (int)requiredInputModuleCount;	// IMP=0x0000000000036f0d
- (void)dealloc;	// IMP=0x0000000000036eb2
- (id)initWithControlPoints:(id)arg1;	// IMP=0x0000000000036ba3
- (id)initWithInputModuleCount:(unsigned long long)arg1;	// IMP=0x0000000000036ac0
- (id)init;	// IMP=0x00000000000369dd

@end

