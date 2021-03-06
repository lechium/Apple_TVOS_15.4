//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString;

@interface PKProtobufPeerPaymentMessage : PBCodable <NSCopying>
{
    long long _amount;	// 8 = 0x8
    NSString *_currency;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_memo;	// 32 = 0x20
    NSString *_paymentIdentifier;	// 40 = 0x28
    NSString *_recipientAddress;	// 48 = 0x30
    NSString *_requestDeviceScoreIdentifier;	// 56 = 0x38
    NSString *_requestToken;	// 64 = 0x40
    NSString *_senderAddress;	// 72 = 0x48
    NSString *_transactionIdentifier;	// 80 = 0x50
    int _type;	// 88 = 0x58
    unsigned int _version;	// 92 = 0x5c
    CDStruct_9fb36b4c _has;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000fb7a8
@property(retain, nonatomic) NSString *requestDeviceScoreIdentifier; // @synthesize requestDeviceScoreIdentifier=_requestDeviceScoreIdentifier;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(retain, nonatomic) NSString *paymentIdentifier; // @synthesize paymentIdentifier=_paymentIdentifier;
@property(retain, nonatomic) NSString *requestToken; // @synthesize requestToken=_requestToken;
@property(retain, nonatomic) NSString *recipientAddress; // @synthesize recipientAddress=_recipientAddress;
@property(retain, nonatomic) NSString *senderAddress; // @synthesize senderAddress=_senderAddress;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000fb494
- (unsigned long long)hash;	// IMP=0x00000000000fb317
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fb065
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fae63
- (void)copyTo:(id)arg1;	// IMP=0x00000000000faccd
- (void)writeTo:(id)arg1;	// IMP=0x00000000000fab41
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000fab34
- (id)dictionaryRepresentation;	// IMP=0x00000000000fa432
- (id)description;	// IMP=0x00000000000fa383
@property(readonly, nonatomic) _Bool hasRequestDeviceScoreIdentifier;
@property(readonly, nonatomic) _Bool hasMemo;
@property(readonly, nonatomic) _Bool hasTransactionIdentifier;
@property(readonly, nonatomic) _Bool hasPaymentIdentifier;
@property(readonly, nonatomic) _Bool hasRequestToken;
@property(readonly, nonatomic) _Bool hasRecipientAddress;
@property(readonly, nonatomic) _Bool hasSenderAddress;
@property(nonatomic) _Bool hasAmount;
@property(readonly, nonatomic) _Bool hasCurrency;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000000fa203
- (id)typeAsString:(int)arg1;	// IMP=0x00000000000fa19d
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

