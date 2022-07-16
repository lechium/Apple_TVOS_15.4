//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIControl;
@protocol OS_dispatch_source;

@interface MPUTransportButtonEventHandler : NSObject
{
    NSObject<OS_dispatch_source> *_longPressTimer;	// 8 = 0x8
    _Bool _longPress;	// 16 = 0x10
    _Bool _shouldFakeEnabled;	// 17 = 0x11
    _Bool _supportsTapWhenDisabled;	// 18 = 0x12
    UIControl *_button;	// 24 = 0x18
    double _minimumLongPressDuration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000008eb2
@property(nonatomic) _Bool supportsTapWhenDisabled; // @synthesize supportsTapWhenDisabled=_supportsTapWhenDisabled;
@property(nonatomic) double minimumLongPressDuration; // @synthesize minimumLongPressDuration=_minimumLongPressDuration;
@property(nonatomic) __weak UIControl *button; // @synthesize button=_button;
- (void)_clearLongPressTimer;	// IMP=0x0000000000008e2d
- (void)_longPressTimerAction;	// IMP=0x0000000000008ddc
- (_Bool)shouldForceTrackingEnabled;	// IMP=0x0000000000008dd3
- (_Bool)shouldFakeEnabled;	// IMP=0x0000000000008dca
- (id)performHitTestingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008d94
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000008ce4
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x0000000000008c92
- (void)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000008af1
- (void)dealloc;	// IMP=0x0000000000008ab3
- (id)init;	// IMP=0x0000000000008a71

@end
