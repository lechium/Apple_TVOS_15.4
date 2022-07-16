//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UITextNonEditableInteraction
{
    long long _mode;	// 8 = 0x8
}

- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000df9f94
- (void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 locationOfFirstTouch:(struct CGPoint)arg4 forTouchType:(long long)arg5;	// IMP=0x0000000000df9f68
- (void)toggleSelectionCommands;	// IMP=0x0000000000df9e72
- (void)doubleTapOrTripleTapInUneditable:(id)arg1;	// IMP=0x0000000000df9b0b
- (void)_oneFingerTapInUneditableAcceleratedActionAtLocation:(struct CGPoint)arg1 textInput:(id)arg2 canReplaceText:(_Bool)arg3;	// IMP=0x0000000000df97f0
- (void)_oneFingerTapInUneditableActionAtLocation:(struct CGPoint)arg1 textInput:(id)arg2 canReplaceText:(_Bool)arg3 modifierFlags:(long long)arg4;	// IMP=0x0000000000df942e
- (void)oneFingerTapInUneditableAccelerated:(id)arg1;	// IMP=0x0000000000df9351
- (void)oneFingerTapInUneditable:(id)arg1;	// IMP=0x0000000000df900d
- (_Bool)_shouldAllowOneFingerTapInUneditable:(id)arg1;	// IMP=0x0000000000df8ddf
- (_Bool)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;	// IMP=0x0000000000df8dd7
- (id)initWithMode:(long long)arg1;	// IMP=0x0000000000df8c97

@end

