//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface CKDPCodeFunctionInvokeResponseAttestationResponseAttestation : PBCodable <NSCopying>
{
    NSData *_appQuote;	// 8 = 0x8
    NSData *_aqeQuote;	// 16 = 0x10
    NSString *_pckCertificate;	// 24 = 0x18
    NSData *_routingToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000132258
@property(retain, nonatomic) NSData *routingToken; // @synthesize routingToken=_routingToken;
@property(retain, nonatomic) NSString *pckCertificate; // @synthesize pckCertificate=_pckCertificate;
@property(retain, nonatomic) NSData *aqeQuote; // @synthesize aqeQuote=_aqeQuote;
@property(retain, nonatomic) NSData *appQuote; // @synthesize appQuote=_appQuote;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000132121
- (unsigned long long)hash;	// IMP=0x000000000013209d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000131f71
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000131e87
- (void)copyTo:(id)arg1;	// IMP=0x0000000000131de4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000131d4d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000131d40
- (id)dictionaryRepresentation;	// IMP=0x0000000000131a8b
- (id)description;	// IMP=0x00000000001319dc
@property(readonly, nonatomic) _Bool hasRoutingToken;
@property(readonly, nonatomic) _Bool hasPckCertificate;
@property(readonly, nonatomic) _Bool hasAqeQuote;
@property(readonly, nonatomic) _Bool hasAppQuote;

@end

