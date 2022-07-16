//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMescalFairPlay, AMSURLSession, NSData;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSMescalSession : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSData *_certificateData;	// 16 = 0x10
    AMSURLSession *_urlSession;	// 24 = 0x18
    AMSMescalFairPlay *_fairPlayContext;	// 32 = 0x20
    long long _mescalType;	// 40 = 0x28
}

+ (id)sessionWithType:(long long)arg1;	// IMP=0x000000000017faee
+ (id)primeSession;	// IMP=0x000000000017fa84
+ (id)defaultSession;	// IMP=0x000000000017fa1a
- (void).cxx_destruct;	// IMP=0x00000000001831df
- (_Bool)_verifyEntitlements;	// IMP=0x0000000000183173
- (_Bool)_shouldRetryFairPlayForError:(id)arg1;	// IMP=0x00000000001830e4
- (void)_resetSession;	// IMP=0x00000000001830ba
- (id)_postExchangeData:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000182c01
- (id)_loadCertificateDataWithBag:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001826ab
- (id)_establishContextWithBag:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000182109
- (id)_cachedCertPath;	// IMP=0x0000000000181fcb
- (id)_cachedCertData;	// IMP=0x0000000000181ac0
- (_Bool)_cacheCertData:(id)arg1 expiration:(double)arg2;	// IMP=0x0000000000181431
- (_Bool)verifyPrimeSignature:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001810a4
- (_Bool)verifyData:(id)arg1 withSignature:(id)arg2 bag:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000180972
- (id)signData:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001802c0
- (id)primeSignatureForData:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x000000000017fb36
- (id)initWithType:(long long)arg1;	// IMP=0x000000000017f988

@end

