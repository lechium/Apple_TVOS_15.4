//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIGameControllerEvent
{
    CDStruct_a7a14e3b _previousState;	// 32 = 0x20
    unsigned long long _activeComponent;	// 264 = 0x108
}

- (_Bool)_processShoulder:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000be2ad9
- (_Bool)_processRightStick:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000be2a77
- (_Bool)_processLeftStick:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000be2a15
- (_Bool)_processDPad:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000be29ba
- (_Bool)_processStandardButtons:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000be26bc
- (_Bool)_determineInputTypeAndProcess:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000be1e7d
- (struct CGPoint)_leftStickPosition;	// IMP=0x0000000000be1e64
- (void)_maybeConvertAndSendAsPressesEvent;	// IMP=0x0000000000be1aea
- (void)_reset;	// IMP=0x0000000000be1a6e
- (void)_sendEventToResponder:(id)arg1;	// IMP=0x0000000000be1a53
- (long long)subtype;	// IMP=0x0000000000be1a4b
- (long long)type;	// IMP=0x0000000000be1a40

@end
