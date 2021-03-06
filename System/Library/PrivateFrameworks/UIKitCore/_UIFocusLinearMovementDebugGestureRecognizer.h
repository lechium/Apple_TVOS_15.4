//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, UIPress;

__attribute__((visibility("hidden")))
@interface _UIFocusLinearMovementDebugGestureRecognizer
{
    UIPress *_press;	// 16 = 0x10
    _Bool _allowsGroupMode;	// 24 = 0x18
    NSMutableSet *_presses;	// 32 = 0x20
    _Bool _groupMode;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000d36b4b
@property(nonatomic, getter=isGroupMode) _Bool groupMode; // @synthesize groupMode=_groupMode;
- (void)reset;	// IMP=0x0000000000d36b0e
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d369bd
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d3686c
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d3685a
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d36709
- (void)_update;	// IMP=0x0000000000d3635a
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 allowsGroupMode:(_Bool)arg3;	// IMP=0x0000000000d3623b
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000d36226

@end

