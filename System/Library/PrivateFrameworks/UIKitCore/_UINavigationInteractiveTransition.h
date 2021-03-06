//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIScreenEdgePanGestureRecognizer, _UIParallaxTransitionPanGestureRecognizer;

@interface _UINavigationInteractiveTransition
{
    _UIParallaxTransitionPanGestureRecognizer *_edgePanRecognizer;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x0000000000502912
@property(readonly, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanGestureRecognizer;
- (void)setNotInteractiveTransition;	// IMP=0x00000000005028c7
- (void)startInteractiveTransition;	// IMP=0x0000000000502837
- (id)gestureRecognizerView;	// IMP=0x00000000005027e7
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000005027df
- (_Bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x0000000000502617
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000502508
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000005022e0
- (_Bool)_gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2;	// IMP=0x0000000000501ef2
- (void)_setShouldReverseLayoutDirection:(_Bool)arg1;	// IMP=0x0000000000501e93
- (void)_configureNavigationGesture;	// IMP=0x0000000000501cdf
- (id)initWithViewController:(id)arg1 animator:(id)arg2;	// IMP=0x0000000000501c07

@end

