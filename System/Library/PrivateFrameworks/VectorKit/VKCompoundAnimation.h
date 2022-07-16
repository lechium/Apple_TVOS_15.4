//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

@interface VKCompoundAnimation
{
    CDUnknownBlockType _groupStepHandler;	// 56 = 0x38
    NSMutableArray *_animations;	// 64 = 0x40
}

@property(copy, nonatomic) CDUnknownBlockType groupStepHandler; // @synthesize groupStepHandler=_groupStepHandler;
@property(readonly, nonatomic) NSMutableArray *animations; // @synthesize animations=_animations;
- (void)onTimerFired:(double)arg1;	// IMP=0x00000000007457cd
- (void)stopAnimation:(_Bool)arg1;	// IMP=0x0000000000745673
- (void)dealloc;	// IMP=0x000000000074561b
- (id)initWithAnimations:(id)arg1;	// IMP=0x00000000007454c1
- (void)resume;	// IMP=0x0000000000745399
- (void)pause;	// IMP=0x0000000000745271
- (void)startWithRunner:(id)arg1;	// IMP=0x000000000074514b
- (_Bool)timed;	// IMP=0x0000000000745028
- (void)setDuration:(double)arg1;	// IMP=0x0000000000744f01
- (double)duration;	// IMP=0x0000000000744daf
- (void)setRunsForever:(_Bool)arg1;	// IMP=0x0000000000744c8f
- (_Bool)runsForever;	// IMP=0x0000000000744b6e
- (_Bool)running;	// IMP=0x0000000000744a4d

@end

