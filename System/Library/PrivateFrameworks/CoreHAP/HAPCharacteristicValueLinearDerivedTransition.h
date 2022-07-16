//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPCharacteristicValueRange, HAPTLVUnsignedNumberValue, NSMutableArray, NSString;

@interface HAPCharacteristicValueLinearDerivedTransition : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_transitionPoints;	// 8 = 0x8
    HAPTLVUnsignedNumberValue *_sourceHAPInstanceID;	// 16 = 0x10
    HAPCharacteristicValueRange *_sourceValueRange;	// 24 = 0x18
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010e40a
- (void).cxx_destruct;	// IMP=0x000000000010c63e
@property(retain, nonatomic) HAPCharacteristicValueRange *sourceValueRange; // @synthesize sourceValueRange=_sourceValueRange;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *sourceHAPInstanceID; // @synthesize sourceHAPInstanceID=_sourceHAPInstanceID;
@property(retain, nonatomic) NSMutableArray *transitionPoints; // @synthesize transitionPoints=_transitionPoints;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010c242
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010c18a
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000010bba3
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010b6a2
- (id)initWithTransitionPoints:(id)arg1 sourceHAPInstanceID:(id)arg2 sourceValueRange:(id)arg3;	// IMP=0x000000000010b5de
- (id)init;	// IMP=0x000000000010b5af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

