//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PKPaymentCredentialMetadataCurrency
{
    NSString *_currencyCode;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000208b7b
@property(readonly, copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
- (unsigned long long)hash;	// IMP=0x0000000000208af1
- (_Bool)_isEqualToMetadata:(id)arg1;	// IMP=0x0000000000208a2c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002089c5
- (id)displayString;	// IMP=0x0000000000208913
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000208819

@end

