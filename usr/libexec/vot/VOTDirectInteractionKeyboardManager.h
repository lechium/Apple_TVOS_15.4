//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXAccessQueue, AXAccessQueueTimer, NSMutableDictionary, VOTElement;
@protocol VOTGestureKeyboardDelegate;

@interface VOTDirectInteractionKeyboardManager : NSObject
{
    AXAccessQueue *_dispatchAccessQueue;	// 8 = 0x8
    AXAccessQueueTimer *_dispatchTimer;	// 16 = 0x10
    NSMutableDictionary *_dispatchTable;	// 24 = 0x18
    _Bool _inDirectInteractionTypingMode;	// 32 = 0x20
    _Bool _inGestureMode;	// 33 = 0x21
    id <VOTGestureKeyboardDelegate> _delegate;	// 40 = 0x28
    VOTElement *_keyboardElement;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000f8753
@property(nonatomic) _Bool inGestureMode; // @synthesize inGestureMode=_inGestureMode;
@property(retain, nonatomic) VOTElement *keyboardElement; // @synthesize keyboardElement=_keyboardElement;
@property(nonatomic) __weak id <VOTGestureKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool inDirectInteractionTypingMode; // @synthesize inDirectInteractionTypingMode=_inDirectInteractionTypingMode;
- (void)_handleCommitTyping:(id)arg1;	// IMP=0x00100000000f8687
- (void)_handleTypingPeriod:(id)arg1;	// IMP=0x00100000000f85eb
- (void)_handleTypingEnter:(id)arg1;	// IMP=0x00100000000f854f
- (void)_handleShift:(id)arg1;	// IMP=0x00100000000f84e0
- (void)_handleShiftLock:(id)arg1;	// IMP=0x00100000000f8471
- (void)_handleDelete:(id)arg1;	// IMP=0x00100000000f8402
- (void)_handleKeyboardSelection:(id)arg1;	// IMP=0x00100000000f8340
- (void)_handleKeyplaneSelection:(id)arg1;	// IMP=0x00100000000f8282
- (void)_handleSuggestionSelection:(id)arg1;	// IMP=0x00100000000f81c4
- (void)_processEvent:(id)arg1;	// IMP=0x00100000000f8138
- (_Bool)processEvent:(id)arg1;	// IMP=0x00100000000f7fe4
@property(readonly, nonatomic) struct CGRect gestureKeyboardRegion;
- (_Bool)inGestureTypingMode;	// IMP=0x00100000000f7d6f
- (void)_updateTypingMode;	// IMP=0x00100000000f77fe
- (void)updateKeyboardElement;	// IMP=0x00100000000f7795
- (void)_updateKeyboardElement;	// IMP=0x00100000000f7764
- (void)updateTypingMode;	// IMP=0x00100000000f76fb
- (void)screenChange:(id)arg1;	// IMP=0x00100000000f76cd
- (void)_initializeDispatchTable;	// IMP=0x00100000000f716c
- (void)dealloc;	// IMP=0x00100000000f70f7
- (id)init;	// IMP=0x00100000000f6fa7

@end
