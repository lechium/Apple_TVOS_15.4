//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSArray, NSDictionary, NSString;

@interface IDSIDQueryMessage : FTIDSMessage
{
    _Bool _resultExpected;	// 232 = 0xe8
    NSArray *_uris;	// 240 = 0xf0
    NSString *_weight;	// 248 = 0xf8
    NSDictionary *_responseIdentities;	// 256 = 0x100
    NSString *_requiredForMessaging;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x00000000003744a0
@property _Bool resultExpected; // @synthesize resultExpected=_resultExpected;
@property(copy) NSString *requiredForMessaging; // @synthesize requiredForMessaging=_requiredForMessaging;
@property(copy) NSDictionary *responseIdentities; // @synthesize responseIdentities=_responseIdentities;
@property(copy) NSString *weight; // @synthesize weight=_weight;
@property(copy, setter=setURIs:) NSArray *uris; // @synthesize uris=_uris;
- (double)anisetteHeadersTimeout;	// IMP=0x0010000000374260
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x0010000000374180
- (void)handleResponseHeaders:(id)arg1;	// IMP=0x0010000000374140
- (_Bool)requiresPushTokenKeys;	// IMP=0x0010000000374120
- (_Bool)hasRequiredKeys:(id *)arg1;	// IMP=0x0010000000373f70
- (id)messageBody;	// IMP=0x0010000000373e90
- (id)requiredKeys;	// IMP=0x0010000000373e30
- (id)bagKey;	// IMP=0x0010000000373e10
- (id)dataUsageBundleIdentifier;	// IMP=0x0010000000373e00
- (_Bool)wantsBodySignature;	// IMP=0x0010000000373de0
- (_Bool)allowDualDelivery;	// IMP=0x0010000000373dc0
- (_Bool)wantsHTTPGet;	// IMP=0x0010000000373da0
- (_Bool)wantsManagedRetries;	// IMP=0x0010000000373d80
- (id)additionalMessageHeaders;	// IMP=0x0010000000373b10
- (id)additionalQueryStringParameters;	// IMP=0x00100000003739d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000003737e0
- (id)init;	// IMP=0x0010000000373740

@end

