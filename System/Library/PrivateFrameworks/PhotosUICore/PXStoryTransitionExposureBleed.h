//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMediaTimingFunction;

@interface PXStoryTransitionExposureBleed
{
    CAMediaTimingFunction *_beforeMidpointAnimationCurve;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000013d9ed
- (void)configureEffectForTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000013d6cd
- (double)clipAlphaForTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000013d559
- (id)initWithTransitionInfo:(CDStruct_cac3ced6)arg1 effect:(id)arg2;	// IMP=0x000000000013d4ae
- (id)initWithTransitionInfo:(CDStruct_cac3ced6)arg1 event:(long long)arg2 clipLayouts:(id)arg3;	// IMP=0x000000000013d467

@end

