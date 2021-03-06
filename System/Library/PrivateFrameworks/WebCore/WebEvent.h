//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WebEvent : NSObject
{
    int _type;	// 8 = 0x8
    double _timestamp;	// 16 = 0x10
    struct CGPoint _locationInWindow;	// 24 = 0x18
    NSString *_characters;	// 40 = 0x28
    NSString *_charactersIgnoringModifiers;	// 48 = 0x30
    unsigned int _modifierFlags;	// 56 = 0x38
    _Bool _keyRepeating;	// 60 = 0x3c
    unsigned long long _keyboardFlags;	// 64 = 0x40
    NSString *_inputManagerHint;	// 72 = 0x48
    unsigned short _keyCode;	// 80 = 0x50
    _Bool _tabKey;	// 82 = 0x52
    float _deltaX;	// 84 = 0x54
    float _deltaY;	// 88 = 0x58
    unsigned int _touchCount;	// 92 = 0x5c
    NSArray *_touchLocations;	// 96 = 0x60
    NSArray *_touchIdentifiers;	// 104 = 0x68
    NSArray *_touchPhases;	// 112 = 0x70
    _Bool _isGesture;	// 120 = 0x78
    float _gestureScale;	// 124 = 0x7c
    float _gestureRotation;	// 128 = 0x80
    _Bool _wasHandled;	// 132 = 0x84
}

+ (unsigned int)modifierFlags;	// IMP=0x0000000002014f60
@property(nonatomic) _Bool wasHandled; // @synthesize wasHandled=_wasHandled;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) float gestureRotation;
@property(readonly, nonatomic) float gestureScale;
@property(readonly, nonatomic) _Bool isGesture;
@property(readonly, retain, nonatomic) NSArray *touchPhases;
@property(readonly, retain, nonatomic) NSArray *touchIdentifiers;
@property(readonly, retain, nonatomic) NSArray *touchLocations;
@property(readonly, nonatomic) unsigned int touchCount;
@property(readonly, nonatomic) float deltaY;
@property(readonly, nonatomic) float deltaX;
@property(readonly, nonatomic, getter=isTabKey) _Bool tabKey;
@property(readonly, nonatomic) unsigned short keyCode;
@property(readonly, nonatomic) unsigned long long keyboardFlags;
@property(readonly, nonatomic, getter=isKeyRepeating) _Bool keyRepeating;
@property(readonly, nonatomic) unsigned int modifierFlags;
@property(readonly, retain, nonatomic) NSString *inputManagerHint;
@property(readonly, retain, nonatomic) NSString *charactersIgnoringModifiers;
@property(readonly, retain, nonatomic) NSString *characters;
@property(readonly, nonatomic) struct CGPoint locationInWindow;
- (id)description;	// IMP=0x0000000002014d50
- (id)_eventDescription;	// IMP=0x0000000002014b20
- (id)_touchPhasesDescription;	// IMP=0x00000000020148d0
- (id)_touchPhaseDescription:(int)arg1;	// IMP=0x0000000002014870
- (id)_touchIdentifiersDescription;	// IMP=0x0000000002014640
- (id)_touchLocationsDescription:(id)arg1;	// IMP=0x0000000002014410
- (id)_modiferFlagsDescription;	// IMP=0x0000000002014360
- (id)_typeDescription;	// IMP=0x00000000020142b0
- (void)dealloc;	// IMP=0x0000000002014240
- (id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned int)arg5 isRepeating:(_Bool)arg6 withFlags:(unsigned long long)arg7 withInputManagerHint:(id)arg8 keyCode:(unsigned short)arg9 isTabKey:(_Bool)arg10;	// IMP=0x0000000002013de0
- (id)initWithTouchEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint)arg3 modifiers:(unsigned int)arg4 touchCount:(unsigned int)arg5 touchLocations:(id)arg6 touchIdentifiers:(id)arg7 touchPhases:(id)arg8 isGesture:(_Bool)arg9 gestureScale:(float)arg10 gestureRotation:(float)arg11;	// IMP=0x0000000002013ce0
- (id)initWithScrollWheelEventWithTimeStamp:(double)arg1 location:(struct CGPoint)arg2 deltaX:(float)arg3 deltaY:(float)arg4;	// IMP=0x0000000002013c50
- (id)initWithMouseEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint)arg3 modifiers:(unsigned int)arg4;	// IMP=0x0000000002013bd0
- (id)initWithMouseEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint)arg3;	// IMP=0x0000000002013bb0

@end

