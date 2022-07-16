//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXGLayout, PXNumberAnimator, PXPointAnimator, PXSwipeDownTracker;

@interface PXStoryViewModePlayerToBrowserTransition
{
    PXNumberAnimator *_completionProgressAnimator;	// 176 = 0xb0
    PXPointAnimator *_centerOffsetAnimator;	// 184 = 0xb8
    PXGLayout *_referenceLayout;	// 192 = 0xc0
    _Bool _shouldFadeOutEverything;	// 200 = 0xc8
    float _fractionCompletedAtFadeOutStart;	// 204 = 0xcc
    double _lastSwipeDownDuration;	// 208 = 0xd0
    PXSwipeDownTracker *_swipeDownTracker;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00000000000be410
@property(readonly, nonatomic) PXSwipeDownTracker *swipeDownTracker; // @synthesize swipeDownTracker=_swipeDownTracker;
- (CDStruct_fe8c0406)contentsTransformOverrideForClipWithInfo:(CDStruct_b5e02abd)arg1 proposedOverride:(CDStruct_fe8c0406)arg2 inViewMode:(long long)arg3 layout:(id)arg4;	// IMP=0x00000000000be166
- (double)alphaForClipWithInfo:(CDStruct_b5e02abd)arg1 proposedAlpha:(double)arg2 inViewMode:(long long)arg3 layout:(id)arg4;	// IMP=0x00000000000bdea3
- (struct CGRect)frameForClipWithInfo:(CDStruct_b5e02abd)arg1 proposedFrame:(struct CGRect)arg2 inViewMode:(long long)arg3 layout:(id)arg4;	// IMP=0x00000000000bd05e
- (_Bool)shouldFinish;	// IMP=0x00000000000bcfad
- (id)presentedBoundingBoxForViewMode:(long long)arg1;	// IMP=0x00000000000bcc70
- (void)swipeDownInteractionStateDidChange;	// IMP=0x00000000000bc997
- (double)fadeoutDuration;	// IMP=0x00000000000bc963
- (_Bool)hasActiveAnimation;	// IMP=0x00000000000bc8ea
- (id)initWithSourceTimelineLayoutSnapshot:(id)arg1 assetReference:(id)arg2 trackingClipIdentifier:(long long)arg3;	// IMP=0x00000000000bc723

@end
