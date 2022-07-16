//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDHoursThreshold, PBDataReader, PBUnknownFields;

@interface GEOPDHours : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _days;	// 24 = 0x18
    struct GEOPDLocalTimeRange *_timeRanges;	// 48 = 0x30
    unsigned long long _timeRangesCount;	// 56 = 0x38
    unsigned long long _timeRangesSpace;	// 64 = 0x40
    GEOPDHoursThreshold *_hoursThreshold;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_days:1;
        unsigned int read_timeRanges:1;
        unsigned int read_hoursThreshold:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 92 = 0x5c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000b2e997
+ (id)completeOperatingHoursForPlaceData:(id)arg1 date:(id)arg2 withTimeZone:(id)arg3;	// IMP=0x00000000009ce64d
+ (_Bool)currentOperatingHoursAvailableForPlaceData:(id)arg1 withTimeZone:(id)arg2;	// IMP=0x00000000009ce59f
+ (id)_allHoursForPlaceData:(id)arg1;	// IMP=0x00000000009ce49c
+ (_Bool)operatingHoursAvailableForPlaceData:(id)arg1;	// IMP=0x00000000009ce36c
- (void).cxx_destruct;	// IMP=0x0000000000b2f41b
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000b2f3a1
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000b2f124
- (unsigned long long)hash;	// IMP=0x0000000000b2f0a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b2ef8b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b2eda7
- (void)copyTo:(id)arg1;	// IMP=0x0000000000b2ebf0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b2e9b3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b2e9a4
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000b2e88b
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000b2e879
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000b2e286
- (id)jsonRepresentation;	// IMP=0x0000000000b2e174
- (id)dictionaryRepresentation;	// IMP=0x0000000000b2dd2a
- (id)description;	// IMP=0x0000000000b2dc7b
@property(retain, nonatomic) GEOPDHoursThreshold *hoursThreshold;
@property(readonly, nonatomic) _Bool hasHoursThreshold;
- (void)setTimeRanges:(struct GEOPDLocalTimeRange *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000b2dacd
- (struct GEOPDLocalTimeRange)timeRangeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000b2d9f0
- (void)addTimeRange:(struct GEOPDLocalTimeRange)arg1;	// IMP=0x0000000000b2d97e
- (void)clearTimeRanges;	// IMP=0x0000000000b2d92e
@property(readonly, nonatomic) struct GEOPDLocalTimeRange *timeRanges;
@property(readonly, nonatomic) unsigned long long timeRangesCount;
- (int)StringAsDays:(id)arg1;	// IMP=0x0000000000b2d5d0
- (id)daysAsString:(int)arg1;	// IMP=0x0000000000b2d51e
- (void)setDays:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000b2d4fc
- (int)dayAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000b2d426
- (void)addDay:(int)arg1;	// IMP=0x0000000000b2d3ed
- (void)clearDays;	// IMP=0x0000000000b2d3d1
@property(readonly, nonatomic) int *days;
@property(readonly, nonatomic) unsigned long long daysCount;
- (void)dealloc;	// IMP=0x0000000000b2ca48
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b2c9ec
- (id)init;	// IMP=0x0000000000b2c990

@end

