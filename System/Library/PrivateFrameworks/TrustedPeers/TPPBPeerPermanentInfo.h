//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@class NSData, NSString;

@interface TPPBPeerPermanentInfo : PBCodable <NSCopying>
{
    unsigned long long _epoch;	// 8 = 0x8
    NSData *_encryptionPubKey;	// 16 = 0x10
    NSString *_machineId;	// 24 = 0x18
    NSString *_modelId;	// 32 = 0x20
    NSData *_signingPubKey;	// 40 = 0x28
    struct {
        unsigned int epoch:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000023a9a
@property(retain, nonatomic) NSString *modelId; // @synthesize modelId=_modelId;
@property(retain, nonatomic) NSString *machineId; // @synthesize machineId=_machineId;
@property(retain, nonatomic) NSData *encryptionPubKey; // @synthesize encryptionPubKey=_encryptionPubKey;
@property(retain, nonatomic) NSData *signingPubKey; // @synthesize signingPubKey=_signingPubKey;
@property(nonatomic) unsigned long long epoch; // @synthesize epoch=_epoch;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000023931
- (unsigned long long)hash;	// IMP=0x000000000002387c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000023718
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002360a
- (void)copyTo:(id)arg1;	// IMP=0x0000000000023546
- (void)writeTo:(id)arg1;	// IMP=0x000000000002348a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002347d
- (id)dictionaryRepresentation;	// IMP=0x0000000000023349
- (id)description;	// IMP=0x000000000002329a
@property(readonly, nonatomic) _Bool hasModelId;
@property(readonly, nonatomic) _Bool hasMachineId;
@property(readonly, nonatomic) _Bool hasEncryptionPubKey;
@property(readonly, nonatomic) _Bool hasSigningPubKey;
@property(nonatomic) _Bool hasEpoch;

@end

