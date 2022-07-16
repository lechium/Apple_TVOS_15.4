//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBDataReader, PBUnknownFields;

@interface GEOTimeCheckpoints : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_9f2792e4 _distToNextCheckpoints;	// 24 = 0x18
    CDStruct_9f2792e4 _timeToNextCheckpoints;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_distToNextCheckpoints:1;
        unsigned int read_timeToNextCheckpoints:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 84 = 0x54
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000093aca7
- (void).cxx_destruct;	// IMP=0x000000000093b538
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000093b4e7
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000093b2f6
- (unsigned long long)hash;	// IMP=0x000000000093b2b1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000093b1f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000093b076
- (void)copyTo:(id)arg1;	// IMP=0x000000000093aee7
- (void)writeTo:(id)arg1;	// IMP=0x000000000093acc3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000093acb4
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000093ab9b
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000093ab8e
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000093a7be
- (id)jsonRepresentation;	// IMP=0x000000000093a6ac
- (id)dictionaryRepresentation;	// IMP=0x000000000093a4af
- (id)description;	// IMP=0x000000000093a400
- (void)setTimeToNextCheckpoints:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000093a3de
- (unsigned int)timeToNextCheckpointAtIndex:(unsigned long long)arg1;	// IMP=0x000000000093a308
- (void)addTimeToNextCheckpoint:(unsigned int)arg1;	// IMP=0x000000000093a2cf
- (void)clearTimeToNextCheckpoints;	// IMP=0x000000000093a2b3
@property(readonly, nonatomic) unsigned int *timeToNextCheckpoints;
@property(readonly, nonatomic) unsigned long long timeToNextCheckpointsCount;
- (void)setDistToNextCheckpoints:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000093a178
- (unsigned int)distToNextCheckpointAtIndex:(unsigned long long)arg1;	// IMP=0x000000000093a0a2
- (void)addDistToNextCheckpoint:(unsigned int)arg1;	// IMP=0x000000000093a069
- (void)clearDistToNextCheckpoints;	// IMP=0x000000000093a04d
@property(readonly, nonatomic) unsigned int *distToNextCheckpoints;
@property(readonly, nonatomic) unsigned long long distToNextCheckpointsCount;
- (void)dealloc;	// IMP=0x000000000093970e
- (id)initWithData:(id)arg1;	// IMP=0x00000000009396b2
- (id)init;	// IMP=0x0000000000939656

@end
