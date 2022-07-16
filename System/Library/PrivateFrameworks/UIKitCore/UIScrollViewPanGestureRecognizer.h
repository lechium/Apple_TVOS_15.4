//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIScrollView, UIScrollViewDirectionalPressGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIScrollViewPanGestureRecognizer
{
    UIScrollView *_scrollView;	// 136 = 0x88
    SEL _scrollViewAction;	// 144 = 0x90
    struct CGPoint _reconsideredLockingLocation;	// 152 = 0x98
    unsigned int _lastLockingAxis:2;	// 168 = 0xa8
    unsigned int _lockingAxis:2;	// 168 = 0xa8
    unsigned int _hasParentScrollView:1;	// 168 = 0xa8
    unsigned int _caughtDeceleratingScrollView:1;	// 168 = 0xa8
    unsigned int _directionalLockEnabled:1;	// 168 = 0xa8
    unsigned int _transfersTrackingFromParentScrollView:1;	// 168 = 0xa8
    unsigned int _movedAfterCaughtDeceleratingScrollViewButBeganNotYetDelivered:1;	// 169 = 0xa9
    long long _indirectScrollingState;	// 176 = 0xb0
    double _translationScaleFactor;	// 184 = 0xb8
    UIScrollViewDirectionalPressGestureRecognizer *_directionalPressGestureRecognizer;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000001009e36
@property(nonatomic) __weak UIScrollViewDirectionalPressGestureRecognizer *directionalPressGestureRecognizer; // @synthesize directionalPressGestureRecognizer=_directionalPressGestureRecognizer;
@property(nonatomic) double translationScaleFactor; // @synthesize translationScaleFactor=_translationScaleFactor;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (_Bool)_isGestureType:(long long)arg1;	// IMP=0x0000000001009da7
@property(readonly, nonatomic, getter=_beganCaughtDeceleratingScrollViewAndMoved) _Bool beganCaughtDeceleratingScrollViewAndMoved;
@property(readonly, nonatomic, getter=_caughtDeceleratingScrollView) _Bool caughtDeceleratingScrollView;
@property(nonatomic, getter=isDirectionalLockEnabled) _Bool directionalLockEnabled;
- (double)_hysteresis;	// IMP=0x0000000001009cee
- (void)_scrollViewDidEndZooming;	// IMP=0x0000000001009c49
- (void)_resetGestureRecognizer;	// IMP=0x0000000001009b9c
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x0000000001009adf
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001009a60
- (_Bool)_shouldTryToBeginWithEvent:(id)arg1;	// IMP=0x00000000010094a1
- (_Bool)_isParentScrollView:(id)arg1 consideringEvent:(id)arg2;	// IMP=0x00000000010093ac
- (void)_handleCaughtDeceleratingScrollViewWithEvent:(id)arg1;	// IMP=0x00000000010092f8
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000010091c8
- (struct CGPoint)velocityInView:(id)arg1;	// IMP=0x000000000100917a
- (struct CGPoint)translationInView:(id)arg1;	// IMP=0x0000000001008fd6
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;	// IMP=0x0000000001008ecf
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2;	// IMP=0x0000000001008dc8
- (void)_centroidMovedTo:(struct CGPoint)arg1 atTime:(double)arg2 affectingTranslation:(_Bool)arg3;	// IMP=0x0000000001008aa4
- (struct CGPoint)_adjustSceneReferenceLocation:(struct CGPoint)arg1;	// IMP=0x0000000001008a50
- (void)_beginScroll;	// IMP=0x00000000010088ea
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000100888a
- (_Bool)_shouldTransferTrackingFromParentScrollViewForCurrentOffset;	// IMP=0x0000000001008667
- (_Bool)_shouldContinueToWaitToTransferTrackingFromParentScrollView;	// IMP=0x00000000010084ad
- (_Bool)_canTransferTrackingFromParentPagingScrollView;	// IMP=0x0000000001008209
- (void)setView:(id)arg1;	// IMP=0x0000000001008159
- (void)setAllowedTouchTypes:(id)arg1;	// IMP=0x0000000001007f87
- (void)removeTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000001007ec4
- (void)setDelegate:(id)arg1;	// IMP=0x0000000001007e1d
- (_Bool)delaysTouchesBegan;	// IMP=0x0000000001007d9b
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000001007ce8

@end
