//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBDataReader;

@interface GEOWiFiQualityHours : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _days;	// 16 = 0x10
    struct GEOWiFiQualityTimeRange *_timeRanges;	// 40 = 0x28
    unsigned long long _timeRangesCount;	// 48 = 0x30
    unsigned long long _timeRangesSpace;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int read_days:1;
        unsigned int read_timeRanges:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000009e64d9
- (void).cxx_destruct;	// IMP=0x00000000009e700e
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000009e6f10
- (unsigned long long)hash;	// IMP=0x00000000009e6eb7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009e6dd2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009e6c3f
- (void)copyTo:(id)arg1;	// IMP=0x00000000009e6aaf
- (void)writeTo:(id)arg1;	// IMP=0x00000000009e6844
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009e6835
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000009e5fce
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000009e5fa8
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000009e5a5b
- (id)jsonRepresentation;	// IMP=0x00000000009e5a38
- (id)dictionaryRepresentation;	// IMP=0x00000000009e577f
- (id)description;	// IMP=0x00000000009e56d0
- (void)setTimeRanges:(struct GEOWiFiQualityTimeRange *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000009e5661
- (struct GEOWiFiQualityTimeRange)timeRangesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009e5584
- (void)addTimeRanges:(struct GEOWiFiQualityTimeRange)arg1;	// IMP=0x00000000009e5512
- (void)clearTimeRanges;	// IMP=0x00000000009e54c2
@property(readonly, nonatomic) struct GEOWiFiQualityTimeRange *timeRanges;
@property(readonly, nonatomic) unsigned long long timeRangesCount;
- (int)StringAsDays:(id)arg1;	// IMP=0x00000000009e5164
- (id)daysAsString:(int)arg1;	// IMP=0x00000000009e50b3
- (void)setDays:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000009e5091
- (int)daysAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009e4fbb
- (void)addDays:(int)arg1;	// IMP=0x00000000009e4f82
- (void)clearDays;	// IMP=0x00000000009e4f66
@property(readonly, nonatomic) int *days;
@property(readonly, nonatomic) unsigned long long daysCount;
- (void)dealloc;	// IMP=0x00000000009e48b9
- (id)initWithData:(id)arg1;	// IMP=0x00000000009e485d
- (id)init;	// IMP=0x00000000009e4801

@end

