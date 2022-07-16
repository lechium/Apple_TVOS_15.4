//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIResponder, UITextInteractionAssistant, UITextPosition, UITextRange, UIView;
@protocol UISelectionInteractionAssistant, UITextInput;

__attribute__((visibility("hidden")))
@interface _UIKeyboardTextSelectionController : NSObject
{
    _Bool _hasInteractionAssistant;	// 8 = 0x8
    _Bool _hasSelectionInteractionAssistant;	// 9 = 0x9
    _Bool _hasTextInputView;	// 10 = 0xa
    UITextPosition *_cursorPosition;	// 16 = 0x10
    UITextRange *_initialSelection;	// 24 = 0x18
    long long _selectionGranularity;	// 32 = 0x20
    UITextRange *_selectionBase;	// 40 = 0x28
    UIResponder<UITextInput> *_inputDelegate;	// 48 = 0x30
    struct CGRect _caretRectForCursorPosition;	// 56 = 0x38
}

@property(readonly, nonatomic) UIResponder<UITextInput> *inputDelegate; // @synthesize inputDelegate=_inputDelegate;
@property(retain, nonatomic) UITextRange *selectionBase; // @synthesize selectionBase=_selectionBase;
@property(nonatomic) struct CGRect caretRectForCursorPosition; // @synthesize caretRectForCursorPosition=_caretRectForCursorPosition;
@property(nonatomic) long long selectionGranularity; // @synthesize selectionGranularity=_selectionGranularity;
@property(retain, nonatomic) UITextRange *initialSelection; // @synthesize initialSelection=_initialSelection;
- (void)endSelection;	// IMP=0x00000000009ff5e1
- (void)modifySelectionWithExtentPoint:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x00000000009ff3f8
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 withBoundary:(long long)arg2 executionContext:(id)arg3;	// IMP=0x00000000009ff264
- (void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4;	// IMP=0x00000000009ff1ba
- (void)updateImmediateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;	// IMP=0x00000000009ff159
- (void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;	// IMP=0x00000000009ff105
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x00000000009ff0a1
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 andExtentPosition:(id)arg2 executionContext:(id)arg3;	// IMP=0x00000000009fef18
- (void)updateSelectionWithExtentPosition:(id)arg1 executionContext:(id)arg2;	// IMP=0x00000000009feef6
- (void)beginSelectionWithBasePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 withInitialExtentPoint:(struct CGPoint)arg3 executionContext:(id)arg4;	// IMP=0x00000000009fed70
- (void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(struct CGPoint)arg2 executionContext:(id)arg3;	// IMP=0x00000000009fec31
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000009fec01
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 executionContext:(id)arg3;	// IMP=0x00000000009fe7b0
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4;	// IMP=0x00000000009fe692
- (void)selectImmediatePositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;	// IMP=0x00000000009fe631
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3;	// IMP=0x00000000009fe5dd
- (void)selectPositionAtPoint:(struct CGPoint)arg1 granularity:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000009fe3b6
- (void)selectPositionAtPoint:(struct CGPoint)arg1 granularity:(long long)arg2 executionContext:(id)arg3;	// IMP=0x00000000009fe351
- (void)selectPositionAtPoint:(struct CGPoint)arg1 executionContext:(id)arg2;	// IMP=0x00000000009fe33a
- (void)restartSelection;	// IMP=0x00000000009fe2df
- (void)beginSelection;	// IMP=0x00000000009fe277
- (struct CGPoint)boundedDeltaForTranslation:(struct CGPoint)arg1 cursorLocationBase:(struct CGPoint)arg2;	// IMP=0x00000000009fe15c
- (void)endLoupeGestureAtPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;	// IMP=0x00000000009fe059
- (void)updateLoupeGestureAtPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;	// IMP=0x00000000009fdf20
- (_Bool)beginLoupeGestureAtPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;	// IMP=0x00000000009fde0e
- (void)endRangedMagnifierAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000009fdd75
- (void)updateRangedMagnifierAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000009fdcdc
- (void)beginRangedMagnifierAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000009fdc43
- (void)endLoupeMagnifierAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000009fdbfc
- (void)updateLoupeMagnifierAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000009fdbb5
- (void)beginLoupeMagnifierAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000009fdb6e
- (void)endFloatingCursor;	// IMP=0x00000000009fdb0e
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000009fda8e
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000009fda0e
- (void)willBeginFloatingCursor:(_Bool)arg1;	// IMP=0x00000000009fd9d2
- (void)willBeginHighlighterGesture;	// IMP=0x00000000009fd99b
- (void)scrollSelectionToVisible;	// IMP=0x00000000009fd929
- (void)updateGestureRecognizers;	// IMP=0x00000000009fd8fe
- (void)willHandoffLoupeMagnifier;	// IMP=0x00000000009fd8d3
- (void)setRangedSelectionShouldShowGrabbers:(_Bool)arg1;	// IMP=0x00000000009fd7f7
- (void)switchToRangedSelection;	// IMP=0x00000000009fd7aa
- (void)updateSelectionRects;	// IMP=0x00000000009fd773
- (void)showSelectionCommands;	// IMP=0x00000000009fd6f9
- (void)textDidChange;	// IMP=0x00000000009fd6e7
- (void)selectionDidChange;	// IMP=0x00000000009fd5e0
@property(readonly, nonatomic) struct CGRect caretRectForRightmostSelectedPosition;
@property(readonly, nonatomic) struct CGRect caretRectForLeftmostSelectedPosition;
@property(readonly, nonatomic) struct CGRect caretRectForLastSelectedPosition;
@property(readonly, nonatomic) struct CGRect caretRectForFirstSelectedPosition;
@property(readonly, nonatomic) _Bool hasRangedSelection;
@property(readonly, nonatomic) _Bool hasCaretSelection;
@property(readonly, nonatomic) UIView *textInputView;
- (struct CGRect)selectedRectInLineWithPoint:(struct CGPoint)arg1;	// IMP=0x00000000009fcf5f
- (_Bool)cursorPositionIsContainedByRange:(id)arg1;	// IMP=0x00000000009fce75
- (void)setSelectedTextRange:(id)arg1;	// IMP=0x00000000009fcdb3
- (void)resetCursorPosition;	// IMP=0x00000000009fcd9f
@property(retain, nonatomic) UITextPosition *cursorPosition;
- (void)endSelectionChange;	// IMP=0x00000000009fcc55
- (void)beginSelectionChange;	// IMP=0x00000000009fcbb8
@property(readonly, nonatomic) id <UISelectionInteractionAssistant> selectionInteractionAssistant;
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (id)initWithInputDelegate:(id)arg1;	// IMP=0x00000000009fcaa9
- (void)dealloc;	// IMP=0x00000000009fca58

@end

