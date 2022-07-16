//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderCore/SCRCGestureEvent.h>

@class AXEventRepresentation;

@interface VOTGestureEvent : SCRCGestureEvent
{
    AXEventRepresentation *_eventRepresentation;	// 8 = 0x8
}

+ (id)gestureEventWithEventRepresentation:(id)arg1;	// IMP=0x004000000005fd02
- (void).cxx_destruct;	// IMP=0x0020000000060634
@property(retain, nonatomic) AXEventRepresentation *eventRepresentation; // @synthesize eventRepresentation=_eventRepresentation;
- (_Bool)didFallThruToDevice;	// IMP=0x00100000000605ff
- (void)_addFingerInformation;	// IMP=0x00100000000602eb
- (_Bool)isStylusEvent;	// IMP=0x001000000006029c
- (_Bool)isMovedEvent;	// IMP=0x001000000006022e
- (_Bool)isDownEvent;	// IMP=0x00100000000601bb
- (_Bool)isNonLiftingInRangeEvent;	// IMP=0x0010000000060147
- (_Bool)_isBogusTouchEvent;	// IMP=0x00100000000600c2
- (_Bool)_eventMaskHasTouch;	// IMP=0x001000000005fffd
- (_Bool)isLiftEvent;	// IMP=0x001000000005ff7b
- (_Bool)isCancelEvent;	// IMP=0x001000000005ff28
- (id)description;	// IMP=0x001000000005fe21
- (void)dealloc;	// IMP=0x001000000005fde1
- (id)_initWithDeviceIdentifier:(unsigned long long)arg1 andEventRepresentation:(id)arg2;	// IMP=0x001000000005fd6d

@end

