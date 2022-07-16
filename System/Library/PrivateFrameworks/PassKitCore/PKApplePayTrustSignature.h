//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, PKApplePayTrustSignatureRequest;

@interface PKApplePayTrustSignature : NSObject <NSSecureCoding>
{
    PKApplePayTrustSignatureRequest *_signatureRequest;	// 8 = 0x8
    NSData *_signatureData;	// 16 = 0x10
    NSData *_paymentData;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000278f9e
- (void).cxx_destruct;	// IMP=0x0000000000278fc4
@property(readonly, copy, nonatomic) NSData *paymentData; // @synthesize paymentData=_paymentData;
@property(readonly, copy, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
@property(readonly, nonatomic) PKApplePayTrustSignatureRequest *signatureRequest; // @synthesize signatureRequest=_signatureRequest;
- (id)description;	// IMP=0x0000000000278f01
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000278ede
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000278e4d
- (id)initWithSignatureRequest:(id)arg1 signature:(id)arg2;	// IMP=0x0000000000278db4

@end

