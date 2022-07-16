//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPNFCAccessResponseStatusWrapper, NSData, NSString;

@interface HAPNFCAccessDeviceCredentialKeyResponse : NSObject <NSCopying, HAPTLVProtocol>
{
    NSData *_identifier;	// 8 = 0x8
    NSData *_issuerKeyIdentifier;	// 16 = 0x10
    HAPNFCAccessResponseStatusWrapper *_statusCode;	// 24 = 0x18
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000013a29e
- (void).cxx_destruct;	// IMP=0x000000000013a26b
@property(retain, nonatomic) HAPNFCAccessResponseStatusWrapper *statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSData *issuerKeyIdentifier; // @synthesize issuerKeyIdentifier=_issuerKeyIdentifier;
@property(retain, nonatomic) NSData *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000139e6f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000139db7
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000013996a
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001394a3
- (id)initWithIdentifier:(id)arg1 issuerKeyIdentifier:(id)arg2 statusCode:(id)arg3;	// IMP=0x00000000001393ec
- (id)init;	// IMP=0x00000000001393bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
