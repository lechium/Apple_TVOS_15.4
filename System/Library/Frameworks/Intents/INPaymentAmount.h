//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCurrencyAmount, NSString;

@interface INPaymentAmount : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    INCurrencyAmount *_amount;	// 8 = 0x8
    long long _amountType;	// 16 = 0x10
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x0000000000057e56
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000057e4e
- (void).cxx_destruct;	// IMP=0x0000000000057e3e
@property(readonly, nonatomic) long long amountType; // @synthesize amountType=_amountType;
@property(readonly, copy, nonatomic) INCurrencyAmount *amount; // @synthesize amount=_amount;
- (id)_dictionaryRepresentation;	// IMP=0x0000000000057d24
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x0000000000057c48
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x0000000000057aed
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000057a7b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000579d2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000579c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000057929
@property(readonly) unsigned long long hash;
- (id)initWithAmountType:(long long)arg1 amount:(id)arg2;	// IMP=0x0000000000057835
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;	// IMP=0x00000000000865be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
