//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIViewDeferredKeyframeAnimation
{
    NSMutableArray *_animationFrames;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000103ed39
- (void)_enumerateAnimationFramesForKeyframes:(CDUnknownBlockType)arg1;	// IMP=0x000000000103ea6a
- (void)_finalize;	// IMP=0x000000000103e948
- (void)animateFrameAtIndex:(long long)arg1 animations:(CDUnknownBlockType)arg2;	// IMP=0x000000000103e770
- (void)addAnimationFrameForValue:(id)arg1;	// IMP=0x000000000103e68e
- (id)_animationFrames;	// IMP=0x000000000103e5eb
- (_Bool)isEmpty;	// IMP=0x000000000103e5c7

@end

