//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCRCGestureFinger;

@interface SCRCGestureEvent : NSObject
{
    unsigned long long _deviceIdentifier;	// 8 = 0x8
    SCRCGestureFinger *_finger[8];	// 16 = 0x10
    unsigned long long _fingerCount;	// 80 = 0x50
    struct CGPoint _averageLocation;	// 88 = 0x58
    double _time;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000000846a
@property(nonatomic) double time; // @synthesize time=_time;
- (struct CGPoint)magneticLocation;	// IMP=0x0000000000008401
- (_Bool)isCancelEvent;	// IMP=0x00000000000083f9
- (struct CGPoint)balancedLocation;	// IMP=0x000000000000839c
- (struct CGPoint)averageLocation;	// IMP=0x0000000000008356
- (struct CGRect)fingerFrame;	// IMP=0x0000000000008251
- (id)fingers;	// IMP=0x00000000000081bf
- (id)fingerWithoutIdentifier:(unsigned long long)arg1;	// IMP=0x0000000000008176
- (id)fingerWithIdentifier:(unsigned long long)arg1;	// IMP=0x000000000000812d
- (id)fingerAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000811e
- (unsigned long long)fingerCount;	// IMP=0x0000000000008114
- (void)removeFingerWithIdentifier:(unsigned long long)arg1;	// IMP=0x0000000000007ffb
- (void)addStylusWithIdentifier:(unsigned long long)arg1 location:(struct CGPoint)arg2 pressure:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5;	// IMP=0x0000000000007f59
- (void)addFingerWithIdentifier:(unsigned long long)arg1 location:(struct CGPoint)arg2 pressure:(double)arg3;	// IMP=0x0000000000007ecf
- (unsigned long long)deviceIdentifier;	// IMP=0x0000000000007ec5
- (id)description;	// IMP=0x0000000000007e11
- (void)dealloc;	// IMP=0x0000000000007dae
- (id)initWithDeviceIdentifier:(unsigned long long)arg1;	// IMP=0x0000000000007d5d

@end

