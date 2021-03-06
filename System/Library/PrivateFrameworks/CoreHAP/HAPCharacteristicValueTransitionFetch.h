//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, NSString;

@interface HAPCharacteristicValueTransitionFetch : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPTLVUnsignedNumberValue *_HAPInstanceID;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000113dde
- (void).cxx_destruct;	// IMP=0x0000000000113dce
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *HAPInstanceID; // @synthesize HAPInstanceID=_HAPInstanceID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000113c10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000113ba7
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000001139dc
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000011377a
- (id)initWithHAPInstanceID:(id)arg1;	// IMP=0x000000000011370f
- (id)init;	// IMP=0x00000000001136e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

