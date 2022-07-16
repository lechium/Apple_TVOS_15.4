//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPCharacteristicValueLinearDerivedTransition, HAPCharacteristicValueLinearTransition, HAPCharacteristicValueTransitionEndBehaviorWrapper, HAPTLVUnsignedNumberValue, NSData, NSString;

@interface HAPCharacteristicValueTransition : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPTLVUnsignedNumberValue *_HAPInstanceID;	// 8 = 0x8
    NSData *_controllerContext;	// 16 = 0x10
    HAPCharacteristicValueTransitionEndBehaviorWrapper *_endBehavior;	// 24 = 0x18
    HAPCharacteristicValueLinearTransition *_linearTransition;	// 32 = 0x20
    HAPCharacteristicValueLinearDerivedTransition *_linearDerivedTransition;	// 40 = 0x28
    HAPTLVUnsignedNumberValue *_valueUpdateTimeInterval;	// 48 = 0x30
    NSData *_notifyValueChangeThreshold;	// 56 = 0x38
    HAPTLVUnsignedNumberValue *_notifyTimeIntervalThreshold;	// 64 = 0x40
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001120ee
- (void).cxx_destruct;	// IMP=0x0000000000112084
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *notifyTimeIntervalThreshold; // @synthesize notifyTimeIntervalThreshold=_notifyTimeIntervalThreshold;
@property(retain, nonatomic) NSData *notifyValueChangeThreshold; // @synthesize notifyValueChangeThreshold=_notifyValueChangeThreshold;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *valueUpdateTimeInterval; // @synthesize valueUpdateTimeInterval=_valueUpdateTimeInterval;
@property(retain, nonatomic) HAPCharacteristicValueLinearDerivedTransition *linearDerivedTransition; // @synthesize linearDerivedTransition=_linearDerivedTransition;
@property(retain, nonatomic) HAPCharacteristicValueLinearTransition *linearTransition; // @synthesize linearTransition=_linearTransition;
@property(retain, nonatomic) HAPCharacteristicValueTransitionEndBehaviorWrapper *endBehavior; // @synthesize endBehavior=_endBehavior;
@property(retain, nonatomic) NSData *controllerContext; // @synthesize controllerContext=_controllerContext;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *HAPInstanceID; // @synthesize HAPInstanceID=_HAPInstanceID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000111666
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001114f3
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000110b90
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001102af
- (id)initWithHAPInstanceID:(id)arg1 controllerContext:(id)arg2 endBehavior:(id)arg3 linearTransition:(id)arg4 linearDerivedTransition:(id)arg5 valueUpdateTimeInterval:(id)arg6 notifyValueChangeThreshold:(id)arg7 notifyTimeIntervalThreshold:(id)arg8;	// IMP=0x0000000000110150
- (id)init;	// IMP=0x0000000000110121

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

