//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, PKPaymentRequest;

@interface PKPaymentAuthorizationRequest : NSObject
{
    NSData *_credential;	// 8 = 0x8
    NSData *_nonceData;	// 16 = 0x10
    PKPaymentRequest *_paymentRequest;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004076e9
@property(readonly, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
@property(retain, nonatomic) NSData *nonceData; // @synthesize nonceData=_nonceData;
@property(retain, nonatomic) NSData *credential; // @synthesize credential=_credential;
- (id)initWithPaymentRequest:(id)arg1;	// IMP=0x000000000040763e

@end

