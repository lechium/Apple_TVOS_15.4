//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface PCCAttestation : NSObject
{
    NSString *_certificate;	// 8 = 0x8
    NSData *_applicationEnclaveQuote;	// 16 = 0x10
    NSData *_quotingEnclaveQuote;	// 24 = 0x18
    NSData *_routingToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000327f45
@property(retain, nonatomic) NSData *routingToken; // @synthesize routingToken=_routingToken;
@property(retain, nonatomic) NSData *quotingEnclaveQuote; // @synthesize quotingEnclaveQuote=_quotingEnclaveQuote;
@property(retain, nonatomic) NSData *applicationEnclaveQuote; // @synthesize applicationEnclaveQuote=_applicationEnclaveQuote;
@property(retain, nonatomic) NSString *certificate; // @synthesize certificate=_certificate;
- (id)initWithCertificate:(id)arg1 applicationEnclaveQuote:(id)arg2 quotingEnclaveQuote:(id)arg3 routingToken:(id)arg4;	// IMP=0x0000000000327df7

@end

