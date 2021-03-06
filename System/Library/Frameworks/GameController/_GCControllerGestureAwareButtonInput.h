//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, _GCSetValueEvent;

@interface _GCControllerGestureAwareButtonInput
{
    NSMutableArray *_doublePressEventQueue;	// 8 = 0x8
    _GCSetValueEvent *_longPressDownEvent;	// 16 = 0x10
    _GCSetValueEvent *_singlePressDownEvent;	// 24 = 0x18
    float _realValue;	// 32 = 0x20
    int _requiredDoublePressCount;	// 36 = 0x24
    _Bool _useActualSystemGestureState;	// 40 = 0x28
    long long _actualSystemGestureState;	// 48 = 0x30
    _Bool _inputDisabledBySystem;	// 56 = 0x38
    _Bool _longPressMuted;	// 57 = 0x39
    _Bool _doublePressMuted;	// 58 = 0x3a
    _Bool _singlePressMuted;	// 59 = 0x3b
    _Bool _enabled;	// 60 = 0x3c
    float _longPressInterval;	// 64 = 0x40
    float _singlePressInterval;	// 68 = 0x44
    float _doublePressInterval;	// 72 = 0x48
    long long _preferredSystemGestureState;	// 80 = 0x50
    CDUnknownBlockType _longPressHandler;	// 88 = 0x58
    CDUnknownBlockType _doublePressHandler;	// 96 = 0x60
    CDUnknownBlockType _singlePressHandler;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000003718f
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isSinglePressMuted) _Bool singlePressMuted; // @synthesize singlePressMuted=_singlePressMuted;
@property(nonatomic, getter=isDoublePressMuted) _Bool doublePressMuted; // @synthesize doublePressMuted=_doublePressMuted;
@property(nonatomic, getter=isLongPressMuted) _Bool longPressMuted; // @synthesize longPressMuted=_longPressMuted;
@property(copy, nonatomic) CDUnknownBlockType singlePressHandler; // @synthesize singlePressHandler=_singlePressHandler;
@property(copy, nonatomic) CDUnknownBlockType doublePressHandler; // @synthesize doublePressHandler=_doublePressHandler;
@property(copy, nonatomic) CDUnknownBlockType longPressHandler; // @synthesize longPressHandler=_longPressHandler;
@property(nonatomic) float doublePressInterval; // @synthesize doublePressInterval=_doublePressInterval;
@property(nonatomic) float singlePressInterval; // @synthesize singlePressInterval=_singlePressInterval;
@property(nonatomic) float longPressInterval; // @synthesize longPressInterval=_longPressInterval;
- (void)__onqueue_executeSinglePressRecognizerForEvent:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000036b99
- (void)__onqueue_executeLongPressRecognizerForEvent:(id)arg1 queue:(id)arg2;	// IMP=0x000000000003633b
- (void)__onqueue_executeDoublePressRecognizerForEvent:(id)arg1 queue:(id)arg2;	// IMP=0x000000000003597a
- (void)__onqueue_forwardEvent:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000357bc
- (void)registerSetValueEvent:(float)arg1 queue:(id)arg2;	// IMP=0x000000000003530c
- (_Bool)_commitPendingValueOnQueue:(id)arg1;	// IMP=0x000000000003526a
- (void)setValue:(float)arg1;	// IMP=0x000000000003512b
- (_Bool)_setValue:(float)arg1 queue:(id)arg2;	// IMP=0x0000000000035037
- (long long)preferredSystemGestureState;	// IMP=0x0000000000035026
- (void)setPreferredSystemGestureState:(long long)arg1;	// IMP=0x0000000000034f05
@property(nonatomic) long long actualSystemGestureState;
@property(nonatomic) _Bool inputDisabledBySystem; // @synthesize inputDisabledBySystem=_inputDisabledBySystem;
- (_Bool)isLongPressGestureRecognizerEnabled;	// IMP=0x0000000000034c73
- (_Bool)isDoublePressGestureRecognizerEnabled;	// IMP=0x0000000000034c4d
- (_Bool)isSinglePressGestureRecognizerEnabled;	// IMP=0x0000000000034c27
- (id)initWithDescriptionName:(id)arg1;	// IMP=0x0000000000034b52

@end

