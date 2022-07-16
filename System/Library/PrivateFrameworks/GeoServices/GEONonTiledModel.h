//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEONonTiledInfo, NSMutableArray, PBDataReader;

@interface GEONonTiledModel : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    GEONonTiledInfo *_info;	// 16 = 0x10
    NSMutableArray *_materialMaps;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_info:1;
        unsigned int read_materialMaps:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000c16023
+ (Class)materialMapType;	// IMP=0x0000000000c15827
- (void).cxx_destruct;	// IMP=0x0000000000c169ed
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000c1684a
- (unsigned long long)hash;	// IMP=0x0000000000c167ee
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c166fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c16410
- (void)copyTo:(id)arg1;	// IMP=0x0000000000c162c6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c1603f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c16030
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000c15f17
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000c15f05
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000c15be5
- (id)jsonRepresentation;	// IMP=0x0000000000c15bd6
- (id)dictionaryRepresentation;	// IMP=0x0000000000c158e7
- (id)description;	// IMP=0x0000000000c15838
- (id)materialMapAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000c157f6
- (unsigned long long)materialMapsCount;	// IMP=0x0000000000c157ca
- (void)addMaterialMap:(id)arg1;	// IMP=0x0000000000c15716
- (void)clearMaterialMaps;	// IMP=0x0000000000c156ee
@property(retain, nonatomic) NSMutableArray *materialMaps;
@property(retain, nonatomic) GEONonTiledInfo *info;
@property(readonly, nonatomic) _Bool hasInfo;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c14ddb
- (id)init;	// IMP=0x0000000000c14d7f

@end
