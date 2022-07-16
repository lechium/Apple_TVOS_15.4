//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIWheelEvent
{
    long long _recentScrollDistance;	// 32 = 0x20
    NSMutableArray *_recentScrollEvents;	// 40 = 0x28
    long long lastSubtype;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000be1a2c
- (double)_wheelVelocity;	// IMP=0x0000000000be19d7
- (_Bool)_canHaveVelocity;	// IMP=0x0000000000be19b7
- (void)_sendEventToResponder:(id)arg1;	// IMP=0x0000000000be199c
- (long long)subtype;	// IMP=0x0000000000be1949
- (long long)type;	// IMP=0x0000000000be193e
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000000be15fb

@end
