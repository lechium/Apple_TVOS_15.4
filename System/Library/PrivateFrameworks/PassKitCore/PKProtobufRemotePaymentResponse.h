//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString, PKProtobufPayment;

@interface PKProtobufRemotePaymentResponse : PBCodable <NSCopying>
{
    PKProtobufPayment *_payment;	// 8 = 0x8
    NSString *_remotePaymentRequestIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003a877b
@property(retain, nonatomic) NSString *remotePaymentRequestIdentifier; // @synthesize remotePaymentRequestIdentifier=_remotePaymentRequestIdentifier;
@property(retain, nonatomic) PKProtobufPayment *payment; // @synthesize payment=_payment;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003a86b7
- (unsigned long long)hash;	// IMP=0x00000000003a866a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003a85a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003a8504
- (void)copyTo:(id)arg1;	// IMP=0x00000000003a84a1
- (void)writeTo:(id)arg1;	// IMP=0x00000000003a8444
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003a8437
- (id)dictionaryRepresentation;	// IMP=0x00000000003a819c
- (id)description;	// IMP=0x00000000003a80ed
@property(readonly, nonatomic) _Bool hasRemotePaymentRequestIdentifier;
@property(readonly, nonatomic) _Bool hasPayment;

@end

