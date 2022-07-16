//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAKeyframeAnimation.h>

__attribute__((visibility("hidden")))
@interface SCN_CAKeyframeAnimation : CAKeyframeAnimation
{
    struct __C3DKeyframedAnimation *_c3dAnimation;	// 24 = 0x18
    _Bool _caReady;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001bc2bd
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001bbf8f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001bbc9c
- (_Bool)cumulative;	// IMP=0x00000000001bbc8a
- (_Bool)isCumulative;	// IMP=0x00000000001bbc3e
- (void)setCumulative:(_Bool)arg1;	// IMP=0x00000000001bbbc6
- (_Bool)additive;	// IMP=0x00000000001bbbb4
- (_Bool)isAdditive;	// IMP=0x00000000001bbb68
- (void)setAdditive:(_Bool)arg1;	// IMP=0x00000000001bbaf0
- (id)timingFunction;	// IMP=0x00000000001bba93
- (void)setTimingFunction:(id)arg1;	// IMP=0x00000000001bba00
- (id)animationEvents;	// IMP=0x00000000001bb8e2
- (void)setAnimationEvents:(id)arg1;	// IMP=0x00000000001bb674
- (id)fillMode;	// IMP=0x00000000001bb5a0
- (void)setFillMode:(id)arg1;	// IMP=0x00000000001bb490
- (_Bool)usesSceneTimeBase;	// IMP=0x00000000001bb444
- (void)setUsesSceneTimeBase:(_Bool)arg1;	// IMP=0x00000000001bb3cc
- (_Bool)commitsOnCompletion;	// IMP=0x00000000001bb380
- (void)setCommitsOnCompletion:(_Bool)arg1;	// IMP=0x00000000001bb308
- (_Bool)isRemovedOnCompletion;	// IMP=0x00000000001bb2bc
- (void)setRemovedOnCompletion:(_Bool)arg1;	// IMP=0x00000000001bb244
- (double)fadeOutDuration;	// IMP=0x00000000001bb1f7
- (void)setFadeOutDuration:(double)arg1;	// IMP=0x00000000001bb17c
- (double)fadeInDuration;	// IMP=0x00000000001bb12f
- (void)setFadeInDuration:(double)arg1;	// IMP=0x00000000001bb0b4
- (float)speed;	// IMP=0x00000000001bb068
- (void)setSpeed:(float)arg1;	// IMP=0x00000000001baff4
- (double)timeOffset;	// IMP=0x00000000001bafa8
- (void)setTimeOffset:(double)arg1;	// IMP=0x00000000001baf34
- (_Bool)autoreverses;	// IMP=0x00000000001baee8
- (void)setAutoreverses:(_Bool)arg1;	// IMP=0x00000000001bae70
- (double)repeatDuration;	// IMP=0x00000000001bae22
- (void)setRepeatDuration:(double)arg1;	// IMP=0x00000000001badc9
- (float)repeatCount;	// IMP=0x00000000001bad7d
- (void)setRepeatCount:(float)arg1;	// IMP=0x00000000001bad1b
- (id)keyPath;	// IMP=0x00000000001bacba
- (void)setKeyPath:(id)arg1;	// IMP=0x00000000001bac38
- (double)duration;	// IMP=0x00000000001babeb
- (void)setDuration:(double)arg1;	// IMP=0x00000000001bab70
- (void)setC3dAnimation:(struct __C3DKeyframedAnimation *)arg1;	// IMP=0x00000000001bab1e
- (struct __C3DKeyframedAnimation *)c3dAnimation;	// IMP=0x00000000001bab0d
- (id)description;	// IMP=0x00000000001baa6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ba9ab
- (void)setBiasValues:(id)arg1;	// IMP=0x00000000001ba952
- (id)biasValues;	// IMP=0x00000000001ba904
- (void)setContinuityValues:(id)arg1;	// IMP=0x00000000001ba8ab
- (id)continuityValues;	// IMP=0x00000000001ba85d
- (void)setTensionValues:(id)arg1;	// IMP=0x00000000001ba804
- (id)tensionValues;	// IMP=0x00000000001ba7b6
- (void)setTimingFunctions:(id)arg1;	// IMP=0x00000000001ba75d
- (id)timingFunctions;	// IMP=0x00000000001ba70f
- (void)setKeyTimes:(id)arg1;	// IMP=0x00000000001ba6b6
- (id)keyTimes;	// IMP=0x00000000001ba668
- (void)setValues:(id)arg1;	// IMP=0x00000000001ba60f
- (id)values;	// IMP=0x00000000001ba5c1
- (void)_clearC3DCache;	// IMP=0x00000000001ba570
- (void)_convertToCA;	// IMP=0x00000000001ba12a
- (void)dealloc;	// IMP=0x00000000001ba0d8

@end
