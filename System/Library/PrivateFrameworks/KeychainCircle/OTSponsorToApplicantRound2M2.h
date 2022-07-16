//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <KeychainCircle/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface OTSponsorToApplicantRound2M2 : PBCodable <NSCopying>
{
    NSData *_voucher;	// 8 = 0x8
    NSData *_voucherSignature;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000009d14
@property(retain, nonatomic) NSData *voucherSignature; // @synthesize voucherSignature=_voucherSignature;
@property(retain, nonatomic) NSData *voucher; // @synthesize voucher=_voucher;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000009c67
- (unsigned long long)hash;	// IMP=0x0000000000009c1a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000009b52
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009ab4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000009a51
- (void)writeTo:(id)arg1;	// IMP=0x00000000000099f4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000099e7
- (id)dictionaryRepresentation;	// IMP=0x0000000000009964
- (id)description;	// IMP=0x00000000000098b5
@property(readonly, nonatomic) _Bool hasVoucherSignature;
@property(readonly, nonatomic) _Bool hasVoucher;

@end
