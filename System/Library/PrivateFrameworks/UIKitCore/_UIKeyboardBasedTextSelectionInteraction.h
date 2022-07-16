//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITextGestureTuning;

__attribute__((visibility("hidden")))
@interface _UIKeyboardBasedTextSelectionInteraction
{
    UITextGestureTuning *_gestureTuning;	// 64 = 0x40
}

@property(readonly, nonatomic) UITextGestureTuning *gestureTuning; // @synthesize gestureTuning=_gestureTuning;
- (void)oneFingerForcePress:(id)arg1;	// IMP=0x0000000000a07d7a
- (void)oneFingerForcePan:(id)arg1;	// IMP=0x0000000000a06ee3
- (void)endOneFingerSelectWithExecutionContext:(id)arg1;	// IMP=0x0000000000a06eaa
- (void)updateOneFingerSelectWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000a06e5d
- (void)beginOneFingerSelectWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x0000000000a06d3b
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint)arg1 viaDrag:(_Bool)arg2;	// IMP=0x0000000000a06905
- (_Bool)enclosingScrollViewIsScrolling;	// IMP=0x0000000000a06884
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000a0686a
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000a0681c
- (id)owner;	// IMP=0x0000000000a067ed
- (void)_processGestureForCustomHighlighter:(id)arg1;	// IMP=0x0000000000a06441
- (void)didMoveToView:(id)arg1;	// IMP=0x0000000000a063ee
- (void)_createGestureTuningIfNecessary;	// IMP=0x0000000000a06311
- (void)dealloc;	// IMP=0x0000000000a062c3

@end

