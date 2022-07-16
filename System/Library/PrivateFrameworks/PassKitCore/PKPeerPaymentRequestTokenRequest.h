//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDecimalNumber, NSString;

@interface PKPeerPaymentRequestTokenRequest
{
    NSString *_recipientIdentifier;	// 16 = 0x10
    NSDecimalNumber *_amount;	// 24 = 0x18
    NSString *_currency;	// 32 = 0x20
    NSString *_senderAddress;	// 40 = 0x28
    unsigned long long _source;	// 48 = 0x30
    NSString *_recipientPhoneOrEmail;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003e638c
@property(copy, nonatomic) NSString *recipientPhoneOrEmail; // @synthesize recipientPhoneOrEmail=_recipientPhoneOrEmail;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *senderAddress; // @synthesize senderAddress=_senderAddress;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *recipientIdentifier; // @synthesize recipientIdentifier=_recipientIdentifier;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5;	// IMP=0x00000000003e5aa9

@end

