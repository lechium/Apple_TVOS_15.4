//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIScrollDynamics : NSObject
{
    _Bool _shouldRoundCalculations;	// 8 = 0x8
    struct CGSize _tolerance;	// 16 = 0x10
    struct CGPoint _decelerationTarget;	// 32 = 0x20
    struct CGPoint _initialContentOffset;	// 48 = 0x30
    struct CGVector _initialVelocity;	// 64 = 0x40
    struct CGPoint _contentOrigin;	// 80 = 0x50
    struct CGSize _viewSize;	// 96 = 0x60
    struct CGRect _contentFrame;	// 112 = 0x70
}

@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) struct CGPoint contentOrigin; // @synthesize contentOrigin=_contentOrigin;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) struct CGVector initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property(nonatomic) struct CGPoint initialContentOffset; // @synthesize initialContentOffset=_initialContentOffset;
@property(nonatomic) struct CGPoint decelerationTarget; // @synthesize decelerationTarget=_decelerationTarget;
@property(readonly, nonatomic) struct CGSize tolerance; // @synthesize tolerance=_tolerance;
@property(nonatomic) _Bool shouldRoundCalculations; // @synthesize shouldRoundCalculations=_shouldRoundCalculations;
- (void)recalculateForDecelerationTarget:(struct CGPoint)arg1;	// IMP=0x000000000100f70b
- (void)calculateToReachDecelerationTarget;	// IMP=0x000000000100f705
- (void)calculateDecelerationTarget;	// IMP=0x000000000100f6ff
- (_Bool)isRubberBandingAfterDuration:(double)arg1;	// IMP=0x000000000100f6f7
- (struct CGPoint)positionAfterDuration:(double)arg1;	// IMP=0x000000000100f6e1
- (struct CGVector)velocityAfterDuration:(double)arg1;	// IMP=0x000000000100f6d5
- (double)speedAfterDuration:(double)arg1;	// IMP=0x000000000100f6cc
@property(readonly, nonatomic) double durationUntilStop;
- (id)initWithInitialContentOffset:(struct CGPoint)arg1 velocity:(struct CGVector)arg2 contentFrame:(struct CGRect)arg3 viewSize:(struct CGSize)arg4 screenScale:(double)arg5;	// IMP=0x000000000100f5b7
- (id)init;	// IMP=0x000000000100f54c

@end

