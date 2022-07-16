//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentValidating-Protocol.h>

@class NSString, PKPaymentRequest;

@interface PKPaymentRequestValidator : NSObject <PKPaymentValidating>
{
    PKPaymentRequest *_request;	// 8 = 0x8
}

+ (Class)validatedClass;	// IMP=0x000000000027ebcf
+ (id)validatorWithObject:(id)arg1;	// IMP=0x000000000027eb7e
- (void).cxx_destruct;	// IMP=0x0000000000282d0e
- (_Bool)isValidWithAPIType:(unsigned long long)arg1 withError:(id *)arg2;	// IMP=0x000000000027ee82
- (_Bool)isValidWithError:(id *)arg1;	// IMP=0x000000000027ee3e
- (_Bool)_checkTotal:(id)arg1 withAPIType:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000027ec4b
- (id)initWithPaymentRequest:(id)arg1;	// IMP=0x000000000027ebe0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

