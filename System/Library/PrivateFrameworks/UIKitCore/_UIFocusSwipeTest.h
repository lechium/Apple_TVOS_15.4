//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIWindow;

@interface _UIFocusSwipeTest
{
    unsigned long long _eventCount;	// 8 = 0x8
    const struct {
        double _field1;
        long long _field2;
        double _field3;
        double _field4;
        double _field5;
        double _field6;
    } *_events;	// 16 = 0x10
    UIWindow *_window;	// 24 = 0x18
    unsigned long long _swipeAxis;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000005aaa2a
@property(nonatomic) unsigned long long swipeAxis; // @synthesize swipeAxis=_swipeAxis;
@property(nonatomic) __weak UIWindow *window; // @synthesize window=_window;
- (void)main;	// IMP=0x00000000005aa5f6
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005aa444
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000005aa401

@end

