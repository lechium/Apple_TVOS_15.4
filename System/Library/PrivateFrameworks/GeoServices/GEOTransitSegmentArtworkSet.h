//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOTransitSegmentArtworkSet : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_9f2792e4 _artworkIndexs;	// 24 = 0x18
    NSMutableArray *_clusters;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_artworkIndexs:1;
        unsigned int read_clusters:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000003c116a
+ (Class)clusterType;	// IMP=0x00000000003c04b6
- (void).cxx_destruct;	// IMP=0x00000000003c2183
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000003c200c
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003c1d4b
- (unsigned long long)hash;	// IMP=0x00000000003c1cf3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003c1c0d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003c1901
- (void)copyTo:(id)arg1;	// IMP=0x00000000003c1758
- (void)writeTo:(id)arg1;	// IMP=0x00000000003c1472
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003c1463
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000003c0eb7
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000003c0ea5
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003c0a84
- (id)jsonRepresentation;	// IMP=0x00000000003c0972
- (id)dictionaryRepresentation;	// IMP=0x00000000003c0576
- (id)description;	// IMP=0x00000000003c04c7
- (id)clusterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003c0485
- (unsigned long long)clustersCount;	// IMP=0x00000000003c0459
- (void)addCluster:(id)arg1;	// IMP=0x00000000003c03a5
- (void)clearClusters;	// IMP=0x00000000003c037d
@property(retain, nonatomic) NSMutableArray *clusters;
- (void)setArtworkIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000003c0240
- (unsigned int)artworkIndexAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003c016a
- (void)addArtworkIndex:(unsigned int)arg1;	// IMP=0x00000000003c0131
- (void)clearArtworkIndexs;	// IMP=0x00000000003c0115
@property(readonly, nonatomic) unsigned int *artworkIndexs;
@property(readonly, nonatomic) unsigned long long artworkIndexsCount;
- (void)dealloc;	// IMP=0x00000000003bf70f
- (id)initWithData:(id)arg1;	// IMP=0x00000000003bf6b3
- (id)init;	// IMP=0x00000000003bf657

@end
