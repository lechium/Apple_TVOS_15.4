//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADisplayLink, NSArray, UIKeyboardSliceSet;
@protocol UIKeyboardKeyplaneTransitionDelegate, UIKeyboardSplitTransitionDataSource;

__attribute__((visibility("hidden")))
@interface UIKeyboardSplitTransitionView
{
    double _currentProgress;	// 8 = 0x8
    double _liftOffProgress;	// 16 = 0x10
    double _finishProgress;	// 24 = 0x18
    double _finishDuration;	// 32 = 0x20
    double _finalTransitionStartTime;	// 40 = 0x28
    CADisplayLink *_displayLink;	// 48 = 0x30
    CDUnknownBlockType _completionBlock;	// 56 = 0x38
    struct CGRect _startFrame;	// 64 = 0x40
    struct CGRect _endFrame;	// 96 = 0x60
    id <UIKeyboardKeyplaneTransitionDelegate> _transitionDelegate;	// 128 = 0x80
    id <UIKeyboardSplitTransitionDataSource> _transitionDataSource;	// 136 = 0x88
    _Bool _centerFilled;	// 144 = 0x90
    _Bool _isRebuilding;	// 145 = 0x91
    _Bool _isSplitTranslation;	// 146 = 0x92
    UIKeyboardSliceSet *_sliceSet;	// 152 = 0x98
}

@property(nonatomic) id <UIKeyboardSplitTransitionDataSource> splitTransitionDataSource; // @synthesize splitTransitionDataSource=_transitionDataSource;
@property(nonatomic) id <UIKeyboardKeyplaneTransitionDelegate> splitTransitionDelegate; // @synthesize splitTransitionDelegate=_transitionDelegate;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (_Bool)showDictationKey;	// IMP=0x0000000000a1c29b
- (_Bool)showIntlKey;	// IMP=0x0000000000a1c27e
- (struct CGImage *)keyImageWithToken:(id)arg1;	// IMP=0x0000000000a1c261
- (struct CGImage *)splitKeyboardImage;	// IMP=0x0000000000a1c259
- (struct CGImage *)defaultKeyboardImage;	// IMP=0x0000000000a1c251
- (_Bool)canDisplayTransition;	// IMP=0x0000000000a1c203
- (void)updateWithProgress:(double)arg1;	// IMP=0x0000000000a1c120
- (void)finishWithProgress:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a1bfac
- (void)transitionToFinalState:(id)arg1;	// IMP=0x0000000000a1bead
- (void)finalizeTransition;	// IMP=0x0000000000a1bde0
- (_Bool)transitionIsVisible;	// IMP=0x0000000000a1bdd8
- (void)rebuildControlKeys:(unsigned long long)arg1;	// IMP=0x0000000000a1bdd2
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 startToken:(id)arg3 endToken:(id)arg4 keyboardType:(long long)arg5 orientation:(long long)arg6;	// IMP=0x0000000000a1bdcc
- (void)transformForProgress:(double)arg1;	// IMP=0x0000000000a1bb26
- (_Bool)shouldAllowRubberiness;	// IMP=0x0000000000a1bb0e
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;	// IMP=0x0000000000a1bb08
- (struct CGRect)rectEnclosingKeyplane:(id)arg1;	// IMP=0x0000000000a1b958
- (struct CGSize)sizeForShadowLayer:(int)arg1;	// IMP=0x0000000000a1b8c9
- (id)colorsForBackgroundLayer:(int)arg1;	// IMP=0x0000000000a1b819
- (void)initializeLayers;	// IMP=0x0000000000a1b3ee
- (id)bottomDropShadow;	// IMP=0x0000000000a1b3b1
- (id)outerCenterDropShadow;	// IMP=0x0000000000a1b374
- (id)centerDropShadow;	// IMP=0x0000000000a1b337
- (id)topDropShadow;	// IMP=0x0000000000a1b2fa
@property(readonly) NSArray *backgroundLayers;
@property(readonly) NSArray *shadowLayers;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000a1affd
- (void)didMoveToWindow;	// IMP=0x0000000000a1aec0
- (void)dealloc;	// IMP=0x0000000000a1ae08

@end
