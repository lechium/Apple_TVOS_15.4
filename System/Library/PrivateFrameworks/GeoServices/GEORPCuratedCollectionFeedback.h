//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPCuratedCollectionContext, GEORPCuratedCollectionCorrections, PBDataReader, PBUnknownFields;

@interface GEORPCuratedCollectionFeedback : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEORPCuratedCollectionContext *_curatedCollectionContext;	// 24 = 0x18
    GEORPCuratedCollectionCorrections *_curatedCollectionCorrections;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_curatedCollectionContext:1;
        unsigned int read_curatedCollectionCorrections:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000004208f1
- (void).cxx_destruct;	// IMP=0x0000000000421304
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000042126b
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000004210d2
- (unsigned long long)hash;	// IMP=0x0000000000421076
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000420f85
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000420dc3
- (void)copyTo:(id)arg1;	// IMP=0x0000000000420cf5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000420aff
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000420af0
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000042063e
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000042062c
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000420468
- (id)jsonRepresentation;	// IMP=0x0000000000420356
- (id)dictionaryRepresentation;	// IMP=0x00000000004200c9
- (id)description;	// IMP=0x000000000042001a
@property(retain, nonatomic) GEORPCuratedCollectionCorrections *curatedCollectionCorrections;
@property(readonly, nonatomic) _Bool hasCuratedCollectionCorrections;
@property(retain, nonatomic) GEORPCuratedCollectionContext *curatedCollectionContext;
@property(readonly, nonatomic) _Bool hasCuratedCollectionContext;
- (id)initWithData:(id)arg1;	// IMP=0x000000000041f6f7
- (id)init;	// IMP=0x000000000041f69b

@end
