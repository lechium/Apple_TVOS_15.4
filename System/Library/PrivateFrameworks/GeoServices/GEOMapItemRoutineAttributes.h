//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, NSUUID, PBDataReader, PBUnknownFields;

@interface GEOMapItemRoutineAttributes : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    double _eventDate;	// 24 = 0x18
    NSString *_eventName;	// 32 = 0x20
    NSString *_loiIdentifierString;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _loiType;	// 60 = 0x3c
    _Bool _isEventAllDay;	// 64 = 0x40
    struct {
        unsigned int has_eventDate:1;
        unsigned int has_loiType:1;
        unsigned int has_isEventAllDay:1;
        unsigned int read_unknownFields:1;
        unsigned int read_eventName:1;
        unsigned int read_loiIdentifierString:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000f25b88
- (void).cxx_destruct;	// IMP=0x0000000000f26666
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000f26615
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000f26446
- (unsigned long long)hash;	// IMP=0x0000000000f2628e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f2610e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f25edf
- (void)copyTo:(id)arg1;	// IMP=0x0000000000f25db8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f25ba4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f25b95
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000f25a7c
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000f25a6f
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000f256fe
- (id)jsonRepresentation;	// IMP=0x0000000000f255ec
- (id)dictionaryRepresentation;	// IMP=0x0000000000f25277
- (id)description;	// IMP=0x0000000000f251c8
@property(retain, nonatomic) NSString *loiIdentifierString;
@property(readonly, nonatomic) _Bool hasLoiIdentifierString;
@property(nonatomic) _Bool hasIsEventAllDay;
@property(nonatomic) _Bool isEventAllDay;
@property(nonatomic) _Bool hasEventDate;
@property(nonatomic) double eventDate;
@property(retain, nonatomic) NSString *eventName;
@property(readonly, nonatomic) _Bool hasEventName;
- (int)StringAsLoiType:(id)arg1;	// IMP=0x0000000000f24664
- (id)loiTypeAsString:(int)arg1;	// IMP=0x0000000000f245d9
@property(nonatomic) _Bool hasLoiType;
@property(nonatomic) int loiType;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000f24512
- (id)init;	// IMP=0x0000000000f244b6
@property(retain, nonatomic) NSUUID *loiIdentifier;

@end

