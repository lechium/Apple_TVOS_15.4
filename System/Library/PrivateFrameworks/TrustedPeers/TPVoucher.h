//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface TPVoucher : NSObject
{
    unsigned long long _reason;	// 8 = 0x8
    NSString *_beneficiaryID;	// 16 = 0x10
    NSString *_sponsorID;	// 24 = 0x18
    NSData *_data;	// 32 = 0x20
    NSData *_sig;	// 40 = 0x28
}

+ (id)voucherInfoWithData:(id)arg1 sig:(id)arg2;	// IMP=0x00000000000202ba
+ (id)voucherWithReason:(unsigned long long)arg1 beneficiaryID:(id)arg2 sponsorID:(id)arg3 signingKeyPair:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000200f4
- (void).cxx_destruct;	// IMP=0x00000000000200b6
@property(retain, nonatomic) NSData *sig; // @synthesize sig=_sig;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *sponsorID; // @synthesize sponsorID=_sponsorID;
@property(retain, nonatomic) NSString *beneficiaryID; // @synthesize beneficiaryID=_beneficiaryID;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ffcf
- (_Bool)isEqualToVoucher:(id)arg1;	// IMP=0x000000000001fec5
- (id)description;	// IMP=0x000000000001fe56
- (id)dictionaryRepresentation;	// IMP=0x000000000001fdcc
- (id)createRecoveryECPublicKey:(id)arg1;	// IMP=0x000000000001fd08
- (_Bool)checkSignatureWithKey:(id)arg1;	// IMP=0x000000000001fc6e
- (id)initWithObj:(id)arg1 data:(id)arg2 sig:(id)arg3;	// IMP=0x000000000001fad7

@end
