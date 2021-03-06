//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOTraitsTransitScheduleTimeRange : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    double _startTime;	// 24 = 0x18
    struct {
        unsigned int has_duration:1;
        unsigned int has_startTime:1;
    } _flags;	// 32 = 0x20
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000f652f7
- (void).cxx_destruct;	// IMP=0x0000000000f658c9
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000f65883
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000f657f4
- (unsigned long long)hash;	// IMP=0x0000000000f655bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f654c2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f6541d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000f653a3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f65313
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f65304
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000f65297
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000f65285
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000f65136
- (id)jsonRepresentation;	// IMP=0x0000000000f65024
- (id)dictionaryRepresentation;	// IMP=0x0000000000f64df7
- (id)description;	// IMP=0x0000000000f64d48
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) double duration;
@property(nonatomic) _Bool hasStartTime;
@property(nonatomic) double startTime;

@end

