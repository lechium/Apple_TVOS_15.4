//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCurrencyAmount, INPaymentMethod, INPerson, NSString;

@interface INPaymentRecord : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>
{
    INPerson *_payee;	// 8 = 0x8
    INPerson *_payer;	// 16 = 0x10
    INCurrencyAmount *_currencyAmount;	// 24 = 0x18
    NSString *_note;	// 32 = 0x20
    long long _status;	// 40 = 0x28
    INPaymentMethod *_paymentMethod;	// 48 = 0x30
    INCurrencyAmount *_feeAmount;	// 56 = 0x38
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x000000000024f6f0
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000024f6e8
- (void).cxx_destruct;	// IMP=0x000000000024f694
@property(readonly, copy, nonatomic) INCurrencyAmount *feeAmount; // @synthesize feeAmount=_feeAmount;
@property(readonly, copy, nonatomic) INPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *note; // @synthesize note=_note;
@property(readonly, copy, nonatomic) INCurrencyAmount *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
@property(readonly, copy, nonatomic) INPerson *payer; // @synthesize payer=_payer;
@property(readonly, copy, nonatomic) INPerson *payee; // @synthesize payee=_payee;
- (id)_dictionaryRepresentation;	// IMP=0x000000000024f384
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x000000000024f2a8
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x000000000024f002
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000024ef2d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000024ed5b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024ed50
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024ec10
@property(readonly) unsigned long long hash;
- (id)initWithPayee:(id)arg1 payer:(id)arg2 currencyAmount:(id)arg3 paymentMethod:(id)arg4 note:(id)arg5 status:(long long)arg6;	// IMP=0x000000000024eb13
- (id)initWithPayee:(id)arg1 payer:(id)arg2 currencyAmount:(id)arg3 paymentMethod:(id)arg4 note:(id)arg5 status:(long long)arg6 feeAmount:(id)arg7;	// IMP=0x000000000024e9ac
- (void)_intents_updateContainerWithCache:(id)arg1;	// IMP=0x0000000000138542
- (id)_intents_cacheableObjects;	// IMP=0x00000000001383e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

