//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIHyperInteractor;

__attribute__((visibility("hidden")))
@interface _UIPageControlInteractor : NSObject
{
    double _scrubbingOffset;	// 8 = 0x8
    double _lowerBound;	// 16 = 0x10
    double _upperBound;	// 24 = 0x18
    _UIHyperInteractor *_interactor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000047455e
@property(retain, nonatomic) _UIHyperInteractor *interactor; // @synthesize interactor=_interactor;
- (void)reduceScrubOffsetByOffset:(double)arg1;	// IMP=0x000000000047450d
- (void)reduceScrubOffsetByRatio:(double)arg1;	// IMP=0x00000000004744f9
- (void)commitTranslation;	// IMP=0x00000000004744bc
- (void)setTranslation:(double)arg1 velocity:(double)arg2;	// IMP=0x0000000000474358
- (void)setUnconstrainedPosition:(double)arg1 offset:(double)arg2;	// IMP=0x00000000004742eb
- (void)updateRubberbandLowerBound:(double)arg1 upperBound:(double)arg2;	// IMP=0x00000000004741e2
- (void)updateScrubLowerBound:(double)arg1 upperBound:(double)arg2;	// IMP=0x00000000004741d2
@property(readonly, nonatomic) double unboundedScrubPosition;
@property(readonly, nonatomic) double boundedScrubPosition;
@property(readonly, nonatomic) double hyperConstrainedPosition;
@property(readonly, nonatomic) double unconstrainedPosition;
@property(readonly, nonatomic) double joggingDistance;
- (id)initWithMaximumDistance:(double)arg1;	// IMP=0x0000000000473ee7

@end
