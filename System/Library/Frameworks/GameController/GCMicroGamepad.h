//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/NSSecureCoding-Protocol.h>

@class GCController, GCControllerButtonInput, GCControllerDirectionPad;

@interface GCMicroGamepad <NSSecureCoding>
{
    CDUnknownBlockType _valueChangedHandler;	// 32 = 0x20
    long long _deviceType;	// 40 = 0x28
    _Bool _reportsAbsoluteDpadValues;	// 48 = 0x30
    _Bool _allowsRotation;	// 49 = 0x31
    GCControllerButtonInput *_button0;	// 56 = 0x38
    GCControllerButtonInput *_button1;	// 64 = 0x40
    GCControllerDirectionPad *_dpad;	// 72 = 0x48
    GCControllerButtonInput *_buttonMenu;	// 80 = 0x50
}

+ (id)_current;	// IMP=0x000000000009282e
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000919fe
- (void).cxx_destruct;	// IMP=0x0000000000092aeb
@property(nonatomic) _Bool allowsRotation; // @synthesize allowsRotation=_allowsRotation;
@property(nonatomic) _Bool reportsAbsoluteDpadValues; // @synthesize reportsAbsoluteDpadValues=_reportsAbsoluteDpadValues;
@property(readonly, nonatomic) GCControllerButtonInput *buttonMenu; // @synthesize buttonMenu=_buttonMenu;
@property(readonly, nonatomic) GCControllerDirectionPad *dpad; // @synthesize dpad=_dpad;
@property(copy, nonatomic) CDUnknownBlockType valueChangedHandler; // @synthesize valueChangedHandler=_valueChangedHandler;
@property(readonly, nonatomic) GCControllerButtonInput *buttonX; // @synthesize buttonX=_button1;
@property(readonly, nonatomic) GCControllerButtonInput *buttonA; // @synthesize buttonA=_button0;
- (void)_triggerValueChangedHandlerForElement:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000092885
- (void)setStateFromMicroGamepad:(id)arg1;	// IMP=0x000000000009203f
- (id)name;	// IMP=0x0000000000092032
- (id)saveSnapshot;	// IMP=0x0000000000091e72
- (id)buttonB;	// IMP=0x0000000000091e60
- (id)button1;	// IMP=0x0000000000091e4e
- (id)button0;	// IMP=0x0000000000091e3c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000091dad
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000091ce5
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000091a06
- (void)setLastEventTimestamp:(double)arg1;	// IMP=0x000000000009d07b
- (void)handleEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000000009c411
- (void)microControllerWithDigitizerX:(float)arg1 digitizerY:(float)arg2 timestamp:(unsigned long long)arg3 touchDown:(_Bool)arg4;	// IMP=0x000000000009bf20
- (id)productCategory;	// IMP=0x000000000009be30
- (_Bool)supportsDpadTaps;	// IMP=0x000000000009bdec

// Remaining properties
@property(readonly, nonatomic) __weak GCController *controller; // @dynamic controller;

@end

