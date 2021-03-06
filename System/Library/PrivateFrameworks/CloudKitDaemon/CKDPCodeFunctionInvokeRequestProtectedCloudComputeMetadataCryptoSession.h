//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData;

@interface CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadataCryptoSession : PBCodable <NSCopying>
{
    NSData *_routingToken;	// 8 = 0x8
    NSData *_wrappedInvocationKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001bdc4e
@property(retain, nonatomic) NSData *routingToken; // @synthesize routingToken=_routingToken;
@property(retain, nonatomic) NSData *wrappedInvocationKey; // @synthesize wrappedInvocationKey=_wrappedInvocationKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001bdba1
- (unsigned long long)hash;	// IMP=0x00000000001bdb54
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001bda8c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001bd9ee
- (void)copyTo:(id)arg1;	// IMP=0x00000000001bd98b
- (void)writeTo:(id)arg1;	// IMP=0x00000000001bd92e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001bd921
- (id)dictionaryRepresentation;	// IMP=0x00000000001bd70c
- (id)description;	// IMP=0x00000000001bd65d
@property(readonly, nonatomic) _Bool hasRoutingToken;
@property(readonly, nonatomic) _Bool hasWrappedInvocationKey;

@end

