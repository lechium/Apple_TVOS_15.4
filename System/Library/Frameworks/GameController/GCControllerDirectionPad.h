//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GCControllerAxisInput, GCControllerButtonInput;

@interface GCControllerDirectionPad
{
    _Bool _wasZeroed;	// 8 = 0x8
    int _timesPressed;	// 12 = 0xc
    _Bool _nonAnalog;	// 16 = 0x10
    CDUnknownBlockType _valueChangedHandler;	// 24 = 0x18
    GCControllerAxisInput *_xAxis;	// 32 = 0x20
    GCControllerAxisInput *_yAxis;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000a66c0
@property _Bool nonAnalog; // @synthesize nonAnalog=_nonAnalog;
@property(retain, nonatomic) GCControllerAxisInput *yAxis; // @synthesize yAxis=_yAxis;
@property(retain, nonatomic) GCControllerAxisInput *xAxis; // @synthesize xAxis=_xAxis;
@property(copy, nonatomic) CDUnknownBlockType valueChangedHandler; // @synthesize valueChangedHandler=_valueChangedHandler;
- (void)setUnmappedLocalizedName:(id)arg1;	// IMP=0x00000000000a6200
- (int)getAndResetTimesPressed;	// IMP=0x00000000000a61e9
- (void)setValueForXAxis:(float)arg1 yAxis:(float)arg2;	// IMP=0x00000000000a6005
- (_Bool)_commitPendingValueOnQueue:(id)arg1;	// IMP=0x00000000000a5f8f
@property(readonly, nonatomic) GCControllerButtonInput *right;
@property(readonly, nonatomic) GCControllerButtonInput *left;
@property(readonly, nonatomic) GCControllerButtonInput *down;
@property(readonly, nonatomic) GCControllerButtonInput *up;
- (id)description;	// IMP=0x00000000000a5e31
- (_Bool)isAnalog;	// IMP=0x00000000000a5e1d
- (void)_fireValueChangedWithQueue:(id)arg1;	// IMP=0x00000000000a5ca1
- (void)_fireValueChanged;	// IMP=0x00000000000a5c71
- (id)initWithDigital:(_Bool)arg1 descriptionName:(id)arg2;	// IMP=0x00000000000a5b27
- (id)initWithDigital:(_Bool)arg1;	// IMP=0x00000000000a5b13

@end
