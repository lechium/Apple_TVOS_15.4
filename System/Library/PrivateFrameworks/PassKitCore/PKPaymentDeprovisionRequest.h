//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPaymentPass;

@interface PKPaymentDeprovisionRequest
{
    PKPaymentPass *_pass;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002b1c23
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;	// IMP=0x00000000002b1a5b
- (id)initWithPaymentPass:(id)arg1;	// IMP=0x00000000002b19ed

@end

