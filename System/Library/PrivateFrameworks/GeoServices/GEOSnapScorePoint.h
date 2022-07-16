//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOSnapScorePoint : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_candidates;	// 24 = 0x18
    GEOLatLng *_point;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_candidates:1;
        unsigned int read_point:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000091bd5e
+ (Class)candidateType;	// IMP=0x000000000091b1a7
- (void).cxx_destruct;	// IMP=0x000000000091ce84
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000091cd06
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000091ca6d
- (unsigned long long)hash;	// IMP=0x000000000091ca11
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000091c920
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000091c609
- (void)copyTo:(id)arg1;	// IMP=0x000000000091c4bf
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000091c32f
- (void)writeTo:(id)arg1;	// IMP=0x000000000091c04f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000091c040
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000091baab
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000091ba99
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000091b779
- (id)jsonRepresentation;	// IMP=0x000000000091b667
- (id)dictionaryRepresentation;	// IMP=0x000000000091b267
- (id)description;	// IMP=0x000000000091b1b8
- (id)candidateAtIndex:(unsigned long long)arg1;	// IMP=0x000000000091b176
- (unsigned long long)candidatesCount;	// IMP=0x000000000091b14a
- (void)addCandidate:(id)arg1;	// IMP=0x000000000091b096
- (void)clearCandidates;	// IMP=0x000000000091b06e
@property(retain, nonatomic) NSMutableArray *candidates;
@property(retain, nonatomic) GEOLatLng *point;
@property(readonly, nonatomic) _Bool hasPoint;
- (id)initWithData:(id)arg1;	// IMP=0x000000000091a5de
- (id)init;	// IMP=0x000000000091a582

@end

