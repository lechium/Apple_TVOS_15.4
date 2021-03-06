//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface XCPointerEventPath : NSObject
{
    NSMutableArray *_pointerEvents;	// 8 = 0x8
    _Bool _immutable;	// 16 = 0x10
    unsigned long long _pathType;	// 24 = 0x18
    unsigned long long _index;	// 32 = 0x20
    unsigned long long _deviceID;	// 40 = 0x28
    struct CGPoint _initialMouseLocation;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000003963
- (void).cxx_destruct;	// IMP=0x0020000000005433
@property _Bool immutable; // @synthesize immutable=_immutable;
@property unsigned long long deviceID; // @synthesize deviceID=_deviceID;
@property unsigned long long index; // @synthesize index=_index;
@property(readonly) struct CGPoint initialMouseLocation; // @synthesize initialMouseLocation=_initialMouseLocation;
@property(readonly) unsigned long long pathType; // @synthesize pathType=_pathType;
- (id)description;	// IMP=0x001000000000538e
- (id)firstEventAfterOffset:(double)arg1;	// IMP=0x0010000000005248
- (id)lastEventBeforeOffset:(double)arg1;	// IMP=0x00100000000050e0
- (id)firstEventAtOffset:(double)arg1;	// IMP=0x0010000000004f84
- (void)_addPointerEvent:(id)arg1;	// IMP=0x0010000000004e92
- (void)setModifiers:(unsigned long long)arg1 mergeWithCurrentModifierFlags:(_Bool)arg2 atOffset:(double)arg3;	// IMP=0x0010000000004e3f
- (void)typeKey:(id)arg1 modifiers:(unsigned long long)arg2 atOffset:(double)arg3;	// IMP=0x0010000000004dec
- (void)typeText:(id)arg1 atOffset:(double)arg2 typingSpeed:(unsigned long long)arg3 shouldRedact:(_Bool)arg4;	// IMP=0x0010000000004d99
- (void)scrollAtPoint:(struct CGPoint)arg1 byLines:(long long)arg2 atOffset:(double)arg3;	// IMP=0x0010000000004d46
- (void)gestureSwipeWithDeltaVector:(struct CGVector)arg1 atOffset:(double)arg2 duration:(double)arg3;	// IMP=0x0010000000004cf1
- (void)scrollWithDeltaVector:(struct CGVector)arg1 atOffset:(double)arg2 duration:(double)arg3;	// IMP=0x0010000000004c9e
- (void)releaseButton:(unsigned long long)arg1 atOffset:(double)arg2 clickCount:(unsigned long long)arg3;	// IMP=0x0010000000004bdf
- (void)dragWithButton:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2 atOffset:(double)arg3 duration:(double)arg4;	// IMP=0x001000000000494b
- (void)pressButton:(unsigned long long)arg1 atOffset:(double)arg2 clickCount:(unsigned long long)arg3;	// IMP=0x001000000000488c
- (void)liftUpAtOffset:(double)arg1;	// IMP=0x00100000000047d8
- (void)moveMouseToPoint:(struct CGPoint)arg1 atOffset:(double)arg2 duration:(double)arg3;	// IMP=0x0010000000004516
- (void)moveToPoint:(struct CGPoint)arg1 atOffset:(double)arg2;	// IMP=0x001000000000437f
- (void)pressDownWithPressure:(double)arg1 stage:(unsigned long long)arg2 phase:(unsigned long long)arg3 atOffset:(double)arg4;	// IMP=0x0010000000004298
- (void)pressDownWithPressure:(double)arg1 atOffset:(double)arg2;	// IMP=0x0010000000004282
- (void)pressDownAtOffset:(double)arg1;	// IMP=0x00100000000041ce
@property(readonly) double maximumOffset;
@property(readonly) NSArray *pointerEvents;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000403c
- (unsigned long long)hash;	// IMP=0x001000000000400c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000003ef7
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000003d22
- (id)initForTouchBarAtPoint:(struct CGPoint)arg1 offset:(double)arg2;	// IMP=0x0010000000003bd0
- (id)initForTextInput;	// IMP=0x0010000000003b77
- (id)initForMouseEventsWithDeviceID:(unsigned long long)arg1 atLocation:(struct CGPoint)arg2;	// IMP=0x0010000000003af5
- (id)initForMouseEventsAtLocation:(struct CGPoint)arg1;	// IMP=0x0010000000003ae1
- (id)initForMouseEvents;	// IMP=0x0010000000003abd
- (id)initForTouchAtPoint:(struct CGPoint)arg1 offset:(double)arg2;	// IMP=0x001000000000396b

@end

