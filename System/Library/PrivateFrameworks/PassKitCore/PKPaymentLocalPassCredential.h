//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PKPaymentPass;

@interface PKPaymentLocalPassCredential
{
    NSString *_serialNumber;	// 80 = 0x50
    NSString *_passTypeIdentifier;	// 88 = 0x58
    PKPaymentPass *_paymentPass;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001a83e7
@property(readonly, copy, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property(copy, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (id)description;	// IMP=0x00000000001a82f0
- (unsigned long long)hash;	// IMP=0x00000000001a8281
- (_Bool)_isEqualToCredential:(id)arg1;	// IMP=0x00000000001a81ea
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a8183
@property(readonly, copy, nonatomic) NSString *summaryMetadataDescription;
- (id)initWithPaymentPass:(id)arg1;	// IMP=0x00000000001a7efc
- (id)init;	// IMP=0x00000000001a7ee8

@end

