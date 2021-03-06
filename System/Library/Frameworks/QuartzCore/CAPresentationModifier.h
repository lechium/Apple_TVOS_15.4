//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAPresentationModifierGroup, NSString;

@interface CAPresentationModifier : NSObject
{
    void *_impl;	// 8 = 0x8
    id _keyPath;	// 16 = 0x10
    id _value;	// 24 = 0x18
    id _velocity;	// 32 = 0x20
    id _group;	// 40 = 0x28
    int _l;	// 48 = 0x30
    unsigned int _f;	// 52 = 0x34
}

@property(getter=isEnabled) _Bool enabled;
@property(retain) id value;
- (void)write;	// IMP=0x00000000001bd2e3
- (void)setValue:(id)arg1 velocity:(id)arg2;	// IMP=0x00000000001bd208
- (struct Object *)CA_copyRenderValue;	// IMP=0x00000000001bd17e
- (id)debugDescription;	// IMP=0x00000000001bd0fe
@property(readonly) CAPresentationModifierGroup *group;
@property(readonly, copy) NSString *keyPath;
@property(readonly) _Bool additive;
- (void)dealloc;	// IMP=0x00000000001bd052
- (id)init;	// IMP=0x00000000001bd044
- (id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 initialVelocity:(id)arg3 additive:(_Bool)arg4 preferredFrameRateRangeMaximum:(int)arg5 group:(id)arg6;	// IMP=0x00000000001bce00
- (id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(_Bool)arg3 group:(id)arg4;	// IMP=0x00000000001bcddd
- (id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(_Bool)arg3;	// IMP=0x00000000001bcdbc

@end

