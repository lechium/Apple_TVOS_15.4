//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMediaTimingFunction;

@interface PXStoryTransitionZoom
{
    float _scaleRelativeFactor;	// 96 = 0x60
    _Bool _zoomingOut;	// 100 = 0x64
    CAMediaTimingFunction *_animationCurve;	// 104 = 0x68
    CAMediaTimingFunction *_effectCurveBeforeMidpoint;	// 112 = 0x70
    CAMediaTimingFunction *_effectCurveAfterMidpoint;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000141d17
- (void)configureEffectForTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000001419d5
- (void)wasStopped;	// IMP=0x000000000014186d
- (void)timeDidChange;	// IMP=0x000000000014144a
- (double)clipAlphaForTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000001412f9
- (void)_configureWithTransitionInfo:(CDStruct_cac3ced6)arg1;	// IMP=0x0000000000141162
- (id)initWithTransitionInfo:(CDStruct_cac3ced6)arg1 effect:(id)arg2;	// IMP=0x00000000001410e7
- (id)initWithTransitionInfo:(CDStruct_cac3ced6)arg1 event:(long long)arg2 clipLayouts:(id)arg3;	// IMP=0x0000000000141069

@end

