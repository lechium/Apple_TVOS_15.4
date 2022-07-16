//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPayBillIntent-Protocol.h>

@class NSString, _INPBBillPayeeValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBIntentMetadata, _INPBPaymentAmountValue, _INPBString;

@interface _INPBPayBillIntent : PBCodable <_INPBPayBillIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int billType:1;
    } _has;	// 8 = 0x8
    int _billType;	// 12 = 0xc
    _INPBBillPayeeValue *_billPayee;	// 16 = 0x10
    _INPBDateTimeRange *_dueDate;	// 24 = 0x18
    _INPBFinancialAccountValue *_fromAccount;	// 32 = 0x20
    _INPBIntentMetadata *_intentMetadata;	// 40 = 0x28
    _INPBPaymentAmountValue *_transactionAmount;	// 48 = 0x30
    _INPBString *_transactionNote;	// 56 = 0x38
    _INPBDateTimeRange *_transactionScheduledDate;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001e1774
- (void).cxx_destruct;	// IMP=0x00000000001e124f
@property(retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate; // @synthesize transactionScheduledDate=_transactionScheduledDate;
@property(retain, nonatomic) _INPBString *transactionNote; // @synthesize transactionNote=_transactionNote;
@property(retain, nonatomic) _INPBPaymentAmountValue *transactionAmount; // @synthesize transactionAmount=_transactionAmount;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBFinancialAccountValue *fromAccount; // @synthesize fromAccount=_fromAccount;
@property(retain, nonatomic) _INPBDateTimeRange *dueDate; // @synthesize dueDate=_dueDate;
@property(nonatomic) int billType; // @synthesize billType=_billType;
@property(retain, nonatomic) _INPBBillPayeeValue *billPayee; // @synthesize billPayee=_billPayee;
- (id)dictionaryRepresentation;	// IMP=0x00000000001e0d34
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e0420
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e022f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e019d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e009e
- (void)writeTo:(id)arg1;	// IMP=0x00000000001dfdc3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001dfdb6
@property(readonly, nonatomic) _Bool hasTransactionScheduledDate;
@property(readonly, nonatomic) _Bool hasTransactionNote;
@property(readonly, nonatomic) _Bool hasTransactionAmount;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasFromAccount;
@property(readonly, nonatomic) _Bool hasDueDate;
- (int)StringAsBillType:(id)arg1;	// IMP=0x00000000001df9b4
- (id)billTypeAsString:(int)arg1;	// IMP=0x00000000001df834
@property(nonatomic) _Bool hasBillType;
@property(readonly, nonatomic) _Bool hasBillPayee;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

