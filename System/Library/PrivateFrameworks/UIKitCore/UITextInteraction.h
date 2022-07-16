//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIInteraction-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UILongPressGestureRecognizer, UIResponder, UITextCursorAssertionController, UITextInteractionInputDelegate, UIView;
@protocol UITextInput, UITextInteractionDelegate, UITextInteraction_AssistantDelegate;

@interface UITextInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>
{
    UITextInteraction *_parent;	// 8 = 0x8
    NSMutableArray *_children;	// 16 = 0x10
    NSMutableArray *_gestures;	// 24 = 0x18
    NSMutableDictionary *_gestureMap;	// 32 = 0x20
    _Bool _viewOverridesInteractivityState;	// 40 = 0x28
    _Bool _inGesture;	// 41 = 0x29
    _Bool _allowsSelectionCommands;	// 42 = 0x2a
    long long _textInteractionMode;	// 48 = 0x30
    UILongPressGestureRecognizer *_customHighlighterGesture;	// 56 = 0x38
    id <UITextInteractionDelegate> _delegate;	// 64 = 0x40
    UIResponder<UITextInput> *_textInput;	// 72 = 0x48
    UIView *_view;	// 80 = 0x50
    UITextInteractionInputDelegate *_interactionInputDelegate;	// 88 = 0x58
    id <UITextInteraction_AssistantDelegate> _assistantDelegate;	// 96 = 0x60
}

+ (id)textInteractionsForSet:(long long)arg1;	// IMP=0x0000000000df3c00
+ (id)textInteractionForMode:(long long)arg1;	// IMP=0x0000000000df3bd9
- (void).cxx_destruct;	// IMP=0x0000000000df54ad
@property(nonatomic) __weak id <UITextInteraction_AssistantDelegate> assistantDelegate; // @synthesize assistantDelegate=_assistantDelegate;
@property(retain, nonatomic) UITextInteractionInputDelegate *interactionInputDelegate; // @synthesize interactionInputDelegate=_interactionInputDelegate;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak UIResponder<UITextInput> *textInput; // @synthesize textInput=_textInput;
@property(nonatomic) __weak id <UITextInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setAllowsSelectionCommands:) _Bool _allowsSelectionCommands; // @synthesize _allowsSelectionCommands;
@property(retain, nonatomic) UILongPressGestureRecognizer *_customHighlighterGesture; // @synthesize _customHighlighterGesture;
@property(readonly, nonatomic) NSDictionary *gestureMap; // @synthesize gestureMap=_gestureMap;
@property(readonly, nonatomic) NSArray *gestures; // @synthesize gestures=_gestures;
@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000df533d
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000df5236
- (_Bool)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000df4fdf
- (_Bool)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;	// IMP=0x0000000000df4fd7
- (void)updateTextInputSourceForScribbleGesture:(id)arg1;	// IMP=0x0000000000df4fd1
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000df4e60
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000df4dc7
- (id)defaultTapRecognizerWithAction:(SEL)arg1;	// IMP=0x0000000000df4d34
- (id)defaultDoubleTapRecognizerWithAction:(SEL)arg1;	// IMP=0x0000000000df4c8f
- (id)defaultTripleTapRecognizerWithAction:(SEL)arg1;	// IMP=0x0000000000df4bfc
- (_Bool)shouldHandleFormGestureAtLocation:(struct CGPoint)arg1;	// IMP=0x0000000000df4afe
- (double)distanceBetweenPoint:(struct CGPoint)arg1 andRects:(id)arg2;	// IMP=0x0000000000df4937
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;	// IMP=0x0000000000df48b0
- (_Bool)currentSelectionContainsPoint:(struct CGPoint)arg1;	// IMP=0x0000000000df47fd
- (_Bool)selection:(id)arg1 containsPoint:(struct CGPoint)arg2;	// IMP=0x0000000000df4559
- (void)disableClearsOnInsertion;	// IMP=0x0000000000df44e5
- (_Bool)containerChangesSelectionOnOneFingerTap;	// IMP=0x0000000000df4453
- (void)_performPreemtiveLayoutToEnsureNoMoreLayoutWhileSelecting:(id)arg1;	// IMP=0x0000000000df4425
- (_Bool)_textInputLivesInKeyWindow;	// IMP=0x0000000000df43a3
- (_Bool)_textInputIsInteractive;	// IMP=0x0000000000df433b
- (id)_textInput;	// IMP=0x0000000000df411f
- (_Bool)_shouldObscureTextInput;	// IMP=0x0000000000df4083
- (void)cancelLinkInteractionSession;	// IMP=0x0000000000df4026
- (void)_setLinkInteractionSession:(id)arg1;	// IMP=0x0000000000df3ebb
- (id)linkInteractionSession;	// IMP=0x0000000000df3eaa
- (void)_playFeedbackForCursorMovement;	// IMP=0x0000000000df3e61
- (void)_cleanUpFeedbackForGesture;	// IMP=0x0000000000df3e5b
- (void)_prepareFeedbackForGesture;	// IMP=0x0000000000df3e55
- (void)_createFeedbackIfNecessary;	// IMP=0x0000000000df3e4f
- (void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 locationOfFirstTouch:(struct CGPoint)arg4 forTouchType:(long long)arg5;	// IMP=0x0000000000df3c91
- (void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 locationOfFirstTouch:(struct CGPoint)arg4;	// IMP=0x0000000000df3c79
- (void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3;	// IMP=0x0000000000df3c51
@property(readonly, nonatomic) long long textInteractionSet;
@property(readonly, nonatomic) NSArray *gesturesForFailureRequirements;
- (void)didMoveToView:(id)arg1;	// IMP=0x0000000000df33ec
- (void)willMoveToView:(id)arg1;	// IMP=0x0000000000df2f81
- (void)_callDelegateWillMoveTextRangeExtentAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000df2ed0
- (_Bool)shouldAllowWithTouchTypes:(id)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;	// IMP=0x0000000000df2d42
@property(nonatomic, setter=setInGesture:) _Bool inGesture; // @synthesize inGesture=_inGesture;
@property(readonly, nonatomic) long long textInteractionMode; // @synthesize textInteractionMode=_textInteractionMode;
- (void)_cancelRecognizerWithName:(id)arg1;	// IMP=0x0000000000df29d1
- (id)recognizerForName:(id)arg1;	// IMP=0x0000000000df294d
- (void)removeGestureRecognizerWithName:(id)arg1;	// IMP=0x0000000000df2843
- (void)addGestureRecognizer:(id)arg1 withName:(id)arg2;	// IMP=0x0000000000df2727
- (_Bool)doesControlDelegate;	// IMP=0x0000000000df271f
@property(readonly, nonatomic) UITextCursorAssertionController *_assertionController;
- (void)_applyTransientState:(id)arg1;	// IMP=0x0000000000df24f5
- (id)_transientState;	// IMP=0x0000000000df22cf
@property(readonly) __weak UITextInteraction *root;
@property(readonly) __weak UITextInteraction *parent;
- (void)finishSetup;	// IMP=0x0000000000df2114
- (id)interactionWithClass:(Class)arg1;	// IMP=0x0000000000df1f94
- (id)interactionWithGestureForName:(id)arg1;	// IMP=0x0000000000df1dc4
- (void)removeChild:(id)arg1;	// IMP=0x0000000000df1cbd
- (void)addChild:(id)arg1;	// IMP=0x0000000000df1bd7
- (id)init;	// IMP=0x0000000000df19c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
