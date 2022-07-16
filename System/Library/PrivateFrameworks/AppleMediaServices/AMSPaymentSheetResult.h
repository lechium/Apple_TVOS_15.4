//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSBiometricsSignatureResult, NSString;

__attribute__((visibility("hidden")))
@interface AMSPaymentSheetResult : NSObject
{
    NSString *_delegateAuthenticateToken;	// 8 = 0x8
    NSString *_passwordEquivalentToken;	// 16 = 0x10
    NSString *_paymentToken;	// 24 = 0x18
    AMSBiometricsSignatureResult *_signatureResult;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001c34bf
@property(retain, nonatomic) AMSBiometricsSignatureResult *signatureResult; // @synthesize signatureResult=_signatureResult;
@property(retain, nonatomic) NSString *paymentToken; // @synthesize paymentToken=_paymentToken;
@property(retain, nonatomic) NSString *passwordEquivalentToken; // @synthesize passwordEquivalentToken=_passwordEquivalentToken;
@property(retain, nonatomic) NSString *delegateAuthenticateToken; // @synthesize delegateAuthenticateToken=_delegateAuthenticateToken;

@end

