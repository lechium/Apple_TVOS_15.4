//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INBillPayee, INCurrencyAmount, NSDateComponents, NSString;

@interface INBillDetails : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    INBillPayee *_billPayee;	// 8 = 0x8
    INCurrencyAmount *_amountDue;	// 16 = 0x10
    INCurrencyAmount *_minimumDue;	// 24 = 0x18
    INCurrencyAmount *_lateFee;	// 32 = 0x20
    NSDateComponents *_dueDate;	// 40 = 0x28
    NSDateComponents *_paymentDate;	// 48 = 0x30
    long long _billType;	// 56 = 0x38
    long long _paymentStatus;	// 64 = 0x40
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00000000000d7e50
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d7e48
- (void).cxx_destruct;	// IMP=0x00000000000d7df4
@property(nonatomic) long long paymentStatus; // @synthesize paymentStatus=_paymentStatus;
@property(nonatomic) long long billType; // @synthesize billType=_billType;
@property(copy, nonatomic) NSDateComponents *paymentDate; // @synthesize paymentDate=_paymentDate;
@property(copy, nonatomic) NSDateComponents *dueDate; // @synthesize dueDate=_dueDate;
@property(copy, nonatomic) INCurrencyAmount *lateFee; // @synthesize lateFee=_lateFee;
@property(copy, nonatomic) INCurrencyAmount *minimumDue; // @synthesize minimumDue=_minimumDue;
@property(copy, nonatomic) INCurrencyAmount *amountDue; // @synthesize amountDue=_amountDue;
@property(copy, nonatomic) INBillPayee *billPayee; // @synthesize billPayee=_billPayee;
- (id)_dictionaryRepresentation;	// IMP=0x00000000000d7a0c
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000000d7930
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00000000000d7674
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d7588
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d73a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d7396
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d724e
@property(readonly) unsigned long long hash;
- (id)initWithBillType:(long long)arg1 paymentStatus:(long long)arg2 billPayee:(id)arg3 amountDue:(id)arg4 minimumDue:(id)arg5 lateFee:(id)arg6 dueDate:(id)arg7 paymentDate:(id)arg8;	// IMP=0x00000000000d6fb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

