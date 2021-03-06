//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSString, PBDataReader, PBUnknownFields;

@interface GEORPAppAttestInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_anonymousUserId;	// 24 = 0x18
    NSData *_assertion;	// 32 = 0x20
    NSData *_attestation;	// 40 = 0x28
    NSString *_keyId;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_anonymousUserId:1;
        unsigned int read_assertion:1;
        unsigned int read_attestation:1;
        unsigned int read_keyId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000004131dd
- (void).cxx_destruct;	// IMP=0x0000000000413d03
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000413cb2
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000413b07
- (unsigned long long)hash;	// IMP=0x0000000000413a74
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000041391f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000413701
- (void)copyTo:(id)arg1;	// IMP=0x00000000004135f3
- (void)writeTo:(id)arg1;	// IMP=0x00000000004133df
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004133d0
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000412f2a
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000412f18
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000412c5b
- (id)jsonRepresentation;	// IMP=0x0000000000412b49
- (id)dictionaryRepresentation;	// IMP=0x0000000000412813
- (id)description;	// IMP=0x0000000000412764
@property(retain, nonatomic) NSString *keyId;
@property(readonly, nonatomic) _Bool hasKeyId;
@property(retain, nonatomic) NSData *assertion;
@property(readonly, nonatomic) _Bool hasAssertion;
@property(retain, nonatomic) NSData *attestation;
@property(readonly, nonatomic) _Bool hasAttestation;
@property(retain, nonatomic) NSString *anonymousUserId;
@property(readonly, nonatomic) _Bool hasAnonymousUserId;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000411b71
- (id)init;	// IMP=0x0000000000411b15

@end

