//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GCControllerButtonInput
{
    int _pressCounter;	// 8 = 0x8
    _Bool _touched;	// 12 = 0xc
    _Bool _touchedAndValueDistinct;	// 13 = 0xd
    _Bool _nonAnalog;	// 14 = 0xe
    float _deadzone;	// 16 = 0x10
    float _value;	// 20 = 0x14
    CDUnknownBlockType _valueChangedHandler;	// 24 = 0x18
    CDUnknownBlockType _pressedChangedHandler;	// 32 = 0x20
    CDUnknownBlockType _touchedChangedHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006af7e
@property _Bool nonAnalog; // @synthesize nonAnalog=_nonAnalog;
@property(nonatomic, getter=areTouchedAndValueDistinct) _Bool touchedAndValueDistinct; // @synthesize touchedAndValueDistinct=_touchedAndValueDistinct;
@property(readonly, nonatomic, getter=isTouched) _Bool touched; // @synthesize touched=_touched;
@property(readonly, nonatomic) float value; // @synthesize value=_value;
@property(copy, nonatomic) CDUnknownBlockType touchedChangedHandler; // @synthesize touchedChangedHandler=_touchedChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType pressedChangedHandler; // @synthesize pressedChangedHandler=_pressedChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType valueChangedHandler; // @synthesize valueChangedHandler=_valueChangedHandler;
@property(nonatomic) float deadzone; // @synthesize deadzone=_deadzone;
- (void)setValue:(float)arg1;	// IMP=0x000000000006ad1d
- (id)description;	// IMP=0x000000000006ac7b
@property(readonly, nonatomic, getter=isPressed) _Bool pressed;
- (int)getAndResetTimesPressed;	// IMP=0x000000000006ac1f
- (_Bool)_setTouched:(_Bool)arg1 queue:(id)arg2;	// IMP=0x000000000006aacc
- (_Bool)_setTouched:(_Bool)arg1;	// IMP=0x000000000006aa8d
- (_Bool)_setValue:(float)arg1 queue:(id)arg2;	// IMP=0x000000000006a735
- (_Bool)_setValue:(float)arg1;	// IMP=0x000000000006a6f3
- (_Bool)isAnalog;	// IMP=0x000000000006a6df
- (id)initWithDescriptionName:(id)arg1;	// IMP=0x000000000006a626

@end

