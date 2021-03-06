//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTraitsTransitScheduleTimeRange, PBUnknownFields;

@interface GEOTraitsTransitScheduleModeFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOTraitsTransitScheduleTimeRange *_timeRange;	// 16 = 0x10
    unsigned int _numAdditionalDepartures;	// 24 = 0x18
    struct {
        unsigned int has_numAdditionalDepartures:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000f6483c
- (void).cxx_destruct;	// IMP=0x0000000000f64c61
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000f64bfb
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000f64b5a
- (unsigned long long)hash;	// IMP=0x0000000000f64af6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f649fa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f6494c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000f648d7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f64858
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f64849
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000f647dc
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000f647ca
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000f64633
- (id)jsonRepresentation;	// IMP=0x0000000000f64521
- (id)dictionaryRepresentation;	// IMP=0x0000000000f642b0
- (id)description;	// IMP=0x0000000000f64201
@property(nonatomic) _Bool hasNumAdditionalDepartures;
@property(nonatomic) unsigned int numAdditionalDepartures;
@property(retain, nonatomic) GEOTraitsTransitScheduleTimeRange *timeRange;
@property(readonly, nonatomic) _Bool hasTimeRange;
- (void)configureWithDefaultStartTime:(double)arg1 duration:(double)arg2 numAdditionalDepartures:(unsigned int)arg3;	// IMP=0x0000000000a01896

@end

