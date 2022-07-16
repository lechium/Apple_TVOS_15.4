//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PKPaymentNonceRequest
{
    _Bool _useLegacyGetAPI;	// 64 = 0x40
    NSString *_merchantIdentifier;	// 72 = 0x48
}

+ (id)nonceRequestWithBaseRequest:(id)arg1;	// IMP=0x00000000002b4c4c
- (void).cxx_destruct;	// IMP=0x00000000002b4fb0
@property(nonatomic) _Bool useLegacyGetAPI; // @synthesize useLegacyGetAPI=_useLegacyGetAPI;
@property(copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
- (id)bodyDictionary;	// IMP=0x00000000002b4e42
- (id)endpointComponents;	// IMP=0x00000000002b4dd3
- (id)_legacyGetURLRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;	// IMP=0x00000000002b4a1f

@end
