//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventLogDiscard : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_certificates;	// 16 = 0x10
    NSData *_signature;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_certificates:1;
        unsigned int read_signature:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000136055c
+ (Class)certificatesType;	// IMP=0x000000000135fbcb
- (void).cxx_destruct;	// IMP=0x0000000001360f51
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001360dc1
- (unsigned long long)hash;	// IMP=0x0000000001360d65
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001360c74
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001360960
- (void)copyTo:(id)arg1;	// IMP=0x0000000001360819
- (void)writeTo:(id)arg1;	// IMP=0x0000000001360578
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001360569
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001360450
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001360443
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000136014a
- (id)jsonRepresentation;	// IMP=0x000000000136013b
- (id)dictionaryRepresentation;	// IMP=0x000000000135fdca
- (id)description;	// IMP=0x000000000135fd1b
@property(retain, nonatomic) NSData *signature;
@property(readonly, nonatomic) _Bool hasSignature;
- (id)certificatesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000135fb9a
- (unsigned long long)certificatesCount;	// IMP=0x000000000135fb6e
- (void)addCertificates:(id)arg1;	// IMP=0x000000000135faba
- (void)clearCertificates;	// IMP=0x000000000135fa92
@property(retain, nonatomic) NSMutableArray *certificates;
- (id)initWithData:(id)arg1;	// IMP=0x000000000135f55a
- (id)init;	// IMP=0x000000000135f4fe

@end

