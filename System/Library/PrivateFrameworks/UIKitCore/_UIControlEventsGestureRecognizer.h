//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITouch;
@protocol _UIControlEventsGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface _UIControlEventsGestureRecognizer
{
    struct {
        unsigned int touchInside:1;
        unsigned int touchDragged:1;
        unsigned int deliveredCancel:1;
    } _flags;	// 16 = 0x10
    UITouch *_activeTouch;	// 24 = 0x18
    id <_UIControlEventsGestureRecognizerDelegate> _controlEventsDelegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000005a38c0
@property(nonatomic) __weak id <_UIControlEventsGestureRecognizerDelegate> controlEventsDelegate; // @synthesize controlEventsDelegate=_controlEventsDelegate;
@property(readonly, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000005a383f
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000005a362f
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000005a345a
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000005a338a
- (void)reset;	// IMP=0x00000000005a32fc
- (void)gestureRecognizerFailed;	// IMP=0x00000000005a32b0
- (void)sendControlEvent:(unsigned long long)arg1 withEvent:(id)arg2;	// IMP=0x00000000005a3235

@end

