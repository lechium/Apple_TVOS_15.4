//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface PKPaymentSendOwnershipTokensRequest
{
    unsigned long long _reason;	// 16 = 0x10
    NSSet *_passOwnershipTokens;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002a820d
@property(retain, nonatomic) NSSet *passOwnershipTokens; // @synthesize passOwnershipTokens=_passOwnershipTokens;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 deviceMetadata:(id)arg3 appleAccountInformation:(id)arg4;	// IMP=0x00000000002a7d8b

@end

