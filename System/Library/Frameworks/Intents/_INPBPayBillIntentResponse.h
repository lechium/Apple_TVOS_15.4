//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPayBillIntentResponse-Protocol.h>

@class NSString, _INPBBillDetailsValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBPaymentAmountValue, _INPBString;

@interface _INPBPayBillIntentResponse : PBCodable <_INPBPayBillIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBBillDetailsValue *_billDetails;	// 8 = 0x8
    _INPBFinancialAccountValue *_fromAccount;	// 16 = 0x10
    _INPBPaymentAmountValue *_transactionAmount;	// 24 = 0x18
    _INPBString *_transactionNote;	// 32 = 0x20
    _INPBDateTimeRange *_transactionScheduledDate;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002b5be0
- (void).cxx_destruct;	// IMP=0x00000000002b583a
@property(retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate; // @synthesize transactionScheduledDate=_transactionScheduledDate;
@property(retain, nonatomic) _INPBString *transactionNote; // @synthesize transactionNote=_transactionNote;
@property(retain, nonatomic) _INPBPaymentAmountValue *transactionAmount; // @synthesize transactionAmount=_transactionAmount;
@property(retain, nonatomic) _INPBFinancialAccountValue *fromAccount; // @synthesize fromAccount=_fromAccount;
@property(retain, nonatomic) _INPBBillDetailsValue *billDetails; // @synthesize billDetails=_billDetails;
- (id)dictionaryRepresentation;	// IMP=0x00000000002b55dd
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b4f7c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002b4e20
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002b4d8e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002b4c8f
- (void)writeTo:(id)arg1;	// IMP=0x00000000002b4a98
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002b4a8b
@property(readonly, nonatomic) _Bool hasTransactionScheduledDate;
@property(readonly, nonatomic) _Bool hasTransactionNote;
@property(readonly, nonatomic) _Bool hasTransactionAmount;
@property(readonly, nonatomic) _Bool hasFromAccount;
@property(readonly, nonatomic) _Bool hasBillDetails;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

