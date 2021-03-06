//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, NSString;

@interface HAPHardwareFinish : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPTLVUnsignedNumberValue *_RGBColorValue;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000aae09
- (void).cxx_destruct;	// IMP=0x00000000000aadf9
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *RGBColorValue; // @synthesize RGBColorValue=_RGBColorValue;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000aac3b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000aabd2
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000000aaa07
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000aa7a5
- (id)initWithRGBColorValue:(id)arg1;	// IMP=0x00000000000aa73a
- (id)init;	// IMP=0x00000000000aa70b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

