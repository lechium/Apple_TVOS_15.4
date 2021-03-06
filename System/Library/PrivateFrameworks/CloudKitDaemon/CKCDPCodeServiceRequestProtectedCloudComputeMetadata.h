//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CKCDPCodeServiceRequestProtectedCloudComputeMetadata : PBCodable <NSCopying>
{
    NSMutableArray *_cryptoSessions;	// 8 = 0x8
}

+ (Class)cryptoSessionsType;	// IMP=0x00000000000e4bb3
- (void).cxx_destruct;	// IMP=0x00000000000e563f
@property(retain, nonatomic) NSMutableArray *cryptoSessions; // @synthesize cryptoSessions=_cryptoSessions;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000e54e5
- (unsigned long long)hash;	// IMP=0x00000000000e54c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e542e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e526b
- (void)copyTo:(id)arg1;	// IMP=0x00000000000e51a4
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e5074
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e5067
- (id)dictionaryRepresentation;	// IMP=0x00000000000e4c73
- (id)description;	// IMP=0x00000000000e4bc4
- (id)cryptoSessionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e4b96
- (unsigned long long)cryptoSessionsCount;	// IMP=0x00000000000e4b79
- (void)addCryptoSessions:(id)arg1;	// IMP=0x00000000000e4b0f
- (void)clearCryptoSessions;	// IMP=0x00000000000e4af2

@end

